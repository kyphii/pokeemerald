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


MarinacreTown_PlayerHouse_1F_TalkPurrloin::
# 18 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playmoncry SPECIES_PURRLOIN, 0
	return


HomeTown_PlayerHouse_TalkMom::
# 22 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lock
# 23 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 24 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	switch VAR_INTRO_SEQUENCE_STATE
# 25 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	case 1, HomeTown_PlayerHouse_TalkMom_2
# 36 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	case 3, HomeTown_PlayerHouse_TalkMom_3
# 79 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	case 6, HomeTown_PlayerHouse_TalkMom_4
	return

HomeTown_PlayerHouse_TalkMom_2:
# 26 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 35 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return

HomeTown_PlayerHouse_TalkMom_3:
# 37 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	goto_if_unset FLAG_MOM_ENABLE_HEAL, HomeTown_PlayerHouse_TalkMom_5
# 59 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_2, MSGBOX_DEFAULT
# 66 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 67 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 68 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_3, MSGBOX_DEFAULT
# 76 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 77 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return

HomeTown_PlayerHouse_TalkMom_4:
# 80 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_4, MSGBOX_DEFAULT
# 87 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 88 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 89 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_5, MSGBOX_DEFAULT
# 96 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 97 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return

HomeTown_PlayerHouse_TalkMom_5:
# 38 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_TalkMom_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 55 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_MOM_ENABLE_HEAL
# 56 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	release
	return


HomeTown_PlayerHouse_Intro_MeetMomScene::
# 102 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 103 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playse SE_EXIT
# 105 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 9
# 106 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	addobject LOCALID_MOM
# 107 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceUp
# 108 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 111 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_MeetMomScene_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 117 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 118 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	compare VAR_0x8009, 7
	goto_if_eq HomeTown_PlayerHouse_Intro_MeetMomScene_2
HomeTown_PlayerHouse_Intro_MeetMomScene_1:
# 124 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_1
# 128 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_2
# 131 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 133 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_MeetMomScene_Text_1, MSGBOX_DEFAULT
# 142 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	delay 30
# 143 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_SOUTH
# 144 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 145 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 146 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 147 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	delay 60
# 148 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 150 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_MeetMomScene_Text_2, MSGBOX_DEFAULT
# 163 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 165 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_3
# 170 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 171 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 6
# 173 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 1
# 174 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return

HomeTown_PlayerHouse_Intro_MeetMomScene_2:
# 119 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_0
# 122 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
	goto HomeTown_PlayerHouse_Intro_MeetMomScene_1


HomeTown_PlayerHouse_Intro_ReturnHomeScene::
# 178 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 179 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_PlayerHouse_Intro_ReturnHomeScene_Movement_0
# 183 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 185 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_ReturnHomeScene_Text_0, MSGBOX_DEFAULT
# 206 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 208 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 6
# 210 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 212 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	warp MAP_MARINACRE_TOWN_PLAYER_HOUSE_2F, 12, 2
# 213 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 214 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 216 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


HomeTown_PlayerHouse_Intro_LeaveHomeScene::
# 220 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HomeTown_PlayerHouse_Intro_LeaveHomeScene_Movement_0
# 225 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 226 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	lockall
# 227 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	turnobject LOCALID_MOM, DIR_EAST
# 228 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_0, MSGBOX_DEFAULT
# 241 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 242 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 244 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_1, MSGBOX_DEFAULT
# 248 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 249 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 250 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	message HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_2
# 251 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitmessage
# 252 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 254 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	msgbox HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_3, MSGBOX_DEFAULT
# 269 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 271 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	special SetUnlockedPokedexFlags
# 272 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 273 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_INTRO_MET_MOM
# 274 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 275 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 276 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_MOM_ENABLE_HEAL
# 277 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 278 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 7
# 280 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	resumertc
# 281 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


# 119 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_0:
# 120 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
	step_end

# 124 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_1:
# 125 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 126 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	face_right
	step_end

# 128 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_2:
# 129 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 129 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 129 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
	step_end

# 165 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_MeetMomScene_Movement_3:
# 166 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 167 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 168 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 179 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_ReturnHomeScene_Movement_0:
# 180 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 180 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 180 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 181 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	face_left
	step_end

# 220 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
HomeTown_PlayerHouse_Intro_LeaveHomeScene_Movement_0:
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 222 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 223 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	walk_left
	step_end

HomeTown_PlayerHouse_TalkMom_Text_0:
# 27 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Maya said she'd be down\n"
	.string "by the beach.\p"
	.string "You know what she's like. Better not\n"
	.string "keep her waiting!$"

HomeTown_PlayerHouse_TalkMom_Text_1:
# 39 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
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
# 60 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Oh? Does that Pokémon need\n"
	.string "a rest, {PLAYER}?\p"
	.string "Go ahead, take a break for a bit.$"

HomeTown_PlayerHouse_TalkMom_Text_3:
# 69 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: There! Your Pokémon looks all\n"
	.string "ready to go!\p"
	.string "Go ahead, {PLAYER}! Take that Pokémon\n"
	.string "right to Professor Hawthorn's Lab!$"

HomeTown_PlayerHouse_TalkMom_Text_4:
# 81 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Hi, {PLAYER}!\n"
	.string "Do you and your Pokémon need a break?\p"
	.string "Here, stay and rest a while.$"

HomeTown_PlayerHouse_TalkMom_Text_5:
# 90 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: There! All freshened up and ready\n"
	.string "to go!\p"
	.string "Good luck out there, {PLAYER}!$"

HomeTown_PlayerHouse_Intro_MeetMomScene_Text_0:
# 112 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}! I'm home!$"

HomeTown_PlayerHouse_Intro_MeetMomScene_Text_1:
# 134 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Did you have a good afternoon?\p"
	.string "…You look like you just got out of bed!\n"
	.string "Did you take a nap?\l"
	.string "…You're not sick, are you?$"

HomeTown_PlayerHouse_Intro_MeetMomScene_Text_2:
# 151 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "Oh! I ran into your friend Maya on\n"
	.string "the way home.\p"
	.string "I think she was looking for you. She\n"
	.string "said she'd be at the beach, on the\l"
	.string "south side of town.\p"
	.string "It's going to be a few hours before\n"
	.string "I have dinner ready. Why don't you go\l"
	.string "see what she wants?$"

HomeTown_PlayerHouse_Intro_ReturnHomeScene_Text_0:
# 186 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
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
# 229 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: There you are!\p"
	.string "Are you all ready to go\n"
	.string "travelling with Maya?\p"
	.string "Great!\p"
	.string "Hey, I have a surprise for you!\n"
	.string "Close your eyes, and hold out your\l"
	.string "hands…$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_1:
# 245 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "Don't move! Take this, too!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_2:
# 250 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} received a Pokédex from Mom!$"

HomeTown_PlayerHouse_Intro_LeaveHomeScene_Text_3:
# 255 "data/maps/MarinacreTown_PlayerHouse_1F/scripts.pory"
	.string "I got that for you at the Poké\n"
	.string "Mart as soon as it opened!\p"
	.string "Ah… to be so young and ready for\n"
	.string "adventure…\p"
	.string "You and Maya go and have a great time!\p"
	.string "-Oh, and if you ever need a rest, come\n"
	.string "home anytime!\p"
	.string "Good luck out there, {PLAYER}!$"
