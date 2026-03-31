MarinacreTown_MapScripts::
# 6 "data/maps/MarinacreTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarinacreTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/MarinacreTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MarinacreTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	return

MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_INTRO_SEQUENCE_STATE, 1
	goto_if_eq MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 30, 31
# 12 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BAG, 28, 38
# 15 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 5
	return


HomeTown_Trigger_CutMusic::
# 21 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HomeTown_Trigger_CutMusic_2
HomeTown_Trigger_CutMusic_1:
# 25 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_Trigger_CutMusic_2:
# 22 "data/maps/MarinacreTown/scripts.pory"
	fadeoutbgm 2
# 23 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto HomeTown_Trigger_CutMusic_1


HomeTown_Trigger_RestoreMusic::
# 29 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq HomeTown_Trigger_RestoreMusic_2
HomeTown_Trigger_RestoreMusic_1:
# 33 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_Trigger_RestoreMusic_2:
# 30 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 2
# 31 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 0
	goto HomeTown_Trigger_RestoreMusic_1


HomeTown_TownSign::
# 37 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_TownSign_Text_0, MSGBOX_SIGN
	return


HomeTown_PlayerMailbox::
# 46 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_PlayerMailbox_Text_0, MSGBOX_SIGN
	return


HomeTown_IntroPreventLeave::
# 53 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 54 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 55 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, Common_Movement_ExclamationMark
# 56 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_GATEKEEPER, DIR_SOUTH
# 58 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 60 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_IntroPreventLeave_Text_0
# 63 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 65 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 66 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 68 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_3
# 72 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_4
# 76 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_5
HomeTown_IntroPreventLeave_1:
# 81 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 84 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroPreventLeave_Text_1, MSGBOX_DEFAULT
# 92 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 94 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_3
# 95 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 98 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 100 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_8
# 105 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_9
# 110 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_10
HomeTown_IntroPreventLeave_6:
# 116 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_IntroPreventLeave_3:
# 69 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_0
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_4:
# 73 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_1
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_5:
# 77 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_2
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_8:
# 101 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_4
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_9:
# 106 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_5
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_10:
# 111 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_6
	goto HomeTown_IntroPreventLeave_6


HomeTown_IntroTalkGatekeeper::
# 122 "data/maps/MarinacreTown/scripts.pory"
	lock
# 123 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 124 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroTalkGatekeeper_Text_0, MSGBOX_DEFAULT
# 132 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 133 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_IntroBlockMart::
# 137 "data/maps/MarinacreTown/scripts.pory"
	lock
# 138 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 139 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroBlockMart_Text_0, MSGBOX_DEFAULT
# 148 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 149 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_BeachScene1_Start::
# 153 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 154 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 2
# 157 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 158 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 160 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 161 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 163 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_0, MSGBOX_DEFAULT
# 168 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 171 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 172 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8008
# 173 "data/maps/MarinacreTown/scripts.pory"
	case 29, HomeTown_BeachScene1_Start_3
# 181 "data/maps/MarinacreTown/scripts.pory"
	case 30, HomeTown_BeachScene1_Start_4
# 188 "data/maps/MarinacreTown/scripts.pory"
	case 31, HomeTown_BeachScene1_Start_5
HomeTown_BeachScene1_Start_1:
# 194 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 195 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 196 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 199 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_1, MSGBOX_DEFAULT
# 209 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 210 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 211 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 212 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_2, MSGBOX_DEFAULT
# 221 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 223 "data/maps/MarinacreTown/scripts.pory"
	fadeoutbgm 3
# 224 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 225 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 226 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_3, MSGBOX_DEFAULT
# 246 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_WEST
# 247 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 248 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_4, MSGBOX_DEFAULT
# 254 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_3
# 257 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 259 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_5, MSGBOX_DEFAULT
# 269 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 270 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 271 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 272 "data/maps/MarinacreTown/scripts.pory"
	delay 150
# 275 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 276 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_QuestionMark
# 277 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 279 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_6, MSGBOX_DEFAULT
# 283 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 286 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_WalkToBag
# 287 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 288 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_WalkToBag
# 289 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 293 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_7, MSGBOX_DEFAULT
# 299 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 300 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_4
# 303 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 305 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 306 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 307 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 309 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_5
# 320 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 321 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_8, MSGBOX_DEFAULT
# 326 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 327 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 328 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_9, MSGBOX_DEFAULT
# 333 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 334 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 335 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 336 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_10, MSGBOX_DEFAULT
# 339 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 342 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 343 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_6
# 346 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 347 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 348 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 349 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_GRASS, 27, 35
# 350 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_GRASS
# 351 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 352 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 353 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 354 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_FIRE, 28, 35
# 355 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_FIRE
# 356 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 357 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 358 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 359 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_WATER, 29, 35
# 360 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_WATER
# 361 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 362 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_7
# 366 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 370 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 371 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_GRASS, 27, 35
# 372 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_FIRE, 28, 35
# 373 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_WATER, 29, 35
# 374 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_GRASS
# 375 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_FIRE
# 376 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_WATER
# 377 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_GRASS
# 378 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_FIRE
# 379 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_WATER
# 380 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 381 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 382 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 383 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_FIRE, HomeTown_BeachScene1_StarterReact
# 384 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 385 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 386 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_GRASS, HomeTown_BeachScene1_StarterReact
# 387 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 388 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 389 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_WATER, HomeTown_BeachScene1_StarterReact
# 390 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 393 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_8
# 398 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 399 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_11, MSGBOX_DEFAULT
# 402 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 403 "data/maps/MarinacreTown/scripts.pory"
	releaseall
# 404 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 405 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 408 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 409 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 410 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 411 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_12, MSGBOX_DEFAULT
# 418 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 419 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 420 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 421 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 422 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_13, MSGBOX_DEFAULT
# 433 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 434 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 435 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 436 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 437 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_14
# 442 "data/maps/MarinacreTown/scripts.pory"
	dynmultichoice 25, 6, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, HomeTown_BeachScene1_Start_Text_15, HomeTown_BeachScene1_Start_Text_16, HomeTown_BeachScene1_Start_Text_17
# 444 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_RESULT
# 445 "data/maps/MarinacreTown/scripts.pory"
	case 0, HomeTown_BeachScene1_Start_8
# 454 "data/maps/MarinacreTown/scripts.pory"
	case 1, HomeTown_BeachScene1_Start_9
# 465 "data/maps/MarinacreTown/scripts.pory"
	case 2, HomeTown_BeachScene1_Start_10
HomeTown_BeachScene1_Start_6:
# 478 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 479 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 480 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 481 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 482 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 483 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 484 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 485 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 1
# 486 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 487 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_21, MSGBOX_DEFAULT
# 503 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 504 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 505 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 506 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 507 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_22, MSGBOX_DEFAULT
# 514 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 515 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_23
# 520 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 522 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Start_3:
# 174 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_0
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_4:
# 182 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_1
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_5:
# 189 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_2
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_8:
# 446 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_18, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_9:
# 455 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_19, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_10:
# 466 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_20, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6


HomeTown_BeachScene1_ExamineStarterGrass::
# 526 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_TURTWIG
# 527 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_GRASS
# 528 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterGrass_Text_0
# 529 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 530 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterFire::
# 534 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_FENNEKIN
# 535 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_FIRE
# 536 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterFire_Text_0
# 537 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 538 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterWater::
# 542 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_POPPLIO
# 543 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_WATER
# 544 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterWater_Text_0
# 545 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 546 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarter::
# 550 "data/maps/MarinacreTown/scripts.pory"
	lock
# 551 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 552 "data/maps/MarinacreTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8000
# 553 "data/maps/MarinacreTown/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 554 "data/maps/MarinacreTown/scripts.pory"
	playmoncry VAR_0x8000, 0
# 555 "data/maps/MarinacreTown/scripts.pory"
	waitmoncry
# 556 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_ExamineStarter_Text_0, MSGBOX_YESNO
# 561 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_ExamineStarter_1
# 565 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 566 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 567 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_BeachScene1_ExamineStarter_1:
# 562 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_TakeStarter
	return


HomeTown_BeachScene1_TakeStarter::
# 572 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 573 "data/maps/MarinacreTown/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 574 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_BeachScene1_TakeStarter_Text_0
# 575 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 576 "data/maps/MarinacreTown/scripts.pory"
	waitfanfare
# 577 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 578 "data/maps/MarinacreTown/scripts.pory"
	release
# 579 "data/maps/MarinacreTown/scripts.pory"
	removeobject VAR_0x8001
# 581 "data/maps/MarinacreTown/scripts.pory"
	givemon VAR_0x8000, 5
# 582 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 583 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 584 "data/maps/MarinacreTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 585 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_TakeStarter_1
# 590 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return

HomeTown_BeachScene1_TakeStarter_1:
# 586 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 587 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return


HomeTown_BeachScene1_Finish::
# 595 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 596 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 597 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 598 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_0, MSGBOX_DEFAULT
# 602 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 605 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_0
# 610 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 611 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BAG
# 612 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_1
# 617 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Finish_Movement_2
# 622 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 625 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_3
# 628 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_ne HomeTown_BeachScene1_Finish_2
HomeTown_BeachScene1_Finish_1:
# 633 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_ne HomeTown_BeachScene1_Finish_5
# 640 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 643 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_4:
# 645 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_ne HomeTown_BeachScene1_Finish_9
# 652 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 655 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_8:
# 659 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_4
# 664 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 666 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_1, MSGBOX_DEFAULT
# 672 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 675 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_5
# 682 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_RIVAL
# 684 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 0, 47
# 686 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_INTRO_MET_RIVAL
# 687 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 3
# 689 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Finish_2:
# 630 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 631 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_GRASS
	goto HomeTown_BeachScene1_Finish_1

HomeTown_BeachScene1_Finish_5:
# 634 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 635 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 637 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_FIRE
	goto HomeTown_BeachScene1_Finish_4

HomeTown_BeachScene1_Finish_9:
# 646 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 647 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 649 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_WATER
	goto HomeTown_BeachScene1_Finish_8


HomeTown_BeachScene1_PreventLeave::
# 693 "data/maps/MarinacreTown/scripts.pory"
	lock
# 694 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 695 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_PreventLeave_Movement_0
# 699 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 700 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 701 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_PreventLeave_Text_0, MSGBOX_DEFAULT
# 706 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 707 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_0
# 710 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 711 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_BeachScene1_FlavorTextBag::
# 715 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_FlavorTextBag_Text_0, MSGBOX_SIGN
	return


HomeTown_BeachScene1_TalkRival::
# 723 "data/maps/MarinacreTown/scripts.pory"
	lock
# 724 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 725 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_TalkRival_Text_0, MSGBOX_NPC
# 730 "data/maps/MarinacreTown/scripts.pory"
	release
	return


# 733 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_WalkToBag:
# 734 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 735 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 735 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 735 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 735 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 736 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 736 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 737 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 737 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 740 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_GoToNextStarter:
# 741 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 742 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 745 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_StarterReact:
# 746 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 747 "data/maps/MarinacreTown/scripts.pory"
	face_down
# 748 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 748 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 749 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_down
# 750 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 751 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 752 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 753 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 754 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 69 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_0:
# 70 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_1:
# 74 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 74 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_2:
# 78 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 78 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 78 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 94 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_3:
# 94 "data/maps/MarinacreTown/scripts.pory"
	walk_right
	step_end

# 101 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_4:
# 102 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 103 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 106 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_5:
# 107 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 107 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 108 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 111 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_6:
# 112 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 112 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 112 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 113 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 174 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_0:
# 175 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 176 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 176 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 177 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 178 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 179 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 182 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_1:
# 183 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 183 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 184 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 185 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 186 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 189 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_2:
# 190 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 190 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 190 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 191 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 254 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_3:
# 255 "data/maps/MarinacreTown/scripts.pory"
	walk_in_place_right
# 255 "data/maps/MarinacreTown/scripts.pory"
	walk_in_place_right
	step_end

# 300 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_4:
# 301 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 302 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 309 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_5:
# 310 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 310 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 311 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 311 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 312 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 313 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 314 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 315 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 316 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 317 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 318 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 343 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_6:
# 344 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 344 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 362 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_7:
# 363 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 363 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 364 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 393 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_8:
# 394 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_up
# 395 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_down
# 396 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 605 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_0:
# 606 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 607 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 608 "data/maps/MarinacreTown/scripts.pory"
	delay_16
	step_end

# 612 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_1:
# 613 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 614 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 615 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 617 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_2:
# 618 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 619 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 619 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 620 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 625 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_3:
# 626 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 659 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_4:
# 660 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 661 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 661 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 662 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 675 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_5:
# 676 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 677 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 677 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 678 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 679 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 679 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 680 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 680 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 680 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 680 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 680 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
	step_end

# 695 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_PreventLeave_Movement_0:
# 696 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 697 "data/maps/MarinacreTown/scripts.pory"
	face_player
	step_end

HomeTown_TownSign_Text_0:
# 38 "data/maps/MarinacreTown/scripts.pory"
	.string "MARINACRE TOWN\n"
	.string "Gifts from the sea, sparkling in the\l"
	.string "rising sun$"

HomeTown_PlayerMailbox_Text_0:
# 47 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

HomeTown_IntroPreventLeave_Text_0:
# 61 "data/maps/MarinacreTown/scripts.pory"
	.string "Excuse me!$"

HomeTown_IntroPreventLeave_Text_1:
# 85 "data/maps/MarinacreTown/scripts.pory"
	.string "We're still working on the road out of\n"
	.string "town.\l"
	.string "The repairs are almost done, and we\l"
	.string "should be wrapping up in just a bit.\l"
	.string "Do you mind waiting a little bit longer?$"

HomeTown_IntroTalkGatekeeper_Text_0:
# 125 "data/maps/MarinacreTown/scripts.pory"
	.string "I'm with the road crew. We're working on \n"
	.string "the road out of town.\p"
	.string "We're just about finished. Please wait\n"
	.string "a little longer, okay?$"

HomeTown_IntroBlockMart_Text_0:
# 140 "data/maps/MarinacreTown/scripts.pory"
	.string "Hi.\n"
	.string "The PokéMart is closing up for today.\p"
	.string "If you need something, you'll have to \n"
	.string "come back tomorrow.\l"
	.string "Sorry!$"

HomeTown_BeachScene1_Start_Text_0:
# 164 "data/maps/MarinacreTown/scripts.pory"
	.string "Oh, {PLAYER}!\n"
	.string "I was hoping I'd run into you!$"

HomeTown_BeachScene1_Start_Text_1:
# 200 "data/maps/MarinacreTown/scripts.pory"
	.string "Huh? Why?\p"
	.string "…{PAUSE 30}I just wanted to hang out, dude.\n"
	.string "Does there have to be a reason?\p"
	.string "I feel like it's been too long since we\n"
	.string "just chilled here together.$"

HomeTown_BeachScene1_Start_Text_2:
# 213 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, remember when we found that\n"
	.string "Shellder in the sand?\l"
	.string "…{PAUSE 30}And then I stuck it in my mom's purse?\p"
	.string "Her face when she found it - man, that\n"
	.string "was so worth getting grounded for!$"

HomeTown_BeachScene1_Start_Text_3:
# 227 "data/maps/MarinacreTown/scripts.pory"
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
# 249 "data/maps/MarinacreTown/scripts.pory"
	.string "Anyways, I had a talk with my family\n"
	.string "about it.\l"
	.string "Well, I guess less of a talk, and more…$"

HomeTown_BeachScene1_Start_Text_5:
# 260 "data/maps/MarinacreTown/scripts.pory"
	.string "…Gah, forget it!\p"
	.string "Don't worry about it.\n"
	.string "I just wanna sit here and take in the\l"
	.string "scenery.\p"
	.string "C'mon, let's just chill!$"

HomeTown_BeachScene1_Start_Text_6:
# 280 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, what's that over there?$"

HomeTown_BeachScene1_Start_Text_7:
# 294 "data/maps/MarinacreTown/scripts.pory"
	.string "Oh, it's an old bag.\n"
	.string "Must've washed up here.\l"
	.string "Just trash, I guess.$"

HomeTown_BeachScene1_Start_Text_8:
# 322 "data/maps/MarinacreTown/scripts.pory"
	.string "Wait a second!{PAUSE 30} {PLAYER}! Look!\n"
	.string "There are Poké Balls in here!$"

HomeTown_BeachScene1_Start_Text_9:
# 329 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think…{PAUSE 30} there's anything\n"
	.string "in them?$"

HomeTown_BeachScene1_Start_Text_10:
# 337 "data/maps/MarinacreTown/scripts.pory"
	.string "We should probably check, huh?$"

HomeTown_BeachScene1_Start_Text_11:
# 400 "data/maps/MarinacreTown/scripts.pory"
	.string "Woah!$"

HomeTown_BeachScene1_Start_Text_12:
# 412 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}! These Pokémon belong\n"
	.string "to someone!\l"
	.string "Their trainer must've lost that bag \l"
	.string "in the ocean!$"

HomeTown_BeachScene1_Start_Text_13:
# 423 "data/maps/MarinacreTown/scripts.pory"
	.string "They look…{PAUSE 30} \n"
	.string "confused, don't they?\p"
	.string "Like they haven't been let out in a \n"
	.string "really long time.\p"
	.string "How long were they drifting out in\n"
	.string "the sea?$"

HomeTown_BeachScene1_Start_Text_14:
# 438 "data/maps/MarinacreTown/scripts.pory"
	.string "What should we do about this,\n"
	.string "{PLAYER}?\l"
	.string "Got any ideas?$"

HomeTown_BeachScene1_Start_Text_15:
# 443 "data/maps/MarinacreTown/scripts.pory"
	.string "No clue$"

HomeTown_BeachScene1_Start_Text_16:
# 443 "data/maps/MarinacreTown/scripts.pory"
	.string "Look for their trainer$"

HomeTown_BeachScene1_Start_Text_17:
# 443 "data/maps/MarinacreTown/scripts.pory"
	.string "Finders keepers$"

HomeTown_BeachScene1_Start_Text_18:
# 447 "data/maps/MarinacreTown/scripts.pory"
	.string "Yeah, me neither.\p"
	.string "I wanna say we should try to return\n"
	.string "them to their trainer, but…\l"
	.string "where would we even start?$"

HomeTown_BeachScene1_Start_Text_19:
# 456 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think there's a shot?\n"
	.string "it'd be the right thing to do, but…\p"
	.string "…{PAUSE 30}Who knows where they drifted in from,\n"
	.string "or how long they've been out there?\p"
	.string "Where would we even start looking?$"

HomeTown_BeachScene1_Start_Text_20:
# 467 "data/maps/MarinacreTown/scripts.pory"
	.string "…You really think so?\n"
	.string "I guess it'd be hard to track down\l"
	.string "their original trainer…\p"
	.string "But I feel like we should at least try,\n"
	.string "you know? Like, maybe…\p"
	.string "…{PAUSE 30}Nevermind. I got nothing.$"

HomeTown_BeachScene1_Start_Text_21:
# 488 "data/maps/MarinacreTown/scripts.pory"
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
# 508 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}, how about we each keep one \n"
	.string "of these Pokémon for the trip?\p"
	.string "Yeah, that sounds like a plan!$"

HomeTown_BeachScene1_Start_Text_23:
# 516 "data/maps/MarinacreTown/scripts.pory"
	.string "Go ahead, {PLAYER}!\n"
	.string "You pick first!$"

HomeTown_BeachScene1_ExamineStarterGrass_Text_0:
# 528 "data/maps/MarinacreTown/scripts.pory"
	.string "Grass$"

HomeTown_BeachScene1_ExamineStarterFire_Text_0:
# 536 "data/maps/MarinacreTown/scripts.pory"
	.string "Fire$"

HomeTown_BeachScene1_ExamineStarterWater_Text_0:
# 544 "data/maps/MarinacreTown/scripts.pory"
	.string "Water$"

HomeTown_BeachScene1_ExamineStarter_Text_0:
# 557 "data/maps/MarinacreTown/scripts.pory"
	.string "{STR_VAR_1}\n"
	.string "The {STR_VAR_2}-type Pokémon\p"
	.string "Take {STR_VAR_1} with you?$"

HomeTown_BeachScene1_TakeStarter_Text_0:
# 574 "data/maps/MarinacreTown/scripts.pory"
	.string "You took {STR_VAR_1} with you!$"

HomeTown_BeachScene1_Finish_Text_0:
# 599 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright, then!\n"
	.string "I'll bring the rest!$"

HomeTown_BeachScene1_Finish_Text_1:
# 667 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright then! Let's not waste any time!\n"
	.string "I'll meet you at Professor Hawthorn's\l"
	.string "lab!$"

HomeTown_BeachScene1_PreventLeave_Text_0:
# 702 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hey, where are you going?\n"
	.string "Don't leave now!$"

HomeTown_BeachScene1_FlavorTextBag_Text_0:
# 716 "data/maps/MarinacreTown/scripts.pory"
	.string "It's been bleached by the sun,\n"
	.string "and pummeled by waves.$"

HomeTown_BeachScene1_TalkRival_Text_0:
# 726 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hurry up and pick one!\n"
	.string "Uh, no rush, though!$"
