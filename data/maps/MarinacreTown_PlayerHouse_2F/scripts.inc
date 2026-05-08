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


MarinacreTown_PlayerHouse_2F_Script_PlayerPCOn::
# 14 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_PLAYER_HOUSE
# 15 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 16 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	playse SE_PC_LOGIN
# 17 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
# 18 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	special PlayerPC
# 19 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitstate
# 20 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	goto EventScript_PCMainMenu
	return


MarinacreTown_PlayerHouse_2F_Script_PlayerPCOff::
# 24 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_PLAYER_HOUSE
# 25 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	playse SE_PC_OFF
	return


MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch::
# 29 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0, MSGBOX_SIGN
	return


MarinacreTown_PlayerHouse_2F_Mirror::
# 35 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	lockall
# 36 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox MarinacreTown_PlayerHouse_2F_Mirror_Text_0, MSGBOX_YESNO
# 45 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MarinacreTown_PlayerHouse_2F_Mirror_2
MarinacreTown_PlayerHouse_2F_Mirror_1:
# 50 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

MarinacreTown_PlayerHouse_2F_Mirror_2:
# 46 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 47 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 48 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	special DynPal_ShowFullToneMenu
	goto MarinacreTown_PlayerHouse_2F_Mirror_1


Debug_Talk_DevMenu::
# 54 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	lockall
# 55 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	applymovement LOCALID_DEBUG_KYPHII, Debug_Talk_DevMenu_Movement_0
# 58 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	delay 4
# 59 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_DEBUG_KYPHII, DIR_WEST
# 60 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	delay 4
# 61 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_DEBUG_KYPHII, DIR_NORTH
# 62 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	delay 4
# 63 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	turnobject LOCALID_DEBUG_KYPHII, DIR_EAST
# 64 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	faceplayer
# 68 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Talk_DevMenu_Text_0
# 77 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_Talk_DevMenu_Text_1, Debug_Talk_DevMenu_Text_2, Debug_Talk_DevMenu_Text_3
# 79 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 0, Debug_Talk_DevMenu_3
# 82 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 1, Debug_Talk_DevMenu_4
Debug_Talk_DevMenu_1:
# 93 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 94 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

Debug_Talk_DevMenu_3:
# 81 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	goto Debug_Script_TrainerLevel
	goto Debug_Talk_DevMenu_1

Debug_Talk_DevMenu_4:
# 83 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Talk_DevMenu_Text_4, MSGBOX_DEFAULT
# 90 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_MAYA_CURRENT_CITY, 1
# 91 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_MAYA_CURRENT_POSITION, 0
	goto Debug_Talk_DevMenu_1


Debug_Script_TrainerLevel::
# 98 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	getplayerlevel
# 99 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 100 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Script_TrainerLevel_Text_0
# 103 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_Script_TrainerLevel_Text_1, Debug_Script_TrainerLevel_Text_2, Debug_Script_TrainerLevel_Text_3, Debug_Script_TrainerLevel_Text_4
# 105 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 0, Debug_Script_TrainerLevel_3
# 108 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 1, Debug_Script_TrainerLevel_4
# 110 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 2, Debug_Script_TrainerLevel_5
# 112 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	case 3, Debug_Script_TrainerLevel_6
Debug_Script_TrainerLevel_1:
# 115 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 116 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

Debug_Script_TrainerLevel_3:
# 107 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel 1
	goto Debug_Script_TrainerLevel_1

Debug_Script_TrainerLevel_4:
# 109 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel -1
	goto Debug_Script_TrainerLevel_1

Debug_Script_TrainerLevel_5:
# 111 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel 10
	goto Debug_Script_TrainerLevel_1

Debug_Script_TrainerLevel_6:
# 113 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	addplayerlevel -10
	goto Debug_Script_TrainerLevel_1


Debug_Sign_GetStarters::
# 121 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_DEBUG_GET_STARTERS, Debug_Sign_GetStarters_2
# 128 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_1, MSGBOX_YESNO
# 134 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_Sign_GetStarters_5
Debug_Sign_GetStarters_1:
# 158 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
	return

Debug_Sign_GetStarters_2:
# 122 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_0, MSGBOX_SIGN
	goto Debug_Sign_GetStarters_1

Debug_Sign_GetStarters_5:
# 135 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	getpartysize
# 136 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Debug_Sign_GetStarters_7
# 151 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_3, MSGBOX_SIGN
	goto Debug_Sign_GetStarters_1

Debug_Sign_GetStarters_7:
# 137 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 138 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetStarters_Text_2
# 139 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitfanfare
# 140 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitmessage
# 141 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 143 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	givemon SPECIES_ROSERADE, 10
# 144 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	givemon SPECIES_FLYGON, 10
# 145 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	givemon SPECIES_CLOYSTER, 10
# 147 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 148 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_DEBUG_GET_STARTERS
	goto Debug_Sign_GetStarters_1


Debug_Sign_GetHMs::
# 162 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_DEBUG_GET_HMS, Debug_Sign_GetHMs_2
# 168 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetHMs_Text_1, MSGBOX_YESNO
# 174 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_Sign_GetHMs_5
Debug_Sign_GetHMs_1:
# 191 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
	return

Debug_Sign_GetHMs_2:
# 163 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetHMs_Text_0, MSGBOX_SIGN
	goto Debug_Sign_GetHMs_1

Debug_Sign_GetHMs_5:
# 175 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 176 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 177 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 178 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 179 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 180 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 181 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 182 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 183 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_CLIMB
# 184 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 185 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_GetHMs_Text_2
# 186 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitfanfare
# 187 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitmessage
# 188 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	closemessage
	goto Debug_Sign_GetHMs_1


Debug_Sign_WarpAndSkipIntro::
# 195 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	msgbox Debug_Sign_WarpAndSkipIntro_Text_0, MSGBOX_YESNO
# 206 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_Sign_WarpAndSkipIntro_1
	return

Debug_Sign_WarpAndSkipIntro_1:
# 207 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	special SetUnlockedPokedexFlags
# 208 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 209 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 210 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 212 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_RIVAL
# 213 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_PROFESSOR
# 214 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_MOM
# 215 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_MET_BIGBAD
# 216 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_MOM_ENABLE_HEAL
# 217 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_ENTERED_WOODS
# 218 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_INTRO_EXITED_WOODS
# 220 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 255
# 221 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	resumertc
# 222 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	releaseall
# 224 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	warp MAP_NAUTIRUST_CITY, 0
# 225 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	waitstate
	return


# 55 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
Debug_Talk_DevMenu_Movement_0:
# 56 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	jump_in_place_down
	step_end

MarinacreTown_PlayerHouse_2F_Sign_NintendoSwitch_Text_0:
# 29 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "It's your Nintendo Switch.\n"
	.string "When was the last time you used it?$"

MarinacreTown_PlayerHouse_2F_Mirror_Text_0:
# 37 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "An ordinary table mirror.\n"
	.string "In it, you see your reflection…\p"
	.string "…Or maybe not?\p"
	.string "Do you want to change your \n"
	.string "appearance?$"

Debug_Talk_DevMenu_Text_0:
# 69 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Hello! Welcome to DEBUG!\p"
	.string "I can help you with various debug\n"
	.string "settings.\p"
	.string "What do you want to change?$"

Debug_Talk_DevMenu_Text_1:
# 78 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Trainer Level$"

Debug_Talk_DevMenu_Text_2:
# 78 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Maya Location$"

Debug_Talk_DevMenu_Text_3:
# 78 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Cancel$"

Debug_Talk_DevMenu_Text_4:
# 84 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Ok, done!\p"
	.string "I've reset Maya's location\n"
	.string "to Nautirust City.$"

Debug_Script_TrainerLevel_Text_0:
# 101 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Your current Trainer Level is {STR_VAR_1}.$"

Debug_Script_TrainerLevel_Text_1:
# 104 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Up 1$"

Debug_Script_TrainerLevel_Text_2:
# 104 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Down 1$"

Debug_Script_TrainerLevel_Text_3:
# 104 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Up 10$"

Debug_Script_TrainerLevel_Text_4:
# 104 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Down 10$"

Debug_Sign_GetStarters_Text_0:
# 123 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "You already have the starters!\n"
	.string "What more could you want?$"

Debug_Sign_GetStarters_Text_1:
# 129 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "In the box…\n"
	.string "is a ready-made Pokémon team!\p"
	.string "Take them with you?$"

Debug_Sign_GetStarters_Text_2:
# 138 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "You took the Pokémon!$"

Debug_Sign_GetStarters_Text_3:
# 152 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "Your party is too full!\n"
	.string "You need 3 empty party slots.$"

Debug_Sign_GetHMs_Text_0:
# 164 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "All HM moves are unlocked$"

Debug_Sign_GetHMs_Text_1:
# 169 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "This drawer is full of\n"
	.string "FLAG_RECEIVED_HMs!\p"
	.string "Take them?$"

Debug_Sign_GetHMs_Text_2:
# 185 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "You unlocked all the HM field moves!$"

Debug_Sign_WarpAndSkipIntro_Text_0:
# 196 "data/maps/MarinacreTown_PlayerHouse_2F/scripts.pory"
	.string "This door will take you to \n"
	.string "Nautirust City. It's one-way only.\p"
	.string "If you enter, the intro sequence will be \n"
	.string "skipped, and cannot be triggered again.\p"
	.string "Make sure you have a Pokémon first!\p"
	.string "Enter?$"
