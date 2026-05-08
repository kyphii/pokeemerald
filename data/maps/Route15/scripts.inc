Route15_MapScripts::
# 2 "data/maps/Route15/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route15_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/Route15/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route15_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route15_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route15/scripts.pory"
	compare VAR_WANDERING_CAVE_LOCATION, MAP_ROUTE15
	goto_if_eq Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route15/scripts.pory"
	setmetatile 17, 9, METATILE_Overworld_CaveEntranceTop, TRUE
# 5 "data/maps/Route15/scripts.pory"
	setmetatile 17, 10, METATILE_Overworld_CaveEntranceBottom, FALSE
	return

Route15_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Route15/scripts.pory"
	map_script_2 VAR_EXITED_WANDERING_CAVE, 1, Route15_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route15_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/Route15/scripts.pory"
	delay 30
# 11 "data/maps/Route15/scripts.pory"
	special WanderingCaveSetExit
# 12 "data/maps/Route15/scripts.pory"
	setvar VAR_EXITED_WANDERING_CAVE, 0
# 13 "data/maps/Route15/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/Route15/scripts.pory"
	setmetatile 17, 9, METATILE_Overworld_CliffBottom_BrownShadow, TRUE
# 15 "data/maps/Route15/scripts.pory"
	setmetatile 17, 10, METATILE_Overworld_CliffBottom_GreyShadow, TRUE
# 16 "data/maps/Route15/scripts.pory"
	special DrawWholeMapView
# 17 "data/maps/Route15/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

