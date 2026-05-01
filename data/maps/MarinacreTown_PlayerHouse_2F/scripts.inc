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
	setplayerlevel 5
# 8 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	pausertc 20
	return


MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch::
# 14 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0, MSGBOX_SIGN
	return


MarinacreTown_PlayerHouse_2F_Mirror::
# 20 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	lockall
# 21 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox MarinacreTown_PlayerHouse_2F_Mirror_Text_0, MSGBOX_YESNO
# 30 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MarinacreTown_PlayerHouse_2F_Mirror_2
MarinacreTown_PlayerHouse_2F_Mirror_1:
# 35 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

MarinacreTown_PlayerHouse_2F_Mirror_2:
# 31 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 32 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 33 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	special DynPal_ShowFullToneMenu
	goto MarinacreTown_PlayerHouse_2F_Mirror_1


Debug_Talk_DevMenu::
# 39 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	lockall
# 40 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	applymovement LOCALID_DEBUG_KYPHII, Debug_Talk_DevMenu_Movement_0
# 43 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	delay 4
# 44 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_DEBUG_KYPHII, DIR_WEST
# 45 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	delay 4
# 46 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_DEBUG_KYPHII, DIR_NORTH
# 47 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	delay 4
# 48 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_DEBUG_KYPHII, DIR_EAST
# 49 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	faceplayer
# 53 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Talk_DevMenu_Text_0
# 62 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_Talk_DevMenu_Text_1, Debug_Talk_DevMenu_Text_2
# 64 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	switch VAR_RESULT
# 65 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 0, Debug_Talk_DevMenu_3
Debug_Talk_DevMenu_1:
# 68 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

Debug_Talk_DevMenu_3:
# 66 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	goto Debug_Script_TrainerLevel
	goto Debug_Talk_DevMenu_1


Debug_Script_TrainerLevel::
# 72 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	getplayerlevel
# 73 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 74 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Script_TrainerLevel_Text_0
# 77 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_Script_TrainerLevel_Text_1, Debug_Script_TrainerLevel_Text_2, Debug_Script_TrainerLevel_Text_3, Debug_Script_TrainerLevel_Text_4
# 79 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 0, Debug_Script_TrainerLevel_3
# 82 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 1, Debug_Script_TrainerLevel_4
# 84 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 2, Debug_Script_TrainerLevel_5
# 86 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 3, Debug_Script_TrainerLevel_6
Debug_Script_TrainerLevel_1:
# 89 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 90 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

Debug_Script_TrainerLevel_3:
# 81 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel 1
	goto Debug_Script_TrainerLevel_1

Debug_Script_TrainerLevel_4:
# 83 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel -1
	goto Debug_Script_TrainerLevel_1

Debug_Script_TrainerLevel_5:
# 85 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel 10
	goto Debug_Script_TrainerLevel_1

Debug_Script_TrainerLevel_6:
# 87 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel -10
	goto Debug_Script_TrainerLevel_1


Debug_Sign_GetStarters::
# 95 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_DEBUG_GET_STARTERS, Debug_Sign_GetStarters_2
# 102 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_1, MSGBOX_YESNO
# 108 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_Sign_GetStarters_5
Debug_Sign_GetStarters_1:
# 132 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
	return

Debug_Sign_GetStarters_2:
# 96 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_0, MSGBOX_SIGN
	goto Debug_Sign_GetStarters_1

Debug_Sign_GetStarters_5:
# 109 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	getpartysize
# 110 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Debug_Sign_GetStarters_7
# 125 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_3, MSGBOX_SIGN
	goto Debug_Sign_GetStarters_1

Debug_Sign_GetStarters_7:
# 111 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 112 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_2
# 113 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitfanfare
# 114 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitmessage
# 115 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 117 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	givemon SPECIES_ROSERADE, 10
# 118 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	givemon SPECIES_FLYGON, 10
# 119 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	givemon SPECIES_CLOYSTER, 10
# 121 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 122 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_DEBUG_GET_STARTERS
	goto Debug_Sign_GetStarters_1


Debug_Sign_GetHMs::
# 136 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_DEBUG_GET_HMS, Debug_Sign_GetHMs_2
# 142 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetHMs_Text_1, MSGBOX_YESNO
# 148 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_Sign_GetHMs_5
Debug_Sign_GetHMs_1:
# 165 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
	return

Debug_Sign_GetHMs_2:
# 137 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetHMs_Text_0, MSGBOX_SIGN
	goto Debug_Sign_GetHMs_1

Debug_Sign_GetHMs_5:
# 149 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 150 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 151 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 152 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 153 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 154 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 155 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 156 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 157 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_CLIMB
# 158 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetHMs_Text_2
# 160 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitfanfare
# 161 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitmessage
# 162 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
	goto Debug_Sign_GetHMs_1


Debug_Sign_WarpAndSkipIntro::
# 169 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_WarpAndSkipIntro_Text_0, MSGBOX_YESNO
# 180 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_Sign_WarpAndSkipIntro_1
	return

Debug_Sign_WarpAndSkipIntro_1:
# 181 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	special SetUnlockedPokedexFlags
# 182 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 183 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 184 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 186 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_RIVAL
# 187 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_PROFESSOR
# 188 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_MOM
# 189 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_BIGBAD
# 190 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_MOM_ENABLE_HEAL
# 191 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_ENTERED_WOODS
# 192 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_EXITED_WOODS
# 194 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 255
# 195 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	resumertc
# 196 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
# 198 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	warp MAP_NAUTIRUST_CITY, 0
# 199 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitstate
	return


# 40 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
Debug_Talk_DevMenu_Movement_0:
# 41 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	jump_in_place_down
	step_end

MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0:
# 14 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "It's your Nintendo Switch.\n"
	.string "When was the last time you used it?$"

MarinacreTown_PlayerHouse_2F_Mirror_Text_0:
# 22 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "An ordinary table mirror.\n"
	.string "In it, you see your reflection…\p"
	.string "…Or maybe not?\p"
	.string "Do you want to change your \n"
	.string "appearance?$"

Debug_Talk_DevMenu_Text_0:
# 54 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Hello! Welcome to DEBUG!\p"
	.string "I can help you with various debug\n"
	.string "settings.\p"
	.string "What do you want to change?$"

Debug_Talk_DevMenu_Text_1:
# 63 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Trainer Level$"

Debug_Talk_DevMenu_Text_2:
# 63 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Cancel$"

Debug_Script_TrainerLevel_Text_0:
# 75 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Your current Trainer Level is {STR_VAR_1}.$"

Debug_Script_TrainerLevel_Text_1:
# 78 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Up 1$"

Debug_Script_TrainerLevel_Text_2:
# 78 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Down 1$"

Debug_Script_TrainerLevel_Text_3:
# 78 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Up 10$"

Debug_Script_TrainerLevel_Text_4:
# 78 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Down 10$"

Debug_Sign_GetStarters_Text_0:
# 97 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "You already have the starters!\n"
	.string "What more could you want?$"

Debug_Sign_GetStarters_Text_1:
# 103 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "In the box…\n"
	.string "is a ready-made Pokémon team!\p"
	.string "Take them with you?$"

Debug_Sign_GetStarters_Text_2:
# 112 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "You took the Pokémon!$"

Debug_Sign_GetStarters_Text_3:
# 126 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Your party is too full!\n"
	.string "You need 3 empty party slots.$"

Debug_Sign_GetHMs_Text_0:
# 138 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "All HM moves are unlocked$"

Debug_Sign_GetHMs_Text_1:
# 143 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "This drawer is full of\n"
	.string "FLAG_RECEIVED_HMs!\p"
	.string "Take them?$"

Debug_Sign_GetHMs_Text_2:
# 159 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "You unlocked all the HM field moves!$"

Debug_Sign_WarpAndSkipIntro_Text_0:
# 170 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "This door will take you to \n"
	.string "Nautirust City. It's one-way only.\p"
	.string "If you enter, the intro sequence will be \n"
	.string "skipped, and cannot be triggered again.\p"
	.string "Make sure you have a Pokémon first!\p"
	.string "Enter?$"
