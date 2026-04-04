#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#include "constants/battle_partner.h"
#include "constants/opponents_frlg.h"

#define TRAINER_NONE                          0
#define TRAINER_ANABEL                        1
#define TRAINER_TUCKER                        2
#define TRAINER_SPENSER                       3
#define TRAINER_GRETA                         4
#define TRAINER_NOLAND                        5
#define TRAINER_LUCY                          6
#define TRAINER_BRANDON                       7
#define TRAINER_RIVAL_INTRO_GRASS			  8
#define TRAINER_RIVAL_INTRO_FIRE			  9
#define TRAINER_RIVAL_INTRO_WATER			  10
#define TRAINER_ROUTE2_1        			  11
#define TRAINER_ROUTE2_2			          12
#define TRAINER_ROUTE2_3          			  13


// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is only space for 9 additional trainers before trainer flag space overflows
//       More space can be made by shifting flags around in constants/flags.h or changing how trainer flags are handled
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define TRAINERS_COUNT_EMERALD     14
#define MAX_TRAINERS_COUNT_EMERALD 864

#if IS_FRLG
#define TRAINERS_COUNT                      TRAINERS_COUNT_FRLG
#define MAX_TRAINERS_COUNT                  MAX_TRAINERS_COUNT_FRLG
#else
#define TRAINERS_COUNT                      TRAINERS_COUNT_EMERALD
#define MAX_TRAINERS_COUNT                  MAX_TRAINERS_COUNT_EMERALD
#endif
#define TRAINER_PARTNER(partner)           (MAX_TRAINERS_COUNT + partner)

#endif  // GUARD_CONSTANTS_OPPONENTS_H
