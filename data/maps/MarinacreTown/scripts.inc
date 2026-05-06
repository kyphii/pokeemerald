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
	setobjectxyperm LOCALID_MARINACRE_MAYA, 30, 31
# 13 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BAG, 28, 38
# 16 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_TEMP_A, 5
	return

MarinacreTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 18 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_MARINACRE_MAYA, 31, 11
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
	applymovement LOCALID_MARINACRE_MAYA, MarinacreTown_Intro_LeaveWithRivalScene_Movement_0
# 185 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 186 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 187 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 195 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, MarinacreTown_Intro_LeaveWithRivalScene_Movement_1
# 204 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, MarinacreTown_Intro_LeaveWithRivalScene_Movement_2
# 213 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 214 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_1, MSGBOX_DEFAULT
# 220 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 221 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_2, MSGBOX_DEFAULT
# 242 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 244 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, MarinacreTown_Intro_LeaveWithRivalScene_Movement_3
# 247 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/MarinacreTown/scripts.pory"
	message MarinacreTown_Intro_LeaveWithRivalScene_Text_3
# 252 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 253 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 254 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 255 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 256 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_ExclamationMark
# 257 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 259 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 260 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 261 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 263 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_MARINACRE_MAYAS_FATHER, 5, 7
# 264 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_MARINACRE_MAYAS_FATHER
# 265 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYAS_FATHER, MarinacreTown_Intro_LeaveWithRivalScene_Movement_4
# 270 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_MARINACRE_MAYAS_MOTHER, 5, 6
# 271 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_MARINACRE_MAYAS_MOTHER
# 272 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYAS_MOTHER, MarinacreTown_Intro_LeaveWithRivalScene_Movement_5
# 277 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 280 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_WalkInPlaceRight
# 281 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_4, MSGBOX_DEFAULT
# 285 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 288 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYAS_FATHER, Common_Movement_WalkInPlaceDown
# 289 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_5, MSGBOX_DEFAULT
# 294 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 295 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 297 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYAS_MOTHER, Common_Movement_WalkInPlaceLeft
# 298 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_6, MSGBOX_DEFAULT
# 303 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 306 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, MarinacreTown_Intro_LeaveWithRivalScene_Movement_6
# 310 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYAS_MOTHER, DIR_SOUTH
# 313 "data/maps/MarinacreTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 314 "data/maps/MarinacreTown/scripts.pory"
	message MarinacreTown_Intro_LeaveWithRivalScene_Text_7
# 315 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 316 "data/maps/MarinacreTown/scripts.pory"
	waitfanfare
# 317 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 318 "data/maps/MarinacreTown/scripts.pory"
	additem ITEM_TOWN_MAP, 1
# 320 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_8, MSGBOX_DEFAULT
# 328 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 330 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYAS_FATHER, MarinacreTown_Intro_LeaveWithRivalScene_Movement_7
# 334 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYAS_MOTHER, MarinacreTown_Intro_LeaveWithRivalScene_Movement_8
# 339 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 340 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_WalkInPlaceRight
# 341 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_9, MSGBOX_DEFAULT
# 346 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 347 "data/maps/MarinacreTown/scripts.pory"
	waitmovement LOCALID_MARINACRE_MAYAS_FATHER
# 348 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_MARINACRE_MAYAS_FATHER, 0, 48
# 349 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_MARINACRE_MAYAS_MOTHER, 0, 48
# 350 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_MARINACRE_MAYAS_FATHER
# 351 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_MARINACRE_MAYAS_MOTHER
# 353 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 354 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 355 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_10, MSGBOX_DEFAULT
# 366 "data/maps/MarinacreTown/scripts.pory"
	msgbox MarinacreTown_Intro_LeaveWithRivalScene_Text_11, MSGBOX_DEFAULT
# 371 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 373 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, MarinacreTown_Intro_LeaveWithRivalScene_Movement_9
# 379 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 380 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_MARINACRE_MAYA
# 381 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_MARINACRE_MAYA, 0, 47
# 382 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 8
# 384 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return


HomeTown_BeachScene1_Start::
# 388 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 389 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 2
# 390 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 393 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_FaceUp
# 394 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 396 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_ExclamationMark
# 397 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 399 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_0, MSGBOX_DEFAULT
# 404 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 407 "data/maps/MarinacreTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 408 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_0x8008
# 409 "data/maps/MarinacreTown/scripts.pory"
	case 29, HomeTown_BeachScene1_Start_3
# 417 "data/maps/MarinacreTown/scripts.pory"
	case 30, HomeTown_BeachScene1_Start_4
# 424 "data/maps/MarinacreTown/scripts.pory"
	case 31, HomeTown_BeachScene1_Start_5
HomeTown_BeachScene1_Start_1:
# 430 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 431 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 432 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 435 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_1, MSGBOX_DEFAULT
# 449 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 450 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_SOUTH
# 451 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 452 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_2, MSGBOX_DEFAULT
# 462 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 464 "data/maps/MarinacreTown/scripts.pory"
	fadeoutbgm 3
# 465 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 466 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 467 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_BeachScene1_Start_Text_3
# 486 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 487 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_WEST
# 488 "data/maps/MarinacreTown/scripts.pory"
	waitbuttonpress
# 489 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 490 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_4, MSGBOX_DEFAULT
# 497 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_WalkInPlaceRight
# 498 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 500 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_5, MSGBOX_DEFAULT
# 509 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 511 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_EndMonologue
# 512 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 513 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_EndMonologue
# 514 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/MarinacreTown/scripts.pory"
	delay 100
# 518 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 519 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_QuestionMark
# 520 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 521 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 522 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_6, MSGBOX_DEFAULT
# 526 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 529 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_WalkToBag
# 530 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 531 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_WalkToBag
# 532 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 533 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 536 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_7, MSGBOX_DEFAULT
# 542 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 543 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Start_Movement_3
# 546 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 548 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 549 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_ExclamationMark
# 550 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 552 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Start_Movement_4
# 563 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 564 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_8, MSGBOX_DEFAULT
# 569 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 570 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_NORTH
# 571 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_9, MSGBOX_DEFAULT
# 576 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 577 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 578 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 579 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_10, MSGBOX_DEFAULT
# 582 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 585 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Start_Movement_5
# 590 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 591 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 592 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 593 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_GRASS, 27, 35
# 594 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_GRASS
# 595 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 596 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 597 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_GoToNextStarter
# 598 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_FIRE, 28, 35
# 600 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_FIRE
# 601 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 602 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 603 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_GoToNextStarter
# 604 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 605 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_BALL_WATER, 29, 35
# 606 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_BALL_WATER
# 607 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 608 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 609 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Start_Movement_6
# 613 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 616 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 617 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 618 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_GRASS, 27, 35
# 619 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_FIRE, 28, 35
# 620 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_HOMETOWN_STARTER_WATER, 29, 35
# 621 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_GRASS
# 622 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_FIRE
# 623 "data/maps/MarinacreTown/scripts.pory"
	addobject LOCALID_HOMETOWN_STARTER_WATER
# 624 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_GRASS
# 625 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_FIRE
# 626 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BALL_WATER
# 627 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL_OPEN
# 628 "data/maps/MarinacreTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 629 "data/maps/MarinacreTown/scripts.pory"
	lockall
# 630 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 631 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_FIRE, HomeTown_BeachScene1_StarterReact
# 632 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 633 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 634 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_GRASS, HomeTown_BeachScene1_StarterReact
# 635 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 636 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 637 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_HOMETOWN_STARTER_WATER, HomeTown_BeachScene1_StarterReact
# 638 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 641 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Start_Movement_7
# 646 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 647 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_11, MSGBOX_DEFAULT
# 650 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 651 "data/maps/MarinacreTown/scripts.pory"
	releaseall
# 652 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_FaceUp
# 653 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 656 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 657 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 658 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 659 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_12, MSGBOX_DEFAULT
# 666 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 667 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 668 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_NORTH
# 669 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 670 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_13, MSGBOX_DEFAULT
# 680 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 681 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 682 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 683 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 684 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_14
# 689 "data/maps/MarinacreTown/scripts.pory"
	dynmultichoice 25, 6, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, HomeTown_BeachScene1_Start_Text_15, HomeTown_BeachScene1_Start_Text_16, HomeTown_BeachScene1_Start_Text_17
# 691 "data/maps/MarinacreTown/scripts.pory"
	switch VAR_RESULT
# 692 "data/maps/MarinacreTown/scripts.pory"
	case 0, HomeTown_BeachScene1_Start_8
# 701 "data/maps/MarinacreTown/scripts.pory"
	case 1, HomeTown_BeachScene1_Start_9
# 712 "data/maps/MarinacreTown/scripts.pory"
	case 2, HomeTown_BeachScene1_Start_10
HomeTown_BeachScene1_Start_6:
# 725 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 726 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 727 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_SOUTH
# 728 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 729 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, Common_Movement_ExclamationMark
# 730 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 731 "data/maps/MarinacreTown/scripts.pory"
	delay 40
# 732 "data/maps/MarinacreTown/scripts.pory"
	fadeinbgm 1
# 733 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 734 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_21, MSGBOX_DEFAULT
# 750 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 751 "data/maps/MarinacreTown/scripts.pory"
	delay 20
# 752 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 753 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_NORTH
# 754 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_22, MSGBOX_DEFAULT
# 763 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_EAST
# 764 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_23
# 769 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 771 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Start_3:
# 410 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_0
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_4:
# 418 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_1
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_5:
# 425 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Start_Movement_2
	goto HomeTown_BeachScene1_Start_1

HomeTown_BeachScene1_Start_8:
# 693 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_18, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_9:
# 702 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_19, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6

HomeTown_BeachScene1_Start_10:
# 713 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Start_Text_20, MSGBOX_DEFAULT
	goto HomeTown_BeachScene1_Start_6


HomeTown_BeachScene1_ExamineStarterGrass::
# 775 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_TURTWIG
# 776 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_GRASS
# 777 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterGrass_Text_0
# 778 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 779 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterFire::
# 783 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_FENNEKIN
# 784 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_FIRE
# 785 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterFire_Text_0
# 786 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 787 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarterWater::
# 791 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8000, SPECIES_POPPLIO
# 792 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_0x8001, LOCALID_HOMETOWN_STARTER_WATER
# 793 "data/maps/MarinacreTown/scripts.pory"
	bufferstring STR_VAR_2, HomeTown_BeachScene1_ExamineStarterWater_Text_0
# 794 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 795 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_ExamineStarter
	return


HomeTown_BeachScene1_ExamineStarter::
# 799 "data/maps/MarinacreTown/scripts.pory"
	lock
# 800 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 801 "data/maps/MarinacreTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8000
# 802 "data/maps/MarinacreTown/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 803 "data/maps/MarinacreTown/scripts.pory"
	playmoncry VAR_0x8000, 0
# 804 "data/maps/MarinacreTown/scripts.pory"
	waitmoncry
# 805 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_ExamineStarter_Text_0, MSGBOX_YESNO
# 810 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_ExamineStarter_1
# 814 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 815 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 816 "data/maps/MarinacreTown/scripts.pory"
	release
	return

HomeTown_BeachScene1_ExamineStarter_1:
# 811 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_TakeStarter
	return


HomeTown_BeachScene1_TakeStarter::
# 821 "data/maps/MarinacreTown/scripts.pory"
	hidemonpic
# 822 "data/maps/MarinacreTown/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 823 "data/maps/MarinacreTown/scripts.pory"
	message HomeTown_BeachScene1_TakeStarter_Text_0
# 824 "data/maps/MarinacreTown/scripts.pory"
	waitmessage
# 825 "data/maps/MarinacreTown/scripts.pory"
	waitfanfare
# 826 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 827 "data/maps/MarinacreTown/scripts.pory"
	release
# 828 "data/maps/MarinacreTown/scripts.pory"
	removeobject VAR_0x8001
# 829 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 831 "data/maps/MarinacreTown/scripts.pory"
	givemon VAR_0x8000, 5
# 832 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 833 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 834 "data/maps/MarinacreTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 835 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HomeTown_BeachScene1_TakeStarter_1
# 840 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return

HomeTown_BeachScene1_TakeStarter_1:
# 836 "data/maps/MarinacreTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 837 "data/maps/MarinacreTown/scripts.pory"
	goto HomeTown_BeachScene1_Finish
	return


HomeTown_BeachScene1_Finish::
# 845 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 846 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_MARINACRE_MAYA, DIR_NORTH
# 847 "data/maps/MarinacreTown/scripts.pory"
	delay 10
# 848 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_0, MSGBOX_DEFAULT
# 852 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 855 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Finish_Movement_0
# 860 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 861 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_BAG
# 862 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
# 863 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Finish_Movement_1
# 868 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_BeachScene1_Finish_Movement_2
# 873 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 876 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Finish_Movement_3
# 879 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 880 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_ne HomeTown_BeachScene1_Finish_2
HomeTown_BeachScene1_Finish_1:
# 885 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_ne HomeTown_BeachScene1_Finish_5
# 893 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_IntroPreventLeave_Movement_3
# 896 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_4:
# 898 "data/maps/MarinacreTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_ne HomeTown_BeachScene1_Finish_9
# 906 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_IntroPreventLeave_Movement_3
# 909 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
HomeTown_BeachScene1_Finish_8:
# 913 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Finish_Movement_4
# 918 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 919 "data/maps/MarinacreTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 920 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_Finish_Text_1, MSGBOX_DEFAULT
# 926 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 929 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_Finish_Movement_5
# 936 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 937 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_MARINACRE_MAYA
# 938 "data/maps/MarinacreTown/scripts.pory"
	setobjectxyperm LOCALID_MARINACRE_MAYA, 0, 47
# 940 "data/maps/MarinacreTown/scripts.pory"
	setflag FLAG_INTRO_MET_RIVAL
# 941 "data/maps/MarinacreTown/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 3
# 943 "data/maps/MarinacreTown/scripts.pory"
	releaseall
	return

HomeTown_BeachScene1_Finish_2:
# 881 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 882 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_GRASS
# 883 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
	goto HomeTown_BeachScene1_Finish_1

HomeTown_BeachScene1_Finish_5:
# 886 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_GoToNextStarter
# 887 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 888 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 889 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_FIRE
# 890 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
	goto HomeTown_BeachScene1_Finish_4

HomeTown_BeachScene1_Finish_9:
# 899 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_GoToNextStarter
# 900 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 901 "data/maps/MarinacreTown/scripts.pory"
	delay 30
# 902 "data/maps/MarinacreTown/scripts.pory"
	removeobject LOCALID_HOMETOWN_STARTER_WATER
# 903 "data/maps/MarinacreTown/scripts.pory"
	playse SE_BALL
	goto HomeTown_BeachScene1_Finish_8


HomeTown_BeachScene1_PreventLeave::
# 947 "data/maps/MarinacreTown/scripts.pory"
	lock
# 948 "data/maps/MarinacreTown/scripts.pory"
	playse SE_PIN
# 949 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_MARINACRE_MAYA, HomeTown_BeachScene1_PreventLeave_Movement_0
# 953 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 954 "data/maps/MarinacreTown/scripts.pory"
	delay 60
# 955 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_PreventLeave_Text_0, MSGBOX_DEFAULT
# 960 "data/maps/MarinacreTown/scripts.pory"
	closemessage
# 961 "data/maps/MarinacreTown/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_IntroPreventLeave_Movement_0
# 964 "data/maps/MarinacreTown/scripts.pory"
	waitmovement 0
# 965 "data/maps/MarinacreTown/scripts.pory"
	release
	return


HomeTown_BeachScene1_FlavorTextBag::
# 969 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_FlavorTextBag_Text_0, MSGBOX_SIGN
	return


HomeTown_BeachScene1_TalkRival::
# 977 "data/maps/MarinacreTown/scripts.pory"
	lock
# 978 "data/maps/MarinacreTown/scripts.pory"
	faceplayer
# 979 "data/maps/MarinacreTown/scripts.pory"
	msgbox HomeTown_BeachScene1_TalkRival_Text_0, MSGBOX_DEFAULT
# 984 "data/maps/MarinacreTown/scripts.pory"
	release
	return


# 987 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_EndMonologue:
# 988 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 988 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 991 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_WalkToBag:
# 992 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 992 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 993 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 993 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 993 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 994 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 995 "data/maps/MarinacreTown/scripts.pory"
	walk_down
	step_end

# 998 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_GoToNextStarter:
# 999 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 1000 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 1003 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_StarterReact:
# 1004 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 1005 "data/maps/MarinacreTown/scripts.pory"
	face_down
# 1006 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 1006 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 1007 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_down
# 1008 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 1009 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 1010 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 1011 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 1012 "data/maps/MarinacreTown/scripts.pory"
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

# 244 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_3:
# 245 "data/maps/MarinacreTown/scripts.pory"
	walk_left
	step_end

# 265 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_4:
# 266 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 266 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 266 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 266 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 266 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 267 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 267 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 267 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 267 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 268 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 272 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_5:
# 273 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 273 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 273 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 273 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 273 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 273 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 274 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 274 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 274 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 275 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 306 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_6:
# 307 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 308 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 330 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_7:
# 331 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 331 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 331 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 331 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 332 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 332 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 332 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 332 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 332 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 332 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 334 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_8:
# 335 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 335 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 335 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 336 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 336 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 336 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 336 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 336 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/MarinacreTown/scripts.pory"
MarinacreTown_Intro_LeaveWithRivalScene_Movement_9:
# 374 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 375 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 376 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 376 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 377 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 377 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 377 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 377 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 377 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 377 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
# 377 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_left
	step_end

# 410 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_0:
# 411 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 412 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 412 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 413 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 414 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 415 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 418 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_1:
# 419 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 419 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 420 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 421 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 422 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 425 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_2:
# 426 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 426 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 426 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 427 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 543 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_3:
# 544 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 545 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 552 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_4:
# 553 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 553 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_right
# 554 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 554 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 555 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 556 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 557 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 558 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 559 "data/maps/MarinacreTown/scripts.pory"
	face_up
# 560 "data/maps/MarinacreTown/scripts.pory"
	delay_8
# 561 "data/maps/MarinacreTown/scripts.pory"
	face_right
	step_end

# 585 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_5:
# 586 "data/maps/MarinacreTown/scripts.pory"
	walk_in_place_right
# 587 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 587 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 588 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 588 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 609 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_6:
# 610 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 610 "data/maps/MarinacreTown/scripts.pory"
	walk_left
# 611 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 641 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Start_Movement_7:
# 642 "data/maps/MarinacreTown/scripts.pory"
	jump_in_place_up
# 643 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_down
# 644 "data/maps/MarinacreTown/scripts.pory"
	face_up
	step_end

# 855 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_0:
# 856 "data/maps/MarinacreTown/scripts.pory"
	walk_down
# 857 "data/maps/MarinacreTown/scripts.pory"
	face_right
# 858 "data/maps/MarinacreTown/scripts.pory"
	delay_16
	step_end

# 863 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_1:
# 864 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 865 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 866 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 868 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_2:
# 869 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 870 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 870 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 871 "data/maps/MarinacreTown/scripts.pory"
	face_down
	step_end

# 876 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_3:
# 877 "data/maps/MarinacreTown/scripts.pory"
	walk_up
	step_end

# 913 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_4:
# 914 "data/maps/MarinacreTown/scripts.pory"
	walk_right
# 915 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 915 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 916 "data/maps/MarinacreTown/scripts.pory"
	face_left
	step_end

# 929 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_Finish_Movement_5:
# 930 "data/maps/MarinacreTown/scripts.pory"
	walk_up
# 931 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 931 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 932 "data/maps/MarinacreTown/scripts.pory"
	face_left
# 933 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 933 "data/maps/MarinacreTown/scripts.pory"
	delay_16
# 934 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 934 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 934 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 934 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
# 934 "data/maps/MarinacreTown/scripts.pory"
	walk_fast_up
	step_end

# 949 "data/maps/MarinacreTown/scripts.pory"
HomeTown_BeachScene1_PreventLeave_Movement_0:
# 950 "data/maps/MarinacreTown/scripts.pory"
	emote_exclamation_mark
# 951 "data/maps/MarinacreTown/scripts.pory"
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
	.string "A journey to help these poor lost \n"
	.string "Pokémon…\p"
	.string "We'll get to travel across the whole \n"
	.string "region! We can go wherever we want, \l"
	.string "whenever we want!\p"
	.string "…{PAUSE 10}…{PAUSE 10}…\p"
	.string "I-{PAUSE 10}\p"
	.string "…I talked about it with my parents.\n"
	.string "They're… cool with this plan.\p"
	.string "I guess they'll just call me once Dad\n"
	.string "makes his decision…$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_3:
# 250 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey!$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_4:
# 282 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Oh, hey Dad. Hey, Mom.$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_5:
# 290 "data/maps/MarinacreTown/scripts.pory"
	.string "It'd be wrong if we didn't see you and \n"
	.string "{PLAYER} off on your big adventure.$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_6:
# 299 "data/maps/MarinacreTown/scripts.pory"
	.string "Before you two leave town, you should \n"
	.string "take these!$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_7:
# 314 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER} and Maya received Region Maps!$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_8:
# 321 "data/maps/MarinacreTown/scripts.pory"
	.string "Can't have you getting lost out there, \n"
	.string "can we?\p"
	.string "Stay safe and have fun, you two!\n"
	.string "Goodbye!$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_9:
# 342 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: ………{PAUSE 10}\n"
	.string "Thanks, Mom! Thanks, Dad!$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_10:
# 356 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}!\n"
	.string "We're all ready to go!\p"
	.string "Professor Hawthorn gave us two\n"
	.string "places to look for clues.\p"
	.string "We can decide which direction\n"
	.string "to go once we reach the next city.$"

MarinacreTown_Intro_LeaveWithRivalScene_Text_11:
# 367 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright, {PLAYER}! \n"
	.string "No time to waste! Let's go!$"

HomeTown_BeachScene1_Start_Text_0:
# 400 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Oh, {PLAYER}!\n"
	.string "I was hoping I'd run into you!$"

HomeTown_BeachScene1_Start_Text_1:
# 436 "data/maps/MarinacreTown/scripts.pory"
	.string "Huh? Why?\p"
	.string "…{PAUSE 30}I just wanted to hang out, dude.\n"
	.string "Does there have to be a reason?\p"
	.string "I feel like it's been forever since we \n"
	.string "just chilled here together.\p"
	.string "Hey, you better not get it in your head\n"
	.string "that you're too cool now!\l"
	.string "I'm supposed to be the cool one!$"

HomeTown_BeachScene1_Start_Text_2:
# 453 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, remember back when we were kids, \n"
	.string "when we found that Shellder in the \l"
	.string "sand?\l"
	.string "…{PAUSE 10}And then I stuck it in my mom's purse?\p"
	.string "Her face when she found it…\n"
	.string "That still cracks me up!$"

HomeTown_BeachScene1_Start_Text_3:
# 468 "data/maps/MarinacreTown/scripts.pory"
	.string "…{PAUSE 30}So…\p"
	.string "You know how my dad's been looking\n"
	.string "for a new job, right?\p"
	.string "After his old place got bought out by\n"
	.string "Devon International?\p"
	.string "Well, he's been going on a bunch of\n"
	.string "interviews, and he finally got an offer!\l"
	.string "That's good, right?\p"
	.string "He hasn't made a decision if he's gonna\n"
	.string "accept it yet.\l"
	.string "It's apparently, like, really good money.\p"
	.string "But if he does…$"

HomeTown_BeachScene1_Start_Text_4:
# 491 "data/maps/MarinacreTown/scripts.pory"
	.string "My family… \n"
	.string "we talked about it earlier.\p"
	.string "Well, I guess less of a talk, and more…$"

HomeTown_BeachScene1_Start_Text_5:
# 501 "data/maps/MarinacreTown/scripts.pory"
	.string "…Gah, forget it!\p"
	.string "I just wanna chill and get my mind off\n"
	.string "it!\p"
	.string "Let's talk about something else!$"

HomeTown_BeachScene1_Start_Text_6:
# 523 "data/maps/MarinacreTown/scripts.pory"
	.string "Hey, what's that over there?$"

HomeTown_BeachScene1_Start_Text_7:
# 537 "data/maps/MarinacreTown/scripts.pory"
	.string "Oh, it's an old bag.\n"
	.string "Must've washed up here.\l"
	.string "Just trash, I guess.$"

HomeTown_BeachScene1_Start_Text_8:
# 565 "data/maps/MarinacreTown/scripts.pory"
	.string "Wait a second!{PAUSE 30} {PLAYER}! Look!\n"
	.string "There are Poké Balls in here!$"

HomeTown_BeachScene1_Start_Text_9:
# 572 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think…{PAUSE 30} there's anything\n"
	.string "in them?$"

HomeTown_BeachScene1_Start_Text_10:
# 580 "data/maps/MarinacreTown/scripts.pory"
	.string "We should probably check, huh?$"

HomeTown_BeachScene1_Start_Text_11:
# 648 "data/maps/MarinacreTown/scripts.pory"
	.string "Woah!$"

HomeTown_BeachScene1_Start_Text_12:
# 660 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}! These Pokémon belong\n"
	.string "to someone!\l"
	.string "Their trainer must've lost that bag \l"
	.string "in the ocean!$"

HomeTown_BeachScene1_Start_Text_13:
# 671 "data/maps/MarinacreTown/scripts.pory"
	.string "They look…{PAUSE 30} \n"
	.string "confused, don't they?\p"
	.string "Like they haven't been let out in a \n"
	.string "really long time.\p"
	.string "How long were they out in the ocean?$"

HomeTown_BeachScene1_Start_Text_14:
# 685 "data/maps/MarinacreTown/scripts.pory"
	.string "What should we do about this,\n"
	.string "{PLAYER}?\l"
	.string "Got any ideas?$"

HomeTown_BeachScene1_Start_Text_15:
# 690 "data/maps/MarinacreTown/scripts.pory"
	.string "No clue$"

HomeTown_BeachScene1_Start_Text_16:
# 690 "data/maps/MarinacreTown/scripts.pory"
	.string "Look for their trainer$"

HomeTown_BeachScene1_Start_Text_17:
# 690 "data/maps/MarinacreTown/scripts.pory"
	.string "Finders keepers$"

HomeTown_BeachScene1_Start_Text_18:
# 694 "data/maps/MarinacreTown/scripts.pory"
	.string "Yeah, me neither.\p"
	.string "I wanna say we should try to return\n"
	.string "them to their trainer, but…\l"
	.string "where would we even start?$"

HomeTown_BeachScene1_Start_Text_19:
# 703 "data/maps/MarinacreTown/scripts.pory"
	.string "Do you think there's a shot?\n"
	.string "It'd be the right thing to do, but…\p"
	.string "…{PAUSE 30}Who knows where they drifted in from,\n"
	.string "or how long they've been out there?\p"
	.string "Where would we even start looking?$"

HomeTown_BeachScene1_Start_Text_20:
# 714 "data/maps/MarinacreTown/scripts.pory"
	.string "…You really think so?\n"
	.string "I guess it'd be hard to track down\l"
	.string "their original trainer…\p"
	.string "But I feel like we should at least try,\n"
	.string "you know? Like, maybe…\p"
	.string "…{PAUSE 30}Nevermind. I got nothing.$"

HomeTown_BeachScene1_Start_Text_21:
# 735 "data/maps/MarinacreTown/scripts.pory"
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
# 755 "data/maps/MarinacreTown/scripts.pory"
	.string "{PLAYER}, how about we each keep one \n"
	.string "of these Pokémon for the trip?\p"
	.string "Yeah, that sounds like a plan!\n"
	.string "Great plan, me!\l"
	.string "Thanks, me!$"

HomeTown_BeachScene1_Start_Text_23:
# 765 "data/maps/MarinacreTown/scripts.pory"
	.string "Go ahead, {PLAYER}!\n"
	.string "You pick first!$"

HomeTown_BeachScene1_ExamineStarterGrass_Text_0:
# 777 "data/maps/MarinacreTown/scripts.pory"
	.string "Grass$"

HomeTown_BeachScene1_ExamineStarterFire_Text_0:
# 785 "data/maps/MarinacreTown/scripts.pory"
	.string "Fire$"

HomeTown_BeachScene1_ExamineStarterWater_Text_0:
# 793 "data/maps/MarinacreTown/scripts.pory"
	.string "Water$"

HomeTown_BeachScene1_ExamineStarter_Text_0:
# 806 "data/maps/MarinacreTown/scripts.pory"
	.string "{STR_VAR_1}\n"
	.string "The {STR_VAR_2}-type Pokémon\p"
	.string "Take {STR_VAR_1} with you?$"

HomeTown_BeachScene1_TakeStarter_Text_0:
# 823 "data/maps/MarinacreTown/scripts.pory"
	.string "You took {STR_VAR_1} with you!$"

HomeTown_BeachScene1_Finish_Text_0:
# 849 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright, then!\n"
	.string "I'll bring the rest!$"

HomeTown_BeachScene1_Finish_Text_1:
# 921 "data/maps/MarinacreTown/scripts.pory"
	.string "Alright then! Let's not waste any time!\n"
	.string "I'll meet you at Professor Hawthorn's\l"
	.string "lab!$"

HomeTown_BeachScene1_PreventLeave_Text_0:
# 956 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hey, where are you going?\n"
	.string "Don't leave now!$"

HomeTown_BeachScene1_FlavorTextBag_Text_0:
# 970 "data/maps/MarinacreTown/scripts.pory"
	.string "It's been bleached by the sun,\n"
	.string "and pummeled by waves.$"

HomeTown_BeachScene1_TalkRival_Text_0:
# 980 "data/maps/MarinacreTown/scripts.pory"
	.string "MAYA: Hurry up and pick one!\n"
	.string "Uh, no rush, though!$"
