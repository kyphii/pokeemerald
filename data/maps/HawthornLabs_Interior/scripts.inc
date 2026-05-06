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
	compare VAR_INTRO_SEQUENCE_STATE, 20
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
# 182 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 185 "data/maps/HawthornLabs_Interior/scripts.pory"
	message HawthornLabs_Interior_Intro_MeetProfessorScene_Text_1
# 188 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 189 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 190 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_PIN
# 191 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 192 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_ExclamationMark
# 193 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 194 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 195 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_1
# 201 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 202 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmessage
# 203 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitbuttonpress
# 205 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_2, MSGBOX_DEFAULT
# 214 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 10
# 215 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_PIN
# 216 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_QuestionMark
# 217 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 218 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 219 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_3, MSGBOX_DEFAULT
# 227 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_2
# 232 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 233 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_4, MSGBOX_DEFAULT
# 242 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 243 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 244 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_PIN
# 245 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, Common_Movement_ExclamationMark
# 246 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 247 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RECEPTIONIST, DIR_EAST
# 248 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_5, MSGBOX_DEFAULT
# 252 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 254 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 255 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 256 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RECEPTIONIST, DIR_EAST
# 257 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_PROFESSOR, 9, 15
# 258 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_PROFESSOR
# 259 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_3
# 263 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 265 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 266 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 267 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, Common_Movement_WalkInPlaceRight
# 268 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 269 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_6, MSGBOX_DEFAULT
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
	applymovement LOCALID_LABINT_RECEPTIONIST, Common_Movement_WalkInPlaceRight
# 298 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 299 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_9, MSGBOX_DEFAULT
# 305 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 306 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 307 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 308 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_10, MSGBOX_DEFAULT
# 315 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 316 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 317 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 318 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_4
# 331 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 332 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 333 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_11, MSGBOX_DEFAULT
# 337 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 338 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RECEPTIONIST, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_5
# 342 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 343 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_RECEPTIONIST
# 344 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_RECEPTIONIST, 0, 47
# 346 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_6
# 350 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 351 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 352 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_12, MSGBOX_DEFAULT
# 360 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 361 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 362 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_WalkInPlaceUp
# 363 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_13, MSGBOX_DEFAULT
# 380 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_14, MSGBOX_DEFAULT
# 389 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 391 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_7
# 398 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8
# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_9
# 412 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 413 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_PROFESSOR, DIR_EAST
# 414 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 415 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_WalkInPlaceUp
# 416 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 417 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_BAG, 13, 10
# 418 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_BAG
# 419 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_BALL
# 420 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 422 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_15, MSGBOX_DEFAULT
# 429 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, Common_Movement_WalkInPlaceDown
# 430 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_16, MSGBOX_DEFAULT
# 437 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 438 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 440 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 10
# 441 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_WalkInPlaceUp
# 442 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 443 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_17, MSGBOX_DEFAULT
# 447 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 448 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 449 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_SOUTH
# 450 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 451 "data/maps/HawthornLabs_Interior/scripts.pory"
	fadescreen FADE_TO_WHITE
# 452 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 453 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_3
# 457 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_4
# 461 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_5
HawthornLabs_Interior_Intro_MeetProfessorScene_1:
# 466 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_STARTER_GRASS
# 467 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_STARTER_FIRE
# 468 "data/maps/HawthornLabs_Interior/scripts.pory"
	addobject LOCALID_LABINT_STARTER_WATER
# 469 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_BALL_OPEN
# 470 "data/maps/HawthornLabs_Interior/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 471 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 473 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_10
# 478 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 480 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_18, MSGBOX_DEFAULT
# 493 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, Common_Movement_WalkInPlaceDown
# 494 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 495 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_19, MSGBOX_DEFAULT
# 506 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_PROFESSOR, DIR_NORTH
# 507 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_20, MSGBOX_DEFAULT
# 512 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 514 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 515 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_21, MSGBOX_DEFAULT
# 521 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 523 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_11
# 527 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 528 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 529 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 530 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_12
# 540 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_22, MSGBOX_DEFAULT
# 552 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 553 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_PROFESSOR, DIR_SOUTH
# 554 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 555 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, Common_Movement_WalkInPlaceDown
# 556 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 557 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_23, MSGBOX_DEFAULT
# 592 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 593 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_13
# 596 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 597 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_24, MSGBOX_DEFAULT
# 602 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 603 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 604 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 605 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_14
# 609 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 610 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_25, MSGBOX_DEFAULT
# 614 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 615 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 616 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_8
# 619 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_9
# 622 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_10
HawthornLabs_Interior_Intro_MeetProfessorScene_6:
# 626 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_BALL
# 627 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 628 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_14
# 632 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 633 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 634 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_26, MSGBOX_DEFAULT
# 642 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 643 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 644 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 30
# 645 "data/maps/HawthornLabs_Interior/scripts.pory"
	switch VAR_STARTER_MON
# 646 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 0, HawthornLabs_Interior_Intro_MeetProfessorScene_13
# 649 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 1, HawthornLabs_Interior_Intro_MeetProfessorScene_14
# 652 "data/maps/HawthornLabs_Interior/scripts.pory"
	case 2, HawthornLabs_Interior_Intro_MeetProfessorScene_15
HawthornLabs_Interior_Intro_MeetProfessorScene_11:
# 656 "data/maps/HawthornLabs_Interior/scripts.pory"
	playse SE_BALL
# 657 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 659 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 660 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_NORTH
# 661 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_27, MSGBOX_DEFAULT
# 670 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_PROFESSOR, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_15
# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_16
# 680 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 40
# 681 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_28, MSGBOX_DEFAULT
# 685 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 686 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay 60
# 687 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 688 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_WEST
# 689 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement LOCALID_LABINT_PROFESSOR
# 690 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_PROFESSOR, 15, 4
# 691 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_PROFESSOR
# 693 "data/maps/HawthornLabs_Interior/scripts.pory"
	turnobject LOCALID_LABINT_RIVAL, DIR_EAST
# 694 "data/maps/HawthornLabs_Interior/scripts.pory"
	msgbox HawthornLabs_Interior_Intro_MeetProfessorScene_Text_29, MSGBOX_DEFAULT
# 702 "data/maps/HawthornLabs_Interior/scripts.pory"
	closemessage
# 703 "data/maps/HawthornLabs_Interior/scripts.pory"
	applymovement LOCALID_LABINT_RIVAL, HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_17
# 707 "data/maps/HawthornLabs_Interior/scripts.pory"
	waitmovement 0
# 708 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_RIVAL, 32, 0
# 709 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_RIVAL
# 711 "data/maps/HawthornLabs_Interior/scripts.pory"
	setflag FLAG_INTRO_MET_PROFESSOR
# 712 "data/maps/HawthornLabs_Interior/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 4
# 713 "data/maps/HawthornLabs_Interior/scripts.pory"
	releaseall
	return

HawthornLabs_Interior_Intro_MeetProfessorScene_3:
# 454 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 13, 12
# 455 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 14, 12
# 456 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_4:
# 458 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 13, 12
# 459 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 14, 12
# 460 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_5:
# 462 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 13, 12
# 463 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 14, 12
# 464 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 15, 12
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_1

HawthornLabs_Interior_Intro_MeetProfessorScene_8:
# 617 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 32, 0
# 618 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_FIRE
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_9:
# 620 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 32, 0
# 621 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_WATER
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_10:
# 623 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 32, 0
# 624 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_GRASS
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_6

HawthornLabs_Interior_Intro_MeetProfessorScene_13:
# 647 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_GRASS, 32, 0
# 648 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_GRASS
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11

HawthornLabs_Interior_Intro_MeetProfessorScene_14:
# 650 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_FIRE, 32, 0
# 651 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_FIRE
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11

HawthornLabs_Interior_Intro_MeetProfessorScene_15:
# 653 "data/maps/HawthornLabs_Interior/scripts.pory"
	setobjectxyperm LOCALID_LABINT_STARTER_WATER, 32, 0
# 654 "data/maps/HawthornLabs_Interior/scripts.pory"
	removeobject LOCALID_LABINT_STARTER_WATER
	goto HawthornLabs_Interior_Intro_MeetProfessorScene_11


# 716 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_ApproachDesk:
# 717 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 717 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_0:
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

# 227 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_2:
# 228 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_down
# 229 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 229 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 230 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_in_place_down
	step_end

# 259 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_3:
# 260 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_slow_down
# 260 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_slow_down
# 260 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_slow_down
# 260 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_slow_down
# 260 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_slow_down
# 261 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 318 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_4:
# 319 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 320 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 320 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 321 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
# 322 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 322 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 323 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 324 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 325 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
# 326 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 327 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
# 328 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 329 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_right
	step_end

# 338 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_5:
# 339 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 340 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 346 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_6:
# 347 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 347 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 348 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 391 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_7:
# 392 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 392 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 393 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 394 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 394 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 394 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 395 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 396 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 398 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_8:
# 399 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_8
# 400 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 400 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 401 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 402 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 403 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 405 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_9:
# 406 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 407 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 407 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 408 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 409 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 409 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 409 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 409 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 409 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 410 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_up
	step_end

# 473 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_10:
# 474 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 474 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 475 "data/maps/HawthornLabs_Interior/scripts.pory"
	delay_16
# 476 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_in_place_right
	step_end

# 523 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_11:
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
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_12:
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

# 593 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_13:
# 594 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
# 594 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
	step_end

# 605 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_14:
# 606 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_right
# 607 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_down
	step_end

# 670 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_15:
# 671 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 671 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 671 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 672 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 672 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_down
# 673 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 673 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 673 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_left
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
# 674 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_up
	step_end

# 676 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_16:
# 677 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
# 677 "data/maps/HawthornLabs_Interior/scripts.pory"
	jump_in_place_up
# 678 "data/maps/HawthornLabs_Interior/scripts.pory"
	face_left
	step_end

# 703 "data/maps/HawthornLabs_Interior/scripts.pory"
HawthornLabs_Interior_Intro_MeetProfessorScene_Movement_17:
# 704 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 704 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 704 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 704 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 704 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 704 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_left
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
	walk_fast_down
# 705 "data/maps/HawthornLabs_Interior/scripts.pory"
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
	.string "This is a bad book.$"

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
	.string "PROFESSOR: You're still here?\n"
	.string "You have your tasks, don't you?\p"
	.string "Go ahead and run along, now.\n"
	.string "I'm quite busy.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_0:
# 178 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Okay. So, where is Professor\n"
	.string "Hawthorn?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_1:
# 186 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "???: Excuse me!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_2:
# 206 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The lab is about to close for the day.\n"
	.string "Professor Hawthorn is not accepting\l"
	.string "visitors at this time!\p"
	.string "Whatever you're selling, we have no\n"
	.string "interest in it, so please leave!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_3:
# 220 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Huh? We're not here to sell\n"
	.string "anything!\p"
	.string "Please, we need to see the professor,\n"
	.string "it's important!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_4:
# 234 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "The professor is busy! Didn't you see\n"
	.string "the sign out front?\p"
	.string "No solicitors allowed!\p"
	.string "Please see yourselves to the door!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_5:
# 249 "data/maps/HawthornLabs_Interior/scripts.pory"
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
	.string "………\p"
	.string "Let them through, Reynolds.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_9:
# 300 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "…But Professor, isn't that what you\n"
	.string "wrote on the sign out front?\l"
	.string "That was your rule, no?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_10:
# 309 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: …Reynolds.\p"
	.string "Look at them, then look me in the eyes\n"
	.string "and ask me that question again.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_11:
# 334 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "…I-{PAUSE 30}I'll take my leave, then.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_12:
# 353 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Well, now that you've got my\n"
	.string "attention…\l"
	.string "What is it that you two need from me?\p"
	.string "…And please, try to keep it brief.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_13:
# 364 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Um…\n"
	.string "…Hi, Professor! \p"
	.string "We found a bag full of Poké Balls\n"
	.string "washed up on the beach.\l"
	.string "There were Pokémon in them!\p"
	.string "It seemed like they were drifting in the\n"
	.string "ocean for a really long time.\p"
	.string "We want to try and track down their\n"
	.string "trainer and return them.\l"
	.string "We were hoping you'd know where to\l"
	.string "start looking!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_14:
# 381 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: That's quite the story,\n"
	.string "isn't it?\p"
	.string "This ought to be interesting.\n"
	.string "Come with me, if you will.\l"
	.string "I'd like to see this.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_15:
# 423 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm.\p"
	.string "Well, it certainly smells like it's been \n"
	.string "out at sea.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_16:
# 431 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Alright, now, you've piqued my interest.\p"
	.string "Show me those Pokémon you found\n"
	.string "inside, will you?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_17:
# 444 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Okay!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_18:
# 481 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Well now, it seems you \n"
	.string "weren't pulling my leg after all.\p"
	.string "That's quite something, isn't it?\p"
	.string "Those Poké Balls you have do seem \n"
	.string "weathered by the sea.\p"
	.string "The Pokémon themselves, though, \n"
	.string "appear more or less healthy.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_19:
# 496 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: I wonder…\p"
	.string "Could they feel anything while they \n"
	.string "were out in the ocean, in their Poké \l"
	.string "Balls?\p"
	.string "Could they sense the time passing?\n"
	.string "Do you think they were afraid?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_20:
# 508 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Yes, it's a fascinating\n"
	.string "research opportunity, isn't it?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_21:
# 516 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: So, do you have any ideas for how\n"
	.string "we could find their original trainer,\l"
	.string "Professor?$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_22:
# 541 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Hmm…\n"
	.string "It's quite the puzzle.\p"
	.string "These Pokémon could've drifted here \n"
	.string "from just about anywhere.\p"
	.string "Without any identifying information, \n"
	.string "figuring out who they belonged to \l"
	.string "would be close to impossible.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_23:
# 558 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "Off the top of my head…\p"
	.string "There's a Poké Ball factory in\n"
	.string "Armiter City.\p"
	.string "You could get the Poké Balls analyzed \n"
	.string "there, to determine where and when \l"
	.string "they were manufactured.\p"
	.string "Also… perhaps you could do the same for \n"
	.string "the bag itself.\p"
	.string "It's a long shot, but maybe someone at \n"
	.string "the boutique in Canvenus City might \l"
	.string "be able to help.\p"
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

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_24:
# 598 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Great!\n"
	.string "Sounds like a plan!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_25:
# 611 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: I'll take this one, then!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_26:
# 635 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: As for you…\p"
	.string "You appear to already be acquainted\n"
	.string "with that Pokémon beside you.\l"
	.string "Go ahead, now.$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_27:
# 662 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "PROFESSOR: Excellent!\p"
	.string "I commend you two for seeking me out.\n"
	.string "Good luck on your search.\p"
	.string "Run along, now!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_28:
# 682 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: Alright! Thank you, Professor!$"

HawthornLabs_Interior_Intro_MeetProfessorScene_Text_29:
# 695 "data/maps/HawthornLabs_Interior/scripts.pory"
	.string "MAYA: That went… better than I\n"
	.string "anticipated.\p"
	.string "I guess we'd better get going!\n"
	.string "Let's talk outside, okay, {PLAYER}?$"
