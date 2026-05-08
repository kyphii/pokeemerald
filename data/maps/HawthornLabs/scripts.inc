HawthornLabs_MapScripts::
# 2 "data/maps/HawthornLabs/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HawthornLabs_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

HawthornLabs_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/HawthornLabs/scripts.pory"
	setflag FLAG_VISITED_HAWTHORN_LABS
# 5 "data/maps/HawthornLabs/scripts.pory"
	compare VAR_INTRO_SEQUENCE_STATE, 4
	goto_if_eq HawthornLabs_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

HawthornLabs_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/HawthornLabs/scripts.pory"
	clearflag FLAG_INTRO_MET_MOM
# 8 "data/maps/HawthornLabs/scripts.pory"
	addobject LOCALID_LABEXT_RIVAL
	return


HawthornLabs_Sign::
# 14 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Sign_Text_0, MSGBOX_SIGN
	return


HawthornLabs_Talk_Scientist::
# 26 "data/maps/HawthornLabs/scripts.pory"
	lock
# 27 "data/maps/HawthornLabs/scripts.pory"
	faceplayer
# 28 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Talk_Scientist_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/HawthornLabs/scripts.pory"
	release
	return


HawthornLabs_Talk_Receptionist::
# 43 "data/maps/HawthornLabs/scripts.pory"
	lock
# 44 "data/maps/HawthornLabs/scripts.pory"
	faceplayer
# 45 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Talk_Receptionist_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/HawthornLabs/scripts.pory"
	release
	return


HawthornLabs_Intro_MeetRival::
# 58 "data/maps/HawthornLabs/scripts.pory"
	lockall
# 59 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 60 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_LABEXT_RIVAL, HawthornLabs_Intro_MeetRival_Movement_0
# 64 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_MeetRival_Text_0, MSGBOX_DEFAULT
# 69 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 70 "data/maps/HawthornLabs/scripts.pory"
	delay 30
# 72 "data/maps/HawthornLabs/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 73 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_LABEXT_RIVAL, HawthornLabs_Intro_MeetRival_Movement_1
# 80 "data/maps/HawthornLabs/scripts.pory"
	delay 10
# 81 "data/maps/HawthornLabs/scripts.pory"
	switch VAR_0x8008
# 82 "data/maps/HawthornLabs/scripts.pory"
	case 10, HawthornLabs_Intro_MeetRival_3
# 88 "data/maps/HawthornLabs/scripts.pory"
	case 11, HawthornLabs_Intro_MeetRival_4
# 94 "data/maps/HawthornLabs/scripts.pory"
	case 12, HawthornLabs_Intro_MeetRival_5
HawthornLabs_Intro_MeetRival_1:
# 102 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 103 "data/maps/HawthornLabs/scripts.pory"
	delay 30
# 105 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_MeetRival_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 119 "data/maps/HawthornLabs/scripts.pory"
	delay 10
# 120 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_LABEXT_RIVAL, DIR_NORTH
# 121 "data/maps/HawthornLabs/scripts.pory"
	opendoor 10, 8
# 122 "data/maps/HawthornLabs/scripts.pory"
	waitdooranim
# 123 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_LABEXT_RIVAL, HawthornLabs_Intro_MeetRival_Movement_5
# 126 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 127 "data/maps/HawthornLabs/scripts.pory"
	removeobject LOCALID_LABEXT_RIVAL
# 129 "data/maps/HawthornLabs/scripts.pory"
	clearflag FLAG_INTRO_MET_MOM
# 131 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_6
# 134 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 135 "data/maps/HawthornLabs/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 136 "data/maps/HawthornLabs/scripts.pory"
	closedoor 10, 8
# 137 "data/maps/HawthornLabs/scripts.pory"
	waitdooranim
# 138 "data/maps/HawthornLabs/scripts.pory"
	playse SE_EXIT
# 139 "data/maps/HawthornLabs/scripts.pory"
	warp MAP_HAWTHORN_LABS_INTERIOR, 0
# 140 "data/maps/HawthornLabs/scripts.pory"
	waitstate
# 141 "data/maps/HawthornLabs/scripts.pory"
	releaseall
	return

HawthornLabs_Intro_MeetRival_3:
# 83 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_2
	goto HawthornLabs_Intro_MeetRival_1

HawthornLabs_Intro_MeetRival_4:
# 89 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_3
	goto HawthornLabs_Intro_MeetRival_1

HawthornLabs_Intro_MeetRival_5:
# 95 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_MeetRival_Movement_4
	goto HawthornLabs_Intro_MeetRival_1


HawthornLabs_Intro_BattleRival::
# 145 "data/maps/HawthornLabs/scripts.pory"
	lockall
# 147 "data/maps/HawthornLabs/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 148 "data/maps/HawthornLabs/scripts.pory"
	switch VAR_0x8008
# 149 "data/maps/HawthornLabs/scripts.pory"
	case 10, HawthornLabs_Intro_BattleRival_3
# 154 "data/maps/HawthornLabs/scripts.pory"
	case 11, HawthornLabs_Intro_BattleRival_4
# 158 "data/maps/HawthornLabs/scripts.pory"
	case 12, HawthornLabs_Intro_BattleRival_5
HawthornLabs_Intro_BattleRival_1:
# 164 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 165 "data/maps/HawthornLabs/scripts.pory"
	delay 30
# 166 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_0, MSGBOX_DEFAULT
# 178 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 179 "data/maps/HawthornLabs/scripts.pory"
	fadeoutbgm 1
# 180 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_LABEXT_RIVAL, DIR_EAST
# 181 "data/maps/HawthornLabs/scripts.pory"
	delay 30
# 182 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_1, MSGBOX_DEFAULT
# 187 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 188 "data/maps/HawthornLabs/scripts.pory"
	delay 60
# 189 "data/maps/HawthornLabs/scripts.pory"
	turnobject LOCALID_LABEXT_RIVAL, DIR_NORTH
# 190 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_2, MSGBOX_DEFAULT
# 199 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_LABEXT_RIVAL, HawthornLabs_Intro_BattleRival_Movement_3
# 202 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 203 "data/maps/HawthornLabs/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 204 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_3, MSGBOX_DEFAULT
# 215 "data/maps/HawthornLabs/scripts.pory"
	switch VAR_STARTER_MON
# 216 "data/maps/HawthornLabs/scripts.pory"
	case 0, HawthornLabs_Intro_BattleRival_8
# 218 "data/maps/HawthornLabs/scripts.pory"
	case 1, HawthornLabs_Intro_BattleRival_9
# 220 "data/maps/HawthornLabs/scripts.pory"
	case 2, HawthornLabs_Intro_BattleRival_10
HawthornLabs_Intro_BattleRival_6:
# 225 "data/maps/HawthornLabs/scripts.pory"
	fadedefaultbgm
# 227 "data/maps/HawthornLabs/scripts.pory"
	msgbox HawthornLabs_Intro_BattleRival_Text_4, MSGBOX_DEFAULT
# 248 "data/maps/HawthornLabs/scripts.pory"
	closemessage
# 250 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_LABEXT_RIVAL, HawthornLabs_Intro_BattleRival_Movement_4
# 255 "data/maps/HawthornLabs/scripts.pory"
	waitmovement 0
# 256 "data/maps/HawthornLabs/scripts.pory"
	removeobject LOCALID_LABEXT_RIVAL
# 257 "data/maps/HawthornLabs/scripts.pory"
	setobjectxyperm LOCALID_LABEXT_RIVAL, 47, 0
# 259 "data/maps/HawthornLabs/scripts.pory"
	setvar VAR_INTRO_SEQUENCE_STATE, 5
# 260 "data/maps/HawthornLabs/scripts.pory"
	addplayerlevel 1
# 262 "data/maps/HawthornLabs/scripts.pory"
	warp MAP_MARINACRE_TOWN_PLAYER_HOUSE_1F, 0
# 263 "data/maps/HawthornLabs/scripts.pory"
	waitstate
# 265 "data/maps/HawthornLabs/scripts.pory"
	releaseall
	return

HawthornLabs_Intro_BattleRival_3:
# 150 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_BattleRival_Movement_0
	goto HawthornLabs_Intro_BattleRival_1

HawthornLabs_Intro_BattleRival_4:
# 155 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_BattleRival_Movement_1
	goto HawthornLabs_Intro_BattleRival_1

HawthornLabs_Intro_BattleRival_5:
# 159 "data/maps/HawthornLabs/scripts.pory"
	applymovement LOCALID_PLAYER, HawthornLabs_Intro_BattleRival_Movement_2
	goto HawthornLabs_Intro_BattleRival_1

HawthornLabs_Intro_BattleRival_8:
# 217 "data/maps/HawthornLabs/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_INTRO_FIRE, RIVAL_BATTLE_LOSEABLE, HawthornLabs_Intro_BattleRival_PlayerWin, HawthornLabs_Intro_BattleRival_PlayerLose
	goto HawthornLabs_Intro_BattleRival_6

HawthornLabs_Intro_BattleRival_9:
# 219 "data/maps/HawthornLabs/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_INTRO_WATER, RIVAL_BATTLE_LOSEABLE, HawthornLabs_Intro_BattleRival_PlayerWin, HawthornLabs_Intro_BattleRival_PlayerLose
	goto HawthornLabs_Intro_BattleRival_6

HawthornLabs_Intro_BattleRival_10:
# 221 "data/maps/HawthornLabs/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_INTRO_GRASS, RIVAL_BATTLE_LOSEABLE, HawthornLabs_Intro_BattleRival_PlayerWin, HawthornLabs_Intro_BattleRival_PlayerLose
	goto HawthornLabs_Intro_BattleRival_6


# 60 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_0:
# 61 "data/maps/HawthornLabs/scripts.pory"
	jump_in_place_down
# 62 "data/maps/HawthornLabs/scripts.pory"
	delay_16
	step_end

# 73 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_1:
# 74 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 74 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 74 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 74 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 74 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 75 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 76 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 76 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 76 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 76 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 77 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 78 "data/maps/HawthornLabs/scripts.pory"
	face_down
	step_end

# 83 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_2:
# 84 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 84 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 84 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 84 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 84 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 85 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 86 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 86 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 86 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 86 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_3:
# 90 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 90 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 90 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 90 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 90 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 90 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 91 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 92 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 92 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 92 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 95 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_4:
# 96 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 97 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 97 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 97 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 97 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 97 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 97 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 98 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 99 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 99 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 99 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 123 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_5:
# 124 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 131 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_MeetRival_Movement_6:
# 132 "data/maps/HawthornLabs/scripts.pory"
	walk_up
# 132 "data/maps/HawthornLabs/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_0:
# 151 "data/maps/HawthornLabs/scripts.pory"
	walk_right
# 152 "data/maps/HawthornLabs/scripts.pory"
	walk_down
# 152 "data/maps/HawthornLabs/scripts.pory"
	walk_down
	step_end

# 155 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_1:
# 156 "data/maps/HawthornLabs/scripts.pory"
	walk_down
# 156 "data/maps/HawthornLabs/scripts.pory"
	walk_down
	step_end

# 159 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_2:
# 160 "data/maps/HawthornLabs/scripts.pory"
	walk_left
# 161 "data/maps/HawthornLabs/scripts.pory"
	walk_down
# 161 "data/maps/HawthornLabs/scripts.pory"
	walk_down
	step_end

# 199 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_3:
# 200 "data/maps/HawthornLabs/scripts.pory"
	jump_in_place_up
# 200 "data/maps/HawthornLabs/scripts.pory"
	jump_in_place_up
	step_end

# 250 "data/maps/HawthornLabs/scripts.pory"
HawthornLabs_Intro_BattleRival_Movement_4:
# 251 "data/maps/HawthornLabs/scripts.pory"
	walk_down
# 251 "data/maps/HawthornLabs/scripts.pory"
	walk_down
# 252 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 252 "data/maps/HawthornLabs/scripts.pory"
	delay_16
# 253 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 253 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 253 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 253 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 253 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
# 253 "data/maps/HawthornLabs/scripts.pory"
	walk_fast_down
	step_end

HawthornLabs_Sign_Text_0:
# 15 "data/maps/HawthornLabs/scripts.pory"
	.string "HAWTHORN LABS\p"
	.string "Someone has added to the sign, in\n"
	.string "big red letters:\p"
	.string "“{COLOR RED}NO SOLICITORS{COLOR DARK_GRAY}”$"

HawthornLabs_Talk_Scientist_Text_0:
# 29 "data/maps/HawthornLabs/scripts.pory"
	.string "Professor Hawthorn's research is\n"
	.string "focused on Pokémon types.\p"
	.string "The Professor has some very\n"
	.string "interesting theories regarding them.\p"
	.string "…I think. She hasn't actually told me\n"
	.string "what we're working on.$"

HawthornLabs_Talk_Receptionist_Text_0:
# 46 "data/maps/HawthornLabs/scripts.pory"
	.string "Professor Hawthorn…\p"
	.string "She bosses me around a lot.\n"
	.string "I mean, she's my boss, but- \p"
	.string "Um, nevermind.$"

HawthornLabs_Intro_MeetRival_Text_0:
# 65 "data/maps/HawthornLabs/scripts.pory"
	.string "MAYA: There you are!\n"
	.string "The lab is just up ahead!$"

HawthornLabs_Intro_MeetRival_Text_1:
# 106 "data/maps/HawthornLabs/scripts.pory"
	.string "MAYA: I heard that Professor Hawthorn\n"
	.string "can be a bit… {PAUSE 30}prickly?\p"
	.string "My dad met her once, I think.\p"
	.string "…But I'm sure once we explain the\n"
	.string "situation, it'll be all good.\p"
	.string "Alright, {PLAYER}! No hesitating!\n"
	.string "Let's go!$"

HawthornLabs_Intro_BattleRival_Text_0:
# 167 "data/maps/HawthornLabs/scripts.pory"
	.string "MAYA: …So, that's what Professor\n"
	.string "Hawthorn is like.\p"
	.string "I can see why she has the reputation\n"
	.string "that she does.\p"
	.string "But she was willing to help. I feel like\n"
	.string "we actually have a chance of finding\l"
	.string "these Pokémons' trainer, now.$"

HawthornLabs_Intro_BattleRival_Text_1:
# 183 "data/maps/HawthornLabs/scripts.pory"
	.string "And in the meantime, we'll keep these\n"
	.string "ones with us…$"

HawthornLabs_Intro_BattleRival_Text_2:
# 191 "data/maps/HawthornLabs/scripts.pory"
	.string "…{PLAYER}.\p"
	.string "I guess this makes us Pokémon \n"
	.string "trainers now, huh?\p"
	.string "…You know what that means, right?$"

HawthornLabs_Intro_BattleRival_Text_3:
# 205 "data/maps/HawthornLabs/scripts.pory"
	.string "{PLAYER}!\p"
	.string "I can sense these Pokémons' energy!\n"
	.string "They're raring for some action!\p"
	.string "Let's duke it out!\n"
	.string "I challenge you to a Pokémon battle!$"

HawthornLabs_Intro_BattleRival_Text_4:
# 228 "data/maps/HawthornLabs/scripts.pory"
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
# 268 "data/maps/HawthornLabs/scripts.pory"
	.string "Your Pokémon is so strong!$"

HawthornLabs_Intro_BattleRival_PlayerLose::
# 271 "data/maps/HawthornLabs/scripts.pory"
	.string "Woo! This Pokémon is strong!$"
