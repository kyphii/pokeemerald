MarinacreTown_MapScripts::
# 6 "data/maps/MarinacreTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarinacreTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/MarinacreTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 21 "data/maps/MarinacreTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MarinacreTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MarinacreTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	return

MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_INTRO_SEQUENCE_STATE
# 11 "data/maps/MarinacreTown/scripts.pory"
	case 1, MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 17 "data/maps/MarinacreTown/scripts.pory"
	case 7, MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 12 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 30, 31
# 13 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BAG, 28, 38
# 16 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 5
	return

MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 18 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 31, 11
	return

MarinacreTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/MarinacreTown/scripts.pory"
	map_script_2 VAR_INTRO_SEQUENCE_STATE, 7, MarinacreTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

MarinacreTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 23 "data/maps/MarinacreTown/scripts.pory"
	goto MarinacreTown_Intro_LeaveWithRivalScene
	return


HomeTown_Trigger_CutMusic::
# 29 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HomeTown_Trigger_CutMusic_2
HomeTown_Trigger_CutMusic_1:
# 33 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_Trigger_CutMusic_2:
# 30 "data/maps/MarinacreTown/scripts.pory"
	fadeoutbgm 2
# 31 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto HomeTown_Trigger_CutMusic_1


HomeTown_Trigger_RestoreMusic::
# 37 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq HomeTown_Trigger_RestoreMusic_2
HomeTown_Trigger_RestoreMusic_1:
# 41 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_Trigger_RestoreMusic_2:
# 38 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 2
# 39 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 0
	goto HomeTown_Trigger_RestoreMusic_1


HomeTown_TownSign::
# 45 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_TownSign_Text_0, MSGBOX_SIGN
	return


HomeTown_PlayerMailbox::
# 54 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_PlayerMailbox_Text_0, MSGBOX_SIGN
	return


HomeTown_IntroPreventLeave::
# 61 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 62 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 63 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, Common_Movement_ExclamationMark
# 64 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 65 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_GATEKEEPER, DIR_SOUTH
# 66 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 68 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_IntroPreventLeave_Text_0
# 71 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 73 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 74 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 76 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_3
# 80 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_4
# 84 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_5
HomeTown_IntroPreventLeave_1:
# 89 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 92 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroPreventLeave_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 102 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_3
# 103 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 106 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 108 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_8
# 113 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_9
# 118 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_10
HomeTown_IntroPreventLeave_6:
# 124 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_IntroPreventLeave_3:
# 77 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_0
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_4:
# 81 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_1
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_5:
# 85 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_2
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_8:
# 109 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_4
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_9:
# 114 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_5
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_10:
# 119 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_6
	goto HomeTown_IntroPreventLeave_6


HomeTown_IntroTalkGatekeeper::
# 130 "data/maps/MarinacreTown/scripts.pory"
	lock
# 131 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 132 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroTalkGatekeeper_Text_0, MSGBOX_DEFAULT
# 140 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 141 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_IntroBlockMart::
# 145 "data/maps/MarinacreTown/scripts.pory"
	lock
# 146 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 147 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroBlockMart_Text_0, MSGBOX_DEFAULT
# 156 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 157 "data/maps/MarinacreTown/scripts.pory"
	release
	return


MarinacreTown_Intro_LeaveWithRivalScene::
# 161 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 163 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, MarinacreTown_Intro_LeaveWithRivalScene_Movement_0
# 166 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 168 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_0, MSGBOX_DEFAULT
# 174 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 176 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, MarinacreTown_Intro_LeaveWithRivalScene_Movement_1
# 185 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, MarinacreTown_Intro_LeaveWithRivalScene_Movement_2
# 194 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 195 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_1, MSGBOX_DEFAULT
# 201 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 202 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_2, MSGBOX_DEFAULT
# 218 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 220 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_3, MSGBOX_DEFAULT
# 234 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 236 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, MarinacreTown_Intro_LeaveWithRivalScene_Movement_3
# 242 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 243 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_RIVAL
# 244 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 0, 47
# 245 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 8
# 247 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return


HomeTown_BeachScene1_Start::
# 251 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 252 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 2
# 253 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 256 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 257 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 259 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 260 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 262 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_0, MSGBOX_DEFAULT
# 267 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 270 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 271 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8008
# 272 "data/maps/MarinacreTown/scripts.pory"
	case 29, HomeTown_BeachScene1_Start_3
# 280 "data/maps/MarinacreTown/scripts.pory"
	case 30, HomeTown_BeachScene1_Start_4
# 287 "data/maps/MarinacreTown/scripts.pory"
	case 31, HomeTown_BeachScene1_Start_5
HomeTown_BeachScene1_Start_1:
# 293 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 295 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 298 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_1, MSGBOX_DEFAULT
# 308 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 309 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 310 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 311 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_2, MSGBOX_DEFAULT
# 320 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 322 "data/maps/MarinacreTown/scripts.pory"
	fadeoutbgm 3
# 323 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 324 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 325 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_3, MSGBOX_DEFAULT
# 345 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_WEST
# 346 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 347 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_4, MSGBOX_DEFAULT
# 353 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_3
# 356 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_5, MSGBOX_DEFAULT
# 368 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 370 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_EndMonologue
# 371 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 372 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_EndMonologue
# 373 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/MarinacreTown/scripts.pory"
	delay 100
# 377 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 378 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_QuestionMark
# 379 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 380 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 381 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_6, MSGBOX_DEFAULT
# 385 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 388 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_WalkToBag
# 389 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 390 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_WalkToBag
# 391 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 395 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_7, MSGBOX_DEFAULT
# 401 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 402 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_4
# 405 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 406 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 407 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 408 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 409 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 410 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 411 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_5
# 422 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 423 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_8, MSGBOX_DEFAULT
# 428 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 429 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 430 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_9, MSGBOX_DEFAULT
# 435 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 436 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 437 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 438 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_10, MSGBOX_DEFAULT
# 441 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 444 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 445 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_6
# 448 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 449 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 450 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 451 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_GRASS, 27, 35
# 452 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_GRASS
# 453 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 454 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 455 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 456 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_FIRE, 28, 35
# 457 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_FIRE
# 458 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 459 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 460 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 461 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_WATER, 29, 35
# 462 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_WATER
# 463 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 464 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_7
# 468 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 471 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 472 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 473 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_GRASS, 27, 35
# 474 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_FIRE, 28, 35
# 475 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_WATER, 29, 35
# 476 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_GRASS
# 477 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_FIRE
# 478 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_WATER
# 479 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_GRASS
# 480 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_FIRE
# 481 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_WATER
# 482 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 483 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 484 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 485 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_FIRE, HomeTown_BeachScene1_StarterReact
# 486 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 487 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 488 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_GRASS, HomeTown_BeachScene1_StarterReact
# 489 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 490 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 491 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_WATER, HomeTown_BeachScene1_StarterReact
# 492 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 495 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_8
# 500 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 501 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_11, MSGBOX_DEFAULT
# 504 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 505 "data/maps/MarinacreTown/scripts.pory"
	releaseall
# 506 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 507 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 510 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 511 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 512 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 513 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_12, MSGBOX_DEFAULT
# 520 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 521 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 522 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 523 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 524 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_13, MSGBOX_DEFAULT
# 535 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 536 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 537 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 538 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 539 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_14
# 544 "data/maps/MarinacreTown/scripts.pory"
	dynmultichoice 25, 6, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, HomeTown_BeachScene1_Start_Text_15, HomeTown_BeachScene1_Start_Text_16, HomeTown_BeachScene1_Start_Text_17
# 546 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_RESULT
# 547 "data/maps/MarinacreTown/scripts.pory"
	case 0, HomeTown_BeachScene1_Start_8
# 556 "data/maps/MarinacreTown/scripts.pory"
	case 1, HomeTown_BeachScene1_Start_9
# 567 "data/maps/MarinacreTown/scripts.pory"
	case 2, HomeTown_BeachScene1_Start_10
HomeTown_BeachScene1_Start_6:
# 580 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 581 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 582 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 583 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 584 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 585 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 586 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 587 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 1
# 588 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 589 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_21, MSGBOX_DEFAULT
# 605 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 606 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 607 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 608 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 609 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_22, MSGBOX_DEFAULT
# 616 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 617 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_23
# 622 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 624 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Start_3:
# 273 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_0
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_4:
# 281 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_1
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_5:
# 288 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_2
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_8:
# 548 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_18, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_9:
# 557 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_19, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_10:
# 568 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_20, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6


HomeTown_BeachScene1_ExamineStarterGrass::
# 628 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_TURTWIG
# 629 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_GRASS
# 630 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterGrass_Text_0
# 631 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 632 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterFire::
# 636 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_FENNEKIN
# 637 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_FIRE
# 638 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterFire_Text_0
# 639 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 640 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterWater::
# 644 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_POPPLIO
# 645 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_WATER
# 646 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterWater_Text_0
# 647 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 648 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarter::
# 652 "data/maps/MarinacreTown/scripts.pory"
	lock
# 653 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 654 "data/maps/MarinacreTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8000
# 655 "data/maps/MarinacreTown/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 656 "data/maps/MarinacreTown/scripts.pory"
	playmoncry VAR_0x8000, 0
# 657 "data/maps/MarinacreTown/scripts.pory"
	waitmoncry
# 658 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_ExamineStarter_Text_0, MSGBOX_YESNO
# 663 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_ExamineStarter_1
# 667 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 668 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 669 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_BeachScene1_ExamineStarter_1:
# 664 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_TakeStarter
	return


HomeTown_BeachScene1_TakeStarter::
# 674 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 675 "data/maps/MarinacreTown/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 676 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_BeachScene1_TakeStarter_Text_0
# 677 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 678 "data/maps/MarinacreTown/scripts.pory"
	waitfanfare
# 679 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 680 "data/maps/MarinacreTown/scripts.pory"
	release
# 681 "data/maps/MarinacreTown/scripts.pory"
	removeobject VAR_0x8001
# 683 "data/maps/MarinacreTown/scripts.pory"
	givemon VAR_0x8000, 5
# 684 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 685 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 686 "data/maps/MarinacreTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 687 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_TakeStarter_1
# 692 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return

HomeTown_BeachScene1_TakeStarter_1:
# 688 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 689 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return


HomeTown_BeachScene1_Finish::
# 697 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 698 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 699 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 700 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_0, MSGBOX_DEFAULT
# 704 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 707 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_0
# 712 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 713 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BAG
# 714 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_1
# 719 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Finish_Movement_2
# 724 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 727 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_3
# 730 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 731 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_ne HomeTown_BeachScene1_Finish_2
HomeTown_BeachScene1_Finish_1:
# 735 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_ne HomeTown_BeachScene1_Finish_5
# 742 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 745 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_4:
# 747 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_ne HomeTown_BeachScene1_Finish_9
# 754 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 757 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_8:
# 761 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_4
# 766 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 767 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 768 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_1, MSGBOX_DEFAULT
# 774 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 777 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_5
# 784 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 785 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_RIVAL
# 786 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 0, 47
# 788 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_INTRO_MET_RIVAL
# 789 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 3
# 791 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Finish_2:
# 732 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 733 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_GRASS
	goto HomeTown_BeachScene1_Finish_1

HomeTown_BeachScene1_Finish_5:
# 736 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 737 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 738 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 739 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_FIRE
	goto HomeTown_BeachScene1_Finish_4

HomeTown_BeachScene1_Finish_9:
# 748 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 749 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 750 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 751 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_WATER
	goto HomeTown_BeachScene1_Finish_8


HomeTown_BeachScene1_PreventLeave::
# 795 "data/maps/MarinacreTown/scripts.pory"
	lock
# 796 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 797 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_PreventLeave_Movement_0
# 801 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 803 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_PreventLeave_Text_0, MSGBOX_DEFAULT
# 808 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 809 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_0
# 812 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 813 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_BeachScene1_FlavorTextBag::
# 817 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_FlavorTextBag_Text_0, MSGBOX_SIGN
	return


HomeTown_BeachScene1_TalkRival::
# 825 "data/maps/MarinacreTown/scripts.pory"
	lock
# 826 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 827 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_TalkRival_Text_0, MSGBOX_DEFAULT
# 832 "data/maps/MarinacreTown/scripts.pory"
	release
	return


# 835 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_EndMonologue:
# 836 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 836 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 839 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_WalkToBag:
# 840 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 840 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 841 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 841 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 841 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 842 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 843 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 846 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_GoToNextStarter:
# 847 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 848 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 851 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_StarterReact:
# 852 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 853 "data/maps/MarinacreTown/scripts.pory"
	face_down
# 854 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 854 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 855 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_down
# 856 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 857 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 858 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 859 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 860 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 77 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_0:
# 78 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 81 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_1:
# 82 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 82 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_2:
# 86 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 86 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 86 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_3:
# 102 "data/maps/MarinacreTown/scripts.pory"
	walk_right
	step_end

# 109 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_4:
# 110 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 111 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 114 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_5:
# 115 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 115 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 116 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 119 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_6:
# 120 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 120 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 120 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 121 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 163 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_0:
# 164 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 164 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 164 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 164 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 176 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_1:
# 177 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 177 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 177 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 177 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 177 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 179 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 179 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 179 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 181 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 181 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 182 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 182 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 182 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 182 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 182 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 183 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 185 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_2:
# 186 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 186 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 186 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 186 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 186 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 186 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 186 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 188 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 188 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 188 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 189 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 190 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 190 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 191 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 191 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 191 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 192 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 236 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_3:
# 237 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 238 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 239 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 239 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 240 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 240 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 240 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 240 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 240 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 240 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 240 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
	step_end

# 273 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_0:
# 274 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 275 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 275 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 276 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 277 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 278 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 281 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_1:
# 282 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 282 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 283 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 284 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 285 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 288 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_2:
# 289 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 289 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 289 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 290 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 353 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_3:
# 354 "data/maps/MarinacreTown/scripts.pory"
	walk_in_place_right
# 354 "data/maps/MarinacreTown/scripts.pory"
	walk_in_place_right
	step_end

# 402 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_4:
# 403 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 404 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 411 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_5:
# 412 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 412 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 413 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 413 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 414 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 415 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 416 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 417 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 418 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 419 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 420 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 445 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_6:
# 446 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 446 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 464 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_7:
# 465 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 465 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 466 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 495 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_8:
# 496 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_up
# 497 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_down
# 498 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 707 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_0:
# 708 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 709 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 710 "data/maps/MarinacreTown/scripts.pory"
	delay_16
	step_end

# 714 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_1:
# 715 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 716 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 717 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 719 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_2:
# 720 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 721 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 721 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 722 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 727 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_3:
# 728 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 761 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_4:
# 762 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 763 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 763 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 764 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 777 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_5:
# 778 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 779 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 779 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 780 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 781 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 781 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 782 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 782 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 782 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 782 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 782 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
	step_end

# 797 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_PreventLeave_Movement_0:
# 798 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 799 "data/maps/MarinacreTown/scripts.pory"
	face_player
	step_end

HomeTown_TownSign_Text_0:
# 46 "data/maps/MarinacreTown/scripts.pory"
	.string "MARINACRE TOWN\n"
	.string "Gifts from the sea, sparkling in the\l"
	.string "rising sun.$"

HomeTown_PlayerMailbox_Text_0:
# 55 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

HomeTown_IntroPreventLeave_Text_0:
# 69 "data/maps/MarinacreTown/scripts.pory"
	.string "Excuse me!$"

HomeTown_IntroPreventLeave_Text_1:
# 93 "data/maps/MarinacreTown/scripts.pory"
	.string "We're still working on the road out of\n"
	.string "town.\l"
	.string "The repairs are almost done, and we\l"
	.string "should be wrapping up in just a bit.\l"
	.string "Do you mind waiting a little bit longer?$"

HomeTown_IntroTalkGatekeeper_Text_0:
# 133 "data/maps/MarinacreTown/scripts.pory"
	.string "I'm with the road crew. We're working on \n"
	.string "the road out of town.\p"
	.string "We're just about finished. Please wait\n"
	.string "a little longer, okay?$"

HomeTown_IntroBlockMart_Text_0:
# 148 "data/maps/MarinacreTown/scripts.pory"
	.string "Hi.\n"
	.string "The PokéMart is closing up for today.\p"
	.string "If you need something, you'll have to \n"
	.string "come back tomorrow.\l"
	.string "Sorry!$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_0:
# 169 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hey, {PLAYER}!\n"
	.string "Perfect timing!\l"
	.string "Are you all ready to go?$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_1:
# 196 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, you got a Pokédex! Cool!\n"
	.string "Always prepared for everything, aren't\l"
	.string "you?$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_2:
# 203 "data/maps/MarinacreTown/scripts.pory"
	.string "It's exciting, isn't it?\p"
	.string "We'll explore the whole region, all on\n"
	.string "our own…{PAUSE 10}\l"
	.string "Away{PAUSE 10} from{PAUSE 20} home…\p"
	.string "I-{PAUSE 20}\p"
	.string "…I talked about it with my parents.\n"
	.string "They're cool with it.\p"
	.string "I guess they'll call me once Dad\n"
	.string "makes a decision about that job…$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_3:
# 221 "data/maps/MarinacreTown/scripts.pory"
	.string "Well, let's take the road west out\n"
	.string "of town.\p"
	.string "Professor Hawthorn gave us two\n"
	.string "places to look for clues.\p"
	.string "We can decide which direction\n"
	.string "to go once we reach the next city.\p"
	.string "Alright, {PLAYER}!\n"
	.string "Let's go!$"

HomeTown_BeachScene1_Start_Text_0:
# 263 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Oh, {PLAYER}!\n"
	.string "I was hoping I'd run into you!$"

HomeTown_BeachScene1_Start_Text_1:
# 299 "data/maps/MarinacreTown/scripts.pory"
	.string "Huh? Why?\p"
	.string "…{PAUSE 30}I just wanted to hang out, dude.\n"
	.string "Does there have to be a reason?\p"
	.string "I feel like it's been too long since we\n"
	.string "just chilled here together.$"

HomeTown_BeachScene1_Start_Text_2:
# 312 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, remember when we found that\n"
	.string "Shellder in the sand?\l"
	.string "…{PAUSE 30}And then I stuck it in my mom's purse?\p"
	.string "Her face when she found it - man, that\n"
	.string "was so worth getting grounded for!$"

HomeTown_BeachScene1_Start_Text_3:
# 326 "data/maps/MarinacreTown/scripts.pory"
	.string "…{PAUSE 30}So…\p"
	.string "You know how my dad's been looking\n"
	.string "for a new job, right?\p"
	.string "After his old place got bought out by\n"
	.string "Devon International?\p"
	.string "Well, he's been going on a bunch of\n"
	.string "interviews, and he finally got an offer!\l"
	.string "That's good, right?\p"
	.string "He hasn't made a decision if he's gonna\n"
	.string "accept it yet, but it's apparently, like,\l"
	.string "really good money.\p"
	.string "But if he takes it…$"

HomeTown_BeachScene1_Start_Text_4:
# 348 "data/maps/MarinacreTown/scripts.pory"
	.string "Anyways, I had a talk with my family\n"
	.string "about it.\l"
	.string "Well, I guess less of a talk, and more…$"

HomeTown_BeachScene1_Start_Text_5:
# 359 "data/maps/MarinacreTown/scripts.pory"
	.string "…Gah, forget it!\p"
	.string "Don't worry about it.\n"
	.string "I just wanna sit here and take in the\l"
	.string "scenery.\p"
	.string "C'mon, let's just chill!$"

HomeTown_BeachScene1_Start_Text_6:
# 382 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, what's that over there?$"

HomeTown_BeachScene1_Start_Text_7:
# 396 "data/maps/MarinacreTown/scripts.pory"
	.string "Oh, it's an old bag.\n"
	.string "Must've washed up here.\l"
	.string "Just trash, I guess.$"

HomeTown_BeachScene1_Start_Text_8:
# 424 "data/maps/MarinacreTown/scripts.pory"
	.string "Wait a second!{PAUSE 30} {PLAYER}! Look!\n"
	.string "There are Poké Balls in here!$"

HomeTown_BeachScene1_Start_Text_9:
# 431 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think…{PAUSE 30} there's anything\n"
	.string "in them?$"

HomeTown_BeachScene1_Start_Text_10:
# 439 "data/maps/MarinacreTown/scripts.pory"
	.string "We should probably check, huh?$"

HomeTown_BeachScene1_Start_Text_11:
# 502 "data/maps/MarinacreTown/scripts.pory"
	.string "Woah!$"

HomeTown_BeachScene1_Start_Text_12:
# 514 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}! These Pokémon belong\n"
	.string "to someone!\l"
	.string "Their trainer must've lost that bag \l"
	.string "in the ocean!$"

HomeTown_BeachScene1_Start_Text_13:
# 525 "data/maps/MarinacreTown/scripts.pory"
	.string "They look…{PAUSE 30} \n"
	.string "confused, don't they?\p"
	.string "Like they haven't been let out in a \n"
	.string "really long time.\p"
	.string "How long were they drifting out in\n"
	.string "the sea?$"

HomeTown_BeachScene1_Start_Text_14:
# 540 "data/maps/MarinacreTown/scripts.pory"
	.string "What should we do about this,\n"
	.string "{PLAYER}?\l"
	.string "Got any ideas?$"

HomeTown_BeachScene1_Start_Text_15:
# 545 "data/maps/MarinacreTown/scripts.pory"
	.string "No clue$"

HomeTown_BeachScene1_Start_Text_16:
# 545 "data/maps/MarinacreTown/scripts.pory"
	.string "Look for their trainer$"

HomeTown_BeachScene1_Start_Text_17:
# 545 "data/maps/MarinacreTown/scripts.pory"
	.string "Finders keepers$"

HomeTown_BeachScene1_Start_Text_18:
# 549 "data/maps/MarinacreTown/scripts.pory"
	.string "Yeah, me neither.\p"
	.string "I wanna say we should try to return\n"
	.string "them to their trainer, but…\l"
	.string "where would we even start?$"

HomeTown_BeachScene1_Start_Text_19:
# 558 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think there's a shot?\n"
	.string "It'd be the right thing to do, but…\p"
	.string "…{PAUSE 30}Who knows where they drifted in from,\n"
	.string "or how long they've been out there?\p"
	.string "Where would we even start looking?$"

HomeTown_BeachScene1_Start_Text_20:
# 569 "data/maps/MarinacreTown/scripts.pory"
	.string "…You really think so?\n"
	.string "I guess it'd be hard to track down\l"
	.string "their original trainer…\p"
	.string "But I feel like we should at least try,\n"
	.string "you know? Like, maybe…\p"
	.string "…{PAUSE 30}Nevermind. I got nothing.$"

HomeTown_BeachScene1_Start_Text_21:
# 590 "data/maps/MarinacreTown/scripts.pory"
	.string "Wait, I have an idea!\n"
	.string "We should take these Pokémon to\l"
	.string "Professor Hawthorn!\p"
	.string "She's the Pokémon professor for the\n"
	.string "Wohnet Region.\p"
	.string "If anyone can help, it'll be her.\n"
	.string "Her lab is just up the road on Route 1!\p"
	.string "…{PAUSE 30}Hmm, but the road is a bit rough\n"
	.string "right now.\l"
	.string "What if wild Pokémon attacked us?$"

HomeTown_BeachScene1_Start_Text_22:
# 610 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}, how about we each keep one \n"
	.string "of these Pokémon for the trip?\p"
	.string "Yeah, that sounds like a plan!$"

HomeTown_BeachScene1_Start_Text_23:
# 618 "data/maps/MarinacreTown/scripts.pory"
	.string "Go ahead, {PLAYER}!\n"
	.string "You pick first!$"

HomeTown_BeachScene1_ExamineStarterGrass_Text_0:
# 630 "data/maps/MarinacreTown/scripts.pory"
	.string "Grass$"

HomeTown_BeachScene1_ExamineStarterFire_Text_0:
# 638 "data/maps/MarinacreTown/scripts.pory"
	.string "Fire$"

HomeTown_BeachScene1_ExamineStarterWater_Text_0:
# 646 "data/maps/MarinacreTown/scripts.pory"
	.string "Water$"

HomeTown_BeachScene1_ExamineStarter_Text_0:
# 659 "data/maps/MarinacreTown/scripts.pory"
	.string "{STR_VAR_1}\n"
	.string "The {STR_VAR_2}-type Pokémon\p"
	.string "Take {STR_VAR_1} with you?$"

HomeTown_BeachScene1_TakeStarter_Text_0:
# 676 "data/maps/MarinacreTown/scripts.pory"
	.string "You took {STR_VAR_1} with you!$"

HomeTown_BeachScene1_Finish_Text_0:
# 701 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright, then!\n"
	.string "I'll bring the rest!$"

HomeTown_BeachScene1_Finish_Text_1:
# 769 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright then! Let's not waste any time!\n"
	.string "I'll meet you at Professor Hawthorn's\l"
	.string "lab!$"

HomeTown_BeachScene1_PreventLeave_Text_0:
# 804 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hey, where are you going?\n"
	.string "Don't leave now!$"

HomeTown_BeachScene1_FlavorTextBag_Text_0:
# 818 "data/maps/MarinacreTown/scripts.pory"
	.string "It's been bleached by the sun,\n"
	.string "and pummeled by waves.$"

HomeTown_BeachScene1_TalkRival_Text_0:
# 828 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hurry up and pick one!\n"
	.string "Uh, no rush, though!$"
