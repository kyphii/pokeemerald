Route2_MapScripts::
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route2/scripts.pory"
	switch VAR_INTRO_SEQUENCE_STATE
# 4 "data/maps/Route2/scripts.pory"
	case 10, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 6 "data/maps/Route2/scripts.pory"
	case 11, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 9 "data/maps/Route2/scripts.pory"
	case 19, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 12
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 7 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 13
# 8 "data/maps/Route2/scripts.pory"
	setvar VAR_PERSIST_NPC, 0
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/Route2/scripts.pory"
	clearflag FLAG_INTRO_MET_BIGBAD
	return


Route2_Talk_CutTreePerson::
# 16 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 17 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route2/scripts.pory"
	delay 20
# 19 "data/maps/Route2/scripts.pory"
	msgbox Route2_Talk_CutTreePerson_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/Route2/scripts.pory"
	closemessage
	return


Route2_Intro_EnterForestScene::
# 32 "data/maps/Route2/scripts.pory"
	lockall
# 34 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_ROUTE2_MAYA, DIR_SOUTH
# 37 "data/maps/Route2/scripts.pory"
	setflag FLAG_INTRO_CLEAR_EXTRA_FOREST_TRAINERS
# 39 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_MAYA, Route2_Intro_EnterForestScene_Movement_0
# 50 "data/maps/Route2/scripts.pory"
	delay 10
# 52 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 53 "data/maps/Route2/scripts.pory"
	switch VAR_0x8008
# 54 "data/maps/Route2/scripts.pory"
	case 26, Route2_Intro_EnterForestScene_3
# 59 "data/maps/Route2/scripts.pory"
	case 27, Route2_Intro_EnterForestScene_4
# 64 "data/maps/Route2/scripts.pory"
	case 28, Route2_Intro_EnterForestScene_5
# 69 "data/maps/Route2/scripts.pory"
	case 29, Route2_Intro_EnterForestScene_6
# 74 "data/maps/Route2/scripts.pory"
	case 30, Route2_Intro_EnterForestScene_7
Route2_Intro_EnterForestScene_1:
# 80 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 83 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/Route2/scripts.pory"
	closemessage
# 91 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 92 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_ROUTE2_MAYA, DIR_WEST
# 94 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Common_Movement_WalkInPlaceRight
# 95 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_2, MSGBOX_DEFAULT
# 105 "data/maps/Route2/scripts.pory"
	closemessage
# 107 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 108 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route2/scripts.pory"
	delay 20
# 110 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_3, MSGBOX_DEFAULT
# 115 "data/maps/Route2/scripts.pory"
	closemessage
# 117 "data/maps/Route2/scripts.pory"
	delay 30
# 119 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 120 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_ROUTE2_MAYA, DIR_SOUTH
# 122 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_4, MSGBOX_DEFAULT
# 126 "data/maps/Route2/scripts.pory"
	closemessage
# 128 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_MAYA, Route2_Intro_EnterForestScene_Movement_6
# 132 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_7
# 137 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 138 "data/maps/Route2/scripts.pory"
	delay 30
# 139 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_5, MSGBOX_DEFAULT
# 143 "data/maps/Route2/scripts.pory"
	closemessage
# 144 "data/maps/Route2/scripts.pory"
	waitmovement LOCALID_PLAYER
# 146 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_6, MSGBOX_DEFAULT
# 152 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 153 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_ROUTE2_MAYA, DIR_EAST
# 155 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_7, MSGBOX_DEFAULT
# 163 "data/maps/Route2/scripts.pory"
	closemessage
# 165 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 9
# 166 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_MAYA, Route2_Intro_EnterForestScene_Movement_8
# 170 "data/maps/Route2/scripts.pory"
	delay 10
# 171 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_9
# 175 "data/maps/Route2/scripts.pory"
	waitmovement 0
	return

Route2_Intro_EnterForestScene_3:
# 55 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_1
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_4:
# 60 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_2
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_5:
# 65 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_3
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_6:
# 70 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_4
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_7:
# 75 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_5
	goto Route2_Intro_EnterForestScene_1


Route2_Intro_MeetBigBadScene::
# 181 "data/maps/Route2/scripts.pory"
	lockall
# 182 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 183 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 184 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 185 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_3
# 195 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_4
# 206 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_5
# 216 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_6
Route2_Intro_MeetBigBadScene_1:
# 228 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_0, MSGBOX_DEFAULT
# 266 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_4
# 269 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route2/scripts.pory"
	delay 20
# 272 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_1, MSGBOX_DEFAULT
# 302 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 303 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 304 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_9
# 305 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_9
# 310 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_10
# 311 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_10
Route2_Intro_MeetBigBadScene_7:
# 317 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_2, MSGBOX_DEFAULT
# 332 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_7
# 336 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 337 "data/maps/Route2/scripts.pory"
	removeobject LOCALID_ROUTE2_BIGBAD
# 339 "data/maps/Route2/scripts.pory"
	setflag FLAG_INTRO_MET_BIGBAD
# 340 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 255
# 342 "data/maps/Route2/scripts.pory"
	fadeinbgm 1
# 343 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Intro_MeetBigBadScene_3:
# 186 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_0
# 192 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 193 "data/maps/Route2/scripts.pory"
	delay 120
# 194 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_4:
# 196 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_1
# 203 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 204 "data/maps/Route2/scripts.pory"
	delay 120
# 205 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_5:
# 207 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_2
# 213 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 214 "data/maps/Route2/scripts.pory"
	delay 120
# 215 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_6:
# 217 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_3
# 224 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 225 "data/maps/Route2/scripts.pory"
	delay 120
# 226 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_9:
# 306 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_5
	goto Route2_Intro_MeetBigBadScene_7

Route2_Intro_MeetBigBadScene_10:
# 312 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_6
	goto Route2_Intro_MeetBigBadScene_7


Route2_RouteSign::
# 347 "data/maps/Route2/scripts.pory"
	msgbox Route2_RouteSign_Text_0, MSGBOX_SIGN
	return


Route2_Trainer_1::
# 357 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_1, Route2_Trainer_1_Text_0, Route2_Trainer_1_Text_1
# 372 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_1_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_2::
# 379 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_2, Route2_Trainer_2_Text_0, Route2_Trainer_2_Text_1
# 392 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_2_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_3::
# 400 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_3, Route2_Trainer_3_Text_0, Route2_Trainer_3_Text_1
# 410 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_3_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_4::
# 418 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_2, Route2_Trainer_4_Text_0, Route2_Trainer_4_Text_1
# 429 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_4_Text_2, MSGBOX_AUTOCLOSE
	return


# 436 "data/maps/Route2/scripts.pory"
Route2_Movement_CutTreeGuyJump:
# 437 "data/maps/Route2/scripts.pory"
	jump_in_place_right
	step_end

# 45 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_0:
# 46 "data/maps/Route2/scripts.pory"
	walk_up
# 47 "data/maps/Route2/scripts.pory"
	walk_left
# 47 "data/maps/Route2/scripts.pory"
	walk_left
# 47 "data/maps/Route2/scripts.pory"
	walk_left
# 48 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 55 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_1:
# 56 "data/maps/Route2/scripts.pory"
	walk_up
# 57 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 60 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_2:
# 61 "data/maps/Route2/scripts.pory"
	walk_up
# 62 "data/maps/Route2/scripts.pory"
	walk_left
# 62 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 65 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_3:
# 66 "data/maps/Route2/scripts.pory"
	walk_up
# 67 "data/maps/Route2/scripts.pory"
	walk_left
# 67 "data/maps/Route2/scripts.pory"
	walk_left
# 67 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 70 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_4:
# 71 "data/maps/Route2/scripts.pory"
	walk_up
# 72 "data/maps/Route2/scripts.pory"
	walk_left
# 72 "data/maps/Route2/scripts.pory"
	walk_left
# 72 "data/maps/Route2/scripts.pory"
	walk_left
# 72 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 75 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_5:
# 76 "data/maps/Route2/scripts.pory"
	walk_up
# 77 "data/maps/Route2/scripts.pory"
	walk_left
# 77 "data/maps/Route2/scripts.pory"
	walk_left
# 77 "data/maps/Route2/scripts.pory"
	walk_left
# 77 "data/maps/Route2/scripts.pory"
	walk_left
# 77 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 128 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_6:
# 129 "data/maps/Route2/scripts.pory"
	walk_right
# 129 "data/maps/Route2/scripts.pory"
	walk_right
# 129 "data/maps/Route2/scripts.pory"
	walk_right
# 130 "data/maps/Route2/scripts.pory"
	walk_up
# 130 "data/maps/Route2/scripts.pory"
	walk_up
# 130 "data/maps/Route2/scripts.pory"
	walk_up
# 130 "data/maps/Route2/scripts.pory"
	walk_up
# 130 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_7:
# 133 "data/maps/Route2/scripts.pory"
	walk_right
# 133 "data/maps/Route2/scripts.pory"
	walk_right
# 133 "data/maps/Route2/scripts.pory"
	walk_right
# 133 "data/maps/Route2/scripts.pory"
	walk_right
# 134 "data/maps/Route2/scripts.pory"
	walk_up
# 134 "data/maps/Route2/scripts.pory"
	walk_up
# 134 "data/maps/Route2/scripts.pory"
	walk_up
# 134 "data/maps/Route2/scripts.pory"
	walk_up
# 134 "data/maps/Route2/scripts.pory"
	walk_up
# 134 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 166 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_8:
# 167 "data/maps/Route2/scripts.pory"
	walk_up
# 167 "data/maps/Route2/scripts.pory"
	walk_up
# 167 "data/maps/Route2/scripts.pory"
	walk_up
# 167 "data/maps/Route2/scripts.pory"
	walk_up
# 167 "data/maps/Route2/scripts.pory"
	walk_up
# 168 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 171 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_9:
# 172 "data/maps/Route2/scripts.pory"
	walk_up
# 172 "data/maps/Route2/scripts.pory"
	walk_up
# 172 "data/maps/Route2/scripts.pory"
	walk_up
# 172 "data/maps/Route2/scripts.pory"
	walk_up
# 172 "data/maps/Route2/scripts.pory"
	walk_up
# 173 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 186 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_0:
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	walk_right
# 188 "data/maps/Route2/scripts.pory"
	delay_16
# 188 "data/maps/Route2/scripts.pory"
	delay_16
# 189 "data/maps/Route2/scripts.pory"
	walk_left
# 189 "data/maps/Route2/scripts.pory"
	walk_left
# 190 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 196 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_1:
# 197 "data/maps/Route2/scripts.pory"
	walk_down
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	walk_right
# 199 "data/maps/Route2/scripts.pory"
	delay_16
# 199 "data/maps/Route2/scripts.pory"
	delay_16
# 200 "data/maps/Route2/scripts.pory"
	walk_left
# 200 "data/maps/Route2/scripts.pory"
	walk_left
# 201 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 207 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_2:
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	walk_right
# 209 "data/maps/Route2/scripts.pory"
	delay_16
# 209 "data/maps/Route2/scripts.pory"
	delay_16
# 210 "data/maps/Route2/scripts.pory"
	walk_left
# 210 "data/maps/Route2/scripts.pory"
	walk_left
# 211 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 217 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_3:
# 218 "data/maps/Route2/scripts.pory"
	walk_down
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	walk_right
# 220 "data/maps/Route2/scripts.pory"
	delay_16
# 220 "data/maps/Route2/scripts.pory"
	delay_16
# 221 "data/maps/Route2/scripts.pory"
	walk_left
# 221 "data/maps/Route2/scripts.pory"
	walk_left
# 222 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 266 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_4:
# 267 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 306 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_5:
# 307 "data/maps/Route2/scripts.pory"
	walk_right
# 308 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 312 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_6:
# 313 "data/maps/Route2/scripts.pory"
	walk_right
# 314 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 332 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_7:
# 333 "data/maps/Route2/scripts.pory"
	walk_right
# 333 "data/maps/Route2/scripts.pory"
	walk_right
# 333 "data/maps/Route2/scripts.pory"
	walk_right
# 333 "data/maps/Route2/scripts.pory"
	walk_right
# 334 "data/maps/Route2/scripts.pory"
	walk_up
# 334 "data/maps/Route2/scripts.pory"
	walk_up
# 334 "data/maps/Route2/scripts.pory"
	walk_up
# 334 "data/maps/Route2/scripts.pory"
	walk_up
# 334 "data/maps/Route2/scripts.pory"
	walk_up
# 334 "data/maps/Route2/scripts.pory"
	walk_up
# 334 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Talk_CutTreePerson_Text_0:
# 20 "data/maps/Route2/scripts.pory"
	.string "Ow! Ow! Ow!\p"
	.string "This obstacle has mighty defenses…\n"
	.string "But I cannot accept defeat!\p"
	.string "Ow! Ow! Ow!$"

Route2_Intro_EnterForestScene_Text_0:
# 40 "data/maps/Route2/scripts.pory"
	.string "MAYA: Hey!\n"
	.string "Try to keep up, {PLAYER}!$"

Route2_Intro_EnterForestScene_Text_1:
# 84 "data/maps/Route2/scripts.pory"
	.string "MAYA: Looks like the road is still\n"
	.string "blocked off here.\l"
	.string "But no worries! This guy is on it!$"

Route2_Intro_EnterForestScene_Text_2:
# 97 "data/maps/Route2/scripts.pory"
	.string "Hoo hah!\n"
	.string "This thorny obstacle stands opposed\l"
	.string "to freedom and justice!\p"
	.string "I shall strike it down with my mighty\n"
	.string "ROCK SMASH attack!$"

Route2_Intro_EnterForestScene_Text_3:
# 111 "data/maps/Route2/scripts.pory"
	.string "Ow!\n"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_4:
# 123 "data/maps/Route2/scripts.pory"
	.string "MAYA: …I think he's gonna take a while.$"

Route2_Intro_EnterForestScene_Text_5:
# 140 "data/maps/Route2/scripts.pory"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_6:
# 147 "data/maps/Route2/scripts.pory"
	.string "MAYA: The only other way is through \n"
	.string "Nautirust Forest.$"

Route2_Intro_EnterForestScene_Text_7:
# 156 "data/maps/Route2/scripts.pory"
	.string "Remember how we used to play here when\n"
	.string "we were kids?\p"
	.string "I'm sure there's a trail we can take to \n"
	.string "get to the city.$"

Route2_Intro_MeetBigBadScene_Text_0:
# 231 "data/maps/Route2/scripts.pory"
	.string "Pardon me, but… \n"
	.string "You are a fledgeling Pokémon trainer, \l"
	.string "are you not?\p"
	.string "There's no denying it. You have that \n"
	.string "unmistakable glint in your eyes, of one \l"
	.string "who has just received their first \l"
	.string "Pokémon.\p"
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
	.string "purpose, perhaps?\p"
	.string "Whatever it may be, I am sure that \n"
	.string "nothing will keep you from your \l"
	.string "ambition.$"

Route2_Intro_MeetBigBadScene_Text_1:
# 273 "data/maps/Route2/scripts.pory"
	.string "SLATER: …Young trainer, ahead of you \n"
	.string "lies Nautirust City.\p"
	.string "Long ago, this city was a bastion of \n"
	.string "industry.\p"
	.string "Factories and workers, ushering in a \n"
	.string "new age of prosperity for the whole \l"
	.string "world.\p"
	.string "The city's smokestacks were monuments \n"
	.string "to humanity, and its flywheels spun the \l"
	.string "earth itself.\p"
	.string "That was a lifetime ago, though. \n"
	.string "One day, the last factory closed its \l"
	.string "doors, and the city's soul was lost.\p"
	.string "Nowadays, it persists due to the \n"
	.string "phenomenon that is Pokémon training. \p"
	.string "A mere stepping stone, in the journeys \n"
	.string "of travelers and Pokémon trainers \l"
	.string "such as yourself.\p"
	.string "Some call it a revival.$"

Route2_Intro_MeetBigBadScene_Text_2:
# 320 "data/maps/Route2/scripts.pory"
	.string "SLATER: …Forgive me. I have kept you\n"
	.string "for too long.\p"
	.string "If I may leave you with one thing, \n"
	.string "young trainer, a word of advice…\p"
	.string "All that you touch, you change.\p"
	.string "May we meet again.$"

Route2_RouteSign_Text_0:
# 348 "data/maps/Route2/scripts.pory"
	.string "ROUTE 2\n"
	.string "{RIGHT_ARROW} MARINACRE TOWN\l"
	.string "{LEFT_ARROW} NAUTIRUST CITY\l"
	.string "{UP_ARROW} NAUTIRUST FOREST$"

Route2_Trainer_1_Text_0:
# 361 "data/maps/Route2/scripts.pory"
	.string "You!\n"
	.string "You're a Pokémon trainer, aren't you?\p"
	.string "But you look like a total newbie!\n"
	.string "This'll be easy!$"

Route2_Trainer_1_Text_1:
# 368 "data/maps/Route2/scripts.pory"
	.string "N-No fair!\n"
	.string "That's a rare Pokémon!$"

Route2_Trainer_1_Text_2:
# 373 "data/maps/Route2/scripts.pory"
	.string "I underestimated you…$"

Route2_Trainer_2_Text_0:
# 383 "data/maps/Route2/scripts.pory"
	.string "If two Pokémon trainers' eyes meet,\n"
	.string "then it's a battle!\p"
	.string "You can't refuse my challenge!$"

Route2_Trainer_2_Text_1:
# 389 "data/maps/Route2/scripts.pory"
	.string "I shouldn't have looked!$"

Route2_Trainer_2_Text_2:
# 393 "data/maps/Route2/scripts.pory"
	.string "If you don't want to battle, then\n"
	.string "keep your eyes to yourself!$"

Route2_Trainer_3_Text_0:
# 404 "data/maps/Route2/scripts.pory"
	.string "I'm looking for cute Pokémon!$"

Route2_Trainer_3_Text_1:
# 407 "data/maps/Route2/scripts.pory"
	.string "Not cute!$"

Route2_Trainer_3_Text_2:
# 411 "data/maps/Route2/scripts.pory"
	.string "I like cute Pokémon, but my friend\n"
	.string "here only likes gross Bug types…$"

Route2_Trainer_4_Text_0:
# 422 "data/maps/Route2/scripts.pory"
	.string "I'll take you on with the cool Bug\n"
	.string "Pokémon I found in the woods!$"

Route2_Trainer_4_Text_1:
# 426 "data/maps/Route2/scripts.pory"
	.string "Bugggsss!$"

Route2_Trainer_4_Text_2:
# 430 "data/maps/Route2/scripts.pory"
	.string "My girlfriend doesn't like Bug Pokémon…\n"
	.string "What's wrong with her?$"
