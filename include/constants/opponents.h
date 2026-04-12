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
#define TRAINER_NAUTIRUST_FOREST_1        	  14
#define TRAINER_NAUTIRUST_FOREST_2			  15
#define TRAINER_NAUTIRUST_FOREST_3            16
#define TRAINER_NAUTIRUST_FOREST_4			  17
#define TRAINER_NAUTIRUST_FOREST_5            18
#define TRAINERS_COUNT_EMERALD     19

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
