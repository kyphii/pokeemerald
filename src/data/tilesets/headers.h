#include "fieldmap.h"

// Whether a palette has a night version, located at ((x + 9) % 16).pal
#define SWAP_PAL(x) ((x) < NUM_PALS_IN_PRIMARY ? 1 << (x) : 1 << ((x) - NUM_PALS_IN_PRIMARY))

const struct Tileset gTileset_SecretBase =
{
    .isCompressed = FALSE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_SecretBase,
    .palettes = gTilesetPalettes_SecretBase,
    .metatiles = gMetatiles_SecretBasePrimary,
    .metatileAttributes = gMetatileAttributes_SecretBasePrimary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseRedCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseRedCave,
    .palettes = gTilesetPalettes_SecretBaseRedCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset* const gTilesetPointer_SecretBase = &gTileset_SecretBase;
const struct Tileset* const gTilesetPointer_SecretBaseRedCave = &gTileset_SecretBaseRedCave;


const struct Tileset gTileset_Overworld =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_Overworld,
    .palettes = gTilesetPalettes_Overworld,
    .metatiles = gMetatiles_Overworld,
    .metatileAttributes = gMetatileAttributes_Overworld,
    .callback = InitTilesetAnim_General,
};

const struct Tileset gTileset_Marinacre =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Marinacre,
    .palettes = gTilesetPalettes_Marinacre,
    .metatiles = gMetatiles_Marinacre,
    .metatileAttributes = gMetatileAttributes_Marinacre,
    .callback = InitTilesetAnim_Petalburg,
};

const struct Tileset gTileset_Nautirust =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Nautirust,
    .palettes = gTilesetPalettes_Nautirust,
    .metatiles = gMetatiles_Nautirust,
    .metatileAttributes = gMetatileAttributes_Nautirust,
    .callback = InitTilesetAnim_Rustboro,
};

const struct Tileset gTileset_Whelchord =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Whelchord,
    .palettes = gTilesetPalettes_Whelchord,
    .metatiles = gMetatiles_Whelchord,
    .metatileAttributes = gMetatileAttributes_Whelchord,
    .callback = InitTilesetAnim_Sootopolis,
};

const struct Tileset gTileset_Armiter =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Armiter,
    .palettes = gTilesetPalettes_Armiter,
    .metatiles = gMetatiles_Armiter,
    .metatileAttributes = gMetatileAttributes_Armiter,
    .callback = InitTilesetAnim_Dewford,
};

const struct Tileset gTileset_Junopolis =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Junopolis,
    .palettes = gTilesetPalettes_Junopolis,
    .metatiles = gMetatiles_Junopolis,
    .metatileAttributes = gMetatileAttributes_Junopolis,
    .callback = InitTilesetAnim_Mauville,
};

const struct Tileset gTileset_Canvenus =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Canvenus,
    .palettes = gTilesetPalettes_Canvenus,
    .metatiles = gMetatiles_Canvenus,
    .metatileAttributes = gMetatileAttributes_Canvenus,
    .callback = InitTilesetAnim_Fortree,
};

const struct Tileset gTileset_Nerilight =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Nerilight,
    .palettes = gTilesetPalettes_Nerilight,
    .metatiles = gMetatiles_Nerilight,
    .metatileAttributes = gMetatileAttributes_Nerilight,
    .callback = NULL,
};

const struct Tileset gTileset_Quaheart =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Quaheart,
    .palettes = gTilesetPalettes_Quaheart,
    .metatiles = gMetatiles_Quaheart,
    .metatileAttributes = gMetatileAttributes_Quaheart,
    .callback = NULL,
};

const struct Tileset gTileset_Periwind =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Periwind,
    .palettes = gTilesetPalettes_Periwind,
    .metatiles = gMetatiles_Periwind,
    .metatileAttributes = gMetatileAttributes_Periwind,
    .callback = InitTilesetAnim_Fallarbor,
};

const struct Tileset gTileset_Volutide =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Volutide,
    .palettes = gTilesetPalettes_Volutide,
    .metatiles = gMetatiles_Volutide,
    .metatileAttributes = gMetatileAttributes_Volutide,
    .callback = NULL,
};

const struct Tileset gTileset_Gardellin =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Gardellin,
    .palettes = gTilesetPalettes_Gardellin,
    .metatiles = gMetatiles_Gardellin,
    .metatileAttributes = gMetatileAttributes_Gardellin,
    .callback = InitTilesetAnim_Lavaridge,
};

const struct Tileset gTileset_Abalove =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Abalove,
    .palettes = gTilesetPalettes_Abalove,
    .metatiles = gMetatiles_Abalove,
    .metatileAttributes = gMetatileAttributes_Abalove,
    .callback = InitTilesetAnim_Pacifidlog,
};

const struct Tileset gTileset_Snowrie =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Snowrie,
    .palettes = gTilesetPalettes_Snowrie,
    .metatiles = gMetatiles_Snowrie,
    .metatileAttributes = gMetatileAttributes_Snowrie,
    .callback = NULL,
};

const struct Tileset gTileset_DesertSanctuary =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_DesertSanctuary,
    .palettes = gTilesetPalettes_DesertSanctuary,
    .metatiles = gMetatiles_DesertSanctuary,
    .metatileAttributes = gMetatileAttributes_DesertSanctuary,
    .callback = NULL,
};

const struct Tileset gTileset_MountBriar =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MountBriar,
    .palettes = gTilesetPalettes_MountBriar,
    .metatiles = gMetatiles_MountBriar,
    .metatileAttributes = gMetatileAttributes_MountBriar,
    .callback = NULL,
};

const struct Tileset gTileset_Building =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_InsideBuilding,
    .palettes = gTilesetPalettes_InsideBuilding,
    .metatiles = gMetatiles_InsideBuilding,
    .metatileAttributes = gMetatileAttributes_InsideBuilding,
    .callback = InitTilesetAnim_Building,
};

const struct Tileset gTileset_Shop =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Shop,
    .palettes = gTilesetPalettes_Shop,
    .metatiles = gMetatiles_Shop,
    .metatileAttributes = gMetatileAttributes_Shop,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonCenter =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonCenter,
    .palettes = gTilesetPalettes_PokemonCenter,
    .metatiles = gMetatiles_PokemonCenter,
    .metatileAttributes = gMetatileAttributes_PokemonCenter,
    .callback = NULL,
};

const struct Tileset gTileset_Cave =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Cave,
    .palettes = gTilesetPalettes_Cave,
    .metatiles = gMetatiles_Cave,
    .metatileAttributes = gMetatileAttributes_Cave,
    .callback = NULL,
};

const struct Tileset gTileset_PrismaticCave =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PrismaticCave,
    .palettes = gTilesetPalettes_PrismaticCave,
    .metatiles = gMetatiles_PrismaticCave,
    .metatileAttributes = gMetatileAttributes_PrismaticCave,
    .callback = NULL,
};

const struct Tileset gTileset_Contest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Contest,
    .palettes = gTilesetPalettes_Contest,
    .metatiles = gMetatiles_Contest,
    .metatileAttributes = gMetatileAttributes_Contest,
    .callback = NULL,
};

const struct Tileset gTileset_PlayerHouse =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PlayerHouse,
    .palettes = gTilesetPalettes_PlayerHouse,
    .metatiles = gMetatiles_PlayerHouse,
    .metatileAttributes = gMetatileAttributes_PlayerHouse,
    .callback = NULL,
};

const struct Tileset gTileset_Lab =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Lab,
    .palettes = gTilesetPalettes_Lab,
    .metatiles = gMetatiles_Lab,
    .metatileAttributes = gMetatileAttributes_Lab,
    .callback = NULL,
};

const struct Tileset gTileset_Underwater =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Underwater,
    .palettes = gTilesetPalettes_Underwater,
    .metatiles = gMetatiles_Underwater,
    .metatileAttributes = gMetatileAttributes_Underwater,
    .callback = InitTilesetAnim_Underwater,
};

const struct Tileset gTileset_GenericBuilding =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_GenericBuilding,
    .palettes = gTilesetPalettes_GenericBuilding,
    .metatiles = gMetatiles_GenericBuilding,
    .metatileAttributes = gMetatileAttributes_GenericBuilding,
    .callback = NULL,
};

const struct Tileset gTileset_NautirustGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_NautirustGym,
    .palettes = gTilesetPalettes_NautirustGym,
    .metatiles = gMetatiles_NautirustGym,
    .metatileAttributes = gMetatileAttributes_NautirustGym,
    .callback = InitTilesetAnim_NautirustGym,
};


const struct Tileset gTileset_WhelchordGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_WhelchordGym,
    .palettes = gTilesetPalettes_WhelchordGym,
    .metatiles = gMetatiles_WhelchordGym,
    .metatileAttributes = gMetatileAttributes_WhelchordGym,
    .callback = NULL,
};

const struct Tileset gTileset_ArmiterGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_ArmiterGym,
    .palettes = gTilesetPalettes_ArmiterGym,
    .metatiles = gMetatiles_ArmiterGym,
    .metatileAttributes = gMetatileAttributes_ArmiterGym,
    .callback = NULL,
};

const struct Tileset gTileset_JunopolisGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_JunopolisGym,
    .palettes = gTilesetPalettes_JunopolisGym,
    .metatiles = gMetatiles_JunopolisGym,
    .metatileAttributes = gMetatileAttributes_JunopolisGym,
    .callback = NULL,
};

const struct Tileset gTileset_CanvenusGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_CanvenusGym,
    .palettes = gTilesetPalettes_CanvenusGym,
    .metatiles = gMetatiles_CanvenusGym,
    .metatileAttributes = gMetatileAttributes_CanvenusGym,
    .callback = NULL,
};

const struct Tileset gTileset_NerilightGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_NerilightGym,
    .palettes = gTilesetPalettes_NerilightGym,
    .metatiles = gMetatiles_NerilightGym,
    .metatileAttributes = gMetatileAttributes_NerilightGym,
    .callback = NULL,
};

const struct Tileset gTileset_QuaheartGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_QuaheartGym,
    .palettes = gTilesetPalettes_QuaheartGym,
    .metatiles = gMetatiles_QuaheartGym,
    .metatileAttributes = NULL,
    .callback = NULL,
};

const struct Tileset gTileset_PeriwindGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PeriwindGym,
    .palettes = gTilesetPalettes_PeriwindGym,
    .metatiles = gMetatiles_PeriwindGym,
    .metatileAttributes = gMetatileAttributes_PeriwindGym,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonSchool =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonSchool,
    .palettes = gTilesetPalettes_PokemonSchool,
    .metatiles = gMetatiles_PokemonSchool,
    .metatileAttributes = gMetatileAttributes_PokemonSchool,
    .callback = NULL,
};
