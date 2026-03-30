MarinacreTown_PlayerHouse_2F_MapScripts::
# 2 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MarinacreTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MarinacreTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_INTRO_SEQUENCE_STATE, 0
	goto_if_eq MarinacreTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MarinacreTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 5 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
	return


MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch::
# 11 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0, MSGBOX_SIGN
	return


MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0:
# 11 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "It's your Nintendo Switch.\n"
	.string "When was the last time you used it?$"
