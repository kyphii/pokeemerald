Route4_MapScripts::
# 2 "data/maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route4_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route4_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route4/scripts.pory"
	compare VAR_WANDERING_CAVE_LOCATION, MAP_ROUTE4
	goto_if_eq Route4_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route4_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route4/scripts.pory"
	setmetatile 16, 61, METATILE_Overworld_CaveEntranceTop, TRUE
# 5 "data/maps/Route4/scripts.pory"
	setmetatile 16, 62, METATILE_Overworld_CaveEntranceBottom, FALSE
	return

Route4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Route4/scripts.pory"
	map_script_2 VAR_EXITED_WANDERING_CAVE, 1, Route4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/Route4/scripts.pory"
	delay 30
# 11 "data/maps/Route4/scripts.pory"
	special WanderingCaveSetExit
# 12 "data/maps/Route4/scripts.pory"
	setvar VAR_EXITED_WANDERING_CAVE, 0
# 13 "data/maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/Route4/scripts.pory"
	setmetatile 16, 61, METATILE_Overworld_CliffBottom_BrownShadow, TRUE
# 15 "data/maps/Route4/scripts.pory"
	setmetatile 16, 62, METATILE_Overworld_CliffBottom_GreyShadow, TRUE
# 16 "data/maps/Route4/scripts.pory"
	special DrawWholeMapView
# 17 "data/maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Route4_Talk_OldPrincesTrailHint::
# 23 "data/maps/Route4/scripts.pory"
	lock
# 24 "data/maps/Route4/scripts.pory"
	fadeoutbgm 2
# 25 "data/maps/Route4/scripts.pory"
	delay 90
# 26 "data/maps/Route4/scripts.pory"
	msgbox Route4_Talk_OldPrincesTrailHint_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/Route4/scripts.pory"
	closemessage
# 35 "data/maps/Route4/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 36 "data/maps/Route4/scripts.pory"
	switch VAR_0x8008
# 37 "data/maps/Route4/scripts.pory"
	case 17, Route4_Talk_OldPrincesTrailHint_3
# 38 "data/maps/Route4/scripts.pory"
	case 19, Route4_Talk_OldPrincesTrailHint_3
# 42 "data/maps/Route4/scripts.pory"
	case 18, Route4_Talk_OldPrincesTrailHint_4
Route4_Talk_OldPrincesTrailHint_1:
# 48 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route4/scripts.pory"
	removeobject VAR_LAST_TALKED
# 50 "data/maps/Route4/scripts.pory"
	setflag FLAG_STORY_ROUTE4_TRAIL_HINT
# 52 "data/maps/Route4/scripts.pory"
	fadeinbgm 1
# 53 "data/maps/Route4/scripts.pory"
	release
	return

Route4_Talk_OldPrincesTrailHint_3:
# 39 "data/maps/Route4/scripts.pory"
	applymovement VAR_LAST_TALKED, Route4_Talk_OldPrincesTrailHint_Movement_0
	goto Route4_Talk_OldPrincesTrailHint_1

Route4_Talk_OldPrincesTrailHint_4:
# 43 "data/maps/Route4/scripts.pory"
	applymovement VAR_LAST_TALKED, Route4_Talk_OldPrincesTrailHint_Movement_1
	goto Route4_Talk_OldPrincesTrailHint_1


Route4_Sign_RouteSign::
# 57 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_RouteSign_Text_0, MSGBOX_SIGN
	return


Route4_Talk_IndecisiveWoman::
# 67 "data/maps/Route4/scripts.pory"
	lock
# 68 "data/maps/Route4/scripts.pory"
	faceplayer
# 69 "data/maps/Route4/scripts.pory"
	msgbox Route4_Talk_IndecisiveWoman_Text_0, MSGBOX_DEFAULT
# 86 "data/maps/Route4/scripts.pory"
	closemessage
# 87 "data/maps/Route4/scripts.pory"
	release
	return


Route4_Trainer_1::
# 91 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_1, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 99 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_2::
# 106 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_2, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 114 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_3::
# 121 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_3, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 129 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_4::
# 136 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_4, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 144 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_5::
# 151 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_5, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 159 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_6::
# 166 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_6, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 174 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_7::
# 181 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_7, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 189 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_8::
# 196 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_8, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 204 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_9::
# 211 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_9, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 219 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_10::
# 226 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_10, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 234 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


# 39 "data/maps/Route4/scripts.pory"
Route4_Talk_OldPrincesTrailHint_Movement_0:
# 40 "data/maps/Route4/scripts.pory"
	walk_down
# 40 "data/maps/Route4/scripts.pory"
	walk_down
# 40 "data/maps/Route4/scripts.pory"
	walk_down
# 40 "data/maps/Route4/scripts.pory"
	walk_down
# 40 "data/maps/Route4/scripts.pory"
	walk_down
# 40 "data/maps/Route4/scripts.pory"
	walk_down
# 40 "data/maps/Route4/scripts.pory"
	walk_down
# 40 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/Route4/scripts.pory"
Route4_Talk_OldPrincesTrailHint_Movement_1:
# 44 "data/maps/Route4/scripts.pory"
	walk_right
# 45 "data/maps/Route4/scripts.pory"
	walk_down
# 45 "data/maps/Route4/scripts.pory"
	walk_down
# 45 "data/maps/Route4/scripts.pory"
	walk_down
# 45 "data/maps/Route4/scripts.pory"
	walk_down
# 45 "data/maps/Route4/scripts.pory"
	walk_down
# 45 "data/maps/Route4/scripts.pory"
	walk_down
# 45 "data/maps/Route4/scripts.pory"
	walk_down
# 45 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

Route4_Talk_OldPrincesTrailHint_Text_0:
# 27 "data/maps/Route4/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…\n"
	.string "…The way{PAUSE 20} beneath…\p"
	.string "…{PAUSE 10}There{PAUSE 20} is{PAUSE 5} a{PAUSE 5} way{PAUSE 30} beneath…$"

Route4_Sign_RouteSign_Text_0:
# 58 "data/maps/Route4/scripts.pory"
	.string "ROUTE 4\n"
	.string "{DOWN_ARROW} WHELCHORD CITY\l"
	.string "{RIGHT_ARROW} NAUTIRUST CITY\l"
	.string "{UP_ARROW} MOUNT BRIAR$"

Route4_Talk_IndecisiveWoman_Text_0:
# 70 "data/maps/Route4/scripts.pory"
	.string "Oh dear, oh dear.\n"
	.string "I'm exhausted… This route is so rugged… \p"
	.string "And it splits in two! \n"
	.string "which way should I go?\p"
	.string "I could turn around back to Nautirust \n"
	.string "City… but I already made it halfway to \l"
	.string "Whelchord City!\p"
	.string "Oh, what to do?\p"
	.string "…Maybe I can just pitch a tent, and say \n"
	.string "I live here now.$"

Route4_Trainer_1_Text_0:
# 94 "data/maps/Route4/scripts.pory"
	.string "TODO$"
