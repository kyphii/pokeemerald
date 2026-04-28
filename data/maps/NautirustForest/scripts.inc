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
	addplayerlevel 1
# 208 "data/maps/NautirustForest/scripts.pory"
	lockall
# 209 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_SOUTH
# 210 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, Common_Movement_ExclamationMark
# 211 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 212 "data/maps/NautirustForest/scripts.pory"
	delay 60
# 213 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndFollower_Text_0, MSGBOX_DEFAULT
# 218 "data/maps/NautirustForest/scripts.pory"
	compare VAR_0x8008, 8
	goto_if_eq NautirustForest_Intro_EndFollower_7
# 225 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_1
NautirustForest_Intro_EndFollower_6:
# 230 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 232 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndFollower_Text_1, MSGBOX_DEFAULT
# 240 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 242 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 19
# 244 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_RivalExit
# 245 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 247 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 248 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 249 "data/maps/NautirustForest/scripts.pory"
	releaseall
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
# 219 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_0
	goto NautirustForest_Intro_EndFollower_6


NautirustForest_Intro_EndRace::
# 253 "data/maps/NautirustForest/scripts.pory"
	compare VAR_MOVEMENT_PATH_PROGRESS, 247
	goto_if_ge NautirustForest_Intro_EndRace_2
# 279 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 280 "data/maps/NautirustForest/scripts.pory"
	switch VAR_0x8008
# 281 "data/maps/NautirustForest/scripts.pory"
	case 8, NautirustForest_Intro_EndRace_7
# 287 "data/maps/NautirustForest/scripts.pory"
	case 9, NautirustForest_Intro_EndRace_8
# 292 "data/maps/NautirustForest/scripts.pory"
	case 10, NautirustForest_Intro_EndRace_9
NautirustForest_Intro_EndRace_5:
# 300 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 19
# 301 "data/maps/NautirustForest/scripts.pory"
	compare VAR_MOVEMENT_PATH_PROGRESS, 232
	goto_if_ge NautirustForest_Intro_EndRace_11
# 316 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_PERSIST_NPC, 0
# 318 "data/maps/NautirustForest/scripts.pory"
	lockall
# 319 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 10, 60
# 320 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 321 "data/maps/NautirustForest/scripts.pory"
	clearflag FLAG_INTRO_EXITED_WOODS
# 322 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 323 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndRace_Movement_4
# 334 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 335 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_3, MSGBOX_DEFAULT
NautirustForest_Intro_EndRace_10:
# 343 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_PERSIST_NPC, 0
# 344 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_4, MSGBOX_DEFAULT
# 353 "data/maps/NautirustForest/scripts.pory"
	giveitem ITEM_QUICK_CLAW, 1
# 354 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_1
# 358 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 359 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 360 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_5, MSGBOX_DEFAULT
# 365 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_NORTH
# 366 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_6
NautirustForest_Intro_EndRace_1:
# 372 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 373 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 19
# 375 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH_PROGRESS, 0
# 376 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH, 0
# 378 "data/maps/NautirustForest/scripts.pory"
	addplayerlevel 1
# 380 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_RivalExit
# 381 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 383 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 385 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_EndRace_2:
# 255 "data/maps/NautirustForest/scripts.pory"
	lockall
# 256 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_NORTH
# 258 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_0, MSGBOX_DEFAULT
# 262 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 263 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndRace_Movement_0
# 266 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 267 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_1, MSGBOX_DEFAULT
	goto NautirustForest_Intro_EndRace_1

NautirustForest_Intro_EndRace_7:
# 282 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_1
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_8:
# 288 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_2
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_9:
# 293 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_3
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_11:
# 303 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
NautirustForest_Intro_EndRace_15:
# 304 "data/maps/NautirustForest/scripts.pory"
	compare VAR_MOVEMENT_PATH_PROGRESS, 247
	goto_if_lt NautirustForest_Intro_EndRace_16
# 307 "data/maps/NautirustForest/scripts.pory"
	lockall
# 308 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_2, MSGBOX_DEFAULT
	goto NautirustForest_Intro_EndRace_10

NautirustForest_Intro_EndRace_16:
# 305 "data/maps/NautirustForest/scripts.pory"
	delay 16
	goto NautirustForest_Intro_EndRace_15


NautirustForest_Trainer_1::
# 389 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_1, NautirustForest_Trainer_1_Text_0, NautirustForest_Trainer_1_Text_1
# 398 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_1_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_2::
# 405 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_2, NautirustForest_Trainer_2_Text_0, NautirustForest_Trainer_2_Text_0
# 413 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_2_Text_1, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_3::
# 421 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_3, NautirustForest_Trainer_3_Text_0, NautirustForest_Trainer_3_Text_1
# 430 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_3_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_4::
# 438 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_4, NautirustForest_Trainer_2_Text_0, NautirustForest_Trainer_2_Text_0
# 446 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_2_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_5::
# 453 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_5, NautirustForest_Trainer_5_Text_0, NautirustForest_Trainer_5_Text_0
# 461 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_5_Text_0, MSGBOX_AUTOCLOSE
	return


# 467 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalExit:
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 468 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
	step_end

# 471 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalRacePath::
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 472 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 473 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 473 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 473 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 475 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 476 "data/maps/NautirustForest/scripts.pory"
	face_right
# 477 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 478 "data/maps/NautirustForest/scripts.pory"
	face_up
# 479 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 481 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 481 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 481 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 482 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 482 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 482 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 482 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 482 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 483 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 484 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 484 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 484 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 484 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 485 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 486 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 486 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 486 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 487 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 487 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 488 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 489 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 489 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 490 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 490 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 491 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 491 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 491 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 492 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 494 "data/maps/NautirustForest/scripts.pory"
	emote_exclamation_mark
# 495 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 495 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 495 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 495 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 496 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 496 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 497 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 498 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 498 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 499 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 500 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 500 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 501 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 503 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 503 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 504 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 505 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 505 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 506 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 507 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 507 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 508 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 509 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 509 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 509 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 509 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 510 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 510 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 510 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 510 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 511 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 511 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 511 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 511 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 511 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 512 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 512 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 513 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 513 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 513 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 513 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 513 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 513 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 514 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 514 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 514 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 515 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 515 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 517 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 518 "data/maps/NautirustForest/scripts.pory"
	face_up
# 519 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 520 "data/maps/NautirustForest/scripts.pory"
	face_left
# 521 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 522 "data/maps/NautirustForest/scripts.pory"
	face_up
# 523 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 523 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 525 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 525 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 525 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 525 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 526 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 527 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 527 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 527 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 527 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 528 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 529 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 529 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 529 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 530 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 530 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 530 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 531 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 531 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 531 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 531 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 531 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 531 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 532 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 532 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 532 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 533 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 535 "data/maps/NautirustForest/scripts.pory"
	emote_exclamation_mark
# 536 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 536 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 536 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 536 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 537 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 537 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 538 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 539 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 539 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 540 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 541 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 541 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 542 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 544 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 545 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 545 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 546 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 546 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 547 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 547 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 547 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 547 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 548 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 548 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 548 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 548 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 548 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 549 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 551 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 551 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 551 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 552 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 553 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 554 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 554 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 554 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 555 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 555 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 556 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 556 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 556 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 557 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 557 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 557 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 558 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 558 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 558 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 560 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 561 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 561 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 561 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 561 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 562 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 562 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 565 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 565 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 565 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 566 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 567 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 568 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 569 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 569 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 569 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 571 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 572 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 573 "data/maps/NautirustForest/scripts.pory"
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

# 219 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndFollower_Movement_0:
# 220 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 221 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 221 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndFollower_Movement_1:
# 226 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 227 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 227 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 263 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_0:
# 264 "data/maps/NautirustForest/scripts.pory"
	walk_in_place_down
	step_end

# 282 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_1:
# 283 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 283 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 284 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 285 "data/maps/NautirustForest/scripts.pory"
	face_up
	step_end

# 288 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_2:
# 289 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 289 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 290 "data/maps/NautirustForest/scripts.pory"
	face_up
	step_end

# 293 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_3:
# 294 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 294 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 295 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 296 "data/maps/NautirustForest/scripts.pory"
	face_up
	step_end

# 323 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_4:
# 324 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 324 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 325 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 326 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 326 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 327 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 328 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 329 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 330 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 331 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 331 "data/maps/NautirustForest/scripts.pory"
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
# 214 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Look! There's the exit!$"

NautirustForest_Intro_EndFollower_Text_1:
# 233 "data/maps/NautirustForest/scripts.pory"
	.string "We should be pretty close to \n"
	.string "the city now.\p"
	.string "This was good fun! Let's meet up on \n"
	.string "ahead, okay?$"

NautirustForest_Intro_EndRace_Text_0:
# 259 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Hah! Too slow!$"

NautirustForest_Intro_EndRace_Text_1:
# 268 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Look, the way out is just up\n"
	.string "ahead.\p"
	.string "No time to waste! I hope you're not out\n"
	.string "of breath!$"

NautirustForest_Intro_EndRace_Text_2:
# 309 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: And FINISH!\p"
	.string "Wow, that was close, huh?$"

NautirustForest_Intro_EndRace_Text_3:
# 336 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: …Huff… huff…\p"
	.string "Wow, you're a machine!\n"
	.string "That was so fast!$"

NautirustForest_Intro_EndRace_Text_4:
# 345 "data/maps/NautirustForest/scripts.pory"
	.string "Hah, what a rush!\p"
	.string "And to the victor go the spoils!\n"
	.string "Here, I picked this up along the way.\p"
	.string "Go ahead, take it!$"

NautirustForest_Intro_EndRace_Text_5:
# 361 "data/maps/NautirustForest/scripts.pory"
	.string "Anyways, we should be pretty close to\n"
	.string "the city now.$"

NautirustForest_Intro_EndRace_Text_6:
# 367 "data/maps/NautirustForest/scripts.pory"
	.string "Let's keep going! Try not to leave\n"
	.string "me totally in your dust, okay?$"

NautirustForest_Trainer_1_Text_0:
# 392 "data/maps/NautirustForest/scripts.pory"
	.string "Hah!\n"
	.string "Caught you!$"

NautirustForest_Trainer_1_Text_1:
# 395 "data/maps/NautirustForest/scripts.pory"
	.string "I got caught out!$"

NautirustForest_Trainer_1_Text_2:
# 399 "data/maps/NautirustForest/scripts.pory"
	.string "Found any cool bugs in the forest?$"

NautirustForest_Trainer_2_Text_0:
# 408 "data/maps/NautirustForest/scripts.pory"
	.string "TODO$"

NautirustForest_Trainer_2_Text_1:
# 414 "data/maps/NautirustForest/scripts.pory"
	.string "I lost my friend in the grass.\n"
	.string "Have you seen her anywhere?$"

NautirustForest_Trainer_3_Text_0:
# 424 "data/maps/NautirustForest/scripts.pory"
	.string "Eek!\n"
	.string "Something's rustling!$"

NautirustForest_Trainer_3_Text_1:
# 427 "data/maps/NautirustForest/scripts.pory"
	.string "Oh, it's just a person…$"

NautirustForest_Trainer_3_Text_2:
# 431 "data/maps/NautirustForest/scripts.pory"
	.string "Eek!\n"
	.string "Don't scare me like that!$"

NautirustForest_Trainer_5_Text_0:
# 456 "data/maps/NautirustForest/scripts.pory"
	.string "$"
