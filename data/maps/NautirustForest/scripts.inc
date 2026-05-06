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
	removeobject LOCALID_ROUTE2_MAYA, MAP_ROUTE2
# 41 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_RivalFollowOrRace_Text_0
# 46 "data/maps/NautirustForest/scripts.pory"
	dynmultichoice 16, 4, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, NautirustForest_Intro_RivalFollowOrRace_Text_1, NautirustForest_Intro_RivalFollowOrRace_Text_2
# 50 "data/maps/NautirustForest/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/NautirustForest/scripts.pory"
	case 0, NautirustForest_Intro_RivalFollowOrRace_2
# 70 "data/maps/NautirustForest/scripts.pory"
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
	clearflag FLAG_INTRO_CLEAR_EXTRA_FOREST_TRAINERS
# 69 "data/maps/NautirustForest/scripts.pory"
	goto NautirustForest_Intro_SetupRivalFollower
	return

NautirustForest_Intro_RivalFollowOrRace_3:
# 71 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_RivalFollowOrRace_Text_4, MSGBOX_DEFAULT
# 75 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 76 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_NORTH
# 78 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_RivalFollowOrRace_Text_5, MSGBOX_DEFAULT
# 85 "data/maps/NautirustForest/scripts.pory"
	message NautirustForest_Intro_RivalFollowOrRace_Text_6
# 88 "data/maps/NautirustForest/scripts.pory"
	delay 70
# 89 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 11
# 91 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH_PROGRESS, 0
# 92 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_MOVEMENT_PATH, 1
# 94 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_PERSIST_NPC, LOCALID_WOODS_RIVAL
# 96 "data/maps/NautirustForest/scripts.pory"
	releaseall
# 97 "data/maps/NautirustForest/scripts.pory"
	waitmessage
# 98 "data/maps/NautirustForest/scripts.pory"
	closemessage
	return


NautirustForest_Intro_SetupRivalFollower::
# 104 "data/maps/NautirustForest/scripts.pory"
	switch VAR_STARTER_MON
# 105 "data/maps/NautirustForest/scripts.pory"
	case 0, NautirustForest_Intro_SetupRivalFollower_3
# 107 "data/maps/NautirustForest/scripts.pory"
	case 1, NautirustForest_Intro_SetupRivalFollower_4
# 109 "data/maps/NautirustForest/scripts.pory"
	case 2, NautirustForest_Intro_SetupRivalFollower_5
NautirustForest_Intro_SetupRivalFollower_1:
# 112 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_SetupRivalFollower_3:
# 106 "data/maps/NautirustForest/scripts.pory"
	setfollowernpc LOCALID_WOODS_RIVAL, FNPC_WHITE_OUT, NautirustForest_Intro_TalkRivalFollower, PARTNER_INTRO_RIVAL_FIRE
	goto NautirustForest_Intro_SetupRivalFollower_1

NautirustForest_Intro_SetupRivalFollower_4:
# 108 "data/maps/NautirustForest/scripts.pory"
	setfollowernpc LOCALID_WOODS_RIVAL, FNPC_WHITE_OUT, NautirustForest_Intro_TalkRivalFollower, PARTNER_INTRO_RIVAL_WATER
	goto NautirustForest_Intro_SetupRivalFollower_1

NautirustForest_Intro_SetupRivalFollower_5:
# 110 "data/maps/NautirustForest/scripts.pory"
	setfollowernpc LOCALID_WOODS_RIVAL, FNPC_WHITE_OUT, NautirustForest_Intro_TalkRivalFollower, PARTNER_INTRO_RIVAL_GRASS
	goto NautirustForest_Intro_SetupRivalFollower_1


NautirustForest_Intro_TalkRivalFollower::
# 116 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_TalkRivalFollower_Text_0
# 119 "data/maps/NautirustForest/scripts.pory"
	closemessage
	return


NautirustForest_Intro_FollowInterrupt::
# 123 "data/maps/NautirustForest/scripts.pory"
	lockall
# 124 "data/maps/NautirustForest/scripts.pory"
	facefollowernpc
# 125 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_FollowInterrupt_Text_0, MSGBOX_DEFAULT
# 132 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 134 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 135 "data/maps/NautirustForest/scripts.pory"
	compare VAR_0x8008, 28
	goto_if_eq NautirustForest_Intro_FollowInterrupt_2
# 146 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 29, 70
# 147 "data/maps/NautirustForest/scripts.pory"
	destroyfollowernpc
# 148 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 149 "data/maps/NautirustForest/scripts.pory"
	lockall
# 150 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowInterrupt_Movement_1
NautirustForest_Intro_FollowInterrupt_1:
# 156 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 157 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 27, 68
# 158 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 12
# 159 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_FollowInterrupt_2:
# 136 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 28, 70
# 137 "data/maps/NautirustForest/scripts.pory"
	destroyfollowernpc
# 138 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 139 "data/maps/NautirustForest/scripts.pory"
	lockall
# 140 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowInterrupt_Movement_0
	goto NautirustForest_Intro_FollowInterrupt_1


NautirustForest_Intro_FollowResume::
# 163 "data/maps/NautirustForest/scripts.pory"
	lockall
# 164 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_RivalFollowOrRace_Movement_0
# 167 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 168 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_SOUTH
# 169 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_FollowResume_Text_0, MSGBOX_DEFAULT
# 176 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 177 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 178 "data/maps/NautirustForest/scripts.pory"
	compare VAR_0x8008, 28
	goto_if_eq NautirustForest_Intro_FollowResume_2
# 184 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowResume_Movement_1
NautirustForest_Intro_FollowResume_1:
# 189 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 190 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 10
# 191 "data/maps/NautirustForest/scripts.pory"
	goto NautirustForest_Intro_SetupRivalFollower
	return

NautirustForest_Intro_FollowResume_2:
# 179 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_FollowResume_Movement_0
	goto NautirustForest_Intro_FollowResume_1


NautirustForest_Intro_EndFollower::
# 195 "data/maps/NautirustForest/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 196 "data/maps/NautirustForest/scripts.pory"
	switch VAR_0x8008
# 197 "data/maps/NautirustForest/scripts.pory"
	case 8, NautirustForest_Intro_EndFollower_3
# 199 "data/maps/NautirustForest/scripts.pory"
	case 9, NautirustForest_Intro_EndFollower_4
# 201 "data/maps/NautirustForest/scripts.pory"
	case 10, NautirustForest_Intro_EndFollower_5
NautirustForest_Intro_EndFollower_1:
# 205 "data/maps/NautirustForest/scripts.pory"
	destroyfollowernpc
# 206 "data/maps/NautirustForest/scripts.pory"
	addobject LOCALID_WOODS_RIVAL
# 208 "data/maps/NautirustForest/scripts.pory"
	addplayerlevel 1
# 210 "data/maps/NautirustForest/scripts.pory"
	lockall
# 211 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_SOUTH
# 212 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, Common_Movement_ExclamationMark
# 213 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 214 "data/maps/NautirustForest/scripts.pory"
	delay 60
# 215 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndFollower_Text_0, MSGBOX_DEFAULT
# 220 "data/maps/NautirustForest/scripts.pory"
	compare VAR_0x8008, 8
	goto_if_eq NautirustForest_Intro_EndFollower_7
# 227 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_1
NautirustForest_Intro_EndFollower_6:
# 232 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 234 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndFollower_Text_1, MSGBOX_DEFAULT
# 242 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 244 "data/maps/NautirustForest/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 19
# 246 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_RivalExit
# 247 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 249 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 250 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 251 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_EndFollower_3:
# 198 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 8, 67
	goto NautirustForest_Intro_EndFollower_1

NautirustForest_Intro_EndFollower_4:
# 200 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 9, 67
	goto NautirustForest_Intro_EndFollower_1

NautirustForest_Intro_EndFollower_5:
# 202 "data/maps/NautirustForest/scripts.pory"
	setobjectxyperm LOCALID_WOODS_RIVAL, 10, 67
	goto NautirustForest_Intro_EndFollower_1

NautirustForest_Intro_EndFollower_7:
# 221 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndFollower_Movement_0
	goto NautirustForest_Intro_EndFollower_6


NautirustForest_Intro_EndRace::
# 255 "data/maps/NautirustForest/scripts.pory"
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
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_EndRace_Movement_3
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
# 379 "data/maps/NautirustForest/scripts.pory"
	clearflag FLAG_INTRO_CLEAR_EXTRA_FOREST_TRAINERS
# 381 "data/maps/NautirustForest/scripts.pory"
	addplayerlevel 1
# 383 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, NautirustForest_Intro_RivalExit
# 384 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 386 "data/maps/NautirustForest/scripts.pory"
	removeobject LOCALID_WOODS_RIVAL
# 388 "data/maps/NautirustForest/scripts.pory"
	releaseall
	return

NautirustForest_Intro_EndRace_2:
# 257 "data/maps/NautirustForest/scripts.pory"
	lockall
# 258 "data/maps/NautirustForest/scripts.pory"
	turnobject LOCALID_WOODS_RIVAL, DIR_NORTH
# 260 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_0, MSGBOX_DEFAULT
# 264 "data/maps/NautirustForest/scripts.pory"
	closemessage
# 265 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_WOODS_RIVAL, Common_Movement_WalkInPlaceDown
# 266 "data/maps/NautirustForest/scripts.pory"
	waitmovement 0
# 267 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Intro_EndRace_Text_1, MSGBOX_DEFAULT
	goto NautirustForest_Intro_EndRace_1

NautirustForest_Intro_EndRace_7:
# 282 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_0
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_8:
# 288 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_1
	goto NautirustForest_Intro_EndRace_5

NautirustForest_Intro_EndRace_9:
# 293 "data/maps/NautirustForest/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustForest_Intro_EndRace_Movement_2
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
# 392 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_1, NautirustForest_Trainer_1_Text_0, NautirustForest_Trainer_1_Text_1
# 402 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_1_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_2::
# 409 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_2, NautirustForest_Trainer_2_Text_0, NautirustForest_Trainer_2_Text_1
# 419 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_2_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_3::
# 427 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_3, NautirustForest_Trainer_3_Text_0, NautirustForest_Trainer_3_Text_1
# 437 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_3_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_4::
# 445 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_4, NautirustForest_Trainer_4_Text_0, NautirustForest_Trainer_4_Text_1
# 455 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_4_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_5::
# 467 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_5, NautirustForest_Trainer_5_Text_0, NautirustForest_Trainer_5_Text_1
# 476 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_5_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_6::
# 484 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_6, NautirustForest_Trainer_6_Text_0, NautirustForest_Trainer_6_Text_1
# 494 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_6_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_7::
# 505 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_7, NautirustForest_Trainer_7_Text_0, NautirustForest_Trainer_7_Text_1
# 515 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_7_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_8::
# 523 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_8, NautirustForest_Trainer_8_Text_0, NautirustForest_Trainer_8_Text_1
# 533 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_8_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustForest_Trainer_9::
# 542 "data/maps/NautirustForest/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_FOREST_9, NautirustForest_Trainer_9_Text_0, NautirustForest_Trainer_9_Text_1
# 551 "data/maps/NautirustForest/scripts.pory"
	msgbox NautirustForest_Trainer_9_Text_2, MSGBOX_AUTOCLOSE
	return


# 558 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalExit:
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 559 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
	step_end

# 562 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_RivalRacePath::
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 563 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 564 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 566 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 567 "data/maps/NautirustForest/scripts.pory"
	face_right
# 568 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 569 "data/maps/NautirustForest/scripts.pory"
	face_up
# 570 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 572 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 572 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 572 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 573 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 574 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 574 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 574 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 574 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 575 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 575 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 575 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 575 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 576 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 577 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 577 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 577 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 578 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 578 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 579 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 580 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 580 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 581 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 581 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 582 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 582 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 582 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 583 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 585 "data/maps/NautirustForest/scripts.pory"
	emote_exclamation_mark
# 586 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 586 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 586 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 586 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 587 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 587 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 588 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 589 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 589 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 590 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 591 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 591 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_up
# 592 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 594 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 594 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 595 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 596 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 596 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 597 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 597 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 597 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 598 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 598 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 599 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 599 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 599 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 599 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 599 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 600 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 600 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 600 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 600 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 601 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 601 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 601 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 601 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 602 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 602 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 602 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 602 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 602 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 603 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 603 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 604 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 604 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 604 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 604 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 604 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 604 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 605 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 605 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 605 "data/maps/NautirustForest/scripts.pory"
	walk_fast_up
# 606 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 606 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 608 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 609 "data/maps/NautirustForest/scripts.pory"
	face_up
# 610 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 611 "data/maps/NautirustForest/scripts.pory"
	face_left
# 612 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 613 "data/maps/NautirustForest/scripts.pory"
	face_up
# 614 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 614 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 616 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 616 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 616 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 616 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 617 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 617 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 618 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 618 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 618 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 618 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 619 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 620 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 620 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 620 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 621 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 621 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 621 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 622 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 622 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 622 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 622 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 622 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 622 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 623 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 623 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 623 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 624 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 626 "data/maps/NautirustForest/scripts.pory"
	emote_exclamation_mark
# 627 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 627 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 627 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 627 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 628 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 628 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 629 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 630 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 630 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 631 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 632 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 632 "data/maps/NautirustForest/scripts.pory"
	jump_in_place_down
# 633 "data/maps/NautirustForest/scripts.pory"
	delay_16
# 635 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 635 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 635 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 635 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 636 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 636 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 637 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 637 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 638 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 638 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 638 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 638 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 639 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 639 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 639 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 639 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 639 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 640 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 640 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 640 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 640 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 640 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 642 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 642 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 642 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 643 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 644 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 645 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 645 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 645 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 646 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 646 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 647 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 647 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 647 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 648 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 648 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 648 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 649 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 649 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 649 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 651 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 652 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 652 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 652 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 652 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 653 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 653 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 654 "data/maps/NautirustForest/scripts.pory"
	walk_fast_right
# 655 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 655 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 655 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 655 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 656 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 656 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 656 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 657 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 658 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 659 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 660 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 660 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 660 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 662 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 663 "data/maps/NautirustForest/scripts.pory"
	walk_fast_left
# 664 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 664 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 664 "data/maps/NautirustForest/scripts.pory"
	walk_fast_down
# 664 "data/maps/NautirustForest/scripts.pory"
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

# 140 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowInterrupt_Movement_0:
# 141 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 141 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 141 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 141 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 141 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 142 "data/maps/NautirustForest/scripts.pory"
	face_down
	step_end

# 150 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowInterrupt_Movement_1:
# 151 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 152 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 152 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 152 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 152 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 152 "data/maps/NautirustForest/scripts.pory"
	walk_up
# 153 "data/maps/NautirustForest/scripts.pory"
	face_down
	step_end

# 179 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowResume_Movement_0:
# 180 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 184 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_FollowResume_Movement_1:
# 185 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 185 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 186 "data/maps/NautirustForest/scripts.pory"
	face_right
	step_end

# 221 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndFollower_Movement_0:
# 222 "data/maps/NautirustForest/scripts.pory"
	walk_right
# 223 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 223 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndFollower_Movement_1:
# 228 "data/maps/NautirustForest/scripts.pory"
	walk_left
# 229 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 229 "data/maps/NautirustForest/scripts.pory"
	walk_down
	step_end

# 282 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_0:
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
NautirustForest_Intro_EndRace_Movement_1:
# 289 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 289 "data/maps/NautirustForest/scripts.pory"
	walk_down
# 290 "data/maps/NautirustForest/scripts.pory"
	face_up
	step_end

# 293 "data/maps/NautirustForest/scripts.pory"
NautirustForest_Intro_EndRace_Movement_2:
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
NautirustForest_Intro_EndRace_Movement_3:
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
# 72 "data/maps/NautirustForest/scripts.pory"
	.string "Oh, you know me too well, dude.$"

NautirustForest_Intro_RivalFollowOrRace_Text_5:
# 79 "data/maps/NautirustForest/scripts.pory"
	.string "Alright! First one out of the forest\n"
	.string "wins!\p"
	.string "Ready? On three!$"

NautirustForest_Intro_RivalFollowOrRace_Text_6:
# 86 "data/maps/NautirustForest/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 30}Three!$"

NautirustForest_Intro_TalkRivalFollower_Text_0:
# 117 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Doing okay?$"

NautirustForest_Intro_FollowInterrupt_Text_0:
# 126 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Oh?\n"
	.string "Do you have to go back?\p"
	.string "I'll just wait here, okay?$"

NautirustForest_Intro_FollowResume_Text_0:
# 170 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: There you are!\n"
	.string "All good?\p"
	.string "C'mon, let's get going already!$"

NautirustForest_Intro_EndFollower_Text_0:
# 216 "data/maps/NautirustForest/scripts.pory"
	.string "MAYA: Look! There's the exit!$"

NautirustForest_Intro_EndFollower_Text_1:
# 235 "data/maps/NautirustForest/scripts.pory"
	.string "We should be pretty close to \n"
	.string "the city now.\p"
	.string "This was good fun! Let's meet up on \n"
	.string "ahead, okay?$"

NautirustForest_Intro_EndRace_Text_0:
# 261 "data/maps/NautirustForest/scripts.pory"
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
# 395 "data/maps/NautirustForest/scripts.pory"
	.string "There are so many bugs in the woods!\n"
	.string "Let me show you!$"

NautirustForest_Trainer_1_Text_1:
# 398 "data/maps/NautirustForest/scripts.pory"
	.string "Huh? I ran out of bugs!$"

NautirustForest_Trainer_1_Text_2:
# 403 "data/maps/NautirustForest/scripts.pory"
	.string "Shh! You'll scare the bugs away!$"

NautirustForest_Trainer_2_Text_0:
# 412 "data/maps/NautirustForest/scripts.pory"
	.string "I want to catch a bunch of different \n"
	.string "Pokémon!$"

NautirustForest_Trainer_2_Text_1:
# 415 "data/maps/NautirustForest/scripts.pory"
	.string "I'm sorry, my Pokémon!$"

NautirustForest_Trainer_2_Text_2:
# 420 "data/maps/NautirustForest/scripts.pory"
	.string "I came here to catch lots of Pokémon, \n"
	.string "but I forgot to bring any Poké Balls…$"

NautirustForest_Trainer_3_Text_0:
# 430 "data/maps/NautirustForest/scripts.pory"
	.string "Eek!\n"
	.string "Something's rustling!$"

NautirustForest_Trainer_3_Text_1:
# 433 "data/maps/NautirustForest/scripts.pory"
	.string "Oh, it's just a person…$"

NautirustForest_Trainer_3_Text_2:
# 438 "data/maps/NautirustForest/scripts.pory"
	.string "Eek!\n"
	.string "Don't scare me like that!$"

NautirustForest_Trainer_4_Text_0:
# 448 "data/maps/NautirustForest/scripts.pory"
	.string "I found the perfect strategy! You've \n"
	.string "got no chance against my poison!$"

NautirustForest_Trainer_4_Text_1:
# 451 "data/maps/NautirustForest/scripts.pory"
	.string "My strategy didn't work.$"

NautirustForest_Trainer_4_Text_2:
# 456 "data/maps/NautirustForest/scripts.pory"
	.string "What if there isn't a perfect strategy, \n"
	.string "and every one just has different \l"
	.string "strengths and weaknesses?\p"
	.string "…Nah, that can't be it. I should try \n"
	.string "using more poison.$"

NautirustForest_Trainer_5_Text_0:
# 470 "data/maps/NautirustForest/scripts.pory"
	.string "Found any cool Pokémon in the woods?$"

NautirustForest_Trainer_5_Text_1:
# 472 "data/maps/NautirustForest/scripts.pory"
	.string "That's not what I was looking for!$"

NautirustForest_Trainer_5_Text_2:
# 477 "data/maps/NautirustForest/scripts.pory"
	.string "I lost my friend in the grass earlier.\n"
	.string "Have you seen her?$"

NautirustForest_Trainer_6_Text_0:
# 487 "data/maps/NautirustForest/scripts.pory"
	.string "A battle? All together?\n"
	.string "Sounds awesome!$"

NautirustForest_Trainer_6_Text_1:
# 490 "data/maps/NautirustForest/scripts.pory"
	.string "…Let's do something else.$"

NautirustForest_Trainer_6_Text_2:
# 495 "data/maps/NautirustForest/scripts.pory"
	.string "Battling against two trainers is so\n"
	.string "tough. There's so much more to think\l"
	.string "about.\p"
	.string "I'm not paid to think!$"

NautirustForest_Trainer_7_Text_0:
# 508 "data/maps/NautirustForest/scripts.pory"
	.string "I'm challenging myself! I'm not gonna \n"
	.string "leave until I win a Pokémon battle!$"

NautirustForest_Trainer_7_Text_1:
# 511 "data/maps/NautirustForest/scripts.pory"
	.string "Oh, now I have to go home and heal\n"
	.string "my Pokémon…$"

NautirustForest_Trainer_7_Text_2:
# 516 "data/maps/NautirustForest/scripts.pory"
	.string "All my Pokémon fainted…\n"
	.string "What am I gonna do now?$"

NautirustForest_Trainer_8_Text_0:
# 526 "data/maps/NautirustForest/scripts.pory"
	.string "I've been studying so hard at the \n"
	.string "Trainers' School!\l"
	.string "There's no way I lose!$"

NautirustForest_Trainer_8_Text_1:
# 530 "data/maps/NautirustForest/scripts.pory"
	.string "It all amounted to nothing!$"

NautirustForest_Trainer_8_Text_2:
# 534 "data/maps/NautirustForest/scripts.pory"
	.string "All my training didn't matter in a real \n"
	.string "battle… Maybe I should just stick to \l"
	.string "the simulator.$"

NautirustForest_Trainer_9_Text_0:
# 545 "data/maps/NautirustForest/scripts.pory"
	.string "Why the rush?\n"
	.string "Let's battle!$"

NautirustForest_Trainer_9_Text_1:
# 548 "data/maps/NautirustForest/scripts.pory"
	.string "Oh no!$"

NautirustForest_Trainer_9_Text_2:
# 552 "data/maps/NautirustForest/scripts.pory"
	.string "I saw a Pinsir off in the grass earlier.\n"
	.string "I need to catch it!$"
