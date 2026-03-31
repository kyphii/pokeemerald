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
	delay 30
# 139 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_SOUTH
# 140 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 141 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 142 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 143 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	delay 60
# 144 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 146 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_MeetMomScene_Text_2, MSGBOX_DEFAULT
# 159 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 161 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_3
# 166 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 167 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 6
# 169 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 1
# 170 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return

HomeTown_PlayerHouse_Intro_MeetMomScene_2:
# 115 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_0
# 118 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
	goto HomeTown_PlayerHouse_Intro_MeetMomScene_1


HomeTown_PlayerHouse_Intro_ReturnHomeScene::
# 174 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 175 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_PlayerHouse_Intro_ReturnHomeScene_Movement_0
# 179 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 180 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 181 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_ReturnHomeScene_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 204 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 6
# 206 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 207 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 208 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	warp MAP_MARINACRE_TOWN_PLAYER_HOUSE_2F, 12, 2
# 209 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 210 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 212 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


HomeTown_PlayerHouse_Intro_LeaveHomeScene::
# 216 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_PlayerHouse_Intro_LeaveHomeScene_Movement_0
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 222 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 223 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 224 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_0, MSGBOX_DEFAULT
# 237 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 238 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 240 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_1, MSGBOX_DEFAULT
# 244 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 245 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	message HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_2
# 247 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmessage
# 248 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 250 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_3, MSGBOX_DEFAULT
# 265 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 267 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	special SetUnlockedPokedexFlags
# 268 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 269 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_INTRO_MET_MOM
# 270 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 271 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 272 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_MOM_ENABLE_HEAL
# 273 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 274 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 7
# 275 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
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

# 161 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_3:
# 162 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 163 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 164 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 175 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_ReturnHomeScene_Movement_0:
# 176 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 176 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 176 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 177 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	face_left
	step_end

# 216 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_LeaveHomeScene_Movement_0:
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 217 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 218 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 219 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
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
# 147 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "Oh! I ran into your friend Maya on\n"
	.string "the way home.\p"
	.string "I think she was looking for you. She\n"
	.string "said she'd be at the beach, on the\l"
	.string "south side of town.\p"
	.string "It's going to be a few hours before\n"
	.string "I have dinner ready. Why don't you go\l"
	.string "see what she wants?$"

HomeTown_PlayerHouse_Intro_ReturnHomeScene_Text_0:
# 182 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Welcome back, {PLAYER}!\n"
	.string "What happened out there?\p"
	.string "…{PAUSE 30}…{PAUSE 30}…\p"
	.string "Oh, wow. What a story!\p"
	.string "Returning those lost Pokémon to\n"
	.string "their trainer…\l"
	.string "That sounds like quite the adventure!\p"
	.string "-Oh, but you must be hungry, aren't\n"
	.string "you? And it's getting late!\p"
	.string "Come on, dinner is almost ready!\p"
	.string "Let's eat, and rest up! You can set out\n"
	.string "on your mission first thing tomorrow!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_0:
# 225 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: There you are!\p"
	.string "Are you all ready to go\n"
	.string "travelling with Maya?\p"
	.string "Great!\p"
	.string "Hey, I have a surprise for you!\n"
	.string "Close your eyes, and hold out your\l"
	.string "hands…$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_1:
# 241 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "Don't move! Take this, too!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_2:
# 246 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} received a Pokédex from Mom!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_3:
# 251 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "I got that for you at the Poké\n"
	.string "Mart as soon as it opened!\p"
	.string "Ah… to be so young and ready for\n"
	.string "adventure…\p"
	.string "You and Maya go and have a great time!\p"
	.string "-Oh, and if you ever need a rest, come\n"
	.string "home anytime!\p"
	.string "Good luck out there, {PLAYER}!$"
