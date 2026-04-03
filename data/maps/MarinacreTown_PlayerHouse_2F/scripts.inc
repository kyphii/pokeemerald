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
# 6 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setplayerlevel 4
	return


MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch::
# 12 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0, MSGBOX_SIGN
	return


MarinacreTown_PlayerHouse_2F_Mirror::
# 18 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	lockall
# 19 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox MarinacreTown_PlayerHouse_2F_Mirror_Text_0, MSGBOX_YESNO
# 28 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MarinacreTown_PlayerHouse_2F_Mirror_2
MarinacreTown_PlayerHouse_2F_Mirror_1:
# 33 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

MarinacreTown_PlayerHouse_2F_Mirror_2:
# 29 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 30 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 31 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	special DynPal_ShowFullToneMenu
	goto MarinacreTown_PlayerHouse_2F_Mirror_1


MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0:
# 12 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "It's your Nintendo Switch.\n"
	.string "When was the last time you used it?$"

MarinacreTown_PlayerHouse_2F_Mirror_Text_0:
# 20 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "An ordinary table mirror.\n"
	.string "In it, you see your reflection…\p"
	.string "…Or maybe not?\p"
	.string "Do you want to change your \n"
	.string "appearance?$"
