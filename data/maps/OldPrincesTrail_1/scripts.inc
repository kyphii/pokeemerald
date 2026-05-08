OldPrincesTrail_1_MapScripts::
# 2 "data/maps/OldPrincesTrail_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldPrincesTrail_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OldPrincesTrail_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/OldPrincesTrail_1/scripts.pory"
	goto_if_unset FLAG_VISITED_OLD_PRINCES_TRAIL, OldPrincesTrail_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

OldPrincesTrail_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/OldPrincesTrail_1/scripts.pory"
	setflag FLAG_VISITED_OLD_PRINCES_TRAIL
# 5 "data/maps/OldPrincesTrail_1/scripts.pory"
	addplayerlevel 1
	return

