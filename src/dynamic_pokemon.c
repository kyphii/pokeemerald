#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "dynamic_pokemon.h"
#include "constants/moves.h"
#include "move.h"
#include "wild_encounter.h"
#include "random.h"

u16 CreateDynamicScaledWildMon(u16 inputSpecies, u8 inputLevel)
{
    u8 level = DynamicScaleAdjustMonLevel(inputLevel, TRUE);
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
    return max(2, min(100, ((gSaveBlock2Ptr->playerLevel + trainerLevel) / 2) + monLevel));
}

u8 DynamicScaleAdjustMonLevel(u8 inputLevel, bool8 isWildEncounter)
{
    u8 scalingLevel = gSaveBlock2Ptr->playerLevel;
    u8 encounterLevel = min(scalingLevel, inputLevel);

    if (isWildEncounter) {
        encounterLevel = 1 + (Random() % encounterLevel);
        u8 scaleFactor = ((scalingLevel / 4) + 1);
        // Add some variance
        encounterLevel += Random() % scaleFactor;
        encounterLevel -= Random() % scaleFactor;
        // bit more variance for low level players
        encounterLevel -= Random() % (encounterLevel / 2);

        // Special powerful mon chance after tutorial is over
        if (FlagGet(FLAG_INTRO_MET_BIGBAD) && (Random() % 32) == 0)
        {
            encounterLevel += min((scalingLevel / 2), 15);
        }
    }

    return max(2, encounterLevel);
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
bool8 MovePowerAppropriateForLevel(u16 movePower, u32 level) {
    return movePower <= 50 || movePower <= (30 + ((level * 3) / 2));
}

s32 DynamicMonEvaluateMove(struct SpeciesInfo speciesInfo, u16 moveId, 
    enum Type moveType, enum DamageCategory moveCategory, u16 movePower, 
    bool8 stabOnly) {
    struct MoveInfo moveInfo = gMovesInfo[SanitizeMoveId(moveId)];
    s32 currentMoveScore = 0;
    if (moveInfo.category != moveCategory) {
        currentMoveScore -= 1000;
    }
    if (stabOnly) {
        currentMoveScore += (moveInfo.type == moveType) ? 100 : -100;
    }
    else {
        currentMoveScore += (moveInfo.type != speciesInfo.types[0] && moveInfo.type != speciesInfo.types[1])
            ? 100 : -100;
        currentMoveScore += (moveInfo.type == moveType) ? 50 : -50;
    }
    if (movePower == 0) {
        // Give priority to level up learnset moves
        currentMoveScore += 50;
    }
    else {
        currentMoveScore += movePower - moveInfo.power;
    }
    return currentMoveScore;
}

// Java called it wants its method names back
enum Move DynamicMonGetBestLevelLearnsetMove(u16 speciesId, 
    struct SpeciesInfo speciesInfo, u8 monLevel,
    enum Type moveType, enum DamageCategory moveCategory, bool8 stabOnly) {
    s32 bestMoveScore = -9999;
    enum Move bestMoveId = MOVE_NONE;

    const struct LevelUpMove* learnset = GetSpeciesLevelUpLearnset(speciesId);
    for (u32 i = 0; i < MAX_LEVEL_UP_MOVES && learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].level > monLevel) {
            break;
        }
        s32 currentMoveScore = DynamicMonEvaluateMove(speciesInfo, learnset[i].move, 
            moveType, moveCategory, 0, stabOnly);
        if (currentMoveScore > bestMoveScore) {
            bestMoveScore = currentMoveScore;
            bestMoveId = learnset[i].move;
        }
    }

    return bestMoveId;
}

enum Move DynamicMonGetBestMoveFromLearnset(u16 speciesId,
    struct SpeciesInfo speciesInfo, u8 monLevel, const u16* learnset,
    enum Type moveType, enum DamageCategory moveCategory, u16 movePower, bool8 stabOnly) {
    s32 bestMoveScore = -9999;
    enum Move bestMoveId = MOVE_NONE;

    for (u32 i = 0; learnset[i] != MOVE_UNAVAILABLE; i++)
    {
        s32 currentMoveScore = DynamicMonEvaluateMove(speciesInfo, learnset[i],
            moveType, moveCategory, 0, stabOnly);
        if (currentMoveScore > bestMoveScore) {
            bestMoveScore = currentMoveScore;
            bestMoveId = learnset[i];
        }
    }

    return bestMoveId;
}

enum Move DynamicMonGetScaledAttack(u16 speciesId, struct SpeciesInfo speciesInfo, u8 monLevel, 
    enum Type moveType, enum DamageCategory moveCategory, bool8 stabOnly) {
    // Return an attacking move of the same category that MATCHES the desired move type 

    u16 maxPower = (30 + ((monLevel * 3) / 2));
    enum Move bestLevelLearnsetMatch = DynamicMonGetBestLevelLearnsetMove(speciesId, speciesInfo, monLevel,
        moveType, moveCategory, stabOnly);
    s32 levelMoveScore = DynamicMonEvaluateMove(speciesInfo, bestLevelLearnsetMatch,
        moveType, moveCategory, 0, stabOnly);

    enum Move bestTMLearnsetMatch = DynamicMonGetBestMoveFromLearnset(speciesId, speciesInfo, monLevel,
        GetSpeciesTeachableLearnset(speciesId),
        moveType, moveCategory, maxPower, stabOnly);
    s32 tmMoveScore = DynamicMonEvaluateMove(speciesInfo, bestTMLearnsetMatch,
        moveType, moveCategory, maxPower, stabOnly);

    enum Move bestEggLearnsetMatch = DynamicMonGetBestMoveFromLearnset(speciesId, speciesInfo, monLevel,
        GetSpeciesEggMoves(speciesId),
        moveType, moveCategory, maxPower, stabOnly);
    s32 eggMoveScore = DynamicMonEvaluateMove(speciesInfo, bestEggLearnsetMatch,
        moveType, moveCategory, maxPower, stabOnly);

    DebugPrintf(" Best replacement attack from level: %S", gMovesInfo[SanitizeMoveId(bestLevelLearnsetMatch)].name);
    DebugPrintf(" Best replacement attack from TM: %S", gMovesInfo[SanitizeMoveId(bestTMLearnsetMatch)].name);
    DebugPrintf(" Best replacement attack from egg move: %S", gMovesInfo[SanitizeMoveId(bestEggLearnsetMatch)].name);

    if (levelMoveScore >= tmMoveScore && levelMoveScore >= eggMoveScore) {
        DebugPrintf(" Using level-up move");
        return bestLevelLearnsetMatch;
    }
    else if (tmMoveScore >= levelMoveScore && tmMoveScore >= eggMoveScore) {
        DebugPrintf(" Using tm move");
        return bestTMLearnsetMatch;
    }
    else {
        DebugPrintf(" Using egg move");
        return bestEggLearnsetMatch;
    }
}

enum Move DynamicMonGetScaledStatusMove(u16 speciesId, struct SpeciesInfo speciesInfo, u8 monLevel) {
    // Just pull the most recent status moves from the level up learnset
    enum Move bestMoveId = MOVE_NONE;

    const struct LevelUpMove* learnset = GetSpeciesLevelUpLearnset(speciesId);
    for (u32 i = 0; i < MAX_LEVEL_UP_MOVES && learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].level > monLevel) {
            break;
        }
        if (gMovesInfo[SanitizeMoveId(learnset[i].move)].category == DAMAGE_CATEGORY_STATUS) {
            bestMoveId = learnset[i].move;
        }
    }
    return bestMoveId;
}

enum Move DynamicScaleGetTrainerMonMove(u16 speciesId, enum Move inputMoveId, u8 monLevel, u8 moveSlot) {
    struct MoveInfo inputMoveInfo = gMovesInfo[SanitizeMoveId(inputMoveId)];
    u16 firstEvoId = DynamicScaleAdjustMonSpecies(speciesId, 1);
    // First check if the mon can learn the move by level up or breeding
    if (MonLearnsMoveByLevel(speciesId, inputMoveId, monLevel)
        // Account for moves exclusive to prior evos
        || MonLearnsMoveByLevel(firstEvoId, inputMoveId, monLevel)
        || MonLearnsMoveByEgg(firstEvoId, inputMoveId)) {
        return inputMoveId;
    }
    // Otherwise check if the move is learned by TM and is of appropriate power
    else if (CanLearnTeachableMove(speciesId, inputMoveId)) {
        if (inputMoveInfo.category == DAMAGE_CATEGORY_STATUS
            || MovePowerAppropriateForLevel(inputMoveInfo.power, monLevel)) {
            return inputMoveId;
        }
    }

    // Otherwise, look for a replacement
    struct SpeciesInfo speciesInfo = gSpeciesInfo[SanitizeSpeciesId(speciesId)];
    DebugPrintf("Move %S is not appropriate for a level %u %S", inputMoveInfo.name, monLevel, speciesInfo.speciesName);
    if (inputMoveInfo.category != DAMAGE_CATEGORY_STATUS) {
        if (inputMoveInfo.type == speciesInfo.types[0] || inputMoveInfo.type == speciesInfo.types[1]) {
            return DynamicMonGetScaledAttack(speciesId, speciesInfo, monLevel,
                inputMoveInfo.type, inputMoveInfo.category, TRUE);
        }
        else {
            return DynamicMonGetScaledAttack(speciesId, speciesInfo, monLevel,
                inputMoveInfo.type, inputMoveInfo.category, FALSE);
        }
    }
    else {
        return DynamicMonGetScaledStatusMove(speciesId, speciesInfo, monLevel);
    }
    // Fallback
    return inputMoveId;
}
