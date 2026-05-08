WhelchordCity_MapScripts::
# 2 "data/maps/WhelchordCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WhelchordCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WhelchordCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WhelchordCity/scripts.pory"
	goto_if_unset FLAG_VISITED_WHELCHORD_CITY, WhelchordCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

WhelchordCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/WhelchordCity/scripts.pory"
	setflag FLAG_VISITED_WHELCHORD_CITY
# 5 "data/maps/WhelchordCity/scripts.pory"
	addplayerlevel 1
# 8 "data/maps/WhelchordCity/scripts.pory"
	setvar VAR_MAYA_CURRENT_CITY, 2
# 9 "data/maps/WhelchordCity/scripts.pory"
	setvar VAR_MAYA_CURRENT_POSITION, 0
	return

