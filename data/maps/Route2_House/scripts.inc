Route2_House_MapScripts::
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route2_House/scripts.pory"
	compare VAR_ROUTE2_FISHER_STATE, 1
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_HOUSE_KRABBY, 8, 5
# 5 "data/maps/Route2_House/scripts.pory"
	addobject LOCALID_ROUTE2_HOUSE_KRABBY
	return


Route2_House_TalkKrabby::
# 11 "data/maps/Route2_House/scripts.pory"
	lock
# 12 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 13 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_KRABBY, 0
# 14 "data/maps/Route2_House/scripts.pory"
	waitmoncry
# 16 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_TalkKrabby_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/Route2_House/scripts.pory"
	closemessage
# 21 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_TalkFisherman::
# 25 "data/maps/Route2_House/scripts.pory"
	switch VAR_ROUTE2_FISHER_STATE
# 26 "data/maps/Route2_House/scripts.pory"
	case 0, Route2_House_TalkFisherman_2
# 28 "data/maps/Route2_House/scripts.pory"
	case 1, Route2_House_TalkFisherman_3
# 30 "data/maps/Route2_House/scripts.pory"
	case 2, Route2_House_TalkFisherman_4
	return

Route2_House_TalkFisherman_2:
# 27 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_IntroduceFisher
	return

Route2_House_TalkFisherman_3:
# 29 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_CheckPartyForKrabby
	return

Route2_House_TalkFisherman_4:
# 31 "data/maps/Route2_House/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Route2_House_TalkFisherman_5
# 35 "data/maps/Route2_House/scripts.pory"
	lock
# 36 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 37 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_TalkFisherman_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/Route2_House/scripts.pory"
	closemessage
# 46 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_TalkFisherman_5:
# 32 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_ReceiveOldRod
	return


Route2_House_IntroduceFisher::
# 52 "data/maps/Route2_House/scripts.pory"
	lock
# 53 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 54 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_IntroduceFisher_Text_0, MSGBOX_YESNO
# 62 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_House_IntroduceFisher_1
# 94 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_IntroduceFisher_Text_2, MSGBOX_DEFAULT
# 102 "data/maps/Route2_House/scripts.pory"
	closemessage
# 103 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_IntroduceFisher_1:
# 63 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_IntroduceFisher_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_1, 1
# 89 "data/maps/Route2_House/scripts.pory"
	setvar VAR_ROUTE2_FISHER_STATE, 1
# 90 "data/maps/Route2_House/scripts.pory"
	closemessage
# 91 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_CheckPartyForKrabby::
# 109 "data/maps/Route2_House/scripts.pory"
	lock
# 110 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 111 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8004, SPECIES_KRABBY
# 112 "data/maps/Route2_House/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 113 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_House_CheckPartyForKrabby_1
# 160 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_CheckPartyForKrabby_Text_3, MSGBOX_DEFAULT
# 168 "data/maps/Route2_House/scripts.pory"
	closemessage
# 169 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_CheckPartyForKrabby_1:
# 114 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_CheckPartyForKrabby_Text_0, MSGBOX_YESNO
# 124 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_House_CheckPartyForKrabby_4
# 149 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_CheckPartyForKrabby_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/Route2_House/scripts.pory"
	closemessage
# 156 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_CheckPartyForKrabby_4:
# 125 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8004, 0
# 126 "data/maps/Route2_House/scripts.pory"
	special ChoosePartyMon
# 127 "data/maps/Route2_House/scripts.pory"
	waitstate
# 128 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 129 "data/maps/Route2_House/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt Route2_House_CheckPartyForKrabby_7
	return

Route2_House_CheckPartyForKrabby_7:
# 130 "data/maps/Route2_House/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 131 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, SPECIES_KRABBY
	goto_if_eq Route2_House_CheckPartyForKrabby_9
# 137 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_CheckPartyForKrabby_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/Route2_House/scripts.pory"
	closemessage
# 144 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_CheckPartyForKrabby_9:
# 132 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8005
# 133 "data/maps/Route2_House/scripts.pory"
	special ScriptRemoveMonFromParty
# 134 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_GiveKrabbyToFisher
	return


Route2_House_GiveKrabbyToFisher::
# 174 "data/maps/Route2_House/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 175 "data/maps/Route2_House/scripts.pory"
	compare VAR_0x8009, 4
	goto_if_eq Route2_House_GiveKrabbyToFisher_2
# 183 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_HOUSE_KRABBY, 6, 4
# 184 "data/maps/Route2_House/scripts.pory"
	addobject LOCALID_ROUTE2_HOUSE_KRABBY
# 185 "data/maps/Route2_House/scripts.pory"
	lockall
# 186 "data/maps/Route2_House/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
# 187 "data/maps/Route2_House/scripts.pory"
	turnobject LOCALID_ROUTE2_HOUSE_KRABBY, DIR_WEST
Route2_House_GiveKrabbyToFisher_1:
# 190 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_GiveKrabbyToFisher_Text_0, MSGBOX_DEFAULT
# 197 "data/maps/Route2_House/scripts.pory"
	compare VAR_0x8009, 3
	goto_if_eq Route2_House_GiveKrabbyToFisher_6
Route2_House_GiveKrabbyToFisher_5:
# 204 "data/maps/Route2_House/scripts.pory"
	applymovement VAR_LAST_TALKED, Route2_House_GiveKrabbyToFisher_Movement_1
# 209 "data/maps/Route2_House/scripts.pory"
	compare VAR_0x8009, 4
	goto_if_eq Route2_House_GiveKrabbyToFisher_9
# 217 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_ROUTE2_HOUSE_KRABBY, Route2_House_GiveKrabbyToFisher_Movement_3
Route2_House_GiveKrabbyToFisher_8:
# 224 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_GiveKrabbyToFisher_Text_1, MSGBOX_DEFAULT
# 228 "data/maps/Route2_House/scripts.pory"
	closemessage
# 229 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route2_House/scripts.pory"
	applymovement VAR_LAST_TALKED, Route2_House_GiveKrabbyToFisher_Movement_4
# 234 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_KRABBY, 0
# 236 "data/maps/Route2_House/scripts.pory"
	waitmoncry
# 238 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_GiveKrabbyToFisher_Text_2, MSGBOX_DEFAULT
# 246 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_ROUTE2_HOUSE_KRABBY, Route2_House_GiveKrabbyToFisher_Movement_5
# 250 "data/maps/Route2_House/scripts.pory"
	applymovement VAR_LAST_TALKED, Route2_House_GiveKrabbyToFisher_Movement_6
# 254 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route2_House/scripts.pory"
	addplayerlevel 1
# 257 "data/maps/Route2_House/scripts.pory"
	setvar VAR_ROUTE2_FISHER_STATE, 2
# 258 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_ReceiveOldRod
	return

Route2_House_GiveKrabbyToFisher_2:
# 176 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_HOUSE_KRABBY, 5, 5
# 177 "data/maps/Route2_House/scripts.pory"
	addobject LOCALID_ROUTE2_HOUSE_KRABBY
# 178 "data/maps/Route2_House/scripts.pory"
	lockall
# 179 "data/maps/Route2_House/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
# 180 "data/maps/Route2_House/scripts.pory"
	turnobject LOCALID_ROUTE2_HOUSE_KRABBY, DIR_NORTH
	goto Route2_House_GiveKrabbyToFisher_1

Route2_House_GiveKrabbyToFisher_6:
# 198 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_GiveKrabbyToFisher_Movement_0
	goto Route2_House_GiveKrabbyToFisher_5

Route2_House_GiveKrabbyToFisher_9:
# 210 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_ROUTE2_HOUSE_KRABBY, Route2_House_GiveKrabbyToFisher_Movement_2
	goto Route2_House_GiveKrabbyToFisher_8


Route2_House_ReceiveOldRod::
# 262 "data/maps/Route2_House/scripts.pory"
	lock
# 263 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 264 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_ReceiveOldRod_Text_0, MSGBOX_DEFAULT
# 270 "data/maps/Route2_House/scripts.pory"
	giveitem ITEM_OLD_ROD
# 271 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 272 "data/maps/Route2_House/scripts.pory"
	waitbuttonpress
# 273 "data/maps/Route2_House/scripts.pory"
	closemessage
# 274 "data/maps/Route2_House/scripts.pory"
	releaseall
# 275 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_ReceiveOldRod_2
Route2_House_ReceiveOldRod_1:
# 279 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
	return

Route2_House_ReceiveOldRod_2:
# 276 "data/maps/Route2_House/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route2_House_ReceiveOldRod_1


# 198 "data/maps/Route2_House/scripts.pory"
Route2_House_GiveKrabbyToFisher_Movement_0:
# 199 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 200 "data/maps/Route2_House/scripts.pory"
	walk_right
# 201 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 204 "data/maps/Route2_House/scripts.pory"
Route2_House_GiveKrabbyToFisher_Movement_1:
# 205 "data/maps/Route2_House/scripts.pory"
	walk_up
# 205 "data/maps/Route2_House/scripts.pory"
	walk_up
# 206 "data/maps/Route2_House/scripts.pory"
	walk_left
# 206 "data/maps/Route2_House/scripts.pory"
	walk_left
# 207 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 210 "data/maps/Route2_House/scripts.pory"
Route2_House_GiveKrabbyToFisher_Movement_2:
# 211 "data/maps/Route2_House/scripts.pory"
	walk_up
# 211 "data/maps/Route2_House/scripts.pory"
	walk_up
# 211 "data/maps/Route2_House/scripts.pory"
	walk_up
# 212 "data/maps/Route2_House/scripts.pory"
	walk_left
# 213 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 217 "data/maps/Route2_House/scripts.pory"
Route2_House_GiveKrabbyToFisher_Movement_3:
# 218 "data/maps/Route2_House/scripts.pory"
	walk_left
# 219 "data/maps/Route2_House/scripts.pory"
	walk_up
# 219 "data/maps/Route2_House/scripts.pory"
	walk_up
# 220 "data/maps/Route2_House/scripts.pory"
	walk_left
# 221 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 231 "data/maps/Route2_House/scripts.pory"
Route2_House_GiveKrabbyToFisher_Movement_4:
# 232 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 232 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
	step_end

# 246 "data/maps/Route2_House/scripts.pory"
Route2_House_GiveKrabbyToFisher_Movement_5:
# 247 "data/maps/Route2_House/scripts.pory"
	walk_right
# 247 "data/maps/Route2_House/scripts.pory"
	walk_right
# 248 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 250 "data/maps/Route2_House/scripts.pory"
Route2_House_GiveKrabbyToFisher_Movement_6:
# 251 "data/maps/Route2_House/scripts.pory"
	walk_right
# 251 "data/maps/Route2_House/scripts.pory"
	walk_right
# 252 "data/maps/Route2_House/scripts.pory"
	walk_down
# 252 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_TalkKrabby_Text_0:
# 17 "data/maps/Route2_House/scripts.pory"
	.string "Krabby appears to be in good hands.$"

Route2_House_TalkFisherman_Text_0:
# 38 "data/maps/Route2_House/scripts.pory"
	.string "Getting good use out of that Old Rod?\p"
	.string "If you catch a big fish Pokémon, maybe \n"
	.string "I could be convinced to give you a \l"
	.string "better fishing rod…$"

Route2_House_IntroduceFisher_Text_0:
# 55 "data/maps/Route2_House/scripts.pory"
	.string "Most people these days have no \n"
	.string "appreciation for the art of fishing.\p"
	.string "What about you, youngster?\n"
	.string "Do you still care about fishing?$"

Route2_House_IntroduceFisher_Text_1:
# 64 "data/maps/Route2_House/scripts.pory"
	.string "Ah! Truly, you mean it?\n"
	.string "A kindred spirit, in this day and age?\l"
	.string "I'm overjoyed!\p"
	.string "Oh, but you have no fishing rod?\p"
	.string "How could you possibly appreciate \n"
	.string "fishing without any gear?\p"
	.string "Hmm…\n"
	.string "Perhaps we can help each other, then.\p"
	.string "I want a Pokémon called Krabby, but \n"
	.string "I'm no good at battling.\p"
	.string "If you can catch a Krabby for me, I'd be \n"
	.string "willing to part with one of my old \l"
	.string "fishing rods.\p"
	.string "How about it, youngster?\n"
	.string "You go out there and catch me a Krabby,\l"
	.string "and I'll give you my old rod!$"

Route2_House_IntroduceFisher_Text_2:
# 95 "data/maps/Route2_House/scripts.pory"
	.string "Oh…\n"
	.string "No, of course…\p"
	.string "My dreams of finding a kindred spirit, \n"
	.string "dashed upon the rocks yet again…$"

Route2_House_CheckPartyForKrabby_Text_0:
# 115 "data/maps/Route2_House/scripts.pory"
	.string "Oh!\n"
	.string "You've caught a Krabby!\p"
	.string "Well, youngster, a deal's a deal!\p"
	.string "Will you give me that Krabby in\n"
	.string "exchange for my fishing rod?$"

Route2_House_CheckPartyForKrabby_Text_1:
# 138 "data/maps/Route2_House/scripts.pory"
	.string "Hey!\p"
	.string "That's not a Krabby!$"

Route2_House_CheckPartyForKrabby_Text_2:
# 150 "data/maps/Route2_House/scripts.pory"
	.string "Oh…\p"
	.string "Okay…$"

Route2_House_CheckPartyForKrabby_Text_3:
# 161 "data/maps/Route2_House/scripts.pory"
	.string "I've seen Krabby before on the beaches \n"
	.string "of Route 1.\p"
	.string "If you catch one for me, I'll give you \n"
	.string "one of my old fishing rods!$"

Route2_House_GiveKrabbyToFisher_Text_0:
# 191 "data/maps/Route2_House/scripts.pory"
	.string "Haha!\n"
	.string "Yes, a Krabby!\p"
	.string "Thank you so much!$"

Route2_House_GiveKrabbyToFisher_Text_1:
# 225 "data/maps/Route2_House/scripts.pory"
	.string "This will be perfect for my dinner!$"

Route2_House_GiveKrabbyToFisher_Text_2:
# 239 "data/maps/Route2_House/scripts.pory"
	.string "Yes indeed!\p"
	.string "Krabby are great at cutting vegetables\n"
	.string "with their claws!$"

Route2_House_ReceiveOldRod_Text_0:
# 265 "data/maps/Route2_House/scripts.pory"
	.string "Thank you! Here, as promised!\n"
	.string "Take my old fishing rod!$"
