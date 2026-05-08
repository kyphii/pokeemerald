WanderingCave_MapScripts::
# 2 "data/maps/WanderingCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WanderingCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WanderingCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WanderingCave/scripts.pory"
	goto_if_unset FLAG_VISITED_WANDERING_CAVE, WanderingCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WanderingCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/WanderingCave/scripts.pory"
	special WanderingCaveSetExit
# 8 "data/maps/WanderingCave/scripts.pory"
	setvar VAR_EXITED_WANDERING_CAVE, 1
	return

WanderingCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/WanderingCave/scripts.pory"
	setflag FLAG_VISITED_WANDERING_CAVE
# 5 "data/maps/WanderingCave/scripts.pory"
	addplayerlevel 1
	goto WanderingCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

