JunopolisCity_MapScripts::
# 2 "data/maps/JunopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JunopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

JunopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/JunopolisCity/scripts.pory"
	goto_if_unset FLAG_VISITED_MAUVILLE_CITY, JunopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

JunopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/JunopolisCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 5 "data/maps/JunopolisCity/scripts.pory"
	setflag FLAG_STORY_ROUTE20_CROWD_CLEAR
# 6 "data/maps/JunopolisCity/scripts.pory"
	addplayerlevel 1
	return

