#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "dynamic_pokemon.h"
#include "wild_encounter.h"
#include "random.h"

u16 CreateDynamicScaledWildMon(u16 inputSpecies, u8 inputLevel)
{
    u8 level = DynamicScaleAdjustMonLevel(inputLevel, TRUE);
    u16 species = DynamicScaleAdjustMonSpecies(inputSpecies, level);
    CreateWildMon(species, level);
    return species;
}

u8 DynamicScaleAdjustMonLevel(u8 inputLevel, bool8 isWildEncounter)
{
    u8 scalingLevel = gSaveBlock2Ptr->playerLevel;
    u8 encounterLevel = min(scalingLevel, inputLevel);

    if (isWildEncounter) {
        encounterLevel = 2 + (Random() % encounterLevel);
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