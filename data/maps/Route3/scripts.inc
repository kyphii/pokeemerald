Route3_MapScripts::
# 2 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route3_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route3/scripts.pory"
	compare VAR_WANDERING_CAVE_LOCATION, MAP_ROUTE3
	goto_if_eq Route3_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route3_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route3/scripts.pory"
	setmetatile 22, 2, METATILE_Overworld_CaveEntranceTop, TRUE
# 5 "data/maps/Route3/scripts.pory"
	setmetatile 22, 3, METATILE_Overworld_CaveEntranceBottom, FALSE
	return

Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Route3/scripts.pory"
	map_script_2 VAR_EXITED_WANDERING_CAVE, 1, Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/Route3/scripts.pory"
	delay 30
# 11 "data/maps/Route3/scripts.pory"
	special WanderingCaveSetExit
# 12 "data/maps/Route3/scripts.pory"
	setvar VAR_EXITED_WANDERING_CAVE, 0
# 13 "data/maps/Route3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/Route3/scripts.pory"
	setmetatile 22, 2, METATILE_Overworld_CliffBottom_BrownShadow, TRUE
# 15 "data/maps/Route3/scripts.pory"
	setmetatile 22, 3, METATILE_Overworld_CliffBottom_GreyShadow, TRUE
# 16 "data/maps/Route3/scripts.pory"
	special DrawWholeMapView
# 17 "data/maps/Route3/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Route3_Sign_RouteSign::
# 23 "data/maps/Route3/scripts.pory"
	msgbox Route3_Sign_RouteSign_Text_0, MSGBOX_SIGN
	return


Route3_Trainer_1::
# 32 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_1, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 40 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_2::
# 47 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_2, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 55 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_3::
# 62 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_3, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 70 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_4::
# 77 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_4, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 85 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_5::
# 92 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_5, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 100 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_6::
# 107 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_6, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 115 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_7::
# 122 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_7, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 130 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_8::
# 137 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_8, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 145 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Sign_RouteSign_Text_0:
# 24 "data/maps/Route3/scripts.pory"
	.string "ROUTE 3\n"
	.string "{LEFT_ARROW} WHELCHORD CITY\l"
	.string "{RIGHT_ARROW} NAUTIRUST CITY$"

Route3_Trainer_1_Text_0:
# 35 "data/maps/Route3/scripts.pory"
	.string "TODO$"
