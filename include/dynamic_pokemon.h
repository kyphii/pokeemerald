#ifndef GUARD_DYNAMIC_POKEMON_H
#define GUARD_DYNAMIC_POKEMON_H

#define PLAYER_LEVEL_MAX 100

u16 CreateDynamicScaledWildMon(u16 inputSpecies, u8 inputLevel);
u8 DynamicScaleAdjustMonLevel(u8 inputLevel, bool8 isWildEncounter);
u16 DynamicScaleAdjustMonSpecies(u16 inputSpecies, u8 level);
u8 DynamicScaleGetSpeciesEvolveLevel(u16 inputSpecies, struct Evolution evolution);

extern u32 GetTotalBaseStat(u32 species);

#endif //GUARD_DYNAMIC_POKEMON_H