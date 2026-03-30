HawthornLabs_MapScripts::
# 2 "data/maps/HawthornLabs/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HawthornLabs_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

HawthornLabs_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/HawthornLabs/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
	return


HawthornLabs_Sign::
# 8 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Sign_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Talk_Scientist::
# 20 "data/maps/HawthornLabs/scripts.pory"
	lock
# 21 "data/maps/HawthornLabs/scripts.pory"
	faceplayer
# 22 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Talk_Scientist_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/HawthornLabs/scripts.pory"
	release
	return


HawthornLabs_Intro_MeetRival::
# 37 "data/maps/HawthornLabs/scripts.pory"
	lockall
# 38 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 39 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_SOUTH
# 40 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_MeetRival_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 47 "data/maps/HawthornLabs/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 48 "data/maps/HawthornLabs/scripts.pory"
	switch VAR_0x8008
# 49 "data/maps/HawthornLabs/scripts.pory"
	case 10, HawthornLabs_Intro_MeetRival_3
# 55 "data/maps/HawthornLabs/scripts.pory"
	case 11, HawthornLabs_Intro_MeetRival_4
# 61 "data/maps/HawthornLabs/scripts.pory"
	case 12, HawthornLabs_Intro_MeetRival_5
HawthornLabs_Intro_MeetRival_1:
# 69 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_RIVAL, HawthornLabs_Intro_MeetRival_Movement_3
# 76 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 78 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_MeetRival_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 93 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 94 "data/maps/HawthornLabs/scripts.pory"
	opendoor 10, 8
# 95 "data/maps/HawthornLabs/scripts.pory"
	waitdooranim
# 96 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_RIVAL, HawthornLabs_Intro_MeetRival_Movement_4
# 100 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_5
# 104 "data/maps/HawthornLabs/scripts.pory"
	closedoor 10, 8
# 105 "data/maps/HawthornLabs/scripts.pory"
	waitdooranim
# 106 "data/maps/HawthornLabs/scripts.pory"
	playse SE_EXIT
# 107 "data/maps/HawthornLabs/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 0
# 108 "data/maps/HawthornLabs/scripts.pory"
	waitstate
# 109 "data/maps/HawthornLabs/scripts.pory"
	releaseall
	return

HawthornLabs_Intro_MeetRival_3:
# 50 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_0
	goto HawthornLabs_Intro_MeetRival_1

HawthornLabs_Intro_MeetRival_4:
# 56 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_1
	goto HawthornLabs_Intro_MeetRival_1

HawthornLabs_Intro_MeetRival_5:
# 62 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_2
	goto HawthornLabs_Intro_MeetRival_1


HawthornLabs_Intro_BattleRival::
# 113 "data/maps/HawthornLabs/scripts.pory"
	lockall
# 115 "data/maps/HawthornLabs/scripts.pory"
	fadeoutbgm 1
# 116 "data/maps/HawthornLabs/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 117 "data/maps/HawthornLabs/scripts.pory"
	switch VAR_0x8008
# 118 "data/maps/HawthornLabs/scripts.pory"
	case 10, HawthornLabs_Intro_BattleRival_3
# 123 "data/maps/HawthornLabs/scripts.pory"
	case 11, HawthornLabs_Intro_BattleRival_4
# 127 "data/maps/HawthornLabs/scripts.pory"
	case 12, HawthornLabs_Intro_BattleRival_5
HawthornLabs_Intro_BattleRival_1:
# 133 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 134 "data/maps/HawthornLabs/scripts.pory"
	delay 60
# 135 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_0, MSGBOX_DEFAULT
# 147 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 148 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 149 "data/maps/HawthornLabs/scripts.pory"
	delay 30
# 150 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_1, MSGBOX_DEFAULT
# 155 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 156 "data/maps/HawthornLabs/scripts.pory"
	delay 60
# 157 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 158 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_2, MSGBOX_DEFAULT
# 167 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_RIVAL, HawthornLabs_Intro_BattleRival_Movement_3
# 170 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 171 "data/maps/HawthornLabs/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 172 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_3, MSGBOX_DEFAULT
# 180 "data/maps/HawthornLabs/scripts.pory"
	switch VAR_STARTER_MON
# 181 "data/maps/HawthornLabs/scripts.pory"
	case 0, HawthornLabs_Intro_BattleRival_8
# 183 "data/maps/HawthornLabs/scripts.pory"
	case 1, HawthornLabs_Intro_BattleRival_9
# 185 "data/maps/HawthornLabs/scripts.pory"
	case 2, HawthornLabs_Intro_BattleRival_10
HawthornLabs_Intro_BattleRival_6:
# 190 "data/maps/HawthornLabs/scripts.pory"
	special HealPlayerParty
# 191 "data/maps/HawthornLabs/scripts.pory"
	fadedefaultbgm
# 193 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_4, MSGBOX_DEFAULT
# 214 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 216 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_RIVAL, HawthornLabs_Intro_BattleRival_Movement_4
# 221 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 222 "data/maps/HawthornLabs/scripts.pory"
	removeobject LOCALID_RIVAL
# 223 "data/maps/HawthornLabs/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 47, 0
# 225 "data/maps/HawthornLabs/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 5
# 227 "data/maps/HawthornLabs/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 6, 6
# 228 "data/maps/HawthornLabs/scripts.pory"
	waitstate
# 230 "data/maps/HawthornLabs/scripts.pory"
	releaseall
	return

HawthornLabs_Intro_BattleRival_3:
# 119 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_BattleRival_Movement_0
	goto HawthornLabs_Intro_BattleRival_1

HawthornLabs_Intro_BattleRival_4:
# 124 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_BattleRival_Movement_1
	goto HawthornLabs_Intro_BattleRival_1

HawthornLabs_Intro_BattleRival_5:
# 128 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_BattleRival_Movement_2
	goto HawthornLabs_Intro_BattleRival_1

HawthornLabs_Intro_BattleRival_8:
# 182 "data/maps/HawthornLabs/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_INTRO_FIRE, 0, HawthornLabs_Intro_BattleRival_PlayerWin, HawthornLabs_Intro_BattleRival_PlayerLose
	goto HawthornLabs_Intro_BattleRival_6

HawthornLabs_Intro_BattleRival_9:
# 184 "data/maps/HawthornLabs/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_INTRO_WATER, 0, HawthornLabs_Intro_BattleRival_PlayerWin, HawthornLabs_Intro_BattleRival_PlayerLose
	goto HawthornLabs_Intro_BattleRival_6

HawthornLabs_Intro_BattleRival_10:
# 186 "data/maps/HawthornLabs/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_INTRO_GRASS, 0, HawthornLabs_Intro_BattleRival_PlayerWin, HawthornLabs_Intro_BattleRival_PlayerLose
	goto HawthornLabs_Intro_BattleRival_6


# 50 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_0:
# 51 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 51 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 51 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 51 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 51 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 52 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 53 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 53 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 53 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 53 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_1:
# 57 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 57 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 57 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 57 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 57 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 57 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 58 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 59 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 59 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 59 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_2:
# 63 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 64 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 64 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 64 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 64 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 64 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 64 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 65 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 66 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 66 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 66 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_3:
# 70 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 70 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 70 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 70 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 70 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 71 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 72 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 72 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 72 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 72 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 73 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 74 "data/maps/HawthornLabs/scripts.pory"
	face_down
	step_end

# 96 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_4:
# 97 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 98 "data/maps/HawthornLabs/scripts.pory"
	set_invisible
	step_end

# 100 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_5:
# 101 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 101 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 102 "data/maps/HawthornLabs/scripts.pory"
	set_invisible
	step_end

# 119 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_0:
# 120 "data/maps/HawthornLabs/scripts.pory"
	walk_right
# 121 "data/maps/HawthornLabs/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_1:
# 125 "data/maps/HawthornLabs/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_2:
# 129 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 130 "data/maps/HawthornLabs/scripts.pory"
	walk_down
	step_end

# 167 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_3:
# 168 "data/maps/HawthornLabs/scripts.pory"
	jump_in_place_up
# 168 "data/maps/HawthornLabs/scripts.pory"
	jump_in_place_up
	step_end

# 216 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_4:
# 217 "data/maps/HawthornLabs/scripts.pory"
	walk_down
# 217 "data/maps/HawthornLabs/scripts.pory"
	walk_down
# 218 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 218 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 219 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 219 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 219 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 219 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 219 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 219 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
	step_end

HawthornLabs_Sign_Text_0:
# 9 "data/maps/HawthornLabs/scripts.pory"
	.string "HAWTHORN LABS\p"
	.string "Someone has added to the sign, in\n"
	.string "big red letters:\p"
	.string "“{COLOR RED}NO SOLICITORS{COLOR DARK_GRAY}”$"

HawthornLabs_Talk_Scientist_Text_0:
# 23 "data/maps/HawthornLabs/scripts.pory"
	.string "Professor Hawthorn's research is\n"
	.string "focused on Pokémon types.\p"
	.string "The Professor has some very\n"
	.string "interesting theories regarding them.\p"
	.string "…I think. She hasn't actually told me\n"
	.string "what we're working on.$"

HawthornLabs_Intro_MeetRival_Text_0:
# 41 "data/maps/HawthornLabs/scripts.pory"
	.string "MAYA: There you are!\n"
	.string "The lab is just up ahead!$"

HawthornLabs_Intro_MeetRival_Text_1:
# 79 "data/maps/HawthornLabs/scripts.pory"
	.string "MAYA: I heard that Professor Hawthorn\n"
	.string "can bea bit… {PAUSE 30}prickly?\p"
	.string "My dad met her once, I think.\p"
	.string "…But I'm sure once we explain the\n"
	.string "situation, it'll be all good.\p"
	.string "Alright, {PLAYER}! No hesitating!\n"
	.string "Let's go!$"

HawthornLabs_Intro_BattleRival_Text_0:
# 136 "data/maps/HawthornLabs/scripts.pory"
	.string "MAYA: …So, that's what Professor\n"
	.string "Hawthorn is like.\p"
	.string "I can see why she has the reputation\n"
	.string "that she does.\p"
	.string "But she was willing to help. I feel like\n"
	.string "we actually have a chance of finding\l"
	.string "these Pokémons' trainer, now.$"

HawthornLabs_Intro_BattleRival_Text_1:
# 151 "data/maps/HawthornLabs/scripts.pory"
	.string "And in the meantime, we'll keep these\n"
	.string "ones with us…$"

HawthornLabs_Intro_BattleRival_Text_2:
# 159 "data/maps/HawthornLabs/scripts.pory"
	.string "…{PLAYER}.\p"
	.string "I guess this makes us trainers now,\n"
	.string "huh?\p"
	.string "…You know what that means, right?$"

HawthornLabs_Intro_BattleRival_Text_3:
# 173 "data/maps/HawthornLabs/scripts.pory"
	.string "I can sense these Pokémons' energy!\n"
	.string "They're raring for some action!\l"
	.string "{PLAYER}! Let's duke it out!\l"
	.string "I challenge you to a Pokémon battle!$"

HawthornLabs_Intro_BattleRival_Text_4:
# 194 "data/maps/HawthornLabs/scripts.pory"
	.string "MAYA: Wow!\p"
	.string "Even with such small Pokémon,\n"
	.string "that was exhilirating!\p"
	.string "I think I get why people go nuts\n"
	.string "for Pokémon battles now.\p"
	.string "Okay, {PLAYER}!\n"
	.string "We've had our fun, but now we have a\l"
	.string "mission!\p"
	.string "Let's go home for now. We should get\n"
	.string "some rest, and get ready.\p"
	.string "And I need to tell my family…\p"
	.string "I'll see you back in town, okay?$"

HawthornLabs_Intro_BattleRival_PlayerWin::
# 233 "data/maps/HawthornLabs/scripts.pory"
	.string "Your Pokémon is so strong!$"

HawthornLabs_Intro_BattleRival_PlayerLose::
# 236 "data/maps/HawthornLabs/scripts.pory"
	.string "Woo! This Pokémon is strong!$"
