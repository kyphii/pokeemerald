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
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 36 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_0
# 47 "data/maps/Route2/scripts.pory"
	delay 10
# 49 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 50 "data/maps/Route2/scripts.pory"
	switch VAR_0x8008
# 51 "data/maps/Route2/scripts.pory"
	case 26, Route2_Intro_EnterForestScene_3
# 56 "data/maps/Route2/scripts.pory"
	case 27, Route2_Intro_EnterForestScene_4
# 61 "data/maps/Route2/scripts.pory"
	case 28, Route2_Intro_EnterForestScene_5
# 66 "data/maps/Route2/scripts.pory"
	case 29, Route2_Intro_EnterForestScene_6
# 71 "data/maps/Route2/scripts.pory"
	case 30, Route2_Intro_EnterForestScene_7
Route2_Intro_EnterForestScene_1:
# 77 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 80 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_1, MSGBOX_DEFAULT
# 86 "data/maps/Route2/scripts.pory"
	closemessage
# 88 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 89 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_WEST
# 91 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Intro_EnterForestScene_Movement_6
# 94 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_2, MSGBOX_DEFAULT
# 104 "data/maps/Route2/scripts.pory"
	closemessage
# 106 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 107 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route2/scripts.pory"
	delay 20
# 109 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_3, MSGBOX_DEFAULT
# 114 "data/maps/Route2/scripts.pory"
	closemessage
# 116 "data/maps/Route2/scripts.pory"
	delay 30
# 118 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 119 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_SOUTH
# 121 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_4, MSGBOX_DEFAULT
# 125 "data/maps/Route2/scripts.pory"
	closemessage
# 127 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_7
# 131 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_8
# 136 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_CUTTREEGUY, Route2_Movement_CutTreeGuyJump
# 137 "data/maps/Route2/scripts.pory"
	delay 30
# 138 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_5, MSGBOX_DEFAULT
# 142 "data/maps/Route2/scripts.pory"
	closemessage
# 143 "data/maps/Route2/scripts.pory"
	waitmovement LOCALID_PLAYER
# 145 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_6, MSGBOX_DEFAULT
# 151 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 152 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_HOMETOWN_RIVAL, DIR_EAST
# 154 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_EnterForestScene_Text_7, MSGBOX_DEFAULT
# 162 "data/maps/Route2/scripts.pory"
	closemessage
# 164 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 9
# 165 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_RIVAL, Route2_Intro_EnterForestScene_Movement_9
# 169 "data/maps/Route2/scripts.pory"
	delay 10
# 170 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_10
# 174 "data/maps/Route2/scripts.pory"
	waitmovement 0
	return

Route2_Intro_EnterForestScene_3:
# 52 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_1
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_4:
# 57 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_2
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_5:
# 62 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_3
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_6:
# 67 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_4
	goto Route2_Intro_EnterForestScene_1

Route2_Intro_EnterForestScene_7:
# 72 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Intro_EnterForestScene_Movement_5
	goto Route2_Intro_EnterForestScene_1


Route2_Intro_MeetBigBadScene::
# 180 "data/maps/Route2/scripts.pory"
	lockall
# 181 "data/maps/Route2/scripts.pory"
	addobject LOCALID_ROUTE2_BIGBAD
# 182 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 183 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 184 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_3
# 194 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_4
# 205 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_5
# 215 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_6
Route2_Intro_MeetBigBadScene_1:
# 227 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_4
# 264 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_1, MSGBOX_DEFAULT
# 304 "data/maps/Route2/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 305 "data/maps/Route2/scripts.pory"
	switch VAR_0x8009
# 306 "data/maps/Route2/scripts.pory"
	case 11, Route2_Intro_MeetBigBadScene_9
# 307 "data/maps/Route2/scripts.pory"
	case 12, Route2_Intro_MeetBigBadScene_9
# 312 "data/maps/Route2/scripts.pory"
	case 13, Route2_Intro_MeetBigBadScene_10
# 313 "data/maps/Route2/scripts.pory"
	case 14, Route2_Intro_MeetBigBadScene_10
Route2_Intro_MeetBigBadScene_7:
# 319 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route2/scripts.pory"
	msgbox Route2_Intro_MeetBigBadScene_Text_2, MSGBOX_DEFAULT
# 337 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_7
# 341 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 342 "data/maps/Route2/scripts.pory"
	removeobject LOCALID_ROUTE2_BIGBAD
# 344 "data/maps/Route2/scripts.pory"
	setflag FLAG_INTRO_MET_BIGBAD
# 345 "data/maps/Route2/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 255
# 347 "data/maps/Route2/scripts.pory"
	fadeinbgm 1
# 348 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Intro_MeetBigBadScene_3:
# 185 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_0
# 191 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 192 "data/maps/Route2/scripts.pory"
	delay 120
# 193 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_4:
# 195 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_1
# 202 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 203 "data/maps/Route2/scripts.pory"
	delay 120
# 204 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_5:
# 206 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_2
# 212 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 213 "data/maps/Route2/scripts.pory"
	delay 120
# 214 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_6:
# 216 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_3
# 223 "data/maps/Route2/scripts.pory"
	fadeoutbgm 2
# 224 "data/maps/Route2/scripts.pory"
	delay 120
# 225 "data/maps/Route2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Route2_Intro_MeetBigBadScene_1

Route2_Intro_MeetBigBadScene_9:
# 308 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_5
	goto Route2_Intro_MeetBigBadScene_7

Route2_Intro_MeetBigBadScene_10:
# 314 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_ROUTE2_BIGBAD, Route2_Intro_MeetBigBadScene_Movement_6
	goto Route2_Intro_MeetBigBadScene_7


Route2_RouteSign::
# 352 "data/maps/Route2/scripts.pory"
	msgbox Route2_RouteSign_Text_0, MSGBOX_SIGN
	return


Route2_Trainer_1::
# 362 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_1, Route2_Trainer_1_Text_0, Route2_Trainer_1_Text_1
# 377 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_1_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_2::
# 384 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_2, Route2_Trainer_2_Text_0, Route2_Trainer_2_Text_1
# 395 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_2_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_3::
# 402 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_3, Route2_Trainer_3_Text_0, Route2_Trainer_3_Text_1
# 412 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_3_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_Trainer_4::
# 420 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_2, Route2_Trainer_4_Text_0, Route2_Trainer_4_Text_1
# 431 "data/maps/Route2/scripts.pory"
	msgbox Route2_Trainer_4_Text_2, MSGBOX_AUTOCLOSE
	return


# 438 "data/maps/Route2/scripts.pory"
Route2_Movement_CutTreeGuyJump:
# 439 "data/maps/Route2/scripts.pory"
	jump_in_place_right
	step_end

# 42 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_0:
# 43 "data/maps/Route2/scripts.pory"
	walk_up
# 44 "data/maps/Route2/scripts.pory"
	walk_left
# 44 "data/maps/Route2/scripts.pory"
	walk_left
# 44 "data/maps/Route2/scripts.pory"
	walk_left
# 45 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 52 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_1:
# 53 "data/maps/Route2/scripts.pory"
	walk_up
# 54 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 57 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_2:
# 58 "data/maps/Route2/scripts.pory"
	walk_up
# 59 "data/maps/Route2/scripts.pory"
	walk_left
# 59 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 62 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_3:
# 63 "data/maps/Route2/scripts.pory"
	walk_up
# 64 "data/maps/Route2/scripts.pory"
	walk_left
# 64 "data/maps/Route2/scripts.pory"
	walk_left
# 64 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 67 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_4:
# 68 "data/maps/Route2/scripts.pory"
	walk_up
# 69 "data/maps/Route2/scripts.pory"
	walk_left
# 69 "data/maps/Route2/scripts.pory"
	walk_left
# 69 "data/maps/Route2/scripts.pory"
	walk_left
# 69 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 72 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_5:
# 73 "data/maps/Route2/scripts.pory"
	walk_up
# 74 "data/maps/Route2/scripts.pory"
	walk_left
# 74 "data/maps/Route2/scripts.pory"
	walk_left
# 74 "data/maps/Route2/scripts.pory"
	walk_left
# 74 "data/maps/Route2/scripts.pory"
	walk_left
# 74 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 91 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_6:
# 92 "data/maps/Route2/scripts.pory"
	walk_in_place_right
# 92 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 127 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_7:
# 128 "data/maps/Route2/scripts.pory"
	walk_right
# 128 "data/maps/Route2/scripts.pory"
	walk_right
# 128 "data/maps/Route2/scripts.pory"
	walk_right
# 129 "data/maps/Route2/scripts.pory"
	walk_up
# 129 "data/maps/Route2/scripts.pory"
	walk_up
# 129 "data/maps/Route2/scripts.pory"
	walk_up
# 129 "data/maps/Route2/scripts.pory"
	walk_up
# 129 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 131 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_8:
# 132 "data/maps/Route2/scripts.pory"
	walk_right
# 132 "data/maps/Route2/scripts.pory"
	walk_right
# 132 "data/maps/Route2/scripts.pory"
	walk_right
# 132 "data/maps/Route2/scripts.pory"
	walk_right
# 133 "data/maps/Route2/scripts.pory"
	walk_up
# 133 "data/maps/Route2/scripts.pory"
	walk_up
# 133 "data/maps/Route2/scripts.pory"
	walk_up
# 133 "data/maps/Route2/scripts.pory"
	walk_up
# 133 "data/maps/Route2/scripts.pory"
	walk_up
# 133 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_9:
# 166 "data/maps/Route2/scripts.pory"
	walk_up
# 166 "data/maps/Route2/scripts.pory"
	walk_up
# 166 "data/maps/Route2/scripts.pory"
	walk_up
# 166 "data/maps/Route2/scripts.pory"
	walk_up
# 166 "data/maps/Route2/scripts.pory"
	walk_up
# 167 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 170 "data/maps/Route2/scripts.pory"
Route2_Intro_EnterForestScene_Movement_10:
# 171 "data/maps/Route2/scripts.pory"
	walk_up
# 171 "data/maps/Route2/scripts.pory"
	walk_up
# 171 "data/maps/Route2/scripts.pory"
	walk_up
# 171 "data/maps/Route2/scripts.pory"
	walk_up
# 171 "data/maps/Route2/scripts.pory"
	walk_up
# 172 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 185 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_0:
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 186 "data/maps/Route2/scripts.pory"
	walk_right
# 187 "data/maps/Route2/scripts.pory"
	delay_16
# 187 "data/maps/Route2/scripts.pory"
	delay_16
# 188 "data/maps/Route2/scripts.pory"
	walk_left
# 188 "data/maps/Route2/scripts.pory"
	walk_left
# 189 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 195 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_1:
# 196 "data/maps/Route2/scripts.pory"
	walk_down
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 197 "data/maps/Route2/scripts.pory"
	walk_right
# 198 "data/maps/Route2/scripts.pory"
	delay_16
# 198 "data/maps/Route2/scripts.pory"
	delay_16
# 199 "data/maps/Route2/scripts.pory"
	walk_left
# 199 "data/maps/Route2/scripts.pory"
	walk_left
# 200 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 206 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_2:
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 207 "data/maps/Route2/scripts.pory"
	walk_right
# 208 "data/maps/Route2/scripts.pory"
	delay_16
# 208 "data/maps/Route2/scripts.pory"
	delay_16
# 209 "data/maps/Route2/scripts.pory"
	walk_left
# 209 "data/maps/Route2/scripts.pory"
	walk_left
# 210 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 216 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_3:
# 217 "data/maps/Route2/scripts.pory"
	walk_down
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 218 "data/maps/Route2/scripts.pory"
	walk_right
# 219 "data/maps/Route2/scripts.pory"
	delay_16
# 219 "data/maps/Route2/scripts.pory"
	delay_16
# 220 "data/maps/Route2/scripts.pory"
	walk_left
# 220 "data/maps/Route2/scripts.pory"
	walk_left
# 221 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 261 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_4:
# 262 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 308 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_5:
# 309 "data/maps/Route2/scripts.pory"
	walk_right
# 310 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 314 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_6:
# 315 "data/maps/Route2/scripts.pory"
	walk_right
# 316 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 337 "data/maps/Route2/scripts.pory"
Route2_Intro_MeetBigBadScene_Movement_7:
# 338 "data/maps/Route2/scripts.pory"
	walk_right
# 338 "data/maps/Route2/scripts.pory"
	walk_right
# 338 "data/maps/Route2/scripts.pory"
	walk_right
# 338 "data/maps/Route2/scripts.pory"
	walk_right
# 339 "data/maps/Route2/scripts.pory"
	walk_up
# 339 "data/maps/Route2/scripts.pory"
	walk_up
# 339 "data/maps/Route2/scripts.pory"
	walk_up
# 339 "data/maps/Route2/scripts.pory"
	walk_up
# 339 "data/maps/Route2/scripts.pory"
	walk_up
# 339 "data/maps/Route2/scripts.pory"
	walk_up
# 339 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Talk_CutTreePerson_Text_0:
# 20 "data/maps/Route2/scripts.pory"
	.string "Ow! Ow! Ow!\p"
	.string "This obstacle has mighty defenses…\n"
	.string "But I cannot accept defeat!\p"
	.string "Ow! Ow! Ow!$"

Route2_Intro_EnterForestScene_Text_0:
# 37 "data/maps/Route2/scripts.pory"
	.string "MAYA: Hey!\n"
	.string "Try to keep up, {PLAYER}!$"

Route2_Intro_EnterForestScene_Text_1:
# 81 "data/maps/Route2/scripts.pory"
	.string "MAYA: Looks like the road is still\n"
	.string "blocked off here.\l"
	.string "But no worries! This guy is on it!$"

Route2_Intro_EnterForestScene_Text_2:
# 96 "data/maps/Route2/scripts.pory"
	.string "Hoo hah!\n"
	.string "This thorny obstacle stands opposed\l"
	.string "to freedom and justice!\p"
	.string "I shall strike it down with my mighty\n"
	.string "ROCK SMASH attack!$"

Route2_Intro_EnterForestScene_Text_3:
# 110 "data/maps/Route2/scripts.pory"
	.string "Ow!\n"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_4:
# 122 "data/maps/Route2/scripts.pory"
	.string "MAYA: …I think he's gonna take a while.$"

Route2_Intro_EnterForestScene_Text_5:
# 139 "data/maps/Route2/scripts.pory"
	.string "Ow ow ow!$"

Route2_Intro_EnterForestScene_Text_6:
# 146 "data/maps/Route2/scripts.pory"
	.string "MAYA: The only other way is through \n"
	.string "Nautirust Forest.$"

Route2_Intro_EnterForestScene_Text_7:
# 155 "data/maps/Route2/scripts.pory"
	.string "Remember how we used to play here when\n"
	.string "we were kids?\p"
	.string "I'm sure there's a trail we can take to \n"
	.string "get to the city.$"

Route2_Intro_MeetBigBadScene_Text_0:
# 230 "data/maps/Route2/scripts.pory"
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
# 267 "data/maps/Route2/scripts.pory"
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
# 322 "data/maps/Route2/scripts.pory"
	.string "SLATER: …Forgive me. I have kept you\n"
	.string "for too long.\p"
	.string "I am sure that nothing will stop you on \n"
	.string "your journey.\p"
	.string "If I may leave you with one thing, \n"
	.string "young trainer, a word of advice…\p"
	.string "All that you touch, you change.\p"
	.string "May we meet again.$"

Route2_RouteSign_Text_0:
# 353 "data/maps/Route2/scripts.pory"
	.string "ROUTE 2\n"
	.string "{RIGHT_ARROW} MARINACRE TOWN\l"
	.string "{LEFT_ARROW} NAUTIRUST CITY\l"
	.string "{UP_ARROW} NAUTIRUST FOREST$"

Route2_Trainer_1_Text_0:
# 366 "data/maps/Route2/scripts.pory"
	.string "You!\n"
	.string "You're a Pokémon trainer, aren't you?\p"
	.string "But you look like a total newbie!\n"
	.string "This'll be easy!$"

Route2_Trainer_1_Text_1:
# 373 "data/maps/Route2/scripts.pory"
	.string "N-No fair!\n"
	.string "That's a rare Pokémon!$"

Route2_Trainer_1_Text_2:
# 378 "data/maps/Route2/scripts.pory"
	.string "I underestimated you…$"

Route2_Trainer_2_Text_0:
# 388 "data/maps/Route2/scripts.pory"
	.string "Bugs!\n"
	.string "Bugs bugs bugs!$"

Route2_Trainer_2_Text_1:
# 392 "data/maps/Route2/scripts.pory"
	.string "Bugggsss!$"

Route2_Trainer_2_Text_2:
# 396 "data/maps/Route2/scripts.pory"
	.string "Hi, I'm Bimmy.$"

Route2_Trainer_3_Text_0:
# 406 "data/maps/Route2/scripts.pory"
	.string "I'm looking for cute Pokémon!$"

Route2_Trainer_3_Text_1:
# 409 "data/maps/Route2/scripts.pory"
	.string "Not cute!$"

Route2_Trainer_3_Text_2:
# 413 "data/maps/Route2/scripts.pory"
	.string "I like cute Pokémon, but my friend\n"
	.string "here only likes gross Bug types…$"

Route2_Trainer_4_Text_0:
# 424 "data/maps/Route2/scripts.pory"
	.string "I'll take you on with the cool Bug\n"
	.string "Pokémon I found in the woods!$"

Route2_Trainer_4_Text_1:
# 428 "data/maps/Route2/scripts.pory"
	.string "$"

Route2_Trainer_4_Text_2:
# 432 "data/maps/Route2/scripts.pory"
	.string "My girlfriend doesn't like Bug Pokémon…\n"
	.string "What's wrong with bugs?$"
