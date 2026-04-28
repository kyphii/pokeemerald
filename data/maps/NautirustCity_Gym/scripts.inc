NautirustCity_Gym_MapScripts::
# 2 "data/maps/NautirustCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/NautirustCity_Gym/scripts.pory"
	getbadgecount
# 4 "data/maps/NautirustCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	return

NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
# 5 "data/maps/NautirustCity_Gym/scripts.pory"
	goto NautirustCity_Gym_GuideIntro
	return


NautirustCity_Gym_GymStatue::
# 13 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, NautirustCity_Gym_GymStatue_1
# 21 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GymStatue_Text_1, MSGBOX_SIGN
# 29 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
	return

NautirustCity_Gym_GymStatue_1:
# 14 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GymStatue_Text_0, MSGBOX_SIGN
# 18 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
	return


NautirustCity_Gym_GuideIntro::
# 34 "data/maps/NautirustCity_Gym/scripts.pory"
	lockall
# 35 "data/maps/NautirustCity_Gym/scripts.pory"
	delay 30
# 36 "data/maps/NautirustCity_Gym/scripts.pory"
	turnobject LOCALID_NAUTIRUST_GYM_GUIDE, DIR_WEST
# 37 "data/maps/NautirustCity_Gym/scripts.pory"
	playse SE_PIN
# 38 "data/maps/NautirustCity_Gym/scripts.pory"
	applymovement LOCALID_NAUTIRUST_GYM_GUIDE, Common_Movement_ExclamationMark
# 39 "data/maps/NautirustCity_Gym/scripts.pory"
	waitmovement 0
# 40 "data/maps/NautirustCity_Gym/scripts.pory"
	delay 60
# 41 "data/maps/NautirustCity_Gym/scripts.pory"
	applymovement LOCALID_NAUTIRUST_GYM_GUIDE, NautirustCity_Gym_GuideIntro_Movement_0
# 45 "data/maps/NautirustCity_Gym/scripts.pory"
	waitmovement 0
# 47 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GuideIntro_Text_0, MSGBOX_DEFAULT
# 71 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 72 "data/maps/NautirustCity_Gym/scripts.pory"
	applymovement LOCALID_NAUTIRUST_GYM_GUIDE, NautirustCity_Gym_GuideIntro_Movement_1
# 76 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return


NautirustCity_Gym_TalkGuide::
# 80 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 81 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 82 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, NautirustCity_Gym_TalkGuide_1
# 105 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_TalkGuide_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 137 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return

NautirustCity_Gym_TalkGuide_1:
# 83 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_TalkGuide_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 102 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return


NautirustCity_Gym_TalkLandon::
# 142 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, NautirustCity_Gym_TalkLandon_1
# 164 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 165 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 166 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_LEADER_LANDON, NautirustCity_Gym_Text_LandonPreBattle, NautirustCity_Gym_Text_LandonPostBattle, NautirustCity_Gym_Script_BeatLandon, NO_MUSIC
# 173 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return

NautirustCity_Gym_TalkLandon_1:
# 143 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, NautirustCity_Gym_TalkLandon_4
# 157 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 158 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 159 "data/maps/NautirustCity_Gym/scripts.pory"
	call NautirustCity_Gym_GetRewardTM
# 160 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return

NautirustCity_Gym_TalkLandon_4:
# 144 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 145 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 146 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_TalkLandon_Text_0, MSGBOX_DEFAULT
# 153 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 154 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return


NautirustCity_Gym_Script_BeatLandon::
# 178 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Script_BeatLandon_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/NautirustCity_Gym/scripts.pory"
	message NautirustCity_Gym_Script_BeatLandon_Text_1
# 197 "data/maps/NautirustCity_Gym/scripts.pory"
	waitmessage
# 198 "data/maps/NautirustCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 199 "data/maps/NautirustCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 200 "data/maps/NautirustCity_Gym/scripts.pory"
	addplayerlevel 1
# 202 "data/maps/NautirustCity_Gym/scripts.pory"
	call NautirustCity_Gym_GetRewardTM
# 204 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Script_BeatLandon_Text_2, MSGBOX_DEFAULT
# 208 "data/maps/NautirustCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 209 "data/maps/NautirustCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 210 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 211 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return


NautirustCity_Gym_GetRewardTM::
# 215 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GetRewardTM_Text_0, MSGBOX_DEFAULT
# 219 "data/maps/NautirustCity_Gym/scripts.pory"
	giveitem ITEM_TM_DIG
# 220 "data/maps/NautirustCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NautirustCity_Gym_GetRewardTM_2
NautirustCity_Gym_GetRewardTM_1:
# 223 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GetRewardTM_Text_1, MSGBOX_DEFAULT
# 231 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
	return

NautirustCity_Gym_GetRewardTM_2:
# 221 "data/maps/NautirustCity_Gym/scripts.pory"
	call Common_EventScript_ShowBagIsFull
	goto NautirustCity_Gym_GetRewardTM_1


NautirustCity_Gym_Trainer1::
# 262 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_1, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 270 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer2::
# 277 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_2, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 285 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer3::
# 292 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_3, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 300 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer4::
# 307 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_4, NautirustCity_Gym_Trainer4_Text_0, NautirustCity_Gym_Trainer4_Text_1
# 320 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer5::
# 331 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_5, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 339 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer6::
# 346 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_6, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 354 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


# 41 "data/maps/NautirustCity_Gym/scripts.pory"
NautirustCity_Gym_GuideIntro_Movement_0:
# 42 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_left
# 42 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_left
# 43 "data/maps/NautirustCity_Gym/scripts.pory"
	face_down
	step_end

# 72 "data/maps/NautirustCity_Gym/scripts.pory"
NautirustCity_Gym_GuideIntro_Movement_1:
# 73 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_right
# 73 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_right
# 74 "data/maps/NautirustCity_Gym/scripts.pory"
	face_down
	step_end

NautirustCity_Gym_GymStatue_Text_0:
# 15 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Nautirust City Pokémon Gym$"

NautirustCity_Gym_GymStatue_Text_1:
# 22 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Nautirust City Pokémon Gym\p"
	.string "Landon's Certified Trainers:\n"
	.string "{PLAYER}\l"
	.string "Maya$"

NautirustCity_Gym_GuideIntro_Text_0:
# 48 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Well, what do we have here?\n"
	.string "Could it be a brand new, bright-eyed \l"
	.string "champ-in-the-making?\p"
	.string "Welcome to the Nautirust City Gym!\p"
	.string "If you're looking to test your mettle\n"
	.string "against the Wohnet Pokémon League,\l"
	.string "then you're in the right place!\p"
	.string "Eight gyms, eight cities, eight badges\n"
	.string "to collect!\p"
	.string "Make your way through the gauntlet,\n"
	.string "and you'll come face to face with\l"
	.string "Landon, the leader of this gym!\p"
	.string "Think you got what it takes to beat him\n"
	.string "and claim the Clay Badge?\p"
	.string "Show me what you got, hotshot!$"

NautirustCity_Gym_TalkGuide_Text_0:
# 84 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "I saw the whole thing!\n"
	.string "What a breathtaking bout!\p"
	.string "You got the stuff, kid!\p"
	.string "And now, the Clay Badge is yours!\n"
	.string "Proudly displayed on your Trainer Card!\p"
	.string "You've climbed the first step on the \n"
	.string "path towards the Wohnet Pokémon \l"
	.string "League! How's it feel?\p"
	.string "Keep going! Challenge the other gyms\n"
	.string "across the Wohnet region!\l"
	.string "You're gonna go far kid!$"

NautirustCity_Gym_TalkGuide_Text_1:
# 106 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Need a tip, hotshot?\p"
	.string "Landon's an expert in Ground-type\n"
	.string "Pokémon, and no slouch in battle!\p"
	.string "His Pokémon are sturdy enough to take\n"
	.string "a mighty hit, and dish out a whallop in\l"
	.string "return.\p"
	.string "Water and Grass type attacks can send \n"
	.string "them packing!\p"
	.string "But watch out! Landon's Pokémon can \n"
	.string "also whip up a ferocious sandstorm!\p"
	.string "It'll scour your Pokémon, and give his\n"
	.string "a hearty defensive buff!\p"
	.string "If you have a Ground, Rock, or Steel-\n"
	.string "type Pokémon, they can withstand the \l"
	.string "sand!\p"
	.string "Or you can turn the tide with a \n"
	.string "Pokémon that can call in sun, rain, or \l"
	.string "snow!\p"
	.string "That's all I got, hotshot!\n"
	.string "Go for it!$"

NautirustCity_Gym_TalkLandon_Text_0:
# 147 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "If you're ever on Mount Briar, we \n"
	.string "might into each other again.\p"
	.string "Next time I'll be tougher!$"

NautirustCity_Gym_Script_BeatLandon_Text_0:
# 179 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "I learned a lot from that battle. \n"
	.string "My team has some weak points I need to \l"
	.string "shore up.\p"
	.string "I'll train harder!\p"
	.string "If you train hard too, I'm sure you'll \n"
	.string "make it all the way to the Pokémon \l"
	.string "League!\p"
	.string "As proof of your victory, take this.\n"
	.string "The Clay Badge!$"

NautirustCity_Gym_Script_BeatLandon_Text_1:
# 194 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "{PLAYER} received the Clay Badge from \n"
	.string "Landon!$"

NautirustCity_Gym_Script_BeatLandon_Text_2:
# 205 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Good luck out there, trainer!$"

NautirustCity_Gym_GetRewardTM_Text_0:
# 216 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Take this too!$"

NautirustCity_Gym_GetRewardTM_Text_1:
# 224 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "That's the TM for the move Dig.\p"
	.string "Teach it to your Pokémon, and they'll \n"
	.string "be able to strike your foes where they \l"
	.string "least expect it!$"

NautirustCity_Gym_Trainer1_Text_0:
# 265 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "TODO$"

NautirustCity_Gym_Trainer4_Text_0:
# 310 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Didn't see me, huh?\p"
	.string "That's me!\n"
	.string "Strong like a rock!\l"
	.string "Tough like a rock!\l"
	.string "Stealthy like… a… rock!$"

NautirustCity_Gym_Trainer4_Text_1:
# 317 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "I got rocked!$"

NautirustCity_Gym_Trainer4_Text_2:
# 321 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Ha!\n"
	.string "You got guts!\p"
	.string "I bet you could roll right through\n"
	.string "Landon!$"

NautirustCity_Gym_Text_LandonPreBattle::
# 235 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Hey, hey!\n"
	.string "I've been watching you make your way\l"
	.string "through my gym, trainer.\p"
	.string "The name's Landon! I'm the leader of \n"
	.string "Nautirust City's Pokémon Gym.\p"
	.string "The gym leader before me was my father.\n"
	.string "He entrusted it to me when he retired.\p"
	.string "Since then, I've been training on \n"
	.string "Mount Briar every day to prove I have \l"
	.string "what it takes to be a gym leader!\p"
	.string "What about you, trainer?\n"
	.string "How do you train your Pokémon?\p"
	.string "Show me!$"

NautirustCity_Gym_Text_LandonPostBattle::
# 256 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Wow!\n"
	.string "Your training is exceptional!$"
