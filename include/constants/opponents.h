#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#include "constants/battle_partner.h"
#include "constants/opponents_frlg.h"

// TODO: Reorder these once all opponents are in place
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
#define TRAINER_CUT_MASTER_1			      19
#define TRAINER_ROUTE19_1          			  20
#define TRAINER_ROUTE19_2          			  21
#define TRAINER_ROUTE19_3          			  22
#define TRAINER_ROUTE19_4          			  23
#define TRAINER_ROUTE19_5          			  24
#define TRAINER_ROUTE19_6          			  25
#define TRAINER_ROUTE19_7          			  26
#define TRAINER_NAUTIRUST_GYM_1				  27
#define TRAINER_NAUTIRUST_GYM_2				  28
#define TRAINER_NAUTIRUST_GYM_3				  29
#define TRAINER_NAUTIRUST_GYM_4				  30
#define TRAINER_NAUTIRUST_GYM_5				  31
#define TRAINER_NAUTIRUST_GYM_6				  32
#define TRAINER_NAUTIRUST_GYM_LEADER_LANDON	  33
#define TRAINER_ROUTE2_4        			  34
#define TRAINER_ROUTE3_1        			  35
#define TRAINER_ROUTE3_2			          36
#define TRAINER_ROUTE3_3          			  37
#define TRAINER_ROUTE3_4        			  38
#define TRAINER_ROUTE3_5			          39
#define TRAINER_ROUTE3_6          			  40
#define TRAINER_ROUTE3_7        			  41
#define TRAINER_ROUTE3_8			          42
#define TRAINER_ROUTE4_1        			  43
#define TRAINER_ROUTE4_2			          44
#define TRAINER_ROUTE4_3          			  45
#define TRAINER_ROUTE4_4        			  46
#define TRAINER_ROUTE4_5			          47
#define TRAINER_ROUTE4_6          			  48
#define TRAINER_ROUTE4_7        			  49
#define TRAINER_ROUTE4_8			          50
#define TRAINER_ROUTE4_9        			  51
#define TRAINER_ROUTE4_10			          52
#define TRAINERS_COUNT_EMERALD                53

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
