Route2_MapScripts::
	.byte 0


Route2_Talk_CutTreePerson::
# 4 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 5 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 6 "data/maps/Route2/scripts.pory"
	delay 20
# 7 "data/maps/Route2/scripts.pory"
	msgbox Route2_Talk_CutTreePerson_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/Route2/scripts.pory"
	closemessage
	return


Route2_Intro_EnterForestScene::
# 20 "data/maps/Route2/scripts.pory"
	lockall
# 22 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 24 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_0
# 35 "data/maps/Route2/scripts.pory"
	delay 10
# 37 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 38 "data/maps/Route2/scripts.pory"
	switch VAR_0x8008
# 39 "data/maps/Route2/scripts.pory"
	case 26, Route2_Intro_EnterForestScene_3
# 44 "data/maps/Route2/scripts.pory"
	case 27, Route2_Intro_EnterForestScene_4
# 49 "data/maps/Route2/scripts.pory"
	case 28, Route2_Intro_EnterForestScene_5
# 54 "data/maps/Route2/scripts.pory"
	case 29, Route2_Intro_EnterForestScene_6
# 59 "data/maps/Route2/scripts.pory"
	case 30, Route2_Intro_EnterForestScene_7
Route2_Intro_EnterForestScene_1:
# 65 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 68 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/Route2/scripts.pory"
	closemessage
# 76 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 77 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_WEST
# 79 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Intro_EnterForestScene_Movement_6
# 82 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_2, MSGBOX_DEFAULT
# 92 "data/maps/Route2/scripts.pory"
	closemessage
# 94 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 95 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route2/scripts.pory"
	delay 20
# 97 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_3, MSGBOX_DEFAULT
# 102 "data/maps/Route2/scripts.pory"
	closemessage
# 104 "data/maps/Route2/scripts.pory"
	delay 30
# 106 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 107 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 109 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_4, MSGBOX_DEFAULT
# 113 "data/maps/Route2/scripts.pory"
	closemessage
# 115 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_7
# 119 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_8
# 124 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 125 "data/maps/Route2/scripts.pory"
	delay 30
# 126 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_5, MSGBOX_DEFAULT
# 130 "data/maps/Route2/scripts.pory"
	closemessage
# 131 "data/maps/Route2/scripts.pory"
	waitmovement LOCALID_PLAYER
# 133 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_6, MSGBOX_DEFAULT
# 139 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 140 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 142 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_7, MSGBOX_DEFAULT
# 151 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_9
# 155 "data/maps/Route2/scripts.pory"
	delay 10
# 156 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_10
# 160 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_8
# 167 "data/maps/Route2/scripts.pory"
	dynmultichoice 16, 4, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route2_Intro_EnterForestScene_Text_9, Route2_Intro_EnterForestScene_Text_10
# 171 "data/maps/Route2/scripts.pory"
	switch VAR_RESULT
# 172 "data/maps/Route2/scripts.pory"
	case 0, Route2_Intro_EnterForestScene_10
# 177 "data/maps/Route2/scripts.pory"
	case 1, Route2_Intro_EnterForestScene_11
Route2_Intro_EnterForestScene_8:
# 188 "data/maps/Route2/scripts.pory"
	closemessage
# 190 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 9
# 192 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Intro_EnterForestScene_3:
# 40 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_1
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_4:
# 45 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_2
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_5:
# 50 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_3
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_6:
# 55 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_4
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_7:
# 60 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_5
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_10:
# 173 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_11, MSGBOX_DEFAULT
	goto Route2_Intro_EnterForestScene_8

Route2_Intro_EnterForestScene_11:
# 178 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_12, MSGBOX_DEFAULT
	goto Route2_Intro_EnterForestScene_8


Route2_Intro_MeetBigBadScene::
# 196 "data/maps/Route2/scripts.pory"
	lockall
# 197 "data/maps/Route2/scripts.pory"
	fadeoutbgm 3
# 199 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 200 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 201 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_3
# 210 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_4
# 219 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_5
# 228 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_6
Route2_Intro_MeetBigBadScene_1:
# 238 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_0, MSGBOX_DEFAULT
# 272 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_2
# 275 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 277 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_1, MSGBOX_DEFAULT
# 315 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 316 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 317 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_9
# 318 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_9
# 323 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_10
# 324 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_10
Route2_Intro_MeetBigBadScene_7:
# 330 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 332 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_2, MSGBOX_DEFAULT
# 348 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_5
# 352 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, 48, 48
# 354 "data/maps/Route2/scripts.pory"
	removeobject LOCALID_ROUTE2_BIGBAD
# 356 "data/maps/Route2/scripts.pory"
	setflag FLAG_INTRO_MET_BIGBAD
# 357 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 11
# 359 "data/maps/Route2/scripts.pory"
	fadeinbgm 1
# 360 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Intro_MeetBigBadScene_3:
# 202 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 12
# 203 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 204 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_0
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_4:
# 211 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 13
# 212 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 213 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_0
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_5:
# 220 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 12
# 221 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 222 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_1
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_6:
# 229 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 13
# 230 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 231 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_1
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_9:
# 319 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_3
	goto Route2_Intro_MeetBigBadScene_7

Route2_Intro_MeetBigBadScene_10:
# 325 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_4
	goto Route2_Intro_MeetBigBadScene_7


Route2_RouteSign::
# 364 "data/maps/Route2/scripts.pory"
	msgbox Route2_RouteSign_Text_0, MSGBOX_SIGN
	return


Route2_Trainer_1::
# 374 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_1, Route2_Trainer_1_Text_0, Route2_Trainer_1_Text_1
# 389 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_1_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_2::
# 396 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_2, Route2_Trainer_2_Text_0, Route2_Trainer_2_Text_1
# 407 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_2_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_3::
# 415 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_3, Route2_Trainer_3_Text_0, Route2_Trainer_3_Text_1
# 425 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_3_Text_2, MSGBOX_AUTOCLOSE
	return


# 432 "data/maps/Route2/scripts.pory"
Route2_Movement_CutTreeGuyJump:
# 433 "data/maps/Route2/scripts.pory"
	jump_in_place_right
	step_end

# 30 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_0:
# 31 "data/maps/Route2/scripts.pory"
	walk_up
# 32 "data/maps/Route2/scripts.pory"
	walk_left
# 32 "data/maps/Route2/scripts.pory"
	walk_left
# 32 "data/maps/Route2/scripts.pory"
	walk_left
# 33 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 40 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_1:
# 41 "data/maps/Route2/scripts.pory"
	walk_up
# 42 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 45 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_2:
# 46 "data/maps/Route2/scripts.pory"
	walk_up
# 47 "data/maps/Route2/scripts.pory"
	walk_left
# 47 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 50 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_3:
# 51 "data/maps/Route2/scripts.pory"
	walk_up
# 52 "data/maps/Route2/scripts.pory"
	walk_left
# 52 "data/maps/Route2/scripts.pory"
	walk_left
# 52 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 55 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_4:
# 56 "data/maps/Route2/scripts.pory"
	walk_up
# 57 "data/maps/Route2/scripts.pory"
	walk_left
# 57 "data/maps/Route2/scripts.pory"
	walk_left
# 57 "data/maps/Route2/scripts.pory"
	walk_left
# 57 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 60 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_5:
# 61 "data/maps/Route2/scripts.pory"
	walk_up
# 62 "data/maps/Route2/scripts.pory"
	walk_left
# 62 "data/maps/Route2/scripts.pory"
	walk_left
# 62 "data/maps/Route2/scripts.pory"
	walk_left
# 62 "data/maps/Route2/scripts.pory"
	walk_left
# 62 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 79 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_6:
# 80 "data/maps/Route2/scripts.pory"
	walk_in_place_right
# 80 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 115 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_7:
# 116 "data/maps/Route2/scripts.pory"
	walk_right
# 116 "data/maps/Route2/scripts.pory"
	walk_right
# 116 "data/maps/Route2/scripts.pory"
	walk_right
# 117 "data/maps/Route2/scripts.pory"
	walk_up
# 117 "data/maps/Route2/scripts.pory"
	walk_up
# 117 "data/maps/Route2/scripts.pory"
	walk_up
# 117 "data/maps/Route2/scripts.pory"
	walk_up
# 117 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 119 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_8:
# 120 "data/maps/Route2/scripts.pory"
	walk_right
# 120 "data/maps/Route2/scripts.pory"
	walk_right
# 120 "data/maps/Route2/scripts.pory"
	walk_right
# 120 "data/maps/Route2/scripts.pory"
	walk_right
# 121 "data/maps/Route2/scripts.pory"
	walk_up
# 121 "data/maps/Route2/scripts.pory"
	walk_up
# 121 "data/maps/Route2/scripts.pory"
	walk_up
# 121 "data/maps/Route2/scripts.pory"
	walk_up
# 121 "data/maps/Route2/scripts.pory"
	walk_up
# 121 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 151 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_9:
# 152 "data/maps/Route2/scripts.pory"
	walk_up
# 152 "data/maps/Route2/scripts.pory"
	walk_up
# 152 "data/maps/Route2/scripts.pory"
	walk_up
# 152 "data/maps/Route2/scripts.pory"
	walk_up
# 153 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 156 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_10:
# 157 "data/maps/Route2/scripts.pory"
	walk_up
# 157 "data/maps/Route2/scripts.pory"
	walk_up
# 157 "data/maps/Route2/scripts.pory"
	walk_up
# 157 "data/maps/Route2/scripts.pory"
	walk_up
# 158 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 204 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_0:
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 205 "data/maps/Route2/scripts.pory"
	walk_right
# 206 "data/maps/Route2/scripts.pory"
	delay_16
# 206 "data/maps/Route2/scripts.pory"
	delay_16
# 207 "data/maps/Route2/scripts.pory"
	walk_left
# 207 "data/maps/Route2/scripts.pory"
	walk_left
# 208 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 222 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_1:
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 223 "data/maps/Route2/scripts.pory"
	walk_right
# 224 "data/maps/Route2/scripts.pory"
	delay_16
# 224 "data/maps/Route2/scripts.pory"
	delay_16
# 225 "data/maps/Route2/scripts.pory"
	walk_left
# 225 "data/maps/Route2/scripts.pory"
	walk_left
# 226 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 272 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_2:
# 273 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 319 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_3:
# 320 "data/maps/Route2/scripts.pory"
	walk_right
# 321 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 325 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_4:
# 326 "data/maps/Route2/scripts.pory"
	walk_right
# 327 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 348 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_5:
# 349 "data/maps/Route2/scripts.pory"
	walk_right
# 349 "data/maps/Route2/scripts.pory"
	walk_right
# 349 "data/maps/Route2/scripts.pory"
	walk_right
# 349 "data/maps/Route2/scripts.pory"
	walk_right
# 350 "data/maps/Route2/scripts.pory"
	walk_up
# 350 "data/maps/Route2/scripts.pory"
	walk_up
# 350 "data/maps/Route2/scripts.pory"
	walk_up
# 350 "data/maps/Route2/scripts.pory"
	walk_up
# 350 "data/maps/Route2/scripts.pory"
	walk_up
# 350 "data/maps/Route2/scripts.pory"
	walk_up
# 350 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Talk_CutTreePerson_Text_0:
# 8 "data/maps/Route2/scripts.pory"
	.string "Ow! Ow! Ow!\p"
	.string "This obstacle has mighty defenses…\n"
	.string "But I cannot accept defeat!\p"
	.string "Ow! Ow! Ow!$"

Route2_Intro_EnterForestScene_Text_0:
# 25 "data/maps/Route2/scripts.pory"
	.string "MAYA: Hey!\n"
	.string "Try to keep up, {PLAYER}!$"

Route2_Intro_EnterForestScene_Text_1:
# 69 "data/maps/Route2/scripts.pory"
	.string "MAYA: Looks like the road is still\n"
	.string "blocked off here.\l"
	.string "But no worries! This guy is on it!$"

Route2_Intro_EnterForestScene_Text_2:
# 84 "data/maps/Route2/scripts.pory"
	.string "Hoo hah!\n"
	.string "This thorny obstacle stands opposed\l"
	.string "to freedom and justice!\p"
	.string "I shall strike it down with my mighty\n"
	.string "ROCK SMASH attack!$"

Route2_Intro_EnterForestScene_Text_3:
# 98 "data/maps/Route2/scripts.pory"
	.string "Ow!\n"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_4:
# 110 "data/maps/Route2/scripts.pory"
	.string "MAYA: …Maybe it's gonna take a while.$"

Route2_Intro_EnterForestScene_Text_5:
# 127 "data/maps/Route2/scripts.pory"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_6:
# 134 "data/maps/Route2/scripts.pory"
	.string "MAYA: The only other way is through \n"
	.string "Nautirust Forest.$"

Route2_Intro_EnterForestScene_Text_7:
# 143 "data/maps/Route2/scripts.pory"
	.string "Remember how we used to play here when\n"
	.string "we were kids?\p"
	.string "I'm sure there's a trail we can take to \n"
	.string "get to the city.$"

Route2_Intro_EnterForestScene_Text_8:
# 163 "data/maps/Route2/scripts.pory"
	.string "Well?\p"
	.string "What do you think we should do?$"

Route2_Intro_EnterForestScene_Text_9:
# 168 "data/maps/Route2/scripts.pory"
	.string "Go together$"

Route2_Intro_EnterForestScene_Text_10:
# 169 "data/maps/Route2/scripts.pory"
	.string "Let's race$"

Route2_Intro_EnterForestScene_Text_11:
# 174 "data/maps/Route2/scripts.pory"
	.string "Okay! Just lead the way!$"

Route2_Intro_EnterForestScene_Text_12:
# 179 "data/maps/Route2/scripts.pory"
	.string "Oh, you know me too well, dude.\p"
	.string "Alright! First one out of the forest\n"
	.string "wins!\p"
	.string "Ready? Let's go!$"

Route2_Intro_MeetBigBadScene_Text_0:
# 241 "data/maps/Route2/scripts.pory"
	.string "Pardon me, but… \n"
	.string "You are a fledgeling Pokémon trainer, \l"
	.string "are you not?\p"
	.string "There's no denying it. You have that \n"
	.string "glint in your eyes, the unmistakable \l"
	.string "shine of one who has just received \l"
	.string "their first Pokémon.\p"
	.string "Ah, but where are my manners? \n"
	.string "My name is Slater. I am but a wandering \l"
	.string "old soul.\p"
	.string "Young trainer, if you would permit me to \n"
	.string "inquire…\p"
	.string "What is it, that compels you onto the \n"
	.string "path of the Pokémon trainer?\p"
	.string "Is it the allure of overcoming great \n"
	.string "challenge and adversity?\p"
	.string "Or, perhaps, you seek to unravel the \n"
	.string "many mysteries of these curious \l"
	.string "creatures?\p"
	.string "Or is it something else? A greater \n"
	.string "purpose, perhaps?$"

Route2_Intro_MeetBigBadScene_Text_1:
# 278 "data/maps/Route2/scripts.pory"
	.string "SLATER: …Young trainer, ahead of you \n"
	.string "lies Nautirust City.\p"
	.string "Long ago, this city was a bastion of \n"
	.string "industry.\p"
	.string "Factories and workers, ushering in a \n"
	.string "new age of prosperity for the whole \l"
	.string "world.\p"
	.string "Its smokestacks were monuments to \n"
	.string "humanity, and its flywheels spun the \l"
	.string "earth itself.\p"
	.string "That was a lifetime ago, though. \n"
	.string "In time, the new age this city created… \l"
	.string "left it behind.\p"
	.string "One by one, the factories shut their \n"
	.string "doors.\p"
	.string "Their lifeblood gone, the workers \n"
	.string "were forced to search for a new\l"
	.string "identity.\p"
	.string "In all change, it seems, something is \n"
	.string "lost.\p"
	.string "Nowadays, the city before you persists \n"
	.string "as a mere stepping stone, in the \l"
	.string "journeys of travelers and Pokémon \l"
	.string "trainers such as yourself.\p"
	.string "Some call it a revival.$"

Route2_Intro_MeetBigBadScene_Text_2:
# 333 "data/maps/Route2/scripts.pory"
	.string "SLATER: …Forgive me. I have kept you\n"
	.string "for too long.\p"
	.string "I am sure that nothing will stop you on \n"
	.string "your journey.\p"
	.string "If I may leave you with one thing, \n"
	.string "young trainer, a word of advice…\p"
	.string "All that you touch, you change.\p"
	.string "May we meet again.$"

Route2_RouteSign_Text_0:
# 365 "data/maps/Route2/scripts.pory"
	.string "ROUTE 2\n"
	.string "{RIGHT_ARROW} MARINACRE TOWN\l"
	.string "{LEFT_ARROW} NAUTIRUST CITY\l"
	.string "{UP_ARROW} NAUTIRUST FOREST$"

Route2_Trainer_1_Text_0:
# 378 "data/maps/Route2/scripts.pory"
	.string "You!\n"
	.string "You're a Pokémon trainer, aren't you?\p"
	.string "But you look like a total newbie!\n"
	.string "This'll be easy!$"

Route2_Trainer_1_Text_1:
# 385 "data/maps/Route2/scripts.pory"
	.string "N-No fair!\n"
	.string "That's a rare Pokémon!$"

Route2_Trainer_1_Text_2:
# 390 "data/maps/Route2/scripts.pory"
	.string "I underestimated you…$"

Route2_Trainer_2_Text_0:
# 400 "data/maps/Route2/scripts.pory"
	.string "I'll take you on with the cool Bug\n"
	.string "Pokémon I found in the woods!$"

Route2_Trainer_2_Text_1:
# 404 "data/maps/Route2/scripts.pory"
	.string "$"

Route2_Trainer_2_Text_2:
# 408 "data/maps/Route2/scripts.pory"
	.string "My girlfriend doesn't like Bug Pokémon…\n"
	.string "What's wrong with bugs?$"

Route2_Trainer_3_Text_0:
# 419 "data/maps/Route2/scripts.pory"
	.string "I'm looking for cute Pokémon!$"

Route2_Trainer_3_Text_1:
# 422 "data/maps/Route2/scripts.pory"
	.string "Not cute!$"

Route2_Trainer_3_Text_2:
# 426 "data/maps/Route2/scripts.pory"
	.string "I like cute Pokémon, but my friend\n"
	.string "here only likes gross Bug types…$"
