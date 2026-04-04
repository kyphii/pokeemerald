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
	return


Route2_Intro_EnterForestScene::
# 19 "data/maps/Route2/scripts.pory"
	lockall
# 21 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 23 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_0
# 34 "data/maps/Route2/scripts.pory"
	delay 10
# 36 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 37 "data/maps/Route2/scripts.pory"
	switch VAR_0x8008
# 38 "data/maps/Route2/scripts.pory"
	case 26, Route2_Intro_EnterForestScene_3
# 43 "data/maps/Route2/scripts.pory"
	case 27, Route2_Intro_EnterForestScene_4
# 48 "data/maps/Route2/scripts.pory"
	case 28, Route2_Intro_EnterForestScene_5
# 53 "data/maps/Route2/scripts.pory"
	case 29, Route2_Intro_EnterForestScene_6
# 58 "data/maps/Route2/scripts.pory"
	case 30, Route2_Intro_EnterForestScene_7
Route2_Intro_EnterForestScene_1:
# 64 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 67 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 75 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_WEST
# 77 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Intro_EnterForestScene_Movement_5
# 80 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_2, MSGBOX_DEFAULT
# 91 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 92 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route2/scripts.pory"
	delay 20
# 94 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_3, MSGBOX_DEFAULT
# 100 "data/maps/Route2/scripts.pory"
	delay 30
# 102 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 103 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 105 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_4, MSGBOX_DEFAULT
# 110 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_6
# 114 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_7
# 119 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 120 "data/maps/Route2/scripts.pory"
	delay 30
# 121 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_5, MSGBOX_DEFAULT
# 125 "data/maps/Route2/scripts.pory"
	waitmovement LOCALID_PLAYER
# 127 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_6, MSGBOX_DEFAULT
# 133 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 134 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 136 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_7, MSGBOX_DEFAULT
# 145 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_8
# 149 "data/maps/Route2/scripts.pory"
	delay 10
# 150 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_9
# 154 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_8
# 161 "data/maps/Route2/scripts.pory"
	dynmultichoice 16, 4, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route2_Intro_EnterForestScene_Text_9, Route2_Intro_EnterForestScene_Text_10
# 165 "data/maps/Route2/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/Route2/scripts.pory"
	case 0, Route2_Intro_EnterForestScene_10
# 171 "data/maps/Route2/scripts.pory"
	case 1, Route2_Intro_EnterForestScene_11
Route2_Intro_EnterForestScene_8:
# 182 "data/maps/Route2/scripts.pory"
	closemessage
# 184 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 9
# 186 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Intro_EnterForestScene_3:
# 39 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_1
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_4:
# 44 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_2
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_5:
# 49 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_3
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_6:
# 54 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_3
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_7:
# 59 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_4
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_10:
# 167 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_11, MSGBOX_DEFAULT
	goto Route2_Intro_EnterForestScene_8

Route2_Intro_EnterForestScene_11:
# 172 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_12, MSGBOX_DEFAULT
	goto Route2_Intro_EnterForestScene_8


Route2_Intro_MeetBigBadScene::
# 190 "data/maps/Route2/scripts.pory"
	lockall
# 191 "data/maps/Route2/scripts.pory"
	fadeoutbgm 3
# 193 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 194 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 195 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_3
# 204 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_4
# 213 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_5
# 222 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_6
Route2_Intro_MeetBigBadScene_1:
# 232 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_0, MSGBOX_DEFAULT
# 266 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_2
# 269 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 310 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 311 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_9
# 312 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_9
# 317 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_10
# 318 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_10
Route2_Intro_MeetBigBadScene_7:
# 324 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_2, MSGBOX_DEFAULT
# 342 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_5
# 346 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, 48, 48
# 348 "data/maps/Route2/scripts.pory"
	removeobject LOCALID_ROUTE2_BIGBAD
# 350 "data/maps/Route2/scripts.pory"
	setflag FLAG_INTRO_MET_BIGBAD
# 351 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 11
# 353 "data/maps/Route2/scripts.pory"
	fadeinbgm 1
# 354 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Intro_MeetBigBadScene_3:
# 196 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 12
# 197 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 198 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_0
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_4:
# 205 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 13
# 206 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 207 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_0
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_5:
# 214 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 12
# 215 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 216 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_1
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_6:
# 223 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_BIGBAD, -5, 13
# 224 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 225 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_1
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_9:
# 313 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_3
	goto Route2_Intro_MeetBigBadScene_7

Route2_Intro_MeetBigBadScene_10:
# 319 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_4
	goto Route2_Intro_MeetBigBadScene_7


Route2_RouteSign::
# 358 "data/maps/Route2/scripts.pory"
	msgbox Route2_RouteSign_Text_0, MSGBOX_SIGN
	return


Route2_Trainer_1::
# 368 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_1, Route2_Trainer_1_Text_0, Route2_Trainer_1_Text_1
# 383 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_1_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_2::
# 390 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_2, Route2_Trainer_2_Text_0, Route2_Trainer_2_Text_1
# 401 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_2_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_3::
# 409 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_3, Route2_Trainer_3_Text_0, Route2_Trainer_3_Text_1
# 419 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_3_Text_2, MSGBOX_AUTOCLOSE
	return


# 426 "data/maps/Route2/scripts.pory"
Route2_Movement_CutTreeGuyJump:
# 427 "data/maps/Route2/scripts.pory"
	jump_in_place_right
	step_end

# 29 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_0:
# 30 "data/maps/Route2/scripts.pory"
	walk_up
# 31 "data/maps/Route2/scripts.pory"
	walk_left
# 31 "data/maps/Route2/scripts.pory"
	walk_left
# 31 "data/maps/Route2/scripts.pory"
	walk_left
# 32 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 39 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_1:
# 40 "data/maps/Route2/scripts.pory"
	walk_up
# 41 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 44 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_2:
# 45 "data/maps/Route2/scripts.pory"
	walk_up
# 46 "data/maps/Route2/scripts.pory"
	walk_left
# 46 "data/maps/Route2/scripts.pory"
	walk_left
# 46 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 49 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_3:
# 50 "data/maps/Route2/scripts.pory"
	walk_up
# 51 "data/maps/Route2/scripts.pory"
	walk_left
# 51 "data/maps/Route2/scripts.pory"
	walk_left
# 51 "data/maps/Route2/scripts.pory"
	walk_left
# 51 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 59 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_4:
# 60 "data/maps/Route2/scripts.pory"
	walk_up
# 61 "data/maps/Route2/scripts.pory"
	walk_left
# 61 "data/maps/Route2/scripts.pory"
	walk_left
# 61 "data/maps/Route2/scripts.pory"
	walk_left
# 61 "data/maps/Route2/scripts.pory"
	walk_left
# 61 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 77 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_5:
# 78 "data/maps/Route2/scripts.pory"
	walk_in_place_right
# 78 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 110 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_6:
# 111 "data/maps/Route2/scripts.pory"
	walk_right
# 111 "data/maps/Route2/scripts.pory"
	walk_right
# 111 "data/maps/Route2/scripts.pory"
	walk_right
# 112 "data/maps/Route2/scripts.pory"
	walk_up
# 112 "data/maps/Route2/scripts.pory"
	walk_up
# 112 "data/maps/Route2/scripts.pory"
	walk_up
# 112 "data/maps/Route2/scripts.pory"
	walk_up
# 112 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_7:
# 115 "data/maps/Route2/scripts.pory"
	walk_right
# 115 "data/maps/Route2/scripts.pory"
	walk_right
# 115 "data/maps/Route2/scripts.pory"
	walk_right
# 115 "data/maps/Route2/scripts.pory"
	walk_right
# 116 "data/maps/Route2/scripts.pory"
	walk_up
# 116 "data/maps/Route2/scripts.pory"
	walk_up
# 116 "data/maps/Route2/scripts.pory"
	walk_up
# 116 "data/maps/Route2/scripts.pory"
	walk_up
# 116 "data/maps/Route2/scripts.pory"
	walk_up
# 116 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 145 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_8:
# 146 "data/maps/Route2/scripts.pory"
	walk_up
# 146 "data/maps/Route2/scripts.pory"
	walk_up
# 146 "data/maps/Route2/scripts.pory"
	walk_up
# 146 "data/maps/Route2/scripts.pory"
	walk_up
# 147 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 150 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_9:
# 151 "data/maps/Route2/scripts.pory"
	walk_up
# 151 "data/maps/Route2/scripts.pory"
	walk_up
# 151 "data/maps/Route2/scripts.pory"
	walk_up
# 151 "data/maps/Route2/scripts.pory"
	walk_up
# 152 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 198 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_0:
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	walk_right
# 200 "data/maps/Route2/scripts.pory"
	delay_16
# 200 "data/maps/Route2/scripts.pory"
	delay_16
# 201 "data/maps/Route2/scripts.pory"
	walk_left
# 201 "data/maps/Route2/scripts.pory"
	walk_left
# 202 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 216 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_1:
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 217 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	delay_16
# 218 "data/maps/Route2/scripts.pory"
	delay_16
# 219 "data/maps/Route2/scripts.pory"
	walk_left
# 219 "data/maps/Route2/scripts.pory"
	walk_left
# 220 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 266 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_2:
# 267 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 313 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_3:
# 314 "data/maps/Route2/scripts.pory"
	walk_right
# 315 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 319 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_4:
# 320 "data/maps/Route2/scripts.pory"
	walk_right
# 321 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 342 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_5:
# 343 "data/maps/Route2/scripts.pory"
	walk_right
# 343 "data/maps/Route2/scripts.pory"
	walk_right
# 343 "data/maps/Route2/scripts.pory"
	walk_right
# 343 "data/maps/Route2/scripts.pory"
	walk_right
# 344 "data/maps/Route2/scripts.pory"
	walk_up
# 344 "data/maps/Route2/scripts.pory"
	walk_up
# 344 "data/maps/Route2/scripts.pory"
	walk_up
# 344 "data/maps/Route2/scripts.pory"
	walk_up
# 344 "data/maps/Route2/scripts.pory"
	walk_up
# 344 "data/maps/Route2/scripts.pory"
	walk_up
# 344 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Talk_CutTreePerson_Text_0:
# 8 "data/maps/Route2/scripts.pory"
	.string "Ow! Ow! Ow!\p"
	.string "This obstacle has mighty defenses…\n"
	.string "But I cannot accept defeat!\p"
	.string "Ow! Ow! Ow!$"

Route2_Intro_EnterForestScene_Text_0:
# 24 "data/maps/Route2/scripts.pory"
	.string "MAYA: Hey!\n"
	.string "Try to keep up, {PLAYER}!$"

Route2_Intro_EnterForestScene_Text_1:
# 68 "data/maps/Route2/scripts.pory"
	.string "MAYA: Looks like the road is still\n"
	.string "blocked off here.\l"
	.string "But no worries! This guy is on it!$"

Route2_Intro_EnterForestScene_Text_2:
# 82 "data/maps/Route2/scripts.pory"
	.string "Hoo hah!\n"
	.string "This thorny obstacle stands opposed\l"
	.string "to freedom and justice!\p"
	.string "I shall strike it down with my mighty\n"
	.string "ROCK SMASH attack!$"

Route2_Intro_EnterForestScene_Text_3:
# 95 "data/maps/Route2/scripts.pory"
	.string "Ow!\n"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_4:
# 106 "data/maps/Route2/scripts.pory"
	.string "MAYA: …Maybe it's gonna take a while.$"

Route2_Intro_EnterForestScene_Text_5:
# 122 "data/maps/Route2/scripts.pory"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_6:
# 128 "data/maps/Route2/scripts.pory"
	.string "MAYA: The only other way is through \n"
	.string "Nautirust Forest.$"

Route2_Intro_EnterForestScene_Text_7:
# 137 "data/maps/Route2/scripts.pory"
	.string "Remember how we used to play here when\n"
	.string "we were kids?\p"
	.string "I'm sure there's a trail we can take to \n"
	.string "get to the city.$"

Route2_Intro_EnterForestScene_Text_8:
# 157 "data/maps/Route2/scripts.pory"
	.string "Well?\p"
	.string "What do you think we should do?$"

Route2_Intro_EnterForestScene_Text_9:
# 162 "data/maps/Route2/scripts.pory"
	.string "Go together$"

Route2_Intro_EnterForestScene_Text_10:
# 163 "data/maps/Route2/scripts.pory"
	.string "Let's race$"

Route2_Intro_EnterForestScene_Text_11:
# 168 "data/maps/Route2/scripts.pory"
	.string "Okay! Just lead the way!$"

Route2_Intro_EnterForestScene_Text_12:
# 173 "data/maps/Route2/scripts.pory"
	.string "Oh, you know me too well, dude.\p"
	.string "Alright! First one out of the forest\n"
	.string "wins!\p"
	.string "Ready? Let's go!$"

Route2_Intro_MeetBigBadScene_Text_0:
# 235 "data/maps/Route2/scripts.pory"
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
# 272 "data/maps/Route2/scripts.pory"
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
# 327 "data/maps/Route2/scripts.pory"
	.string "SLATER: …Forgive me. I have kept you\n"
	.string "for too long.\p"
	.string "I am sure that nothing will stop you on \n"
	.string "your journey.\p"
	.string "If I may leave you with one thing, \n"
	.string "young trainer, a word of advice…\p"
	.string "All that you touch, you change.\p"
	.string "May we meet again.$"

Route2_RouteSign_Text_0:
# 359 "data/maps/Route2/scripts.pory"
	.string "ROUTE 2\n"
	.string "{RIGHT_ARROW} MARINACRE TOWN\l"
	.string "{LEFT_ARROW} NAUTIRUST CITY\l"
	.string "{UP_ARROW} NAUTIRUST FOREST$"

Route2_Trainer_1_Text_0:
# 372 "data/maps/Route2/scripts.pory"
	.string "You!\n"
	.string "You're a Pokémon trainer, aren't you?\p"
	.string "But you look like a total newbie!\n"
	.string "This'll be easy!$"

Route2_Trainer_1_Text_1:
# 379 "data/maps/Route2/scripts.pory"
	.string "N-No fair!\n"
	.string "That's a rare Pokémon!$"

Route2_Trainer_1_Text_2:
# 384 "data/maps/Route2/scripts.pory"
	.string "I underestimated you…$"

Route2_Trainer_2_Text_0:
# 394 "data/maps/Route2/scripts.pory"
	.string "I'll take you on with the cool Bug\n"
	.string "Pokémon I found in the woods!$"

Route2_Trainer_2_Text_1:
# 398 "data/maps/Route2/scripts.pory"
	.string "$"

Route2_Trainer_2_Text_2:
# 402 "data/maps/Route2/scripts.pory"
	.string "My girlfriend doesn't like Bug Pokémon…\n"
	.string "What's wrong with bugs?$"

Route2_Trainer_3_Text_0:
# 413 "data/maps/Route2/scripts.pory"
	.string "I'm looking for cute Pokémon!$"

Route2_Trainer_3_Text_1:
# 416 "data/maps/Route2/scripts.pory"
	.string "Not cute!$"

Route2_Trainer_3_Text_2:
# 420 "data/maps/Route2/scripts.pory"
	.string "I like cute Pokémon, but my friend\n"
	.string "here only likes gross Bug types…$"
