MarinacreTown_PlayerHouse_1F_MapScripts::
# 2 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	compare VAR_INTRO_SEQUENCE_STATE, 0
	goto_if_eq MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 32, 32
	return

MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_INTRO_SEQUENCE_STATE, 5, MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 11 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_INTRO_SEQUENCE_STATE, 6, MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 9 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	goto HomeTown_PlayerHouse_Intro_ReturnHomeScene
	return

MarinacreTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 12 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	goto HomeTown_PlayerHouse_Intro_LeaveHomeScene
	return


HomeTown_PlayerHouse_TalkMom::
# 18 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lock
# 19 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 20 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	switch VAR_INTRO_SEQUENCE_STATE
# 21 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	case 1, HomeTown_PlayerHouse_TalkMom_2
# 32 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	case 3, HomeTown_PlayerHouse_TalkMom_3
# 75 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	case 6, HomeTown_PlayerHouse_TalkMom_4
	return

HomeTown_PlayerHouse_TalkMom_2:
# 22 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 31 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return

HomeTown_PlayerHouse_TalkMom_3:
# 33 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	goto_if_unset FLAG_MOM_ENABLE_HEAL, HomeTown_PlayerHouse_TalkMom_5
# 55 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_2, MSGBOX_DEFAULT
# 62 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 63 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 64 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_3, MSGBOX_DEFAULT
# 72 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 73 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return

HomeTown_PlayerHouse_TalkMom_4:
# 76 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_4, MSGBOX_DEFAULT
# 83 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 84 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 85 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_5, MSGBOX_DEFAULT
# 92 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 93 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return

HomeTown_PlayerHouse_TalkMom_5:
# 34 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 51 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_MOM_ENABLE_HEAL
# 52 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return


HomeTown_PlayerHouse_Intro_MeetMomScene::
# 98 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 99 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playse SE_EXIT
# 101 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 9
# 102 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	addobject LOCALID_MOM
# 103 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceUp
# 104 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 107 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_MeetMomScene_Text_0, MSGBOX_DEFAULT
# 111 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 113 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 114 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	compare VAR_0x8009, 7
	goto_if_eq HomeTown_PlayerHouse_Intro_MeetMomScene_2
HomeTown_PlayerHouse_Intro_MeetMomScene_1:
# 120 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_1
# 124 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_2
# 127 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 129 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_MeetMomScene_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_SOUTH
# 139 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 140 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 141 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 142 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 144 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_MeetMomScene_Text_2, MSGBOX_DEFAULT
# 157 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 159 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_3
# 164 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 165 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 6
# 167 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 1
# 168 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return

HomeTown_PlayerHouse_Intro_MeetMomScene_2:
# 115 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_0
# 118 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
	goto HomeTown_PlayerHouse_Intro_MeetMomScene_1


HomeTown_PlayerHouse_Intro_ReturnHomeScene::
# 172 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 173 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 174 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 175 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_ReturnHomeScene_Text_0, MSGBOX_DEFAULT
# 191 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 193 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 6
# 195 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	warp MAP_MARINACRE_TOWN_PLAYER_HOUSE_2F, 12, 2
# 196 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 198 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


HomeTown_PlayerHouse_Intro_LeaveHomeScene::
# 202 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 203 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 204 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_PlayerHouse_Intro_LeaveHomeScene_Movement_0
# 209 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_0, MSGBOX_DEFAULT
# 224 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 225 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 227 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_1, MSGBOX_DEFAULT
# 231 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 232 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 233 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	message HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_2
# 234 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmessage
# 235 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 237 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_3, MSGBOX_DEFAULT
# 252 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 254 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	special SetUnlockedPokedexFlags
# 255 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 256 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_INTRO_MET_MOM
# 257 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 258 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 259 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_MOM_ENABLE_HEAL
# 260 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 261 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 7
# 262 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


# 115 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_0:
# 116 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
	step_end

# 120 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_1:
# 121 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 122 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	face_right
	step_end

# 124 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_2:
# 125 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 125 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 125 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
	step_end

# 159 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_3:
# 160 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 161 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 162 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 204 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_LeaveHomeScene_Movement_0:
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 206 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 207 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
	step_end

HomeTown_PlayerHouse_TalkMom_Text_0:
# 23 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Maya said she'd be down\n"
	.string "by the beach.\p"
	.string "You know what she's like. Better not\n"
	.string "keep her waiting!$"

HomeTown_PlayerHouse_TalkMom_Text_1:
# 35 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Huh? {PLAYER}, is something\n"
	.string "the matter?\p"
	.string "...\p"
	.string "Wow. That's quite something, isn't\n"
	.string "it?\p"
	.string "Well, it sounds like you have a job to do\n"
	.string "today!\p"
	.string "Go take those Pokémon right to\n"
	.string "Professor Hawthorn's Lab!$"

HomeTown_PlayerHouse_TalkMom_Text_2:
# 56 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Oh? Does that Pokémon need\n"
	.string "a rest, {PLAYER}?\p"
	.string "Go ahead, take a break for a bit.$"

HomeTown_PlayerHouse_TalkMom_Text_3:
# 65 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: There! Your Pokémon looks all\n"
	.string "ready to go!\p"
	.string "Go ahead, {PLAYER}! Take that Pokémon\n"
	.string "right to Professor Hawthorn's Lab!$"

HomeTown_PlayerHouse_TalkMom_Text_4:
# 77 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Hi, {PLAYER}!\n"
	.string "Do you and your Pokémon need a break?\p"
	.string "Here, stay and rest a while.$"

HomeTown_PlayerHouse_TalkMom_Text_5:
# 86 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: There! All freshened up and ready\n"
	.string "to go!\p"
	.string "Good luck out there, {PLAYER}!$"

HomeTown_PlayerHouse_Intro_MeetMomScene_Text_0:
# 108 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}! I'm home!$"

HomeTown_PlayerHouse_Intro_MeetMomScene_Text_1:
# 130 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Did you have a good afternoon?\p"
	.string "…You look like you just got out of bed!\n"
	.string "Did you take a nap?\l"
	.string "…You're not sick, are you?$"

HomeTown_PlayerHouse_Intro_MeetMomScene_Text_2:
# 145 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "Oh! I ran into your friend Maya on\n"
	.string "the way home.\p"
	.string "I think she was looking for you. She\n"
	.string "said she'd be at the beach, on the\l"
	.string "south side of town.\p"
	.string "It's going to be a few hours before\n"
	.string "I have dinner ready. Why don't you go\l"
	.string "see what she wants?$"

HomeTown_PlayerHouse_Intro_ReturnHomeScene_Text_0:
# 176 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Oh, wow. What a story!\p"
	.string "Returning those lost Pokémon to\n"
	.string "their trainer…\l"
	.string "That sounds like quite the adventure!\p"
	.string "-Oh, but you must be hungry, aren't\n"
	.string "you? And it's getting late!\p"
	.string "Come on, dinner is almost ready!\p"
	.string "Let's eat, and rest up! You can set out\n"
	.string "on your mission first thing tomorrow!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_0:
# 212 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: There you are!\p"
	.string "Are you all ready to go\n"
	.string "travelling with Maya?\p"
	.string "Great!\p"
	.string "Hey, I have a surprise for you!\n"
	.string "Close your eyes, and hold out your\l"
	.string "hands…$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_1:
# 228 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "Don't move! Take this, too!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_2:
# 233 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} received a Pokédex from Mom!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_3:
# 238 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "I got that for you at the Poké\n"
	.string "Mart as soon as it opened!\p"
	.string "Ah… to be so young and ready for\n"
	.string "adventure…\p"
	.string "You and Maya go and have a great time!\p"
	.string "-Oh, and if you ever need a rest, come\n"
	.string "home anytime!\p"
	.string "Good luck out there, {PLAYER}!$"
