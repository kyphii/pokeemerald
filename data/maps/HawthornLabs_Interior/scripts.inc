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
# 32 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_WallLogo_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf1::
# 42 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf1_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf2::
# 51 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf2_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf3::
# 65 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf3_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf4::
# 76 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf4_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf5::
# 85 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf5_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Bookshelf6::
# 94 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Bookshelf6_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Interior_Talk_Scientist1::
# 102 "data/maps/HawthornLabs_Interior/scripts.pory"
	lock
# 103 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Scientist1_Text_0, MSGBOX_DEFAULT
# 108 "data/maps/HawthornLabs_Interior/scripts.pory"
	faceplayer
# 109 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Scientist1_Text_1, MSGBOX_DEFAULT
# 123 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 124 "data/maps/HawthornLabs_Interior/scripts.pory"
	release
	return


HawthornLabs_Interior_Talk_Receptionist::
# 128 "data/maps/HawthornLabs_Interior/scripts.pory"
	lock
# 129 "data/maps/HawthornLabs_Interior/scripts.pory"
	faceplayer
# 130 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Receptionist_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 140 "data/maps/HawthornLabs_Interior/scripts.pory"
	release
	return


HawthornLabs_Interior_Talk_Professor::
# 144 "data/maps/HawthornLabs_Interior/scripts.pory"
	lock
# 145 "data/maps/HawthornLabs_Interior/scripts.pory"
	faceplayer
# 146 "data/maps/HawthornLabs_Interior/scripts.pory"
	compare VAR_INTRO_SEQUENCE_STATE, 9
	goto_if_lt HawthornLabs_Interior_Talk_Professor_2
HawthornLabs_Interior_Talk_Professor_1:
# 157 "data/maps/HawthornLabs_Interior/scripts.pory"
	release
	return

HawthornLabs_Interior_Talk_Professor_2:
# 147 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Talk_Professor_Text_0, MSGBOX_DEFAULT
# 155 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
	goto HawthornLabs_Interior_Talk_Professor_1


HawthornLabs_Interior_Intro_MeetProfessorScene::
# 161 "data/maps/HawthornLabs_Interior/scripts.pory"
	lockall
# 163 "data/maps/HawthornLabs_Interior/scripts.pory"
	special HealPlayerParty
# 165 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_0
# 168 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_0
# 171 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 172 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 173 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 175 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 177 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_0, MSGBOX_DEFAULT
# 183 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 184 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 185 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_PIN
# 186 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 187 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_ExclamationMark
# 188 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 189 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 190 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_1, MSGBOX_NPC
# 194 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 195 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_1
# 201 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 203 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_2, MSGBOX_NPC
# 212 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 10
# 213 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_PIN
# 214 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_QuestionMark
# 215 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 216 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 217 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_3, MSGBOX_DEFAULT
# 225 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_2
# 230 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 231 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_4, MSGBOX_NPC
# 240 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 241 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 242 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_PIN
# 243 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, Common_Movement_ExclamationMark
# 244 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 245 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RECEPTIONIST, DIR_EAST
# 246 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_5, MSGBOX_DEFAULT
# 250 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 252 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 253 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 254 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RECEPTIONIST, DIR_EAST
# 255 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_PROFESSOR, 9, 14
# 256 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_PROFESSOR
# 257 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_3
# 261 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 263 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 264 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 265 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_4
# 268 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 269 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_6, MSGBOX_NPC
# 276 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 277 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 40
# 278 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 279 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 280 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_7, MSGBOX_DEFAULT
# 285 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 286 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 287 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_8, MSGBOX_DEFAULT
# 293 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 294 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 295 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 296 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 20
# 297 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_4
# 300 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 301 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_9, MSGBOX_NPC
# 307 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 308 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 309 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 310 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_10, MSGBOX_DEFAULT
# 317 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 318 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 319 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 320 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_5
# 333 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 334 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 335 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_11, MSGBOX_NPC
# 339 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_6
# 344 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 345 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_RECEPTIONIST
# 346 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_RECEPTIONIST, 0, 47
# 348 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_7
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 354 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_12, MSGBOX_DEFAULT
# 362 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 363 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 364 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8
# 367 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_13, MSGBOX_DEFAULT
# 384 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_14, MSGBOX_DEFAULT
# 392 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 394 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_9
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_10
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_11
# 415 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 416 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_PROFESSOR, DIR_EAST
# 417 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 418 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8
# 421 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 422 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_BAG, 13, 10
# 423 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_BAG
# 424 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 426 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_15, MSGBOX_DEFAULT
# 441 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 443 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 10
# 444 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8
# 447 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 448 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_16, MSGBOX_DEFAULT
# 452 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 453 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_SOUTH
# 454 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 455 "data/maps/HawthornLabs_Interior/scripts.pory"
	fadescreen FADE_TO_WHITE
# 456 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 457 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_3
# 461 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_4
# 465 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_5
HawthornLabs_Interior_Intro_MeetProfessorScene_1:
# 470 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_STARTER_GRASS
# 471 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_STARTER_FIRE
# 472 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_STARTER_WATER
# 473 "data/maps/HawthornLabs_Interior/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 474 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 476 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_12
# 480 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 482 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_17, MSGBOX_DEFAULT
# 491 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_13
# 494 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 495 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_18, MSGBOX_DEFAULT
# 505 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_PROFESSOR, DIR_NORTH
# 506 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_19, MSGBOX_DEFAULT
# 511 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 512 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_WEST
# 514 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 515 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_20, MSGBOX_DEFAULT
# 521 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 523 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_14
# 527 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 528 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 529 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 530 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_15
# 540 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_21, MSGBOX_DEFAULT
# 555 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 556 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_PROFESSOR, DIR_SOUTH
# 557 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 558 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_13
# 561 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 562 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_22, MSGBOX_DEFAULT
# 596 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 597 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_16
# 600 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 601 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_23, MSGBOX_DEFAULT
# 606 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 607 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 608 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 609 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_17
# 613 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 614 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_24, MSGBOX_DEFAULT
# 618 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 619 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 620 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_8
# 623 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_9
# 626 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_10
HawthornLabs_Interior_Intro_MeetProfessorScene_6:
# 630 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 631 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_17
# 635 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 636 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 637 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_25, MSGBOX_DEFAULT
# 645 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 646 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 647 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 648 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 649 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_13
# 652 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_14
# 655 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_15
HawthornLabs_Interior_Intro_MeetProfessorScene_11:
# 659 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 661 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 662 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 663 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_26, MSGBOX_DEFAULT
# 672 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_18
# 678 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_19
# 682 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 40
# 683 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_27, MSGBOX_DEFAULT
# 687 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 688 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 689 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 690 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_WEST
# 691 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement LOCALID_LABINT_PROFESSOR
# 692 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_PROFESSOR, 15, 4
# 693 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_PROFESSOR
# 695 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 696 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_28, MSGBOX_DEFAULT
# 704 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_20
# 709 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 710 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_RIVAL, 32, 0
# 711 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_RIVAL
# 713 "data/maps/HawthornLabs_Interior/scripts.pory"
	setflag FLAG_INTRO_MET_PROFESSOR
# 714 "data/maps/HawthornLabs_Interior/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 4
# 715 "data/maps/HawthornLabs_Interior/scripts.pory"
	releaseall
	return

HawthornLabs_Interior_Intro_MeetProfessorScene_3:
# 458 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 13, 12
# 459 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 14, 12
# 460 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_4:
# 462 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 13, 12
# 463 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 14, 12
# 464 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_5:
# 466 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 13, 12
# 467 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 14, 12
# 468 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_8:
# 621 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 32, 0
# 622 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_FIRE
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_9:
# 624 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 32, 0
# 625 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_WATER
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_10:
# 627 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 32, 0
# 628 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_GRASS
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_13:
# 650 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 32, 0
# 651 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_GRASS
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11

HawthornLabs_Interior_Intro_MeetProfessorScene_14:
# 653 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 32, 0
# 654 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_FIRE
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11

HawthornLabs_Interior_Intro_MeetProfessorScene_15:
# 656 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 32, 0
# 657 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_WATER
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11


# 718 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_ApproachDesk:
# 719 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 719 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_0:
# 166 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 166 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_1:
# 196 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 196 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 197 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 197 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 198 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 199 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 225 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_2:
# 226 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_down
# 227 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 227 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 228 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_in_place_down
	step_end

# 257 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_3:
# 258 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 258 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 258 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 258 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 258 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 258 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 259 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 265 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_4:
# 266 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_in_place_right
	step_end

# 320 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_5:
# 321 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 322 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 322 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 323 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
# 324 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 324 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 325 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 326 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 327 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
# 328 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 329 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 330 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 331 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
	step_end

# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_6:
# 341 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 342 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 342 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 342 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 342 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 342 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 348 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_7:
# 349 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 349 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 350 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 364 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8:
# 365 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_in_place_up
	step_end

# 394 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_9:
# 395 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 395 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 397 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 397 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 397 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 398 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 399 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_10:
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_8
# 403 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 403 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 404 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 406 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_11:
# 409 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 410 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 410 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 411 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 412 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 412 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 412 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 412 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 412 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 413 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_up
	step_end

# 476 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_12:
# 477 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 477 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 478 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
	step_end

# 491 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_13:
# 492 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_in_place_down
	step_end

# 523 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_14:
# 524 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 524 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 524 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 525 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 525 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
	step_end

# 530 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_15:
# 531 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 531 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 531 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 531 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 532 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 533 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 533 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 533 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 534 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 535 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 535 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 535 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 536 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 537 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 537 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 537 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 538 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
	step_end

# 597 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_16:
# 598 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
# 598 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
	step_end

# 609 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_17:
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 672 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_18:
# 673 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 673 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 673 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 675 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 675 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 675 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 678 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_19:
# 679 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
# 679 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
# 680 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_20:
# 706 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 706 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 706 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 706 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 706 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 706 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
	step_end

HawthornLabs_Interior_LockedDoor_Text_0:
# 11 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The door is locked.$"

HawthornLabs_Interior_DoorNotice_Text_0:
# 18 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A series of notes is posted beside the\n"
	.string "door:\p"
	.string "TYPE ENERGETICS LAB\n"
	.string "RESTRICTED AREA\p"
	.string "(That means no \n"
	.string "unauthorized personnel)\l"
	.string "(That means you, Reynolds)$"

HawthornLabs_Interior_WallLogo_Text_0:
# 33 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "HAWTHORN LABS\p"
	.string "It's difficult to tell what it says, but\n"
	.string "it does say that, if you squint.$"

HawthornLabs_Interior_Bookshelf1_Text_0:
# 43 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “The ecological impacts\n"
	.string "of regional and generational gimmicks:\l"
	.string "a meta-anaylsis”$"

HawthornLabs_Interior_Bookshelf2_Text_0:
# 52 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “Identification of\n"
	.string "natural variation of ThkFt1Ab-PKy38\l"
	.string "glycoprotein heterodimers resulting in\l"
	.string "emergent fire-type resistance in\l"
	.string "Swinub population.”\p"
	.string "This is fascinating to someone,\n"
	.string "probably.$"

HawthornLabs_Interior_Bookshelf3_Text_0:
# 66 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A book called “I Was Reincarnated in\n"
	.string "Another World of Half-Pokémon\l"
	.string "Women?”\p"
	.string "This shouldn't be here.$"

HawthornLabs_Interior_Bookshelf4_Text_0:
# 77 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “A double-blind\n"
	.string "analysis on the effects of IV spreads\l"
	.string "on the gut microbiome of Pidgey.”$"

HawthornLabs_Interior_Bookshelf5_Text_0:
# 86 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A paper titled “A genomic basis for\n"
	.string "the distinct classification of Normal\l"
	.string "and Fairy-type Clefable.”$"

HawthornLabs_Interior_Bookshelf6_Text_0:
# 95 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "A book called “The ??? Type and\n"
	.string "Other Anomalies”$"

HawthornLabs_Interior_Talk_Scientist1_Text_0:
# 104 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Thirty-one… Seventy-five…\n"
	.string "One hundred eighteen…$"

HawthornLabs_Interior_Talk_Scientist1_Text_1:
# 110 "data/maps/HawthornLabs_Interior/scripts.pory"
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
# 131 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Professor Hawthorn is very particular\n"
	.string "about the kinds of people she allows in\l"
	.string "the lab.\p"
	.string "For example, after she hired me,\n"
	.string "she didn't let me in for two weeks.$"

HawthornLabs_Interior_Talk_Professor_Text_0:
# 148 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: You have your mission, don't\n"
	.string "you?\p"
	.string "Go ahead and run along, now.\n"
	.string "I'm quite busy.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_0:
# 178 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Okay. So, where is Professor\n"
	.string "Hawthorn?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_1:
# 191 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Excuse me!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_2:
# 204 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The lab is about to close for the day.\n"
	.string "Professor Hawthorn is not accepting\l"
	.string "visitors at this time!\p"
	.string "Whatever you're selling, we have no\n"
	.string "interest in it, so please leave!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_3:
# 218 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Huh? We're not here to sell\n"
	.string "anything!\p"
	.string "Please, we need to see the professor,\n"
	.string "it's important!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_4:
# 232 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The professor is busy! Didn't you see\n"
	.string "the sign out front?\p"
	.string "No solicitors allowed!\p"
	.string "Please see yourselves to the door!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_5:
# 247 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "What's all this racket about, now?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_6:
# 270 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Professor Hawthorn, ma'am!\p"
	.string "My apologies, I was just about to show\n"
	.string "these solicitors here to the door.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_7:
# 281 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm?\n"
	.string "Solicitors, you say?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_8:
# 288 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "…\p"
	.string "Let them through, Reynolds.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_9:
# 302 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "…But Professor, isn't that what you\n"
	.string "wrote on the sign out front?\l"
	.string "That was your rule, no?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_10:
# 311 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: …Reynolds.\p"
	.string "Look at them, then look me in the eyes\n"
	.string "and ask me that question again.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_11:
# 336 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "…I-{PAUSE 30}I'll take my leave, then.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_12:
# 355 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Well, now that you've got my\n"
	.string "attention…\l"
	.string "What is it that you two need from me?\p"
	.string "…And please, try to keep it brief.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_13:
# 368 "data/maps/HawthornLabs_Interior/scripts.pory"
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

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_14:
# 385 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR:  …That's quite the story,\n"
	.string "isn't it?\p"
	.string "Come with me, if you will.\n"
	.string "I'd like to take a look at this.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_15:
# 427 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm.\p"
	.string "It does appear as you said.\n"
	.string "This certainly looks like it's been lost\l"
	.string "at sea for quite a while.\p"
	.string "Long enough that there's no telling\n"
	.string "where it originally came from.\p"
	.string "Alright, now, you've piqued my interest.\n"
	.string "Show me the Pokémon you found inside,\l"
	.string "will you?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_16:
# 449 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Okay!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_17:
# 483 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Well now, isn't that\n"
	.string "something.\p"
	.string "Though their Poké Balls are clearly\n"
	.string "weathered, the Pokémon themselves\l"
	.string "appear to be healthy.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_18:
# 496 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: They seemed confused when we let\n"
	.string "them out.\p"
	.string "I wonder if they felt anything while\n"
	.string "they were in the ocean?\l"
	.string "Could they sense the time passing?\l"
	.string "Were they scared? Hungry? Hurting?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_19:
# 507 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Yes, it's a fascinating\n"
	.string "research opportunity, isn't it?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_20:
# 516 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: So, do you have any ideas for how\n"
	.string "we could find their original trainer,\l"
	.string "Professor?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_21:
# 541 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm…\n"
	.string "It's quite the puzzle.\p"
	.string "These could've drifted here from just\n"
	.string "about anywhere.\p"
	.string "The Pokémon themselves are rare\n"
	.string "species, from all over the world.\p"
	.string "Whoever their trainer was, they must've\n"
	.string "been quite the collector. Perhaps that\l"
	.string "could narrow it down.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_22:
# 563 "data/maps/HawthornLabs_Interior/scripts.pory"
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

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_23:
# 602 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Great!\n"
	.string "Sounds like a plan!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_24:
# 615 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: I'll take this one, then!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_25:
# 638 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: As for you…\p"
	.string "You appear to already be acquainted\n"
	.string "with that Pokémon beside you.\l"
	.string "Go ahead, now.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_26:
# 664 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Excellent!\p"
	.string "I commend you two for seeking me out.\n"
	.string "Good luck on your search.\p"
	.string "Run along, now!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_27:
# 684 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Alright! Thank you, Professor!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_28:
# 697 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: That went… better than I\n"
	.string "anticipated.\p"
	.string "I guess we'd better get going!\n"
	.string "Let's talk outside, okay, {PLAYER}?$"
