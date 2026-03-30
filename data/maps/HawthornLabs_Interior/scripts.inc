HawthornLabs_Interior_MapScripts::
# 2 "data/maps/HawthornLabs_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HawthornLabs_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HawthornLabs_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/HawthornLabs_Interior/scripts.pory"
	map_script_2 VAR_INTRO_SEQUENCE_STATE, 3, HawthornLabs_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

HawthornLabs_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/HawthornLabs_Interior/scripts.pory"
	call HawthornLabs_Interior_Intro_MeetProfessorScene
	return


HawthornLabs_Interior_LockedDoor::
# 10 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_LockedDoor_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_DoorNotice::
# 17 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_DoorNotice_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_WallLogo::
# 29 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_WallLogo_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf1::
# 39 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf1_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf2::
# 48 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf2_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf3::
# 62 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf3_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf4::
# 73 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf4_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf5::
# 82 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf5_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf6::
# 91 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf6_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Talk_Scientist1::
# 99 "data/maps/HawthornLabs_Interior/scripts.pory"
	lock
# 100 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Scientist1_Text_0, MSGBOX_DEFAULT
# 105 "data/maps/HawthornLabs_Interior/scripts.pory"
	faceplayer
# 106 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Scientist1_Text_1, MSGBOX_DEFAULT
# 120 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 121 "data/maps/HawthornLabs_Interior/scripts.pory"
	release
	return


HawthornLabs_Interior_Talk_Receptionist::
# 125 "data/maps/HawthornLabs_Interior/scripts.pory"
	lock
# 126 "data/maps/HawthornLabs_Interior/scripts.pory"
	faceplayer
# 127 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Receptionist_Text_0, MSGBOX_DEFAULT
# 136 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 137 "data/maps/HawthornLabs_Interior/scripts.pory"
	release
	return


HawthornLabs_Interior_Talk_Professor::
# 141 "data/maps/HawthornLabs_Interior/scripts.pory"
	lock
# 142 "data/maps/HawthornLabs_Interior/scripts.pory"
	faceplayer
# 143 "data/maps/HawthornLabs_Interior/scripts.pory"
	compare VAR_INTRO_SEQUENCE_STATE, 9
	goto_if_lt HawthornLabs_Interior_Talk_Professor_2
HawthornLabs_Interior_Talk_Professor_1:
# 154 "data/maps/HawthornLabs_Interior/scripts.pory"
	release
	return

HawthornLabs_Interior_Talk_Professor_2:
# 144 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Professor_Text_0, MSGBOX_DEFAULT
# 152 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
	goto HawthornLabs_Interior_Talk_Professor_1


HawthornLabs_Interior_Intro_MeetProfessorScene::
# 158 "data/maps/HawthornLabs_Interior/scripts.pory"
	lockall
# 160 "data/maps/HawthornLabs_Interior/scripts.pory"
	special HealPlayerParty
# 162 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 163 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_ExclamationMark
# 164 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 165 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 166 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 168 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_0, MSGBOX_DEFAULT
# 174 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 175 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 176 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 177 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_ExclamationMark
# 178 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_1, MSGBOX_NPC
# 182 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_0
# 188 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 190 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_2, MSGBOX_NPC
# 199 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_3, MSGBOX_DEFAULT
# 207 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_4, MSGBOX_NPC
# 216 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 217 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_5, MSGBOX_DEFAULT
# 221 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 223 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 224 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 225 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RECEPTIONIST, DIR_EAST
# 226 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_PROFESSOR, 8, 14
# 227 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_PROFESSOR
# 228 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_1
# 232 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 234 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 235 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 236 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_6, MSGBOX_NPC
# 243 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 244 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 245 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_7, MSGBOX_DEFAULT
# 254 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 255 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 256 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_8, MSGBOX_NPC
# 262 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 263 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 264 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 265 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_9, MSGBOX_DEFAULT
# 272 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 273 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 274 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_2
# 283 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 284 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 285 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_10, MSGBOX_NPC
# 289 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 290 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_3
# 294 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 295 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_RECEPTIONIST
# 296 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_RECEPTIONIST, 0, 47
# 298 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_4
# 302 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 303 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_11, MSGBOX_DEFAULT
# 311 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 312 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 313 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_12, MSGBOX_DEFAULT
# 330 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_13, MSGBOX_DEFAULT
# 338 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
	hideobjectat LOCALID_LABINT_BAG, 0
# 341 "data/maps/HawthornLabs_Interior/scripts.pory"
	hideobjectat LOCALID_LABINT_STARTER_GRASS, 0
# 342 "data/maps/HawthornLabs_Interior/scripts.pory"
	hideobjectat LOCALID_LABINT_STARTER_FIRE, 0
# 343 "data/maps/HawthornLabs_Interior/scripts.pory"
	hideobjectat LOCALID_LABINT_STARTER_WATER, 0
# 344 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_5
# 350 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_6
# 356 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_7
# 362 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 363 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_PROFESSOR, DIR_EAST
# 364 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 10
# 365 "data/maps/HawthornLabs_Interior/scripts.pory"
	showobjectat LOCALID_LABINT_BAG, 0
# 366 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 368 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_14, MSGBOX_DEFAULT
# 383 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 385 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 386 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_15, MSGBOX_DEFAULT
# 390 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 391 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_SOUTH
# 392 "data/maps/HawthornLabs_Interior/scripts.pory"
	fadescreen FADE_TO_WHITE
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	showobjectat LOCALID_LABINT_STARTER_GRASS, 0
# 394 "data/maps/HawthornLabs_Interior/scripts.pory"
	showobjectat LOCALID_LABINT_STARTER_FIRE, 0
# 395 "data/maps/HawthornLabs_Interior/scripts.pory"
	showobjectat LOCALID_LABINT_STARTER_WATER, 0
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 397 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_3
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_4
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_5
HawthornLabs_Interior_Intro_MeetProfessorScene_1:
# 410 "data/maps/HawthornLabs_Interior/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 413 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8
# 417 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 419 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_16, MSGBOX_DEFAULT
# 428 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_17, MSGBOX_DEFAULT
# 438 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_18, MSGBOX_DEFAULT
# 443 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 445 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 446 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_19, MSGBOX_DEFAULT
# 452 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 454 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_9
# 459 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 460 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 461 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 462 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_20, MSGBOX_DEFAULT
# 477 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_21, MSGBOX_DEFAULT
# 511 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 512 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_10
# 515 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 516 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_22, MSGBOX_DEFAULT
# 521 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 522 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 523 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_11
# 527 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 528 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_23, MSGBOX_DEFAULT
# 532 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 533 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 534 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_8
# 537 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_9
# 540 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_10
HawthornLabs_Interior_Intro_MeetProfessorScene_6:
# 544 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 546 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 547 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 548 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_24, MSGBOX_DEFAULT
# 556 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 557 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 558 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 559 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 560 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_13
# 563 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_14
# 566 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_15
HawthornLabs_Interior_Intro_MeetProfessorScene_11:
# 570 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 572 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_25, MSGBOX_DEFAULT
# 581 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_12
# 587 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_26, MSGBOX_DEFAULT
# 591 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 592 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 593 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_WEST
# 594 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 595 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 596 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_PROFESSOR, 15, 4
# 597 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_PROFESSOR
# 599 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 600 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_27, MSGBOX_DEFAULT
# 608 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 609 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_13
# 613 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_RIVAL, 32, 0
# 614 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_RIVAL
# 616 "data/maps/HawthornLabs_Interior/scripts.pory"
	setflag FLAG_INTRO_MET_PROFESSOR
# 617 "data/maps/HawthornLabs_Interior/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 4
# 618 "data/maps/HawthornLabs_Interior/scripts.pory"
	releaseall
	return

HawthornLabs_Interior_Intro_MeetProfessorScene_3:
# 398 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 13, 12
# 399 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 14, 12
# 400 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_4:
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 13, 12
# 403 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 14, 12
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_5:
# 406 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 13, 12
# 407 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 14, 12
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_8:
# 535 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 32, 0
# 536 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_FIRE
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_9:
# 538 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 32, 0
# 539 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_WATER
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_10:
# 541 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 32, 0
# 542 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_GRASS
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_13:
# 561 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 32, 0
# 562 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_GRASS
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11

HawthornLabs_Interior_Intro_MeetProfessorScene_14:
# 564 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 32, 0
# 565 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_FIRE
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11

HawthornLabs_Interior_Intro_MeetProfessorScene_15:
# 567 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 32, 0
# 568 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_WATER
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11


# 621 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_ApproachDesk:
# 622 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 622 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 182 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_0:
# 183 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 183 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 184 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 184 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 185 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 186 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 228 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_1:
# 229 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 229 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 229 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 229 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 229 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 230 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 274 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_2:
# 275 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 276 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 276 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 277 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
# 278 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 278 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 279 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 280 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 281 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
	step_end

# 290 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_3:
# 291 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 292 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 292 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 292 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 292 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 292 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 298 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_4:
# 299 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 300 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 344 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_5:
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 346 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 346 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 346 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 346 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 347 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 348 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 350 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_6:
# 351 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 351 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 354 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 356 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_7:
# 357 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 357 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 358 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 359 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 359 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 359 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 359 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 359 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 360 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_up
	step_end

# 413 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8:
# 414 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 414 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 415 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
	step_end

# 454 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_9:
# 455 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 455 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 455 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 456 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 456 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 457 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 512 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_10:
# 513 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_left
	step_end

# 523 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_11:
# 524 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 525 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 581 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_12:
# 582 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 582 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 583 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 583 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 584 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 584 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 584 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 585 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 585 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 585 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 585 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 585 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 585 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 585 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 609 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_13:
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
	step_end

HawthornLabs_Interior_LockedDoor_Text_0:
# 11 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The door is locked.$"

HawthornLabs_Interior_DoorNotice_Text_0:
# 18 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A series of notes is posted beside the door:\p"
	.string "“TYPE ENERGETICS LAB - RESTRICTED AREA”\n"
	.string "“(That means no unauthorized personnel)”\l"
	.string "“(That means you, Reynolds)”$"

HawthornLabs_Interior_WallLogo_Text_0:
# 30 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "HAWTHORN LABS\p"
	.string "It's difficult to tell what it says, but\n"
	.string "it does say that, if you squint.$"

HawthornLabs_Interior_Bookshelf1_Text_0:
# 40 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “The ecological impacts\n"
	.string "of regional and generational gimmicks:\l"
	.string "a meta-anaylsis”$"

HawthornLabs_Interior_Bookshelf2_Text_0:
# 49 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “Identification of\n"
	.string "natural variation of ThkFt1Ab-PKy38\l"
	.string "glycoprotein heterodimers resulting in\l"
	.string "emergent fire-type resistance in\l"
	.string "Swinub population.”\p"
	.string "This is fascinating to someone,\n"
	.string "probably.$"

HawthornLabs_Interior_Bookshelf3_Text_0:
# 63 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A book called “I Was Reincarnated in\n"
	.string "Another World of Half-Pokémon\l"
	.string "Women?”\p"
	.string "This shouldn't be here.$"

HawthornLabs_Interior_Bookshelf4_Text_0:
# 74 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “A double-blind\n"
	.string "analysis on the effects of IV spreads\l"
	.string "on the gut microbiome of Pidgey.”$"

HawthornLabs_Interior_Bookshelf5_Text_0:
# 83 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “A genomic basis for\n"
	.string "the distinct classification of Normal\l"
	.string "and Fairy-type Clefable.”$"

HawthornLabs_Interior_Bookshelf6_Text_0:
# 92 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A book called “The ??? Type and\n"
	.string "Other Anomalies”$"

HawthornLabs_Interior_Talk_Scientist1_Text_0:
# 101 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Thirty-one… Seventy-five…\n"
	.string "One hundred eighteen…$"

HawthornLabs_Interior_Talk_Scientist1_Text_1:
# 107 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "My job is to monitor the machines, and\n"
	.string "record the values they output.\p"
	.string "…Actually, the Professor has never told\n"
	.string "me what these machines do.\l"
	.string "But if I get it wrong, she gets really\l"
	.string "mad at me.\p"
	.string "They look super science-y and high-\n"
	.string "tech, though, so they must be doing\l"
	.string "something important, right?$"

HawthornLabs_Interior_Talk_Receptionist_Text_0:
# 128 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Professor Hawthorn is very particular\n"
	.string "about the kinds of people she allows in\l"
	.string "the lab.\p"
	.string "For example, after she hired me,\n"
	.string "she didn't let me in for two weeks.$"

HawthornLabs_Interior_Talk_Professor_Text_0:
# 145 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: You have your mission, don't\n"
	.string "you?\p"
	.string "Go ahead and run along, now.\n"
	.string "I'm quite busy.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_0:
# 169 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Okay. So, where is Professor\n"
	.string "Hawthorn?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_1:
# 179 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Excuse me!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_2:
# 191 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The lab is about to close for the day.\n"
	.string "Professor Hawthorn is not accepting\l"
	.string "visitors at this time!\p"
	.string "Whatever you're selling, we have no\n"
	.string "interest in it, so please leave!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_3:
# 200 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Huh? We're not here to sell\n"
	.string "anything!\p"
	.string "Please, we need to see the professor,\n"
	.string "it's important!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_4:
# 208 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The professor is busy! Didn't you see\n"
	.string "the sign out front?\p"
	.string "No solicitors allowed!\p"
	.string "Please see yourselves to the door!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_5:
# 218 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "What's all this racket about, now?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_6:
# 237 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Professor Hawthorn, ma'am!\p"
	.string "My apologies, I was just about to show\n"
	.string "these solicitors here to the door.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_7:
# 246 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm?\n"
	.string "Solicitors, you say?\p"
	.string "…\p"
	.string "Let them through, Reynolds.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_8:
# 257 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "…But Professor, isn't that what you\n"
	.string "wrote on the sign out front?\l"
	.string "That was your rule, no?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_9:
# 266 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: …Reynolds.\p"
	.string "Look at them, then look me in the eyes\n"
	.string "and ask me that question again.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_10:
# 286 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "…I-{PAUSE 30}I'll take my leave, then.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_11:
# 304 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Well, now that you've got my\n"
	.string "attention…\l"
	.string "What is it that you two need from me?\p"
	.string "…And please, try to keep it brief.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_12:
# 314 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Um…\n"
	.string "…Hi, Professor! \p"
	.string "We found a bag full of Poké Balls\n"
	.string "washed up on the beach.\l"
	.string "There were Pokémon inside!\p"
	.string "It seemed like they were drifting in the\n"
	.string "ocean for a really long time.\p"
	.string "We want to try and track down their\n"
	.string "trainer and return them.\l"
	.string "We were hoping you'd know where to\l"
	.string "start looking!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_13:
# 331 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR:  …That's quite the story,\n"
	.string "isn't it?\p"
	.string "Come with me, if you will.\n"
	.string "I'd like to take a look at this.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_14:
# 369 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm.\p"
	.string "It does appear as you said.\n"
	.string "This certainly looks like it's been lost\l"
	.string "at sea for quite a while.\p"
	.string "Long enough that there's no telling\n"
	.string "where it originally came from.\p"
	.string "Alright, now, you've piqued my interest.\n"
	.string "Show me the Pokémon you found inside,\l"
	.string "will you?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_15:
# 387 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Okay!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_16:
# 420 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Well now, isn't that\n"
	.string "something.\p"
	.string "Though their Poké Balls are clearly\n"
	.string "weathered, the Pokémon themselves\l"
	.string "appear to be healthy.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_17:
# 429 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: They seemed confused when we let\n"
	.string "them out.\p"
	.string "I wonder if they felt anything while\n"
	.string "they were in the ocean?\l"
	.string "Could they sense the time passing?\l"
	.string "Were they scared? Hungry? Hurting?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_18:
# 439 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Yes, it's a fascinating\n"
	.string "research opportunity, isn't it?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_19:
# 447 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: So, do you have any ideas for how\n"
	.string "we could find their original trainer,\l"
	.string "Professor?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_20:
# 463 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm…\n"
	.string "It's quite the puzzle.\p"
	.string "These could've drifted here from just\n"
	.string "about anywhere.\p"
	.string "The Pokémon themselves are rare\n"
	.string "species, from all over the world.\p"
	.string "Whoever their trainer was, they must've\n"
	.string "been quite the collector. Perhaps that\l"
	.string "could narrow it down.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_21:
# 478 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Off the top of my head…\p"
	.string "There's a Poké Ball factory in\n"
	.string "Armiter City, to the west.\p"
	.string "Perhaps you could get the Poké Balls\n"
	.string "analyzed there, to determine where\l"
	.string "and when they were manufactured.\p"
	.string "You could also try to see if anyone can\n"
	.string "identify the bag.\p"
	.string "There's a boutique in Canvenus City, to\n"
	.string "the south. They might be able to do it.\p"
	.string "I would recommend starting with those\n"
	.string "two places.\p"
	.string "Once you have a lead, return to me, and\n"
	.string "I'll put a word out to my network of\l"
	.string "Pokémon Professors.\p"
	.string "You should each take one of these\n"
	.string "Pokémon with you as you travel.\p"
	.string "Perhaps you could run into someone who\n"
	.string "recognizes them.\p"
	.string "I'll keep the third one here, and see if\n"
	.string "the lab boys can learn anything more.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_22:
# 517 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Great!\n"
	.string "Sounds like a plan!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_23:
# 529 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: I'll take this one, then!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_24:
# 549 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: As for you…\p"
	.string "You appear to already be acquainted\n"
	.string "with that Pokémon beside you.\l"
	.string "Go ahead, now.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_25:
# 573 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Excellent!\p"
	.string "I commend you two for seeking me out.\n"
	.string "Good luck on your search.\p"
	.string "Run along, now!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_26:
# 588 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Alright! Thank you, Professor!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_27:
# 601 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: That went… better than I\n"
	.string "anticipated.\p"
	.string "I guess we'd better get going!\n"
	.string "Let's talk outside, okay, {PLAYER}?$"
