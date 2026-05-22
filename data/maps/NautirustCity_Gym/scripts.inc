NautirustCity_Gym_MapScripts::
# 2 "data/maps/NautirustCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NautirustCity_Gym/scripts.pory"
	map_script_2 VAR_GYM_ENTERED, 0, NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

NautirustCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/NautirustCity_Gym/scripts.pory"
	goto NautirustCity_Gym_GuideIntro
	return


NautirustCity_Gym_GymStatue::
# 10 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, NautirustCity_Gym_GymStatue_1
# 18 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GymStatue_Text_1, MSGBOX_SIGN
# 26 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
	return

NautirustCity_Gym_GymStatue_1:
# 11 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GymStatue_Text_0, MSGBOX_SIGN
# 15 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
	return


NautirustCity_Gym_GuideIntro::
# 31 "data/maps/NautirustCity_Gym/scripts.pory"
	lockall
# 32 "data/maps/NautirustCity_Gym/scripts.pory"
	delay 5
# 33 "data/maps/NautirustCity_Gym/scripts.pory"
	turnobject LOCALID_NAUTIRUST_GYM_GUIDE, DIR_WEST
# 34 "data/maps/NautirustCity_Gym/scripts.pory"
	playse SE_PIN
# 35 "data/maps/NautirustCity_Gym/scripts.pory"
	applymovement LOCALID_NAUTIRUST_GYM_GUIDE, Common_Movement_ExclamationMark
# 36 "data/maps/NautirustCity_Gym/scripts.pory"
	waitmovement 0
# 37 "data/maps/NautirustCity_Gym/scripts.pory"
	delay 60
# 38 "data/maps/NautirustCity_Gym/scripts.pory"
	applymovement LOCALID_NAUTIRUST_GYM_GUIDE, NautirustCity_Gym_GuideIntro_Movement_0
# 42 "data/maps/NautirustCity_Gym/scripts.pory"
	waitmovement 0
# 44 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GuideIntro_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/NautirustCity_Gym/scripts.pory"
	getplayerlevel
# 67 "data/maps/NautirustCity_Gym/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_lt NautirustCity_Gym_GuideIntro_2
# 91 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GuideIntro_Text_2, MSGBOX_DEFAULT
NautirustCity_Gym_GuideIntro_1:
# 99 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 100 "data/maps/NautirustCity_Gym/scripts.pory"
	applymovement LOCALID_NAUTIRUST_GYM_GUIDE, NautirustCity_Gym_GuideIntro_Movement_1
# 104 "data/maps/NautirustCity_Gym/scripts.pory"
	waitmovement 0
# 106 "data/maps/NautirustCity_Gym/scripts.pory"
	setvar VAR_GYM_ENTERED, 1
# 108 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return

NautirustCity_Gym_GuideIntro_2:
# 68 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GuideIntro_Text_1, MSGBOX_DEFAULT
	goto NautirustCity_Gym_GuideIntro_1


NautirustCity_Gym_TalkGuide::
# 112 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 113 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 114 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, NautirustCity_Gym_TalkGuide_1
# 137 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_TalkGuide_Text_1, MSGBOX_DEFAULT
# 168 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 169 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return

NautirustCity_Gym_TalkGuide_1:
# 115 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_TalkGuide_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 134 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return


NautirustCity_Gym_TalkLandon::
# 174 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, NautirustCity_Gym_TalkLandon_1
# 196 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 197 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 198 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_LEADER_LANDON, NautirustCity_Gym_Text_LandonPreBattle, NautirustCity_Gym_Text_LandonPostBattle, NautirustCity_Gym_Script_BeatLandon, NO_MUSIC
# 205 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return

NautirustCity_Gym_TalkLandon_1:
# 175 "data/maps/NautirustCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, NautirustCity_Gym_TalkLandon_4
# 189 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 190 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 191 "data/maps/NautirustCity_Gym/scripts.pory"
	call NautirustCity_Gym_GetRewardTM
# 192 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return

NautirustCity_Gym_TalkLandon_4:
# 176 "data/maps/NautirustCity_Gym/scripts.pory"
	lock
# 177 "data/maps/NautirustCity_Gym/scripts.pory"
	faceplayer
# 178 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_TalkLandon_Text_0, MSGBOX_DEFAULT
# 185 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 186 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return


NautirustCity_Gym_Script_BeatLandon::
# 210 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Script_BeatLandon_Text_0, MSGBOX_DEFAULT
# 225 "data/maps/NautirustCity_Gym/scripts.pory"
	message NautirustCity_Gym_Script_BeatLandon_Text_1
# 229 "data/maps/NautirustCity_Gym/scripts.pory"
	waitmessage
# 230 "data/maps/NautirustCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 231 "data/maps/NautirustCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 232 "data/maps/NautirustCity_Gym/scripts.pory"
	addplayerlevel 1
# 234 "data/maps/NautirustCity_Gym/scripts.pory"
	call NautirustCity_Gym_GetRewardTM
# 236 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Script_BeatLandon_Text_2, MSGBOX_DEFAULT
# 240 "data/maps/NautirustCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 241 "data/maps/NautirustCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 242 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
# 243 "data/maps/NautirustCity_Gym/scripts.pory"
	release
	return


NautirustCity_Gym_GetRewardTM::
# 247 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GetRewardTM_Text_0, MSGBOX_DEFAULT
# 251 "data/maps/NautirustCity_Gym/scripts.pory"
	giveitem ITEM_TM_DIG
# 252 "data/maps/NautirustCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NautirustCity_Gym_GetRewardTM_2
NautirustCity_Gym_GetRewardTM_1:
# 255 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_GetRewardTM_Text_1, MSGBOX_DEFAULT
# 263 "data/maps/NautirustCity_Gym/scripts.pory"
	closemessage
	return

NautirustCity_Gym_GetRewardTM_2:
# 253 "data/maps/NautirustCity_Gym/scripts.pory"
	call Common_EventScript_ShowBagIsFull
	goto NautirustCity_Gym_GetRewardTM_1


NautirustCity_Gym_Trainer1::
# 294 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_1, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 302 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer2::
# 309 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_2, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 317 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer3::
# 324 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_3, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 332 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer4::
# 339 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_4, NautirustCity_Gym_Trainer4_Text_0, NautirustCity_Gym_Trainer4_Text_1
# 352 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer5::
# 363 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_5, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 371 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


NautirustCity_Gym_Trainer6::
# 378 "data/maps/NautirustCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NAUTIRUST_GYM_6, NautirustCity_Gym_Trainer1_Text_0, NautirustCity_Gym_Trainer1_Text_0
# 386 "data/maps/NautirustCity_Gym/scripts.pory"
	msgbox NautirustCity_Gym_Trainer1_Text_0, MSGBOX_AUTOCLOSE
	return


# 38 "data/maps/NautirustCity_Gym/scripts.pory"
NautirustCity_Gym_GuideIntro_Movement_0:
# 39 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_left
# 39 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_left
# 40 "data/maps/NautirustCity_Gym/scripts.pory"
	face_down
	step_end

# 100 "data/maps/NautirustCity_Gym/scripts.pory"
NautirustCity_Gym_GuideIntro_Movement_1:
# 101 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_right
# 101 "data/maps/NautirustCity_Gym/scripts.pory"
	walk_right
# 102 "data/maps/NautirustCity_Gym/scripts.pory"
	face_down
	step_end

NautirustCity_Gym_GymStatue_Text_0:
# 12 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Nautirust City Pokémon Gym$"

NautirustCity_Gym_GymStatue_Text_1:
# 19 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Nautirust City Pokémon Gym\p"
	.string "Landon's Certified Trainers:\n"
	.string "{PLAYER}\l"
	.string "Maya$"

NautirustCity_Gym_GuideIntro_Text_0:
# 45 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Well, what do we have here?\n"
	.string "Could it be a brand new, bright-eyed \l"
	.string "champ-in-the-making?\p"
	.string "This is the Nautirust City Gym!\n"
	.string "Where tough trainers come to duke it \l"
	.string "out and hone their skills!\p"
	.string "If you're looking to test your mettle\n"
	.string "against the Wohnet Pokémon League,\l"
	.string "then you're in the right place!\p"
	.string "Eight gyms, eight cities, eight badges\n"
	.string "to collect!\p"
	.string "Make your way through the gauntlet,\n"
	.string "and you'll come face to face with\l"
	.string "Landon, the leader of this gym!$"

NautirustCity_Gym_GuideIntro_Text_1:
# 69 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Hmm…\n"
	.string "No offense, but…\p"
	.string "You look like you're pretty green when\n"
	.string "it comes to training Pokémon.\l"
	.string "I can see it in your eyes!\p"
	.string "If you're thinking of taking on the \n"
	.string "gym challenge…\p"
	.string "Then get out there and explore!\n"
	.string "Catch Pokémon! Get stronger!\p"
	.string "…Or, if you're the stubborn type,\n"
	.string "then I won't stop you. Go on ahead!\p"
	.string "I'll be waiting for your gym challenge \n"
	.string "with bated breath, hotshot!$"

NautirustCity_Gym_GuideIntro_Text_2:
# 92 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Think you got what it takes to beat him\n"
	.string "and claim the Clay Badge?\p"
	.string "Show me what you got, hotshot!$"

NautirustCity_Gym_TalkGuide_Text_0:
# 116 "data/maps/NautirustCity_Gym/scripts.pory"
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
# 138 "data/maps/NautirustCity_Gym/scripts.pory"
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
# 179 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "If you're ever on Mount Briar, we \n"
	.string "might into each other again.\p"
	.string "Next time I'll be tougher!$"

NautirustCity_Gym_Script_BeatLandon_Text_0:
# 211 "data/maps/NautirustCity_Gym/scripts.pory"
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
# 226 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "{PLAYER} received the Clay Badge from \n"
	.string "Landon!$"

NautirustCity_Gym_Script_BeatLandon_Text_2:
# 237 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Good luck out there, trainer!$"

NautirustCity_Gym_GetRewardTM_Text_0:
# 248 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Take this too!$"

NautirustCity_Gym_GetRewardTM_Text_1:
# 256 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "That's the TM for the move Dig.\p"
	.string "Teach it to your Pokémon, and they'll \n"
	.string "be able to strike your foes where they \l"
	.string "least expect it!$"

NautirustCity_Gym_Trainer1_Text_0:
# 297 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "TODO$"

NautirustCity_Gym_Trainer4_Text_0:
# 342 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Didn't see me, huh?\p"
	.string "That's me!\n"
	.string "Strong like a rock!\l"
	.string "Tough like a rock!\l"
	.string "Stealthy like… a… rock!$"

NautirustCity_Gym_Trainer4_Text_1:
# 349 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "I got rocked!$"

NautirustCity_Gym_Trainer4_Text_2:
# 353 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Ha!\n"
	.string "You got guts!\p"
	.string "I bet you could roll right through\n"
	.string "Landon!$"

NautirustCity_Gym_Text_LandonPreBattle::
# 267 "data/maps/NautirustCity_Gym/scripts.pory"
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
# 288 "data/maps/NautirustCity_Gym/scripts.pory"
	.string "Wow!\n"
	.string "Your training is exceptional!$"
