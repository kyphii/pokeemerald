#ifndef GUARD_CONSTANTS_FIELD_MOVE_H
#define GUARD_CONSTANTS_FIELD_MOVE_H


// Rearranged by priority
enum FieldMove
{
    // Prioritize moves only accessible through party menu
    FIELD_MOVE_FLY,
    FIELD_MOVE_FLASH,
#if OW_DEFOG_FIELD_MOVE == TRUE
    FIELD_MOVE_DEFOG,
#endif

    // Cut has special grass-cutting functionality only thru party menu
    FIELD_MOVE_CUT,

    FIELD_MOVE_TELEPORT,
    FIELD_MOVE_DIG,
    FIELD_MOVE_MILK_DRINK,
    FIELD_MOVE_SOFT_BOILED,
    FIELD_MOVE_SWEET_SCENT,
    FIELD_MOVE_SECRET_POWER,

    // These have OW scripts so can be low prio
    FIELD_MOVE_SURF,
    FIELD_MOVE_STRENGTH,
    FIELD_MOVE_ROCK_SMASH,
#if OW_ROCK_CLIMB_FIELD_MOVE == TRUE
    FIELD_MOVE_ROCK_CLIMB,
#endif
    FIELD_MOVE_DIVE,
    FIELD_MOVE_WATERFALL,
    FIELD_MOVES_COUNT
};


#endif //GUARD_CONSTANTS_FIELD_MOVE_H
