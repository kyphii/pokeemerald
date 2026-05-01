#ifndef GUARD_DYNAMIC_POKEMON_H
#define GUARD_DYNAMIC_POKEMON_H

#include "data.h"

#define PLAYER_LEVEL_MAX 100

u16 CreateDynamicScaledWildMon(u16 inputSpecies, u8 inputLevel);
u8 DynamicScaleGetTrainerPartySize(u8 numMons, u8 trainerPartySize, u8 trainerLevel);
u8 DynamicScaleGetMonLevelForTrainer(u8 trainerLevel, s8 monLevel);
u8 DynamicScaleGetWildMonLevel(u8 inputLevel);
u16 DynamicScaleAdjustMonSpecies(u16 inputSpecies, u8 level);
u8 DynamicScaleGetSpeciesEvolveLevel(u16 inputSpecies, struct Evolution evolution);
enum Move DynamicScaleGetTrainerMonMove(struct Pokemon* mon, u16 speciesId, enum Move inputMoveId);

extern u32 GetTotalBaseStat(u32 species);

#endif //GUARD_DYNAMIC_POKEMON_H