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
	fadeoutbgm 1
# 22 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 5
# 23 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_Trigger_RestoreMusic::
# 27 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 1
# 28 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 5
# 29 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_TownSign::
# 33 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_TownSign_Text_0, MSGBOX_SIGN
	return


HomeTown_PlayerMailbox::
# 42 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_PlayerMailbox_Text_0, MSGBOX_SIGN
	return


HomeTown_IntroPreventLeave::
# 49 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 50 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 51 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, Common_Movement_ExclamationMark
# 52 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_GATEKEEPER, DIR_SOUTH
# 54 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 56 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_IntroPreventLeave_Text_0
# 59 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 61 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 62 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 64 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_3
# 68 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_4
# 72 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_5
HomeTown_IntroPreventLeave_1:
# 77 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 80 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroPreventLeave_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 90 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_3
# 91 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 94 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8009
# 96 "data/maps/MarinacreTown/scripts.pory"
	case 13, HomeTown_IntroPreventLeave_8
# 101 "data/maps/MarinacreTown/scripts.pory"
	case 14, HomeTown_IntroPreventLeave_9
# 106 "data/maps/MarinacreTown/scripts.pory"
	case 15, HomeTown_IntroPreventLeave_10
HomeTown_IntroPreventLeave_6:
# 112 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 115 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_IntroPreventLeave_3:
# 65 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_0
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_4:
# 69 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_1
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_5:
# 73 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_2
	goto HomeTown_IntroPreventLeave_1

HomeTown_IntroPreventLeave_8:
# 97 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_4
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_9:
# 102 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_5
	goto HomeTown_IntroPreventLeave_6

HomeTown_IntroPreventLeave_10:
# 107 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_GATEKEEPER, HomeTown_IntroPreventLeave_Movement_6
	goto HomeTown_IntroPreventLeave_6


HomeTown_IntroTalkGatekeeper::
# 119 "data/maps/MarinacreTown/scripts.pory"
	lock
# 120 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 121 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroTalkGatekeeper_Text_0, MSGBOX_DEFAULT
# 129 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 130 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_IntroBlockMart::
# 134 "data/maps/MarinacreTown/scripts.pory"
	lock
# 135 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 136 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_IntroBlockMart_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 146 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_BeachScene1_Start::
# 150 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 151 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 2
# 154 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 155 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 156 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 157 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 158 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 160 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_0, MSGBOX_DEFAULT
# 165 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 168 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 169 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8008
# 170 "data/maps/MarinacreTown/scripts.pory"
	case 29, HomeTown_BeachScene1_Start_3
# 178 "data/maps/MarinacreTown/scripts.pory"
	case 30, HomeTown_BeachScene1_Start_4
# 185 "data/maps/MarinacreTown/scripts.pory"
	case 31, HomeTown_BeachScene1_Start_5
HomeTown_BeachScene1_Start_1:
# 191 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 192 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 193 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 196 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_1, MSGBOX_DEFAULT
# 200 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 201 "data/maps/MarinacreTown/scripts.pory"
	fadeoutbgm 1
# 202 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 203 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 204 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 205 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_2, MSGBOX_DEFAULT
# 209 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 210 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 211 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_3, MSGBOX_DEFAULT
# 215 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 216 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 217 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_4, MSGBOX_DEFAULT
# 221 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 224 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 225 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_QuestionMark
# 226 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 228 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_5, MSGBOX_DEFAULT
# 232 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 235 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_WalkToBag
# 236 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 237 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_WalkToBag
# 238 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 242 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_6, MSGBOX_DEFAULT
# 248 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 249 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_3
# 252 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 254 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 255 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 256 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 257 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 258 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_4
# 261 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 262 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_BeachScene1_Start_Text_7
# 269 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_5
# 274 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 275 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 276 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 277 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceDown
# 279 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 281 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_8, MSGBOX_DEFAULT
# 284 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 287 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_6
# 293 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 295 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_7
# 298 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_GRASS, 27, 35
# 300 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_GRASS
# 301 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 302 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 303 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_FIRE, 28, 35
# 305 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_FIRE
# 306 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 307 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 308 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_WATER, 29, 35
# 310 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_WATER
# 311 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 312 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_8
# 316 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 319 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 320 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 321 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_GRASS, 27, 35
# 322 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_FIRE, 28, 35
# 323 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_WATER, 29, 35
# 324 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_GRASS
# 325 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_FIRE
# 326 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_WATER
# 327 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_GRASS
# 328 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_FIRE
# 329 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_WATER
# 330 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 331 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 332 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 333 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_FIRE, HomeTown_BeachScene1_StarterReact
# 334 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 335 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 336 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_GRASS, HomeTown_BeachScene1_StarterReact
# 337 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 338 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 339 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_WATER, HomeTown_BeachScene1_StarterReact
# 340 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 343 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_9
# 348 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 349 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_9, MSGBOX_DEFAULT
# 352 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 353 "data/maps/MarinacreTown/scripts.pory"
	releaseall
# 354 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_FaceUp
# 355 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 359 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 360 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 361 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_10, MSGBOX_DEFAULT
# 368 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 369 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 370 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 371 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 372 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_11, MSGBOX_DEFAULT
# 383 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 384 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 385 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 386 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 387 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_12
# 392 "data/maps/MarinacreTown/scripts.pory"
	dynmultichoice 25, 6, TRUE, 3, 1, DYN_MULTICHOICE_CB_NONE, HomeTown_BeachScene1_Start_Text_13, HomeTown_BeachScene1_Start_Text_14, HomeTown_BeachScene1_Start_Text_15
# 394 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_RESULT
# 395 "data/maps/MarinacreTown/scripts.pory"
	case 0, HomeTown_BeachScene1_Start_8
# 404 "data/maps/MarinacreTown/scripts.pory"
	case 1, HomeTown_BeachScene1_Start_9
# 415 "data/maps/MarinacreTown/scripts.pory"
	case 2, HomeTown_BeachScene1_Start_10
HomeTown_BeachScene1_Start_6:
# 428 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 429 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 430 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 431 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, Common_Movement_ExclamationMark
# 432 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 433 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 434 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 0
# 435 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 436 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_19, MSGBOX_DEFAULT
# 452 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 453 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 454 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 455 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 456 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_20, MSGBOX_DEFAULT
# 463 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 464 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_21
# 469 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 471 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Start_3:
# 171 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_0
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_4:
# 179 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_1
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_5:
# 186 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_2
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_8:
# 396 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_16, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_9:
# 405 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_17, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_10:
# 416 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_18, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6


HomeTown_BeachScene1_ExamineStarterGrass::
# 475 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_TURTWIG
# 476 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_GRASS
# 477 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterGrass_Text_0
# 478 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 479 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterFire::
# 483 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_FENNEKIN
# 484 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_FIRE
# 485 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterFire_Text_0
# 486 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 487 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterWater::
# 491 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_POPPLIO
# 492 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_WATER
# 493 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterWater_Text_0
# 494 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 495 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarter::
# 499 "data/maps/MarinacreTown/scripts.pory"
	lock
# 500 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 501 "data/maps/MarinacreTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8000
# 502 "data/maps/MarinacreTown/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 503 "data/maps/MarinacreTown/scripts.pory"
	playmoncry VAR_0x8000, 0
# 504 "data/maps/MarinacreTown/scripts.pory"
	waitmoncry
# 505 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_ExamineStarter_Text_0, MSGBOX_YESNO
# 510 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_ExamineStarter_1
# 514 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 515 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 516 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_BeachScene1_ExamineStarter_1:
# 511 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_TakeStarter
	return


HomeTown_BeachScene1_TakeStarter::
# 521 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 522 "data/maps/MarinacreTown/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 523 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_BeachScene1_TakeStarter_Text_0
# 524 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 525 "data/maps/MarinacreTown/scripts.pory"
	waitfanfare
# 526 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 527 "data/maps/MarinacreTown/scripts.pory"
	release
# 528 "data/maps/MarinacreTown/scripts.pory"
	removeobject VAR_0x8001
# 531 "data/maps/MarinacreTown/scripts.pory"
	givemon VAR_0x8000, 5
# 532 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 533 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 534 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 535 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return


HomeTown_BeachScene1_Finish::
# 539 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 540 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_NORTH
# 541 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 542 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_0, MSGBOX_DEFAULT
# 546 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 549 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_0
# 554 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BAG
# 556 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_1
# 560 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Finish_Movement_2
# 565 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Start_Movement_7
# 571 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 572 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_ne HomeTown_BeachScene1_Finish_2
HomeTown_BeachScene1_Finish_1:
# 576 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_ne HomeTown_BeachScene1_Finish_5
# 583 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 586 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_4:
# 588 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_ne HomeTown_BeachScene1_Finish_9
# 595 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_IntroPreventLeave_Movement_3
# 598 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_8:
# 602 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_3
# 607 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 608 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 609 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_1, MSGBOX_DEFAULT
# 615 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 618 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_Finish_Movement_4
# 625 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 626 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_RIVAL
# 627 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_RIVAL, 0, 47
# 629 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_INTRO_MET_RIVAL
# 630 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 3
# 632 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Finish_2:
# 573 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 574 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_GRASS
	goto HomeTown_BeachScene1_Finish_1

HomeTown_BeachScene1_Finish_5:
# 577 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 578 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 579 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 580 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_FIRE
	goto HomeTown_BeachScene1_Finish_4

HomeTown_BeachScene1_Finish_9:
# 589 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_GoToNextStarter
# 590 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 591 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 592 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_WATER
	goto HomeTown_BeachScene1_Finish_8


HomeTown_BeachScene1_PreventLeave::
# 636 "data/maps/MarinacreTown/scripts.pory"
	lock
# 637 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 638 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_RIVAL, HomeTown_BeachScene1_PreventLeave_Movement_0
# 642 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_PreventLeave_Text_0, MSGBOX_DEFAULT
# 648 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 649 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_0
# 652 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_BeachScene1_FlavorTextBag::
# 657 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_FlavorTextBag_Text_0, MSGBOX_SIGN
	return


HomeTown_BeachScene1_TalkRival::
# 665 "data/maps/MarinacreTown/scripts.pory"
	lock
# 666 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 667 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_TalkRival_Text_0, MSGBOX_NPC
# 672 "data/maps/MarinacreTown/scripts.pory"
	release
	return


# 675 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_WalkToBag:
# 676 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 677 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 677 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 677 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 677 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 678 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 678 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 679 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 679 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 682 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_GoToNextStarter:
# 683 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 684 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 687 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_StarterReact:
# 688 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 689 "data/maps/MarinacreTown/scripts.pory"
	face_down
# 690 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 690 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 691 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_down
# 692 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 693 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 694 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 695 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 696 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 65 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_0:
# 66 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 69 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_1:
# 70 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 70 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_2:
# 74 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 74 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 74 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 90 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_3:
# 90 "data/maps/MarinacreTown/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_4:
# 98 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 99 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 102 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_5:
# 103 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 103 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 104 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 107 "data/maps/MarinacreTown/scripts.pory"
HomeTown_IntroPreventLeave_Movement_6:
# 108 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 108 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 108 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 109 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 171 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_0:
# 172 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 173 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 173 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 174 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 175 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 176 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 179 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_1:
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 180 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 181 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 182 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 183 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 186 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_2:
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 187 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 188 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 249 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_3:
# 250 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 251 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 258 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_4:
# 259 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 259 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
	step_end

# 269 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_5:
# 270 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 270 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 271 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 272 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 287 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_6:
# 288 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 289 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 290 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 290 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 291 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 295 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_7:
# 296 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 312 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_8:
# 313 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 313 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 314 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 343 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_9:
# 344 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_up
# 345 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_down
# 346 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 549 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_0:
# 550 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 551 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 552 "data/maps/MarinacreTown/scripts.pory"
	delay_16
	step_end

# 556 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_1:
# 557 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 558 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 560 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_2:
# 561 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 562 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 562 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 563 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 602 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_3:
# 603 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 604 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 604 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 605 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 618 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_4:
# 619 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 620 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 620 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 621 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 622 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 622 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 623 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 623 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 623 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 623 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 623 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
	step_end

# 638 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_PreventLeave_Movement_0:
# 639 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 640 "data/maps/MarinacreTown/scripts.pory"
	face_player
	step_end

HomeTown_TownSign_Text_0:
# 34 "data/maps/MarinacreTown/scripts.pory"
	.string "MARINACRE TOWN\n"
	.string "Gifts from the sea, sparkling in the\l"
	.string "rising sun$"

HomeTown_PlayerMailbox_Text_0:
# 43 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

HomeTown_IntroPreventLeave_Text_0:
# 57 "data/maps/MarinacreTown/scripts.pory"
	.string "Excuse me!$"

HomeTown_IntroPreventLeave_Text_1:
# 81 "data/maps/MarinacreTown/scripts.pory"
	.string "We're still working on the road out of\n"
	.string "town.\l"
	.string "The repairs are almost done, and we\l"
	.string "should be wrapping up in just a bit.\l"
	.string "Do you mind waiting a little bit longer?$"

HomeTown_IntroTalkGatekeeper_Text_0:
# 122 "data/maps/MarinacreTown/scripts.pory"
	.string "I'm with the road crew. We're working on \n"
	.string "the road out of town.\p"
	.string "We're just about finished. Please wait\n"
	.string "a little longer, okay?$"

HomeTown_IntroBlockMart_Text_0:
# 137 "data/maps/MarinacreTown/scripts.pory"
	.string "Hi.\n"
	.string "The PokéMart is closing up for today.\p"
	.string "If you need something, you'll have to \n"
	.string "come back tomorrow.\l"
	.string "Sorry!$"

HomeTown_BeachScene1_Start_Text_0:
# 161 "data/maps/MarinacreTown/scripts.pory"
	.string "Oh, {PLAYER}!\n"
	.string "I was hoping I'd run into you!$"

HomeTown_BeachScene1_Start_Text_1:
# 197 "data/maps/MarinacreTown/scripts.pory"
	.string "INTRO MONOLOGUE 1$"

HomeTown_BeachScene1_Start_Text_2:
# 206 "data/maps/MarinacreTown/scripts.pory"
	.string "INTRO MONOLOGUE 2$"

HomeTown_BeachScene1_Start_Text_3:
# 212 "data/maps/MarinacreTown/scripts.pory"
	.string "INTRO MONOLOGUE 3$"

HomeTown_BeachScene1_Start_Text_4:
# 218 "data/maps/MarinacreTown/scripts.pory"
	.string "INTRO MONOLOGUE 4$"

HomeTown_BeachScene1_Start_Text_5:
# 229 "data/maps/MarinacreTown/scripts.pory"
	.string "Hmm? What's that over there?$"

HomeTown_BeachScene1_Start_Text_6:
# 243 "data/maps/MarinacreTown/scripts.pory"
	.string "Oh, it's an old bag.\n"
	.string "Must've washed up here.\l"
	.string "Just trash, I guess.$"

HomeTown_BeachScene1_Start_Text_7:
# 263 "data/maps/MarinacreTown/scripts.pory"
	.string "Wait a second! {PLAYER}! Look!\n"
	.string "There are Poké Balls in here!\p"
	.string "Do you think… there's anything\n"
	.string "in them?$"

HomeTown_BeachScene1_Start_Text_8:
# 282 "data/maps/MarinacreTown/scripts.pory"
	.string "We should probably check, huh?$"

HomeTown_BeachScene1_Start_Text_9:
# 350 "data/maps/MarinacreTown/scripts.pory"
	.string "Woah!$"

HomeTown_BeachScene1_Start_Text_10:
# 362 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}! These Pokémon belong\n"
	.string "to someone!\l"
	.string "Their trainer must've lost that bag \l"
	.string "in the ocean!$"

HomeTown_BeachScene1_Start_Text_11:
# 373 "data/maps/MarinacreTown/scripts.pory"
	.string "They look… \n"
	.string "confused, don't they?\p"
	.string "Like they haven't been let out in a \n"
	.string "really long time.\p"
	.string "How long were they drifting out in\n"
	.string "the ocean?$"

HomeTown_BeachScene1_Start_Text_12:
# 388 "data/maps/MarinacreTown/scripts.pory"
	.string "What should we do about this,\n"
	.string "{PLAYER}?\l"
	.string "Got any ideas?$"

HomeTown_BeachScene1_Start_Text_13:
# 393 "data/maps/MarinacreTown/scripts.pory"
	.string "No clue$"

HomeTown_BeachScene1_Start_Text_14:
# 393 "data/maps/MarinacreTown/scripts.pory"
	.string "Look for their trainer$"

HomeTown_BeachScene1_Start_Text_15:
# 393 "data/maps/MarinacreTown/scripts.pory"
	.string "Finders keepers$"

HomeTown_BeachScene1_Start_Text_16:
# 397 "data/maps/MarinacreTown/scripts.pory"
	.string "Yeah, me neither.\p"
	.string "I wanna say we should try to return\n"
	.string "them to their trainer, but…\l"
	.string "where would we even start?$"

HomeTown_BeachScene1_Start_Text_17:
# 406 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think there's a shot?\n"
	.string "it'd be the right thing to do, but…\p"
	.string "…Who knows where they drifted in from,\n"
	.string "or how long they've been out there?\p"
	.string "Where would we even start looking?$"

HomeTown_BeachScene1_Start_Text_18:
# 417 "data/maps/MarinacreTown/scripts.pory"
	.string "…You really think so?\n"
	.string "I guess it'd be hard to track down\l"
	.string "their original trainer…\p"
	.string "But I feel like we should at least try,\n"
	.string "you know? Like, maybe…\p"
	.string "…Nevermind. I got nothing.$"

HomeTown_BeachScene1_Start_Text_19:
# 437 "data/maps/MarinacreTown/scripts.pory"
	.string "Wait, I have an idea!\n"
	.string "We should take these Pokémon to\l"
	.string "Professor Hawthorn!\p"
	.string "She's the Pokémon professor for the\n"
	.string "Wohnet Region.\p"
	.string "If anyone can help, it'll be her.\n"
	.string "Her lab is just up the road on Route 1!\p"
	.string "…Hmm, but the road is a bit rough\n"
	.string "right now.\l"
	.string "What if wild Pokémon attacked us?$"

HomeTown_BeachScene1_Start_Text_20:
# 457 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}, how about we each keep one \n"
	.string "of these Pokémon for the trip?\p"
	.string "Yeah, that sounds like a plan!$"

HomeTown_BeachScene1_Start_Text_21:
# 465 "data/maps/MarinacreTown/scripts.pory"
	.string "Go ahead, {PLAYER}!\n"
	.string "You pick first!$"

HomeTown_BeachScene1_ExamineStarterGrass_Text_0:
# 477 "data/maps/MarinacreTown/scripts.pory"
	.string "Grass$"

HomeTown_BeachScene1_ExamineStarterFire_Text_0:
# 485 "data/maps/MarinacreTown/scripts.pory"
	.string "Fire$"

HomeTown_BeachScene1_ExamineStarterWater_Text_0:
# 493 "data/maps/MarinacreTown/scripts.pory"
	.string "Water$"

HomeTown_BeachScene1_ExamineStarter_Text_0:
# 506 "data/maps/MarinacreTown/scripts.pory"
	.string "{STR_VAR_1}\n"
	.string "The {STR_VAR_2}-type Pokémon\p"
	.string "Take {STR_VAR_1} with you?$"

HomeTown_BeachScene1_TakeStarter_Text_0:
# 523 "data/maps/MarinacreTown/scripts.pory"
	.string "You took {STR_VAR_1} with you!$"

HomeTown_BeachScene1_Finish_Text_0:
# 543 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright, then!\n"
	.string "I'll bring the rest$"

HomeTown_BeachScene1_Finish_Text_1:
# 610 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright then! Let's not waste any time!\n"
	.string "I'll meet you at Professor Hawthorn's\l"
	.string "lab!$"

HomeTown_BeachScene1_PreventLeave_Text_0:
# 644 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, where are you going?\n"
	.string "Don't leave now!$"

HomeTown_BeachScene1_FlavorTextBag_Text_0:
# 658 "data/maps/MarinacreTown/scripts.pory"
	.string "It's been bleached by the sun,\n"
	.string "and pummeled by waves.$"

HomeTown_BeachScene1_TalkRival_Text_0:
# 668 "data/maps/MarinacreTown/scripts.pory"
	.string "Hurry up and pick one!\n"
	.string "Uh, no rush, though!$"
