PrismaticCave_3_MapScripts::
	.byte 0


PrismaticCave_3_Event_EncounterDiancie::
# 4 "data/maps/PrismaticCave_3/scripts.pory"
	lock
# 5 "data/maps/PrismaticCave_3/scripts.pory"
	faceplayer
# 6 "data/maps/PrismaticCave_3/scripts.pory"
	waitse
# 7 "data/maps/PrismaticCave_3/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
# 8 "data/maps/PrismaticCave_3/scripts.pory"
	waitmoncry
# 9 "data/maps/PrismaticCave_3/scripts.pory"
	delay 10
# 10 "data/maps/PrismaticCave_3/scripts.pory"
	waitbuttonpress
# 11 "data/maps/PrismaticCave_3/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 12 "data/maps/PrismaticCave_3/scripts.pory"
	seteventmon SPECIES_DIANCIE, 40
# 13 "data/maps/PrismaticCave_3/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 14 "data/maps/PrismaticCave_3/scripts.pory"
	waitstate
# 15 "data/maps/PrismaticCave_3/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/PrismaticCave_3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/PrismaticCave_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PrismaticCave_3_Event_EncounterDiancie_1
# 23 "data/maps/PrismaticCave_3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 24 "data/maps/PrismaticCave_3/scripts.pory"
	removeobject VAR_LAST_TALKED
# 25 "data/maps/PrismaticCave_3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 27 "data/maps/PrismaticCave_3/scripts.pory"
	msgbox PrismaticCave_3_Event_EncounterDiancie_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/PrismaticCave_3/scripts.pory"
	setflag FLAG_ENCOUNTERED_DIANCIE
# 34 "data/maps/PrismaticCave_3/scripts.pory"
	release
	return

PrismaticCave_3_Event_EncounterDiancie_1:
# 18 "data/maps/PrismaticCave_3/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/PrismaticCave_3/scripts.pory"
	setflag FLAG_ENCOUNTERED_DIANCIE
# 20 "data/maps/PrismaticCave_3/scripts.pory"
	release
	return


PrismaticCave_3_Event_EncounterDiancie_Text_0:
# 28 "data/maps/PrismaticCave_3/scripts.pory"
	.string "Diancie retreated further into the\n"
	.string "cave…$"
