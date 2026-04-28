NautirustCity_MapScripts::
# 2 "data/maps/NautirustCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NautirustCity/scripts.pory"
	goto_if_unset FLAG_VISITED_PETALBURG_CITY, NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 7 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_STORY_CUT_MASTER_AWAY
# 9 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_STORY_ROUTE4_TRAIL_HINT
# 10 "data/maps/NautirustCity/scripts.pory"
	addplayerlevel 1
	return


NautirustCity_Sign_TownSign::
# 16 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Sign_TownSign_Text_0, MSGBOX_SIGN
	return


NautirustCity_Sign_GymSign::
# 24 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Sign_GymSign_Text_0, MSGBOX_SIGN
	return


NautirustCity_Script_TalkGreeter::
# 33 "data/maps/NautirustCity/scripts.pory"
	lock
# 34 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 35 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkGreeter_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 57 "data/maps/NautirustCity/scripts.pory"
	release
	return


NautirustCity_Script_TalkMan1::
# 61 "data/maps/NautirustCity/scripts.pory"
	lock
# 62 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 63 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkMan1_Text_0, MSGBOX_DEFAULT
# 75 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 76 "data/maps/NautirustCity/scripts.pory"
	release
	return


NautirustCity_Script_TalkBenchGirl::
# 80 "data/maps/NautirustCity/scripts.pory"
	lock
# 81 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 82 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkBenchGirl_Text_0, MSGBOX_DEFAULT
# 90 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 91 "data/maps/NautirustCity/scripts.pory"
	release
	return


NautirustCity_Script_TalkExpShareStore::
# 95 "data/maps/NautirustCity/scripts.pory"
	lock
# 96 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 97 "data/maps/NautirustCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, NautirustCity_Script_TalkExpShareStore_1
# 163 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_9, MSGBOX_DEFAULT
# 170 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 171 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_1:
# 98 "data/maps/NautirustCity/scripts.pory"
	message NautirustCity_Script_TalkExpShareStore_Text_0
# 107 "data/maps/NautirustCity/scripts.pory"
	waitmessage
# 108 "data/maps/NautirustCity/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/NautirustCity/scripts.pory"
	dynmultichoice 14, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, NautirustCity_Script_TalkExpShareStore_Text_1, NautirustCity_Script_TalkExpShareStore_Text_2
# 111 "data/maps/NautirustCity/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/NautirustCity/scripts.pory"
	case 0, NautirustCity_Script_TalkExpShareStore_5
# 153 "data/maps/NautirustCity/scripts.pory"
	case 1, NautirustCity_Script_TalkExpShareStore_6
	return

NautirustCity_Script_TalkExpShareStore_5:
# 113 "data/maps/NautirustCity/scripts.pory"
	checkmoney 5000
# 114 "data/maps/NautirustCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NautirustCity_Script_TalkExpShareStore_7
# 143 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_7, MSGBOX_DEFAULT
# 150 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 151 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_6:
# 154 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_8, MSGBOX_DEFAULT
# 158 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 159 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_7:
# 115 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_3, MSGBOX_DEFAULT
# 119 "data/maps/NautirustCity/scripts.pory"
	removemoney 5000
# 120 "data/maps/NautirustCity/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 121 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 123 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_4, MSGBOX_YESNO
# 127 "data/maps/NautirustCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NautirustCity_Script_TalkExpShareStore_11
NautirustCity_Script_TalkExpShareStore_10:
# 135 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_6, MSGBOX_DEFAULT
# 139 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 140 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_11:
# 128 "data/maps/NautirustCity/scripts.pory"
	playse SE_POKENAV_ON
# 129 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_5
# 132 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_EXP_SHARE_ENABLED
	goto NautirustCity_Script_TalkExpShareStore_10


NautirustCity_Sign_TownSign_Text_0:
# 17 "data/maps/NautirustCity/scripts.pory"
	.string "NAUTIRUST CITY\n"
	.string "Streams of energy, to power a new age.$"

NautirustCity_Sign_GymSign_Text_0:
# 25 "data/maps/NautirustCity/scripts.pory"
	.string "NAUTIRUST CITY Pokémon Gym\n"
	.string "Leader: Landon\l"
	.string "The Sultan of Soil!$"

NautirustCity_Script_TalkGreeter_Text_0:
# 36 "data/maps/NautirustCity/scripts.pory"
	.string "Hi!\n"
	.string "Are you from out of town?\p"
	.string "There are a lot of trainers like you\n"
	.string "passing through these days.\p"
	.string "Lucky for you, Nautirust has everything\n"
	.string "that a trainer needs!\p"
	.string "You can get your Pokémon healed at\n"
	.string "the Pokémon Center, right here.\p"
	.string "There's also a Poké Mart just up the\n"
	.string "street.\p"
	.string "We're even part of the Wohnet Pokémon \n"
	.string "League, with our very own Pokémon Gym!\l"
	.string "It's run by a guy named Landon.$"

NautirustCity_Script_TalkMan1_Text_0:
# 64 "data/maps/NautirustCity/scripts.pory"
	.string "All these buildings used to be \n"
	.string "factories.\p"
	.string "Nowadays, though, most of them have \n"
	.string "been made into apartments.\p"
	.string "Sometimes it feels strange, to live in\n"
	.string "a space that was never built for \l"
	.string "that purpose.$"

NautirustCity_Script_TalkBenchGirl_Text_0:
# 83 "data/maps/NautirustCity/scripts.pory"
	.string "The canals are so nice now that the\n"
	.string "city's cleaned them up!\p"
	.string "I used to hate living here, but now I \n"
	.string "can't imagine being anywhere else!$"

NautirustCity_Script_TalkExpShareStore_Text_0:
# 99 "data/maps/NautirustCity/scripts.pory"
	.string "Hi there!\p"
	.string "My days as a Pokémon trainer are \n"
	.string "behind me, so I'm selling my old gear.\p"
	.string "I have an Exp. All here.\n"
	.string "Want to buy it?$"

NautirustCity_Script_TalkExpShareStore_Text_1:
# 110 "data/maps/NautirustCity/scripts.pory"
	.string "EXP. ALL{CLEAR_TO 0x49}{FONT_SMALL}¥5,000$"

NautirustCity_Script_TalkExpShareStore_Text_2:
# 110 "data/maps/NautirustCity/scripts.pory"
	.string "No thanks$"

NautirustCity_Script_TalkExpShareStore_Text_3:
# 116 "data/maps/NautirustCity/scripts.pory"
	.string "Here you go!$"

NautirustCity_Script_TalkExpShareStore_Text_4:
# 124 "data/maps/NautirustCity/scripts.pory"
	.string "Turn the Exp. All on?$"

NautirustCity_Script_TalkExpShareStore_Text_5:
# 130 "data/maps/NautirustCity/scripts.pory"
	.string "You turned on the Exp. All.$"

NautirustCity_Script_TalkExpShareStore_Text_6:
# 136 "data/maps/NautirustCity/scripts.pory"
	.string "Thank you!$"

NautirustCity_Script_TalkExpShareStore_Text_7:
# 144 "data/maps/NautirustCity/scripts.pory"
	.string "Sorry!\n"
	.string "You don't have enough money…\p"
	.string "Maybe come back later?$"

NautirustCity_Script_TalkExpShareStore_Text_8:
# 155 "data/maps/NautirustCity/scripts.pory"
	.string "Thanks for stopping by!$"

NautirustCity_Script_TalkExpShareStore_Text_9:
# 164 "data/maps/NautirustCity/scripts.pory"
	.string "I'm all out of stock, but I still have a\n"
	.string "lease for this stand.\p"
	.string "Maybe I could sell other things?$"
