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
# 51 "data/maps/MarinacreTown/scripts.pory"
	closemessage
	return


HomeTown_PlayerMailbox::
# 55 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_PlayerMailbox_Text_0, MSGBOX_SIGN
# 67 "data/maps/MarinacreTown/scripts.pory"
	closemessage
	return


HomeTown_MayaMailbox::
# 71 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_MayaMailbox_Text_0, MSGBOX_SIGN
# 76 "data/maps/MarinacreTown/scripts.pory"
	closemessage
	return


HomeTown_IntroPreventLeave::
# 80 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 81 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 82 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, Common_Movement_ExclamationMark
# 83 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 84 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_GATEKEEPER, DIR_SOUTH
# 85 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 87 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_IntroPreventLeave_Text_0
# 90 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 92 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 93 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 95 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_3
# 99 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_4
# 103 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_5
HomeTown_IntroPreventLeave_1:
# 108 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 111 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroPreventLeave_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 121 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_3
# 122 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 124 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 125 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 127 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_8
# 132 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_9
# 137 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_10
HomeTown_IntroPreventLeave_6:
# 143 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_IntroPreventLeave_3:
# 96 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_0
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_4:
# 100 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_1
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_5:
# 104 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_2
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_8:
# 128 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_4
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_9:
# 133 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_5
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_10:
# 138 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_6
	goto HomeTown_IntroPreventLeave_6


HomeTown_IntroTalkGatekeeper::
# 149 "data/maps/MarinacreTown/scripts.pory"
	lock
# 150 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 151 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroTalkGatekeeper_Text_0, MSGBOX_DEFAULT
# 159 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 160 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_IntroBlockMart::
# 164 "data/maps/MarinacreTown/scripts.pory"
	lock
# 165 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 166 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroBlockMart_Text_0, MSGBOX_DEFAULT
# 175 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 176 "data/maps/MarinacreTown/scripts.pory"
	release
	return


MarinacreTown_Intro_LeaveWithRivalScene::
# 180 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 182 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, MarinacreTown_Intro_LeaveWithRivalScene_Movement_0
# 185 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 186 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 187 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 195 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, MarinacreTown_Intro_LeaveWithRivalScene_Movement_1
# 204 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, MarinacreTown_Intro_LeaveWithRivalScene_Movement_2
# 213 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 214 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_1, MSGBOX_DEFAULT
# 220 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 221 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_3, MSGBOX_DEFAULT
# 253 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 255 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, MarinacreTown_Intro_LeaveWithRivalScene_Movement_3
# 261 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 262 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_RIVAL
# 263 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 0, 47
# 264 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 8
# 266 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return


HomeTown_BeachScene1_Start::
# 270 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 271 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 2
# 272 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 275 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 276 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 278 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 279 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 281 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_0, MSGBOX_DEFAULT
# 286 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 289 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 290 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8008
# 291 "data/maps/MarinacreTown/scripts.pory"
	case 29, HomeTown_BeachScene1_Start_3
# 299 "data/maps/MarinacreTown/scripts.pory"
	case 30, HomeTown_BeachScene1_Start_4
# 306 "data/maps/MarinacreTown/scripts.pory"
	case 31, HomeTown_BeachScene1_Start_5
HomeTown_BeachScene1_Start_1:
# 312 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 313 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 314 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 317 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_1, MSGBOX_DEFAULT
# 327 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 328 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 329 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 330 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_2, MSGBOX_DEFAULT
# 339 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 341 "data/maps/MarinacreTown/scripts.pory"
	fadeoutbgm 3
# 342 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 343 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 344 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_3, MSGBOX_DEFAULT
# 364 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_WEST
# 365 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 366 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_4, MSGBOX_DEFAULT
# 372 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_3
# 375 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 377 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_5, MSGBOX_DEFAULT
# 387 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 389 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_EndMonologue
# 390 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 391 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_EndMonologue
# 392 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 393 "data/maps/MarinacreTown/scripts.pory"
	delay 100
# 396 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 397 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_QuestionMark
# 398 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 399 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 400 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_6, MSGBOX_DEFAULT
# 404 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 407 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_WalkToBag
# 408 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 409 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_WalkToBag
# 410 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 411 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 414 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_7, MSGBOX_DEFAULT
# 420 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 421 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_4
# 424 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 425 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 426 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 427 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 428 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 429 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 430 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_5
# 441 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 442 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_8, MSGBOX_DEFAULT
# 447 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 448 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 449 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_9, MSGBOX_DEFAULT
# 454 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 455 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 456 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 457 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_10, MSGBOX_DEFAULT
# 460 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 463 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 464 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_6
# 467 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 468 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 469 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 470 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_GRASS, 27, 35
# 471 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_GRASS
# 472 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 473 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 474 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 475 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 476 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_FIRE, 28, 35
# 477 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_FIRE
# 478 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 479 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 480 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 481 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 482 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_WATER, 29, 35
# 483 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_WATER
# 484 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 485 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 486 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_7
# 490 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 493 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 494 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 495 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_GRASS, 27, 35
# 496 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_FIRE, 28, 35
# 497 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_WATER, 29, 35
# 498 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_GRASS
# 499 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_FIRE
# 500 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_WATER
# 501 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_GRASS
# 502 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_FIRE
# 503 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_WATER
# 504 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL_OPEN
# 505 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 506 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 507 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 508 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_FIRE, HomeTown_BeachScene1_StarterReact
# 509 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 510 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 511 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_GRASS, HomeTown_BeachScene1_StarterReact
# 512 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 513 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 514 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_WATER, HomeTown_BeachScene1_StarterReact
# 515 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 518 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_8
# 523 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 524 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_11, MSGBOX_DEFAULT
# 527 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 528 "data/maps/MarinacreTown/scripts.pory"
	releaseall
# 529 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 530 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 533 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 534 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 535 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 536 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_12, MSGBOX_DEFAULT
# 543 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 544 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 545 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 546 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 547 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_13, MSGBOX_DEFAULT
# 558 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 559 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 560 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 561 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 562 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_14
# 567 "data/maps/MarinacreTown/scripts.pory"
	dynmultichoice 25, 6, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, HomeTown_BeachScene1_Start_Text_15, HomeTown_BeachScene1_Start_Text_16, HomeTown_BeachScene1_Start_Text_17
# 569 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_RESULT
# 570 "data/maps/MarinacreTown/scripts.pory"
	case 0, HomeTown_BeachScene1_Start_8
# 579 "data/maps/MarinacreTown/scripts.pory"
	case 1, HomeTown_BeachScene1_Start_9
# 590 "data/maps/MarinacreTown/scripts.pory"
	case 2, HomeTown_BeachScene1_Start_10
HomeTown_BeachScene1_Start_6:
# 603 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 604 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 605 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 606 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 607 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 608 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 609 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 610 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 1
# 611 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 612 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_21, MSGBOX_DEFAULT
# 628 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 629 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 630 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 631 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 632 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_22, MSGBOX_DEFAULT
# 639 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 640 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_23
# 645 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 647 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Start_3:
# 292 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_0
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_4:
# 300 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_1
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_5:
# 307 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_2
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_8:
# 571 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_18, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_9:
# 580 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_19, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_10:
# 591 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_20, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6


HomeTown_BeachScene1_ExamineStarterGrass::
# 651 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_TURTWIG
# 652 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_GRASS
# 653 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterGrass_Text_0
# 654 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 655 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterFire::
# 659 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_FENNEKIN
# 660 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_FIRE
# 661 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterFire_Text_0
# 662 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 663 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterWater::
# 667 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_POPPLIO
# 668 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_WATER
# 669 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterWater_Text_0
# 670 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 671 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarter::
# 675 "data/maps/MarinacreTown/scripts.pory"
	lock
# 676 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 677 "data/maps/MarinacreTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8000
# 678 "data/maps/MarinacreTown/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 679 "data/maps/MarinacreTown/scripts.pory"
	playmoncry VAR_0x8000, 0
# 680 "data/maps/MarinacreTown/scripts.pory"
	waitmoncry
# 681 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_ExamineStarter_Text_0, MSGBOX_YESNO
# 686 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_ExamineStarter_1
# 690 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 691 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 692 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_BeachScene1_ExamineStarter_1:
# 687 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_TakeStarter
	return


HomeTown_BeachScene1_TakeStarter::
# 697 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 698 "data/maps/MarinacreTown/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 699 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_BeachScene1_TakeStarter_Text_0
# 700 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 701 "data/maps/MarinacreTown/scripts.pory"
	waitfanfare
# 702 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 703 "data/maps/MarinacreTown/scripts.pory"
	release
# 704 "data/maps/MarinacreTown/scripts.pory"
	removeobject VAR_0x8001
# 705 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 707 "data/maps/MarinacreTown/scripts.pory"
	givemon VAR_0x8000, 5
# 708 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 709 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 710 "data/maps/MarinacreTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 711 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_TakeStarter_1
# 716 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return

HomeTown_BeachScene1_TakeStarter_1:
# 712 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 713 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return


HomeTown_BeachScene1_Finish::
# 721 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 722 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 723 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 724 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_0, MSGBOX_DEFAULT
# 728 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 731 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_0
# 736 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 737 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BAG
# 738 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 739 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_1
# 744 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Finish_Movement_2
# 749 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 752 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_3
# 755 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 756 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_ne HomeTown_BeachScene1_Finish_2
HomeTown_BeachScene1_Finish_1:
# 761 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_ne HomeTown_BeachScene1_Finish_5
# 769 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 772 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_4:
# 774 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_ne HomeTown_BeachScene1_Finish_9
# 782 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 785 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_8:
# 789 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_4
# 794 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 795 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 796 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_1, MSGBOX_DEFAULT
# 802 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 805 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_5
# 812 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 813 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_RIVAL
# 814 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 0, 47
# 816 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_INTRO_MET_RIVAL
# 817 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 3
# 819 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Finish_2:
# 757 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 758 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_GRASS
# 759 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
	goto HomeTown_BeachScene1_Finish_1

HomeTown_BeachScene1_Finish_5:
# 762 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 763 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 764 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 765 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_FIRE
# 766 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
	goto HomeTown_BeachScene1_Finish_4

HomeTown_BeachScene1_Finish_9:
# 775 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 776 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 777 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 778 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_WATER
# 779 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
	goto HomeTown_BeachScene1_Finish_8


HomeTown_BeachScene1_PreventLeave::
# 823 "data/maps/MarinacreTown/scripts.pory"
	lock
# 824 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 825 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_PreventLeave_Movement_0
# 829 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 831 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_PreventLeave_Text_0, MSGBOX_DEFAULT
# 836 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 837 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_0
# 840 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 841 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_BeachScene1_FlavorTextBag::
# 845 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_FlavorTextBag_Text_0, MSGBOX_SIGN
	return


HomeTown_BeachScene1_TalkRival::
# 853 "data/maps/MarinacreTown/scripts.pory"
	lock
# 854 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 855 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_TalkRival_Text_0, MSGBOX_DEFAULT
# 860 "data/maps/MarinacreTown/scripts.pory"
	release
	return


# 863 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_EndMonologue:
# 864 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 864 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 867 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_WalkToBag:
# 868 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 868 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 869 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 869 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 869 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 870 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 871 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 874 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_GoToNextStarter:
# 875 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 876 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 879 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_StarterReact:
# 880 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 881 "data/maps/MarinacreTown/scripts.pory"
	face_down
# 882 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 882 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 883 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_down
# 884 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 885 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 886 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 887 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 888 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 96 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_0:
# 97 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 100 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_1:
# 101 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 101 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 104 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_2:
# 105 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 105 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 105 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 121 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_3:
# 121 "data/maps/MarinacreTown/scripts.pory"
	walk_right
	step_end

# 128 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_4:
# 129 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 130 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 133 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_5:
# 134 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 134 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 135 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 138 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_6:
# 139 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 139 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 139 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 140 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 182 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_0:
# 183 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 183 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 183 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 183 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_1:
# 196 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 196 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 196 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 196 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 196 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 197 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 198 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 198 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 198 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 199 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 200 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 200 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 201 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 201 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 201 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 201 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 201 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 202 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 204 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_2:
# 205 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 205 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 205 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 205 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 205 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 205 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 205 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 207 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 207 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 207 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 208 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 209 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 209 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 210 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 210 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 210 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 211 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 255 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_3:
# 256 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 257 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 258 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 258 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 259 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
	step_end

# 292 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_0:
# 293 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 294 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 294 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 295 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 296 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 297 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 300 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_1:
# 301 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 301 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 302 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 303 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 304 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 307 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_2:
# 308 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 308 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 308 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 309 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 372 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_3:
# 373 "data/maps/MarinacreTown/scripts.pory"
	walk_in_place_right
# 373 "data/maps/MarinacreTown/scripts.pory"
	walk_in_place_right
	step_end

# 421 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_4:
# 422 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 423 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 430 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_5:
# 431 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 431 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 432 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 432 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 433 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 434 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 435 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 436 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 437 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 438 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 439 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 464 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_6:
# 465 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 465 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 486 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_7:
# 487 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 487 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 488 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 518 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_8:
# 519 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_up
# 520 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_down
# 521 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 731 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_0:
# 732 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 733 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 734 "data/maps/MarinacreTown/scripts.pory"
	delay_16
	step_end

# 739 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_1:
# 740 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 741 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 742 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 744 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_2:
# 745 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 746 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 746 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 747 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 752 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_3:
# 753 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 789 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_4:
# 790 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 791 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 791 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 792 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 805 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_5:
# 806 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 807 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 807 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 808 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 809 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 809 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 810 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 810 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 810 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 810 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 810 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
	step_end

# 825 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_PreventLeave_Movement_0:
# 826 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 827 "data/maps/MarinacreTown/scripts.pory"
	face_player
	step_end

HomeTown_TownSign_Text_0:
# 46 "data/maps/MarinacreTown/scripts.pory"
	.string "MARINACRE TOWN\n"
	.string "Gifts from the sea, sparkling in the\l"
	.string "rising sun.$"

HomeTown_PlayerMailbox_Text_0:
# 56 "data/maps/MarinacreTown/scripts.pory"
	.string "It's your house's mailbox.\n"
	.string "What's inside?\p"
	.string "Spam, bills, bills, spam disguised\n"
	.string "as bills…\p"
	.string "-Uh oh!\n"
	.string "One of Mom's magazines!\l"
	.string "It's time to go!$"

HomeTown_MayaMailbox_Text_0:
# 72 "data/maps/MarinacreTown/scripts.pory"
	.string "This is Maya's house.\n"
	.string "Probably shouldn't look in the mailbox.$"

HomeTown_IntroPreventLeave_Text_0:
# 88 "data/maps/MarinacreTown/scripts.pory"
	.string "Excuse me!$"

HomeTown_IntroPreventLeave_Text_1:
# 112 "data/maps/MarinacreTown/scripts.pory"
	.string "We're still working on the road out of\n"
	.string "town.\l"
	.string "The repairs are almost done, and we\l"
	.string "should be wrapping up in just a bit.\l"
	.string "Do you mind waiting a little bit longer?$"

HomeTown_IntroTalkGatekeeper_Text_0:
# 152 "data/maps/MarinacreTown/scripts.pory"
	.string "I'm with the road crew. We're working on \n"
	.string "the road out of town.\p"
	.string "We're just about finished. Please wait\n"
	.string "a little longer, okay?$"

HomeTown_IntroBlockMart_Text_0:
# 167 "data/maps/MarinacreTown/scripts.pory"
	.string "Hi.\n"
	.string "The PokéMart is closing up for today.\p"
	.string "If you need something, you'll have to \n"
	.string "come back tomorrow.\l"
	.string "Sorry!$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_0:
# 188 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hey, {PLAYER}!\n"
	.string "Perfect timing!\l"
	.string "Are you all ready to go?$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_1:
# 215 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, you got a Pokédex! Cool!\n"
	.string "Always prepared for everything, aren't\l"
	.string "you?$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_2:
# 222 "data/maps/MarinacreTown/scripts.pory"
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
# 240 "data/maps/MarinacreTown/scripts.pory"
	.string "Well, let's take the road west out\n"
	.string "of town.\p"
	.string "Professor Hawthorn gave us two\n"
	.string "places to look for clues.\p"
	.string "We can decide which direction\n"
	.string "to go once we reach the next city.\p"
	.string "Alright, {PLAYER}!\n"
	.string "Let's go!$"

HomeTown_BeachScene1_Start_Text_0:
# 282 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Oh, {PLAYER}!\n"
	.string "I was hoping I'd run into you!$"

HomeTown_BeachScene1_Start_Text_1:
# 318 "data/maps/MarinacreTown/scripts.pory"
	.string "Huh? Why?\p"
	.string "…{PAUSE 30}I just wanted to hang out, dude.\n"
	.string "Does there have to be a reason?\p"
	.string "I feel like it's been too long since we\n"
	.string "just chilled here together.$"

HomeTown_BeachScene1_Start_Text_2:
# 331 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, remember when we found that\n"
	.string "Shellder in the sand?\l"
	.string "…{PAUSE 30}And then I stuck it in my mom's purse?\p"
	.string "Her face when she found it - man, that\n"
	.string "was so worth getting grounded for!$"

HomeTown_BeachScene1_Start_Text_3:
# 345 "data/maps/MarinacreTown/scripts.pory"
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
# 367 "data/maps/MarinacreTown/scripts.pory"
	.string "Anyways, I had a talk with my family\n"
	.string "about it.\l"
	.string "Well, I guess less of a talk, and more…$"

HomeTown_BeachScene1_Start_Text_5:
# 378 "data/maps/MarinacreTown/scripts.pory"
	.string "…Gah, forget it!\p"
	.string "Don't worry about it.\n"
	.string "I just wanna sit here and take in the\l"
	.string "scenery.\p"
	.string "C'mon, let's just chill!$"

HomeTown_BeachScene1_Start_Text_6:
# 401 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, what's that over there?$"

HomeTown_BeachScene1_Start_Text_7:
# 415 "data/maps/MarinacreTown/scripts.pory"
	.string "Oh, it's an old bag.\n"
	.string "Must've washed up here.\l"
	.string "Just trash, I guess.$"

HomeTown_BeachScene1_Start_Text_8:
# 443 "data/maps/MarinacreTown/scripts.pory"
	.string "Wait a second!{PAUSE 30} {PLAYER}! Look!\n"
	.string "There are Poké Balls in here!$"

HomeTown_BeachScene1_Start_Text_9:
# 450 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think…{PAUSE 30} there's anything\n"
	.string "in them?$"

HomeTown_BeachScene1_Start_Text_10:
# 458 "data/maps/MarinacreTown/scripts.pory"
	.string "We should probably check, huh?$"

HomeTown_BeachScene1_Start_Text_11:
# 525 "data/maps/MarinacreTown/scripts.pory"
	.string "Woah!$"

HomeTown_BeachScene1_Start_Text_12:
# 537 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}! These Pokémon belong\n"
	.string "to someone!\l"
	.string "Their trainer must've lost that bag \l"
	.string "in the ocean!$"

HomeTown_BeachScene1_Start_Text_13:
# 548 "data/maps/MarinacreTown/scripts.pory"
	.string "They look…{PAUSE 30} \n"
	.string "confused, don't they?\p"
	.string "Like they haven't been let out in a \n"
	.string "really long time.\p"
	.string "How long were they drifting out in\n"
	.string "the sea?$"

HomeTown_BeachScene1_Start_Text_14:
# 563 "data/maps/MarinacreTown/scripts.pory"
	.string "What should we do about this,\n"
	.string "{PLAYER}?\l"
	.string "Got any ideas?$"

HomeTown_BeachScene1_Start_Text_15:
# 568 "data/maps/MarinacreTown/scripts.pory"
	.string "No clue$"

HomeTown_BeachScene1_Start_Text_16:
# 568 "data/maps/MarinacreTown/scripts.pory"
	.string "Look for their trainer$"

HomeTown_BeachScene1_Start_Text_17:
# 568 "data/maps/MarinacreTown/scripts.pory"
	.string "Finders keepers$"

HomeTown_BeachScene1_Start_Text_18:
# 572 "data/maps/MarinacreTown/scripts.pory"
	.string "Yeah, me neither.\p"
	.string "I wanna say we should try to return\n"
	.string "them to their trainer, but…\l"
	.string "where would we even start?$"

HomeTown_BeachScene1_Start_Text_19:
# 581 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think there's a shot?\n"
	.string "It'd be the right thing to do, but…\p"
	.string "…{PAUSE 30}Who knows where they drifted in from,\n"
	.string "or how long they've been out there?\p"
	.string "Where would we even start looking?$"

HomeTown_BeachScene1_Start_Text_20:
# 592 "data/maps/MarinacreTown/scripts.pory"
	.string "…You really think so?\n"
	.string "I guess it'd be hard to track down\l"
	.string "their original trainer…\p"
	.string "But I feel like we should at least try,\n"
	.string "you know? Like, maybe…\p"
	.string "…{PAUSE 30}Nevermind. I got nothing.$"

HomeTown_BeachScene1_Start_Text_21:
# 613 "data/maps/MarinacreTown/scripts.pory"
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
# 633 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}, how about we each keep one \n"
	.string "of these Pokémon for the trip?\p"
	.string "Yeah, that sounds like a plan!$"

HomeTown_BeachScene1_Start_Text_23:
# 641 "data/maps/MarinacreTown/scripts.pory"
	.string "Go ahead, {PLAYER}!\n"
	.string "You pick first!$"

HomeTown_BeachScene1_ExamineStarterGrass_Text_0:
# 653 "data/maps/MarinacreTown/scripts.pory"
	.string "Grass$"

HomeTown_BeachScene1_ExamineStarterFire_Text_0:
# 661 "data/maps/MarinacreTown/scripts.pory"
	.string "Fire$"

HomeTown_BeachScene1_ExamineStarterWater_Text_0:
# 669 "data/maps/MarinacreTown/scripts.pory"
	.string "Water$"

HomeTown_BeachScene1_ExamineStarter_Text_0:
# 682 "data/maps/MarinacreTown/scripts.pory"
	.string "{STR_VAR_1}\n"
	.string "The {STR_VAR_2}-type Pokémon\p"
	.string "Take {STR_VAR_1} with you?$"

HomeTown_BeachScene1_TakeStarter_Text_0:
# 699 "data/maps/MarinacreTown/scripts.pory"
	.string "You took {STR_VAR_1} with you!$"

HomeTown_BeachScene1_Finish_Text_0:
# 725 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright, then!\n"
	.string "I'll bring the rest!$"

HomeTown_BeachScene1_Finish_Text_1:
# 797 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright then! Let's not waste any time!\n"
	.string "I'll meet you at Professor Hawthorn's\l"
	.string "lab!$"

HomeTown_BeachScene1_PreventLeave_Text_0:
# 832 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hey, where are you going?\n"
	.string "Don't leave now!$"

HomeTown_BeachScene1_FlavorTextBag_Text_0:
# 846 "data/maps/MarinacreTown/scripts.pory"
	.string "It's been bleached by the sun,\n"
	.string "and pummeled by waves.$"

HomeTown_BeachScene1_TalkRival_Text_0:
# 856 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hurry up and pick one!\n"
	.string "Uh, no rush, though!$"
