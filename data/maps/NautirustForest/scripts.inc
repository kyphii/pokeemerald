NautirustForest_MapScripts::
# 2 "data/maps/NautirustForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NautirustForest_MapScripts_MAP_SCRIPT_ON_RESUME
# 15 "data/maps/NautirustForest/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NautirustForest_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NautirustForest_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/NautirustForest/scripts.pory"
	switch VAR_INTRO_SEQUENCE_STATE
# 4 "data/maps/NautirustForest/scripts.pory"
	case 12, NautirustForest_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 8 "data/maps/NautirustForest/scripts.pory"
	case 13, NautirustForest_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

NautirustForest_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 5 "data/maps/NautirustForest/scripts.pory"
	clearflag FLAG_INTRO_EXITED_WOODS
# 6 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 28, 65
# 7 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
	return

NautirustForest_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 9 "data/maps/NautirustForest/scripts.pory"
	clearflag FLAG_INTRO_EXITED_WOODS
# 10 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 9, 68
# 11 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH_PROGRESS, 250
# 12 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 11
	return

NautirustForest_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/NautirustForest/scripts.pory"
	map_script_2 VAR_INTRO_SEQUENCE_STATE, 9, NautirustForest_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

NautirustForest_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 17 "data/maps/NautirustForest/scripts.pory"
	call NautirustForest_Intro_RivalFollowOrRace
	return


NautirustForest_Intro_RivalFollowOrRace::
# 30 "data/maps/NautirustForest/scripts.pory"
	addplayerlevel 1
# 32 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_EAST
# 33 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 28, 71
# 34 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 35 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_EAST
# 36 "data/maps/NautirustForest/scripts.pory"
	lockall
# 38 "data/maps/NautirustForest/scripts.pory"
	delay 5
# 39 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_ROUTE2_RIVAL, MAP_ROUTE2
# 41 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_RivalFollowOrRace_Text_0
# 46 "data/maps/NautirustForest/scripts.pory"
	dynmultichoice 16, 4, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, NautirustForest_Intro_RivalFollowOrRace_Text_1, NautirustForest_Intro_RivalFollowOrRace_Text_2
# 50 "data/maps/NautirustForest/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/NautirustForest/scripts.pory"
	case 0, NautirustForest_Intro_RivalFollowOrRace_2
# 69 "data/maps/NautirustForest/scripts.pory"
	case 1, NautirustForest_Intro_RivalFollowOrRace_3
	return

NautirustForest_Intro_RivalFollowOrRace_2:
# 52 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_RivalFollowOrRace_Text_3, MSGBOX_DEFAULT
# 56 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 58 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_RivalFollowOrRace_Movement_0
# 61 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_RivalFollowOrRace_Movement_1
# 66 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 67 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 10
# 68 "data/maps/NautirustForest/scripts.pory"
	goto NautirustForest_Intro_SetupRivalFollower
	return

NautirustForest_Intro_RivalFollowOrRace_3:
# 70 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_RivalFollowOrRace_Text_4, MSGBOX_DEFAULT
# 74 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 75 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_NORTH
# 77 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_RivalFollowOrRace_Text_5, MSGBOX_DEFAULT
# 84 "data/maps/NautirustForest/scripts.pory"
	message NautirustForest_Intro_RivalFollowOrRace_Text_6
# 87 "data/maps/NautirustForest/scripts.pory"
	delay 70
# 88 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 11
# 90 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH_PROGRESS, 0
# 91 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH, 1
# 93 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_PERSIST_NPC, LOCALID_WOODS_RIVAL
# 95 "data/maps/NautirustForest/scripts.pory"
	releaseall
# 96 "data/maps/NautirustForest/scripts.pory"
	waitmessage
# 97 "data/maps/NautirustForest/scripts.pory"
	closemessage
	return


NautirustForest_Intro_SetupRivalFollower::
# 103 "data/maps/NautirustForest/scripts.pory"
	switch VAR_STARTER_MON
# 104 "data/maps/NautirustForest/scripts.pory"
	case 0, NautirustForest_Intro_SetupRivalFollower_3
# 106 "data/maps/NautirustForest/scripts.pory"
	case 1, NautirustForest_Intro_SetupRivalFollower_4
# 108 "data/maps/NautirustForest/scripts.pory"
	case 2, NautirustForest_Intro_SetupRivalFollower_5
NautirustForest_Intro_SetupRivalFollower_1:
# 111 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_SetupRivalFollower_3:
# 105 "data/maps/NautirustForest/scripts.pory"
	setfollowernpc LOCALID_WOODS_RIVAL, FNPC_WHITE_OUT, NautirustForest_Intro_TalkRivalFollower, PARTNER_INTRO_RIVAL_FIRE
	goto NautirustForest_Intro_SetupRivalFollower_1

NautirustForest_Intro_SetupRivalFollower_4:
# 107 "data/maps/NautirustForest/scripts.pory"
	setfollowernpc LOCALID_WOODS_RIVAL, FNPC_WHITE_OUT, NautirustForest_Intro_TalkRivalFollower, PARTNER_INTRO_RIVAL_WATER
	goto NautirustForest_Intro_SetupRivalFollower_1

NautirustForest_Intro_SetupRivalFollower_5:
# 109 "data/maps/NautirustForest/scripts.pory"
	setfollowernpc LOCALID_WOODS_RIVAL, FNPC_WHITE_OUT, NautirustForest_Intro_TalkRivalFollower, PARTNER_INTRO_RIVAL_GRASS
	goto NautirustForest_Intro_SetupRivalFollower_1


NautirustForest_Intro_TalkRivalFollower::
# 115 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_TalkRivalFollower_Text_0
	return


NautirustForest_Intro_FollowInterrupt::
# 121 "data/maps/NautirustForest/scripts.pory"
	lockall
# 122 "data/maps/NautirustForest/scripts.pory"
	facefollowernpc
# 123 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_FollowInterrupt_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 132 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 133 "data/maps/NautirustForest/scripts.pory"
	compare VAR_0x8008, 28
	goto_if_eq NautirustForest_Intro_FollowInterrupt_2
# 144 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 29, 70
# 145 "data/maps/NautirustForest/scripts.pory"
	destroyfollowernpc
# 146 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 147 "data/maps/NautirustForest/scripts.pory"
	lockall
# 148 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowInterrupt_Movement_1
NautirustForest_Intro_FollowInterrupt_1:
# 154 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 155 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 27, 68
# 156 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 12
# 157 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_FollowInterrupt_2:
# 134 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 28, 70
# 135 "data/maps/NautirustForest/scripts.pory"
	destroyfollowernpc
# 136 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 137 "data/maps/NautirustForest/scripts.pory"
	lockall
# 138 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowInterrupt_Movement_0
	goto NautirustForest_Intro_FollowInterrupt_1


NautirustForest_Intro_FollowResume::
# 161 "data/maps/NautirustForest/scripts.pory"
	lockall
# 162 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_RivalFollowOrRace_Movement_0
# 165 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 166 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_SOUTH
# 167 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_FollowResume_Text_0, MSGBOX_DEFAULT
# 174 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 175 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 176 "data/maps/NautirustForest/scripts.pory"
	compare VAR_0x8008, 28
	goto_if_eq NautirustForest_Intro_FollowResume_2
# 182 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowResume_Movement_1
NautirustForest_Intro_FollowResume_1:
# 187 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 188 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 10
# 189 "data/maps/NautirustForest/scripts.pory"
	goto NautirustForest_Intro_SetupRivalFollower
	return

NautirustForest_Intro_FollowResume_2:
# 177 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowResume_Movement_0
	goto NautirustForest_Intro_FollowResume_1


NautirustForest_Intro_EndFollower::
# 193 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 194 "data/maps/NautirustForest/scripts.pory"
	switch VAR_0x8008
# 195 "data/maps/NautirustForest/scripts.pory"
	case 8, NautirustForest_Intro_EndFollower_3
# 197 "data/maps/NautirustForest/scripts.pory"
	case 9, NautirustForest_Intro_EndFollower_4
# 199 "data/maps/NautirustForest/scripts.pory"
	case 10, NautirustForest_Intro_EndFollower_5
NautirustForest_Intro_EndFollower_1:
# 203 "data/maps/NautirustForest/scripts.pory"
	destroyfollowernpc
# 204 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 206 "data/maps/NautirustForest/scripts.pory"
	lockall
# 207 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_SOUTH
# 208 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, Common_Movement_ExclamationMark
# 209 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 210 "data/maps/NautirustForest/scripts.pory"
	delay 60
# 211 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndFollower_Text_0, MSGBOX_DEFAULT
# 216 "data/maps/NautirustForest/scripts.pory"
	compare VAR_0x8008, 8
	goto_if_eq NautirustForest_Intro_EndFollower_7
# 223 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_1
NautirustForest_Intro_EndFollower_6:
# 228 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 230 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndFollower_Text_1, MSGBOX_DEFAULT
# 238 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 240 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 19
# 242 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_RivalExit
# 243 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 245 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 246 "data/maps/NautirustForest/scripts.pory"
	closemessage
	return

NautirustForest_Intro_EndFollower_3:
# 196 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 8, 67
	goto NautirustForest_Intro_EndFollower_1

NautirustForest_Intro_EndFollower_4:
# 198 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 9, 67
	goto NautirustForest_Intro_EndFollower_1

NautirustForest_Intro_EndFollower_5:
# 200 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 10, 67
	goto NautirustForest_Intro_EndFollower_1

NautirustForest_Intro_EndFollower_7:
# 217 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_0
	goto NautirustForest_Intro_EndFollower_6


NautirustForest_Intro_EndRace::
# 250 "data/maps/NautirustForest/scripts.pory"
	compare VAR_MOVEMENT_PATH_PROGRESS, 247
	goto_if_ge NautirustForest_Intro_EndRace_2
# 276 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 277 "data/maps/NautirustForest/scripts.pory"
	switch VAR_0x8008
# 278 "data/maps/NautirustForest/scripts.pory"
	case 8, NautirustForest_Intro_EndRace_7
# 284 "data/maps/NautirustForest/scripts.pory"
	case 9, NautirustForest_Intro_EndRace_8
# 289 "data/maps/NautirustForest/scripts.pory"
	case 10, NautirustForest_Intro_EndRace_9
NautirustForest_Intro_EndRace_5:
# 297 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 19
# 298 "data/maps/NautirustForest/scripts.pory"
	compare VAR_MOVEMENT_PATH_PROGRESS, 232
	goto_if_ge NautirustForest_Intro_EndRace_11
# 313 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_PERSIST_NPC, 0
# 315 "data/maps/NautirustForest/scripts.pory"
	lockall
# 316 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 10, 60
# 317 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 318 "data/maps/NautirustForest/scripts.pory"
	clearflag FLAG_INTRO_EXITED_WOODS
# 319 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 320 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndRace_Movement_4
# 331 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 332 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_3, MSGBOX_DEFAULT
NautirustForest_Intro_EndRace_10:
# 340 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_PERSIST_NPC, 0
# 341 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_4, MSGBOX_DEFAULT
# 350 "data/maps/NautirustForest/scripts.pory"
	giveitem ITEM_QUICK_CLAW, 1
# 351 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_1
# 355 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 356 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 357 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_5, MSGBOX_DEFAULT
# 362 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_NORTH
# 363 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_6
NautirustForest_Intro_EndRace_1:
# 369 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 370 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 19
# 372 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH_PROGRESS, 0
# 373 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH, 0
# 375 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_RivalExit
# 376 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 378 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 380 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_EndRace_2:
# 252 "data/maps/NautirustForest/scripts.pory"
	lockall
# 253 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_NORTH
# 255 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_0, MSGBOX_DEFAULT
# 259 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 260 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndRace_Movement_0
# 263 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 264 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_1, MSGBOX_DEFAULT
	goto NautirustForest_Intro_EndRace_1

NautirustForest_Intro_EndRace_7:
# 279 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_1
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_8:
# 285 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_2
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_9:
# 290 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_3
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_11:
# 300 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
NautirustForest_Intro_EndRace_15:
# 301 "data/maps/NautirustForest/scripts.pory"
	compare VAR_MOVEMENT_PATH_PROGRESS, 247
	goto_if_lt NautirustForest_Intro_EndRace_16
# 304 "data/maps/NautirustForest/scripts.pory"
	lockall
# 305 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_2, MSGBOX_DEFAULT
	goto NautirustForest_Intro_EndRace_10

NautirustForest_Intro_EndRace_16:
# 302 "data/maps/NautirustForest/scripts.pory"
	delay 16
	goto NautirustForest_Intro_EndRace_15


NautirustForest_Trainer_1::
# 384 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_1, NautirustForest_Trainer_1_Text_0, NautirustForest_Trainer_1_Text_1
# 393 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_1_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_2::
# 400 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_2, NautirustForest_Trainer_2_Text_0, NautirustForest_Trainer_2_Text_0
# 408 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_2_Text_1, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_3::
# 416 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_3, NautirustForest_Trainer_3_Text_0, NautirustForest_Trainer_3_Text_1
# 425 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_3_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_4::
# 433 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_4, NautirustForest_Trainer_2_Text_0, NautirustForest_Trainer_2_Text_0
# 441 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_2_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_5::
# 448 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_5, NautirustForest_Trainer_5_Text_0, NautirustForest_Trainer_5_Text_0
# 456 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_5_Text_0, MSGBOX_AUTOCLOSE
	return


# 462 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalExit:
# 463 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 463 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 463 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 463 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 463 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 463 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 463 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
	step_end

# 466 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalRacePath::
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 467 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 470 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 471 "data/maps/NautirustForest/scripts.pory"
	face_right
# 472 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 473 "data/maps/NautirustForest/scripts.pory"
	face_up
# 474 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 476 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 476 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 476 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 477 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 477 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 477 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 477 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 477 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 478 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 478 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 478 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 478 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 479 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 479 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 479 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 479 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 480 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 481 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 481 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 481 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 482 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 482 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 484 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 484 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 486 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 486 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 486 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 487 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 489 "data/maps/NautirustForest/scripts.pory"
	emote_exclamation_mark
# 490 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 490 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 490 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 490 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 491 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 491 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 492 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 493 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 493 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 494 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 495 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 495 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 496 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 498 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 498 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 499 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 500 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 500 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 501 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 501 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 501 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 502 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 502 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 503 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 503 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 503 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 503 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 503 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 504 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 504 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 504 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 504 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 505 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 505 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 505 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 505 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 507 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 507 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 509 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 509 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 509 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 510 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 510 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 512 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 513 "data/maps/NautirustForest/scripts.pory"
	face_up
# 514 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 515 "data/maps/NautirustForest/scripts.pory"
	face_left
# 516 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 517 "data/maps/NautirustForest/scripts.pory"
	face_up
# 518 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 518 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 520 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 520 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 520 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 520 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 521 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 521 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 522 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 522 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 522 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 522 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 523 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 524 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 524 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 524 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 525 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 525 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 525 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 527 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 527 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 527 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 528 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 530 "data/maps/NautirustForest/scripts.pory"
	emote_exclamation_mark
# 531 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 531 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 531 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 531 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 532 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 532 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 533 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 534 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 534 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 535 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 536 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 536 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 537 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 539 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 539 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 539 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 539 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 540 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 540 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 541 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 541 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 542 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 542 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 542 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 542 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 543 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 543 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 543 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 543 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 543 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 546 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 546 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 546 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 547 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 548 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 550 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 550 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 551 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 551 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 551 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 552 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 552 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 552 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 553 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 553 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 553 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 555 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 556 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 556 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 556 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 556 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 557 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 557 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 558 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 560 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 560 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 560 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 561 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 562 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 567 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 568 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 568 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 568 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 568 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
	step_end

# 58 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalFollowOrRace_Movement_0:
# 59 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 59 "data/maps/NautirustForest/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalFollowOrRace_Movement_1:
# 62 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 63 "data/maps/NautirustForest/scripts.pory"
	walk_up
	step_end

# 138 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowInterrupt_Movement_0:
# 139 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 139 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 139 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 139 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 139 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 140 "data/maps/NautirustForest/scripts.pory"
	face_down
	step_end

# 148 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowInterrupt_Movement_1:
# 149 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 150 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 150 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 150 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 150 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 150 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 151 "data/maps/NautirustForest/scripts.pory"
	face_down
	step_end

# 177 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowResume_Movement_0:
# 178 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 182 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowResume_Movement_1:
# 183 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 183 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 184 "data/maps/NautirustForest/scripts.pory"
	face_right
	step_end

# 217 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndFollower_Movement_0:
# 218 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 219 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 219 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 223 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndFollower_Movement_1:
# 224 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 225 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 225 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 260 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_0:
# 261 "data/maps/NautirustForest/scripts.pory"
	walk_in_place_down
	step_end

# 279 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_1:
# 280 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 280 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 281 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 282 "data/maps/NautirustForest/scripts.pory"
	face_up
	step_end

# 285 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_2:
# 286 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 286 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 287 "data/maps/NautirustForest/scripts.pory"
	face_up
	step_end

# 290 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_3:
# 291 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 291 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 292 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 293 "data/maps/NautirustForest/scripts.pory"
	face_up
	step_end

# 320 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_4:
# 321 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 321 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 322 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 323 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 323 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 324 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 325 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 326 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 327 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 328 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 328 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

NautirustForest_Intro_RivalFollowOrRace_Text_0:
# 42 "data/maps/NautirustForest/scripts.pory"
	.string "Well?\p"
	.string "What do you think we should do?$"

NautirustForest_Intro_RivalFollowOrRace_Text_1:
# 47 "data/maps/NautirustForest/scripts.pory"
	.string "Go together$"

NautirustForest_Intro_RivalFollowOrRace_Text_2:
# 48 "data/maps/NautirustForest/scripts.pory"
	.string "Let's race$"

NautirustForest_Intro_RivalFollowOrRace_Text_3:
# 53 "data/maps/NautirustForest/scripts.pory"
	.string "Okay! Just lead the way!$"

NautirustForest_Intro_RivalFollowOrRace_Text_4:
# 71 "data/maps/NautirustForest/scripts.pory"
	.string "Oh, you know me too well, dude.$"

NautirustForest_Intro_RivalFollowOrRace_Text_5:
# 78 "data/maps/NautirustForest/scripts.pory"
	.string "Alright! First one out of the forest\n"
	.string "wins!\p"
	.string "Ready? On three!$"

NautirustForest_Intro_RivalFollowOrRace_Text_6:
# 85 "data/maps/NautirustForest/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 30}Three!$"

NautirustForest_Intro_TalkRivalFollower_Text_0:
# 116 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Doing okay?$"

NautirustForest_Intro_FollowInterrupt_Text_0:
# 124 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Oh?\n"
	.string "Do you have to go back?\p"
	.string "I'll just wait here, okay?$"

NautirustForest_Intro_FollowResume_Text_0:
# 168 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: There you are!\n"
	.string "All good?\p"
	.string "C'mon, let's get going already!$"

NautirustForest_Intro_EndFollower_Text_0:
# 212 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Look! There's the exit!$"

NautirustForest_Intro_EndFollower_Text_1:
# 231 "data/maps/NautirustForest/scripts.pory"
	.string "We should be pretty close to \n"
	.string "the city now.\p"
	.string "This was good fun! Let's meet up on \n"
	.string "ahead, okay?$"

NautirustForest_Intro_EndRace_Text_0:
# 256 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Hah! Too slow!$"

NautirustForest_Intro_EndRace_Text_1:
# 265 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Look, the way out is just up\n"
	.string "ahead.\p"
	.string "No time to waste! I hope you're not out\n"
	.string "of breath!$"

NautirustForest_Intro_EndRace_Text_2:
# 306 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: And FINISH!\p"
	.string "Wow, that was close, huh?$"

NautirustForest_Intro_EndRace_Text_3:
# 333 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: …Huff… huff…\p"
	.string "Wow, you're a machine!\n"
	.string "That was so fast!$"

NautirustForest_Intro_EndRace_Text_4:
# 342 "data/maps/NautirustForest/scripts.pory"
	.string "Hah, what a rush!\p"
	.string "And to the victor go the spoils!\n"
	.string "Here, I picked this up along the way.\p"
	.string "Go ahead, take it!$"

NautirustForest_Intro_EndRace_Text_5:
# 358 "data/maps/NautirustForest/scripts.pory"
	.string "Anyways, we should be pretty close to\n"
	.string "the city now.$"

NautirustForest_Intro_EndRace_Text_6:
# 364 "data/maps/NautirustForest/scripts.pory"
	.string "Let's keep going! Try not to leave\n"
	.string "me totally in your dust, okay?$"

NautirustForest_Trainer_1_Text_0:
# 387 "data/maps/NautirustForest/scripts.pory"
	.string "Hah!\n"
	.string "Caught you!$"

NautirustForest_Trainer_1_Text_1:
# 390 "data/maps/NautirustForest/scripts.pory"
	.string "I got caught out!$"

NautirustForest_Trainer_1_Text_2:
# 394 "data/maps/NautirustForest/scripts.pory"
	.string "Found any cool bugs in the forest?$"

NautirustForest_Trainer_2_Text_0:
# 403 "data/maps/NautirustForest/scripts.pory"
	.string "TODO$"

NautirustForest_Trainer_2_Text_1:
# 409 "data/maps/NautirustForest/scripts.pory"
	.string "I lost my friend in the grass.\n"
	.string "Have you seen her anywhere?$"

NautirustForest_Trainer_3_Text_0:
# 419 "data/maps/NautirustForest/scripts.pory"
	.string "Eek!\n"
	.string "Something's rustling!$"

NautirustForest_Trainer_3_Text_1:
# 422 "data/maps/NautirustForest/scripts.pory"
	.string "Oh, it's just a person…$"

NautirustForest_Trainer_3_Text_2:
# 426 "data/maps/NautirustForest/scripts.pory"
	.string "Eek!\n"
	.string "Don't scare me like that!$"

NautirustForest_Trainer_5_Text_0:
# 451 "data/maps/NautirustForest/scripts.pory"
	.string "$"
