NautirustCity_TrainerSchool_MapScripts::
# 2 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NautirustCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NautirustCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	compare VAR_MAYA_CURRENT_CITY, 1
	goto_if_eq NautirustCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

NautirustCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	compare VAR_MAYA_CURRENT_POSITION, 5
	goto_if_eq NautirustCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 8 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_SCHOOL_MAYA, 0, -8
	return

NautirustCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 5 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_SCHOOL_MAYA, 15, 9
	return


NautirustCity_TrainerSchool_TalkGymTeacher::
# 15 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 16 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 17 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	compare VAR_QUEST_SCHOOL_WINSTREAK, 0
	goto_if_eq NautirustCity_TrainerSchool_TalkGymTeacher_1
# 49 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	compare VAR_QUEST_SCHOOL_WINSTREAK, 1
	goto_if_eq NautirustCity_TrainerSchool_TalkGymTeacher_2
# 53 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkGymTeacher_Text_3, MSGBOX_DEFAULT
# 66 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 67 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return

NautirustCity_TrainerSchool_TalkGymTeacher_1:
# 18 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkGymTeacher_Text_0, MSGBOX_YESNO
# 30 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NautirustCity_TrainerSchool_TalkGymTeacher_6
# 40 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkGymTeacher_Text_2, MSGBOX_DEFAULT
# 45 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 46 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return

NautirustCity_TrainerSchool_TalkGymTeacher_2:
# 50 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	goto NautirustCity_TrainerSchool_Winstreak_GiveReward
	return

NautirustCity_TrainerSchool_TalkGymTeacher_6:
# 31 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkGymTeacher_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 37 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	goto NautirustCity_TrainerSchool_Winstreak
	return


NautirustCity_TrainerSchool_Winstreak::
# 72 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	cleartrainerflag TRAINER_SCHOOL_WINSTREAK_1
# 73 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	cleartrainerflag TRAINER_SCHOOL_WINSTREAK_2
# 74 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	cleartrainerflag TRAINER_SCHOOL_WINSTREAK_3
# 75 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	cleartrainerflag TRAINER_SCHOOL_WINSTREAK_4
# 77 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	setvar VAR_LAST_TALKED, 0
# 79 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lockall
# 80 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 81 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	switch VAR_0x8009
# 82 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	case 11, NautirustCity_TrainerSchool_Winstreak_3
# 88 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	case 12, NautirustCity_TrainerSchool_Winstreak_4
# 95 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	case 13, NautirustCity_TrainerSchool_Winstreak_5
NautirustCity_TrainerSchool_Winstreak_1:
# 102 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, NautirustCity_TrainerSchool_Winstreak_Movement_3
# 107 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 109 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	special SpawnCameraObject
# 110 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_CAMERA, NautirustCity_TrainerSchool_Winstreak_Movement_4
# 113 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 114 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	special RemoveCameraObject
# 116 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, Common_Movement_WalkInPlaceDown
# 117 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_0, MSGBOX_DEFAULT
# 123 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 125 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_TRAINER_1, NautirustCity_TrainerSchool_Winstreak_Movement_5
# 131 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 132 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_1, MSGBOX_DEFAULT
# 137 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 138 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SCHOOL_WINSTREAK_1, NautirustCity_TrainerSchool_Winstreak_Text_2
# 143 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	delay 20
# 144 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_TRAINER_1, NautirustCity_TrainerSchool_Winstreak_Movement_6
# 149 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 151 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, Common_Movement_WalkInPlaceDown
# 152 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_3, MSGBOX_DEFAULT
# 158 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 160 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_TRAINER_2, NautirustCity_TrainerSchool_Winstreak_Movement_7
# 167 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 168 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_4, MSGBOX_DEFAULT
# 173 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 174 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SCHOOL_WINSTREAK_2, NautirustCity_TrainerSchool_Winstreak_Text_5
# 179 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	delay 20
# 180 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_TRAINER_2, NautirustCity_TrainerSchool_Winstreak_Movement_8
# 186 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 188 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, Common_Movement_WalkInPlaceDown
# 189 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_6, MSGBOX_DEFAULT
# 195 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 197 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_TRAINER_3, NautirustCity_TrainerSchool_Winstreak_Movement_9
# 204 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 205 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_7, MSGBOX_DEFAULT
# 210 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 211 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SCHOOL_WINSTREAK_3, NautirustCity_TrainerSchool_Winstreak_Text_8
# 216 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	delay 20
# 217 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_TRAINER_3, NautirustCity_TrainerSchool_Winstreak_Movement_10
# 223 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 225 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, Common_Movement_WalkInPlaceDown
# 226 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_9, MSGBOX_DEFAULT
# 231 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 232 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, NautirustCity_TrainerSchool_Winstreak_Movement_11
# 236 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 237 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_10, MSGBOX_DEFAULT
# 244 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 245 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, NautirustCity_TrainerSchool_Winstreak_Movement_12
# 249 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 250 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_Text_11, MSGBOX_DEFAULT
# 254 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 255 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SCHOOL_WINSTREAK_4, NautirustCity_TrainerSchool_Winstreak_Text_12
# 260 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 262 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	delay 20
# 263 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_NAUTIRUST_SCHOOL_GYMTEACHER, NautirustCity_TrainerSchool_Winstreak_Movement_13
# 266 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 267 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	special SpawnCameraObject
# 268 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_CAMERA, NautirustCity_TrainerSchool_Winstreak_Movement_14
# 271 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 272 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	special RemoveCameraObject
# 274 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	goto NautirustCity_TrainerSchool_Winstreak_GiveReward
	return

NautirustCity_TrainerSchool_Winstreak_3:
# 83 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustCity_TrainerSchool_Winstreak_Movement_0
	goto NautirustCity_TrainerSchool_Winstreak_1

NautirustCity_TrainerSchool_Winstreak_4:
# 89 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustCity_TrainerSchool_Winstreak_Movement_1
	goto NautirustCity_TrainerSchool_Winstreak_1

NautirustCity_TrainerSchool_Winstreak_5:
# 96 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	applymovement LOCALID_PLAYER, NautirustCity_TrainerSchool_Winstreak_Movement_2
	goto NautirustCity_TrainerSchool_Winstreak_1


NautirustCity_TrainerSchool_Winstreak_GiveReward::
# 278 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 279 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 280 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_GiveReward_Text_0, MSGBOX_DEFAULT
# 291 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	setvar VAR_QUEST_SCHOOL_WINSTREAK, 1
# 293 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 294 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitmessage
# 295 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	waitbuttonpress
# 296 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NautirustCity_TrainerSchool_Winstreak_GiveReward_2
NautirustCity_TrainerSchool_Winstreak_GiveReward_1:
# 300 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	setvar VAR_QUEST_SCHOOL_WINSTREAK, 2
# 301 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	addplayerlevel 1
# 303 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_Winstreak_GiveReward_Text_1, MSGBOX_DEFAULT
# 311 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 312 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	releaseall
	return

NautirustCity_TrainerSchool_Winstreak_GiveReward_2:
# 297 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto NautirustCity_TrainerSchool_Winstreak_GiveReward_1


NautirustCity_TrainerSchool_TalkTeacher::
# 316 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 317 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 318 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkTeacher_Text_0, MSGBOX_DEFAULT
# 326 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 327 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkMaya::
# 331 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 333 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	setvar VAR_0x8004, 5
# 334 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	special RandomizeMayaLocation
# 336 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkMaya_Text_0, MSGBOX_DEFAULT
# 341 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 342 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkMaya_Text_1, MSGBOX_DEFAULT
# 349 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 350 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkStudent1::
# 354 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 355 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 356 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkStudent1_Text_0, MSGBOX_DEFAULT
# 365 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 366 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkStudent2::
# 370 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 371 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 372 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkStudent2_Text_0, MSGBOX_DEFAULT
# 383 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 384 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkStudent3::
# 388 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 389 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 390 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkStudent3_Text_0, MSGBOX_DEFAULT
# 397 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 398 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkLibraryGirl::
# 402 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 403 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 404 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkLibraryGirl_Text_0, MSGBOX_DEFAULT
# 420 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 421 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkGreeter::
# 425 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 426 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 427 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkGreeter_Text_0, MSGBOX_DEFAULT
# 437 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 438 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkBleachersKid1::
# 442 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 443 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 444 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkBleachersKid1_Text_0, MSGBOX_DEFAULT
# 450 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 451 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkBleachersKid2::
# 455 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 456 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 457 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkBleachersKid2_Text_0, MSGBOX_DEFAULT
# 463 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 464 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkBleachersKid3::
# 468 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 469 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 470 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkBleachersKid3_Text_0, MSGBOX_DEFAULT
# 477 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 478 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_TalkShyPerson::
# 482 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	lock
# 483 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	faceplayer
# 484 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_TalkShyPerson_Text_0, MSGBOX_DEFAULT
# 497 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	closemessage
# 498 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	release
	return


NautirustCity_TrainerSchool_SignBookcase1::
# 502 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBookcase1_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignBookcase2::
# 513 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBookcase2_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignBookcase3::
# 525 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBookcase3_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignBookcase4::
# 541 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBookcase4_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignBookcase5::
# 552 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBookcase5_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignBookcase6::
# 563 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBookcase6_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignBookcase7::
# 572 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBookcase7_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignTip1::
# 584 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignTip1_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignTip2::
# 601 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignTip2_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignBubbler::
# 616 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignBubbler_Text_0, MSGBOX_SIGN
	return


NautirustCity_TrainerSchool_SignChalkboard::
# 628 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	msgbox NautirustCity_TrainerSchool_SignChalkboard_Text_0, MSGBOX_SIGN
	return


# 83 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_0:
# 84 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 84 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 84 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 84 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 85 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 85 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 85 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 86 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_right
	step_end

# 89 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_1:
# 90 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 91 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 91 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 91 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 91 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 91 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 92 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 92 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 92 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 93 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_right
	step_end

# 96 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_2:
# 97 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 97 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 97 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 97 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 97 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 97 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 98 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 98 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 98 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 99 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_right
	step_end

# 102 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_3:
# 103 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 103 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 103 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 103 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 103 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 103 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 103 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 104 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_down
# 105 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	delay_16
# 105 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	delay_16
# 105 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	delay_16
	step_end

# 110 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_4:
# 111 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 111 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 111 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
	step_end

# 125 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_5:
# 126 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	jump_down
# 127 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 127 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 128 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 128 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 129 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_left
	step_end

# 144 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_6:
# 145 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 145 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 146 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 146 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 146 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 147 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_down
	step_end

# 160 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_7:
# 161 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	jump_down
# 162 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 163 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 163 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 163 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 163 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 163 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 164 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 165 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_left
	step_end

# 180 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_8:
# 181 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 182 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 182 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 182 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 182 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 182 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 183 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 183 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 184 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_down
	step_end

# 197 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_9:
# 198 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	jump_down
# 199 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 200 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 200 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 200 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 200 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 200 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 200 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 201 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 202 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_left
	step_end

# 217 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_10:
# 218 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 219 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 219 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 219 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 219 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 219 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 219 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 220 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 220 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_up
# 221 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_down
	step_end

# 232 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_11:
# 233 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 233 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_down
# 234 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_left
	step_end

# 245 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_12:
# 246 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 246 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 246 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 246 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_right
# 247 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	face_left
	step_end

# 263 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_13:
# 264 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 264 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 264 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 264 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 264 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 264 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
	step_end

# 268 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
NautirustCity_TrainerSchool_Winstreak_Movement_14:
# 269 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 269 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
# 269 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	walk_left
	step_end

NautirustCity_TrainerSchool_TalkGymTeacher_Text_0:
# 19 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Hey there!\p"
	.string "We're just about to start some practice \n"
	.string "matches.\p"
	.string "If you beat all the other students in a \n"
	.string "row, you win!\p"
	.string "How about it? Want in?$"

NautirustCity_TrainerSchool_TalkGymTeacher_Text_1:
# 32 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Great! Go ahead and take a spot on the \n"
	.string "battle court!$"

NautirustCity_TrainerSchool_TalkGymTeacher_Text_2:
# 41 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "That's a darn shame.\n"
	.string "Maybe another time, then!$"

NautirustCity_TrainerSchool_TalkGymTeacher_Text_3:
# 54 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Hey! It's you again!\p"
	.string "I remember that thrashing you gave us.\p"
	.string "Ever thought of signing up to our \n"
	.string "battle team?\p"
	.string "Hah!\n"
	.string "Someone with your skills has to shoot \l"
	.string "for bigger things!$"

NautirustCity_TrainerSchool_Winstreak_Text_0:
# 118 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Alright!\p"
	.string "Get ready for your first opponent!$"

NautirustCity_TrainerSchool_Winstreak_Text_1:
# 133 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "My strategy is status effects!\n"
	.string "Let's see what you're made of!$"

NautirustCity_TrainerSchool_Winstreak_Text_2:
# 141 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "You're made of stronger stuff…$"

NautirustCity_TrainerSchool_Winstreak_Text_3:
# 153 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "One down!\n"
	.string "But we're just warming up!\l"
	.string "Time for your next opponent!$"

NautirustCity_TrainerSchool_Winstreak_Text_4:
# 169 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "I'm gonna use strong attacks to get \n"
	.string "this over with quickly…$"

NautirustCity_TrainerSchool_Winstreak_Text_5:
# 177 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Wahh!$"

NautirustCity_TrainerSchool_Winstreak_Text_6:
# 190 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "This is heating up!\n"
	.string "But we're not done yet!\l"
	.string "Time for match number three!$"

NautirustCity_TrainerSchool_Winstreak_Text_7:
# 206 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "I've been honing my rock-solid defense!\n"
	.string "Think you can handle this?$"

NautirustCity_TrainerSchool_Winstreak_Text_8:
# 214 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Hey coach, this isn't fair!$"

NautirustCity_TrainerSchool_Winstreak_Text_9:
# 227 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Wow! \n"
	.string "Three trainers in a row, down and out!$"

NautirustCity_TrainerSchool_Winstreak_Text_10:
# 238 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "You sure got skills! \p"
	.string "For winning against all my students,\n"
	.string "you've earned…$"

NautirustCity_TrainerSchool_Winstreak_Text_11:
# 251 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "A battle against me!$"

NautirustCity_TrainerSchool_Winstreak_Text_12:
# 258 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Aaand game!$"

NautirustCity_TrainerSchool_Winstreak_GiveReward_Text_0:
# 281 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Well, I'll be!\n"
	.string "What a dominant performance!\p"
	.string "A smackdown like that deserves a \n"
	.string "special reward!\l"
	.string "I got just the thing! Here, you earned \l"
	.string "it!$"

NautirustCity_TrainerSchool_Winstreak_GiveReward_Text_1:
# 304 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "With skills like that, you could wipe the \n"
	.string "floor with the Wohnet Pokémon League!\p"
	.string "Remember us when you're the champ!\n"
	.string "Haha!$"

NautirustCity_TrainerSchool_TalkTeacher_Text_0:
# 319 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Remember, the damage formula isn't just \n"
	.string "about attack and defense stats.\p"
	.string "The level of a Pokémon also plays a \n"
	.string "role.$"

NautirustCity_TrainerSchool_TalkMaya_Text_0:
# 337 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "MAYA: Wow…\n"
	.string "There's so much to take in.$"

NautirustCity_TrainerSchool_TalkMaya_Text_1:
# 343 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "What? Didn't expect to see me here?\p"
	.string "I gotta know all there is to know if I'm \n"
	.string "gonna be the best!$"

NautirustCity_TrainerSchool_TalkStudent1_Text_0:
# 357 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "I thought we were gonna learn about \n"
	.string "Jigglypuff!\p"
	.string "I like Jigglypuff!\p"
	.string "Why isn't this Jigglypuff School?$"

NautirustCity_TrainerSchool_TalkStudent2_Text_0:
# 373 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Apparently, the damage from Pokémon \n"
	.string "attacks “rounds down” after every\l"
	.string "step in the formula.\p"
	.string "I wanted to ask what that meant, but I \n"
	.string "had my hand raised for like 10 minutes.\p"
	.string "Now it'd be kinda awkward.$"

NautirustCity_TrainerSchool_TalkStudent3_Text_0:
# 391 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "This lesson is kinda over my head.\p"
	.string "Hey, at least it's better than regular\n"
	.string "school, right?$"

NautirustCity_TrainerSchool_TalkLibraryGirl_Text_0:
# 405 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "I'm reading about a legend from the \n"
	.string "Kalos region.\p"
	.string "The story says that there's a man who's\n"
	.string "lived for three thousand years.\p"
	.string "He wanders the region in search of\n"
	.string "his lost Pokémon.\p"
	.string "That's so romantic!\p"
	.string "A guy like that must be pretty hot, \n"
	.string "right?$"

NautirustCity_TrainerSchool_TalkGreeter_Text_0:
# 428 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Welcome! This is the Pokémon Academy!\p"
	.string "We offer lessons about training and \n"
	.string "battling Pokémon to everyone.\p"
	.string "Feel free to drop in on our lectures, or \n"
	.string "peruse our library!$"

NautirustCity_TrainerSchool_TalkBleachersKid1_Text_0:
# 445 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "I'm itching to show off my skills.\p"
	.string "I can't wait for the next tournament!$"

NautirustCity_TrainerSchool_TalkBleachersKid2_Text_0:
# 458 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "I started watching the games because \n"
	.string "of my boyfriend.\l"
	.string "Then I got roped into participating…$"

NautirustCity_TrainerSchool_TalkBleachersKid3_Text_0:
# 471 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Are you here for a practice match?\n"
	.string "I'll take you on!\p"
	.string "…If the teacher says it's okay…$"

NautirustCity_TrainerSchool_TalkShyPerson_Text_0:
# 485 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "I heard that new trainers of all ages \n"
	.string "come to the Pokémon Academy to sit in \l"
	.string "on lectures.\p"
	.string "But when I looked inside, it was all \n"
	.string "really young kids.\l"
	.string "It made me kind of uncomfortable.\p"
	.string "…Would it be weirder if I just listen in\n"
	.string "from the hallway?$"

NautirustCity_TrainerSchool_SignBookcase1_Text_0:
# 503 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Several editions of an encyclopedia \n"
	.string "cataloging every Pokémon move.\p"
	.string "The eighth edition appears to have had \n"
	.string "many of its pages torn out.$"

NautirustCity_TrainerSchool_SignBookcase2_Text_0:
# 514 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Woah!\p"
	.string "They have a complete collection of the\n"
	.string "Beckett Pokémon Collector magazine!\p"
	.string "Jackpot!$"

NautirustCity_TrainerSchool_SignBookcase3_Text_0:
# 526 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "There's a print version of a famous \n"
	.string "play.\p"
	.string "In this scene, a character delivers a \n"
	.string "maddened soliloquy, lamenting his \l"
	.string "Jirachi's loss in battle against his \l"
	.string "opponent's Gyarados.\p"
	.string "He walks backwards into the sea, and is \n"
	.string "never heard from again.$"

NautirustCity_TrainerSchool_SignBookcase4_Text_0:
# 542 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "A whole shelf of the Serebii book\n"
	.string "series.\p"
	.string "You always preferred Dragonfly Cave, \n"
	.string "honestly.$"

NautirustCity_TrainerSchool_SignBookcase5_Text_0:
# 553 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "A bunch of picture books for children.\p"
	.string "There are at least eight copies of \n"
	.string "“Goodnight Munna.”\l"
	.string "Must still be very popular.$"

NautirustCity_TrainerSchool_SignBookcase6_Text_0:
# 564 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Rows of books about Pokémon battling.\p"
	.string "Look, they can't all be interesting.$"

NautirustCity_TrainerSchool_SignBookcase7_Text_0:
# 573 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "Surprisingly, they have several issues \n"
	.string "of the Pokémon Adventures manga.\p"
	.string "Based on some of these panels, you're \n"
	.string "not sure if the artist has ever \l"
	.string "actually seen a real Pokémon.$"

NautirustCity_TrainerSchool_SignTip1_Text_0:
# 585 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "TRAINER TIPS!\p"
	.string "Pay attention to your Pokémon's \n"
	.string "nature!\p"
	.string "Each nature increases one of a \n"
	.string "Pokémon's stats, at the cost of \l"
	.string "another stat.\p"
	.string "These small variations can be the \n"
	.string "difference between winning or losing!$"

NautirustCity_TrainerSchool_SignTip2_Text_0:
# 602 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "TRAINER TIPS!\p"
	.string "Some items that can be held by \n"
	.string "Pokémon can only be used in battle \l"
	.string "once.\p"
	.string "However, they'll be recovered after \n"
	.string "battle, so you don't need to worry \l"
	.string "about replacing them.$"

NautirustCity_TrainerSchool_SignBubbler_Text_0:
# 617 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "The bubbler bubbles invitingly.\p"
	.string "Some people insist on calling these \n"
	.string "“water fountains.”\p"
	.string "That's ridiculous.$"

NautirustCity_TrainerSchool_SignChalkboard_Text_0:
# 629 "data/maps/NautirustCity_TrainerSchool/scripts.pory"
	.string "A complex-looking formula is written \n"
	.string "out on the board.\p"
	.string "If you got here earlier, you might've \n"
	.string "had a chance of understanding it.$"
