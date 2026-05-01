#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "party_menu.h"
#include "dynamic_pokemon.h"
#include "constants/moves.h"
#include "move.h"
#include "wild_encounter.h"
#include "random.h"

u16 CreateDynamicScaledWildMon(u16 inputSpecies, u8 inputLevel)
{
    u8 level = DynamicScaleGetWildMonLevel(inputLevel);
    u16 species = DynamicScaleAdjustMonSpecies(inputSpecies, level);
    CreateWildMon(species, level);
    return species;
}

u8 DynamicScaleGetTrainerPartySize(u8 numMons, u8 trainerPartySize, u8 trainerLevel) {
    if (gSaveBlock2Ptr->playerLevel <= trainerLevel) {
        return trainerPartySize;
    }
    else {
        return min(numMons, trainerPartySize + ((gSaveBlock2Ptr->playerLevel - trainerLevel) / 10));
    }
}

u8 DynamicScaleGetMonLevelForTrainer(u8 trainerLevel, s8 monLevel) {
    u8 level = gSaveBlock2Ptr->playerLevel;
    if (trainerLevel != 0) {
        if (gSaveBlock2Ptr->playerLevel > trainerLevel + 10) {
            level = gSaveBlock2Ptr->playerLevel - 5;
        }
        else if (gSaveBlock2Ptr->playerLevel > trainerLevel) {
            level = (gSaveBlock2Ptr->playerLevel + trainerLevel) / 2;
        }
        else {
            level = trainerLevel;
        }
    }
    return max(2, min(100, level + monLevel));
}

u8 DynamicScaleGetWildMonLevel(u8 inputLevel)
{
    u8 scalingLevel = gSaveBlock2Ptr->playerLevel;
    s8 encounterLevel = min(scalingLevel, inputLevel);

    encounterLevel = 1 + (Random() % encounterLevel);

    // Nudge the initial RNG value for more natural variation
    u8 scaleFactor = ((scalingLevel / 4) + 1);
    encounterLevel += Random() % scaleFactor;
    encounterLevel -= Random() % scaleFactor;
    // Additional variance for low-level players
    scaleFactor = 4;
    encounterLevel += Random() % scaleFactor;
    encounterLevel -= Random() % scaleFactor;

    encounterLevel = max(2, min(scalingLevel, encounterLevel));

    // Special powerful mon chance after tutorial is over
    if (FlagGet(FLAG_INTRO_MET_BIGBAD) && (Random() % 32) == 0)
    {
        encounterLevel += min((scalingLevel / 2), 15);
    }

    return (u8)min(100, encounterLevel);
}

u16 DynamicScaleAdjustMonSpecies(u16 inputSpecies, u8 level)
{
    u16 newSpecies = inputSpecies;
    u16 preEvoSpecies = GetSpeciesPreEvolution(inputSpecies);
    while (preEvoSpecies != SPECIES_NONE) {
        const struct Evolution* prevSpeciesEvos = GetSpeciesEvolutions(preEvoSpecies);
        for (int j = 0; prevSpeciesEvos[j].method != EVOLUTIONS_END; j++)
        {
            if (SanitizeSpeciesId(prevSpeciesEvos[j].targetSpecies) == newSpecies)
            {
                if (level < DynamicScaleGetSpeciesEvolveLevel(preEvoSpecies, prevSpeciesEvos[j])) {
                    newSpecies = preEvoSpecies;
                    preEvoSpecies = GetSpeciesPreEvolution(newSpecies);
                }
                else {
                    //Do not devolve
                    return newSpecies;
                }
                break;
            }
        }
    }
    return newSpecies;
}

u8 DynamicScaleGetSpeciesEvolveLevel(u16 inputSpecies, struct Evolution evolution) {
    switch ((enum EvolutionMethods)evolution.method)
    {
        case EVO_LEVEL:
        case EVO_LEVEL_BATTLE_ONLY:
            if (evolution.param != 0) {
                return evolution.param;
            }
            // Else continue
        default:
            // For non-leveled evolutions, guesstimate "ideal" evolution level based on first form's BST
            return GetTotalBaseStat(inputSpecies) / 11;
    }
}

bool8 MonLearnsMoveByLevel(u16 speciesId, enum Move moveId, u8 level) {
    const struct LevelUpMove* learnset = GetSpeciesLevelUpLearnset(speciesId);
    for (u32 i = 0; i < MAX_LEVEL_UP_MOVES && learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].move == moveId) {
            return TRUE;
        }
        if (learnset[i].level > level) {
            break;
        }
    }
    return FALSE;
}

bool8 MonLearnsMoveByEgg(u16 speciesId, enum Move moveId) {
    const u16* learnset = GetSpeciesEggMoves(speciesId);
    for (u32 i = 0; learnset[i] != MOVE_UNAVAILABLE; i++)
    {
        if (learnset[i] == moveId) {
            return TRUE;
        }
    }
    return FALSE;
}

// Estimate the appropriate power for a move based on level
static bool8 MovePowerAppropriateForLevel(u16 movePower, u32 level) {
    return movePower <= 50 || movePower <= (30 + ((level * 3) / 2));
}

struct MoveScore
{
    u16 id;
    s32 score;
};

s32 DynamicMonEvaluateMove(struct Pokemon *mon, const struct SpeciesInfo* speciesInfo, u16 moveId,
    enum Type moveType, enum DamageCategory moveCategory, u16 movePower, 
    bool8 stabOnly, u8 learnLevel) {
    if (BoxMonKnowsMove(&mon->box, moveId)) {
        return -10000;
    }

    const struct MoveInfo* moveInfo = &gMovesInfo[SanitizeMoveId(moveId)];
    s32 currentMoveScore = learnLevel * 2;
    if (moveInfo->category != moveCategory) {
        if (moveInfo->category == DAMAGE_CATEGORY_STATUS) {
            currentMoveScore -= 1000;
        }
        else {
            currentMoveScore -= 30;
        }
    }
    if (stabOnly) {
        currentMoveScore += (moveInfo->type == moveType) ? 100 : -100;
    }
    else {
        currentMoveScore += (moveInfo->type != speciesInfo->types[0] && moveInfo->type != speciesInfo->types[1])
            ? 100 : -100;
        currentMoveScore += (moveInfo->type == moveType) ? 50 : -50;
        currentMoveScore -= (moveInfo->type == TYPE_NORMAL) ? 15 : 0;
    }
    if (movePower != 0) {
        currentMoveScore -= abs(movePower - moveInfo->power);
    }
    return currentMoveScore;
}

// Java called it wants its method names back
struct MoveScore DynamicMonGetBestLevelLearnsetMove(struct Pokemon *mon, u16 speciesId, 
    const struct SpeciesInfo* speciesInfo,
    enum Type moveType, enum DamageCategory moveCategory, u16 movePower, bool8 stabOnly) {
    struct MoveScore bestMove = {MOVE_NONE, -999};

    const struct LevelUpMove* learnset = GetSpeciesLevelUpLearnset(speciesId);
    for (u32 i = 0; i < MAX_LEVEL_UP_MOVES && learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].level > mon->level) {
            break;
        }
        s32 currentMoveScore = DynamicMonEvaluateMove(mon, speciesInfo, learnset[i].move, 
            moveType, moveCategory, movePower, learnset[i].level, stabOnly);
        if (currentMoveScore >= bestMove.score) {
            bestMove.score = currentMoveScore;
            bestMove.id = learnset[i].move;
        }
    }

    return bestMove;
}

struct MoveScore DynamicMonGetBestMoveFromLearnset(struct Pokemon *mon, u16 speciesId, 
    const struct SpeciesInfo* speciesInfo, const u16* learnset,
    enum Type moveType, enum DamageCategory moveCategory, u16 movePower, bool8 stabOnly) {
    struct MoveScore bestMove = { MOVE_NONE, -999 };

    for (u32 i = 0; learnset[i] != MOVE_UNAVAILABLE; i++)
    {
        s32 currentMoveScore = DynamicMonEvaluateMove(mon, speciesInfo, learnset[i],
            moveType, moveCategory, movePower, 0, stabOnly);
        if (currentMoveScore > bestMove.score) {
            bestMove.score = currentMoveScore;
            bestMove.id = learnset[i];
        }
    }

    return bestMove;
}

enum Move DynamicMonGetScaledAttack(struct Pokemon *mon, u16 speciesId, const struct SpeciesInfo* speciesInfo,
    enum Type moveType, enum DamageCategory moveCategory, bool8 stabOnly) {
    // Return an attacking move of the same category that MATCHES the desired move type 

    u16 maxPower = (30 + ((mon->level * 3) / 2));
    
    struct MoveScore bestLevelMove = DynamicMonGetBestLevelLearnsetMove(mon, speciesId, speciesInfo,
        moveType, moveCategory, maxPower, stabOnly);

    struct MoveScore bestTMMove = DynamicMonGetBestMoveFromLearnset(mon, speciesId, speciesInfo,
        GetSpeciesTeachableLearnset(speciesId),
        moveType, moveCategory, maxPower, stabOnly);

    struct MoveScore bestEggMove = DynamicMonGetBestMoveFromLearnset(mon, speciesId, speciesInfo,
        GetSpeciesEggMoves(speciesId),
        moveType, moveCategory, maxPower, stabOnly);

    if (bestLevelMove.score >= bestTMMove.score && bestLevelMove.score >= bestEggMove.score) {
        return bestLevelMove.id;
    }
    else if (bestTMMove.score >= bestLevelMove.score && bestTMMove.score >= bestEggMove.score) {
        return bestTMMove.id;
    }
    else {
        return bestEggMove.id;
    }
}

enum Move DynamicMonGetScaledStatusMove(struct Pokemon *mon, u16 speciesId, const struct SpeciesInfo* speciesInfo) {
    // Just pull the most recent status moves from the level up learnset
    enum Move bestMoveId = MOVE_NONE;

    const struct LevelUpMove* learnset = GetSpeciesLevelUpLearnset(speciesId);
    for (u32 i = 0; i < MAX_LEVEL_UP_MOVES && learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].level > mon->level) {
            break;
        }
        if (gMovesInfo[SanitizeMoveId(learnset[i].move)].category == DAMAGE_CATEGORY_STATUS 
            && !BoxMonKnowsMove(&mon->box, learnset[i].move)) {
            bestMoveId = learnset[i].move;
        }
    }
    return bestMoveId;
}

enum Move DynamicScaleGetTrainerMonMove(struct Pokemon *mon, u16 speciesId, enum Move inputMoveId) {
    const struct MoveInfo* inputMoveInfo = &gMovesInfo[SanitizeMoveId(inputMoveId)];
    u16 firstEvoId = DynamicScaleAdjustMonSpecies(speciesId, 1);
    // First check if the mon can learn the move by level up or breeding
    if (MonLearnsMoveByLevel(speciesId, inputMoveId, mon->level)
        // Account for moves exclusive to prior evos
        || MonLearnsMoveByLevel(firstEvoId, inputMoveId, mon->level)
        || MonLearnsMoveByEgg(firstEvoId, inputMoveId)) {
        return inputMoveId;
    }
    // Otherwise check if the move is learned by TM and is of appropriate power
    else if (CanLearnTeachableMove(speciesId, inputMoveId)) {
        if (inputMoveInfo->category == DAMAGE_CATEGORY_STATUS
            || MovePowerAppropriateForLevel(inputMoveInfo->power, mon->level)) {
            return inputMoveId;
        }
    }

    // Otherwise, look for a replacement
    const struct SpeciesInfo* speciesInfo = &gSpeciesInfo[SanitizeSpeciesId(speciesId)];
    if (inputMoveInfo->category != DAMAGE_CATEGORY_STATUS) {
        if (inputMoveInfo->type == speciesInfo->types[0] || inputMoveInfo->type == speciesInfo->types[1]) {
            return DynamicMonGetScaledAttack(mon, speciesId, speciesInfo,
                inputMoveInfo->type, inputMoveInfo->category, TRUE);
        }
        else {
            return DynamicMonGetScaledAttack(mon, speciesId, speciesInfo,
                inputMoveInfo->type, inputMoveInfo->category, FALSE);
        }
    }
    else {
        return DynamicMonGetScaledStatusMove(mon, speciesId, speciesInfo);
    }
    // Fallback
    return inputMoveId;
}
