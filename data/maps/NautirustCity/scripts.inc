NautirustCity_MapScripts::
# 2 "data/maps/NautirustCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/NautirustCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NautirustCity/scripts.pory"
	goto_if_unset FLAG_VISITED_NAUTIRUST_CITY, NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

NautirustCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_VISITED_NAUTIRUST_CITY
# 7 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_STORY_CUT_MASTER_AWAY
# 9 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_STORY_ROUTE4_TRAIL_HINT
# 10 "data/maps/NautirustCity/scripts.pory"
	addplayerlevel 1
# 13 "data/maps/NautirustCity/scripts.pory"
	setvar VAR_MAYA_CURRENT_CITY, 1
# 14 "data/maps/NautirustCity/scripts.pory"
	setvar VAR_MAYA_CURRENT_POSITION, 0
	return

NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/NautirustCity/scripts.pory"
	compare VAR_MAYA_CURRENT_CITY, 1
	goto_if_eq NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 19 "data/maps/NautirustCity/scripts.pory"
	compare VAR_MAYA_CURRENT_POSITION, 0
	goto_if_ne NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_4
NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 23 "data/maps/NautirustCity/scripts.pory"
	switch VAR_MAYA_CURRENT_POSITION
# 24 "data/maps/NautirustCity/scripts.pory"
	case 1, NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_7
# 26 "data/maps/NautirustCity/scripts.pory"
	case 2, NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 28 "data/maps/NautirustCity/scripts.pory"
	case 3, NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_9
# 31 "data/maps/NautirustCity/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_MAYA, 0, -8
	return

NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 20 "data/maps/NautirustCity/scripts.pory"
	setvar VAR_0x8004, 5
# 21 "data/maps/NautirustCity/scripts.pory"
	special RandomizeMayaLocation
	goto NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_3

NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 25 "data/maps/NautirustCity/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_MAYA, 7, 12
	return

NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 27 "data/maps/NautirustCity/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_MAYA, 29, 20
	return

NautirustCity_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 29 "data/maps/NautirustCity/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_MAYA, 14, 38
	return


NautirustCity_Sign_TrainerAcademy::
# 38 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Sign_TrainerAcademy_Text_0, MSGBOX_SIGN
	return


NautirustCity_Sign_TownSign::
# 45 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Sign_TownSign_Text_0, MSGBOX_SIGN
	return


NautirustCity_Sign_GymSign::
# 54 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Sign_GymSign_Text_0, MSGBOX_SIGN
	return


NautirustCity_Script_TalkMaya::
# 63 "data/maps/NautirustCity/scripts.pory"
	lock
# 64 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 65 "data/maps/NautirustCity/scripts.pory"
	switch VAR_MAYA_CURRENT_POSITION
# 66 "data/maps/NautirustCity/scripts.pory"
	case 1, NautirustCity_Script_TalkMaya_3
# 113 "data/maps/NautirustCity/scripts.pory"
	case 2, NautirustCity_Script_TalkMaya_4
# 127 "data/maps/NautirustCity/scripts.pory"
	case 3, NautirustCity_Script_TalkMaya_5
NautirustCity_Script_TalkMaya_1:
# 144 "data/maps/NautirustCity/scripts.pory"
	setvar VAR_0x8004, 5
# 145 "data/maps/NautirustCity/scripts.pory"
	special RandomizeMayaLocation
# 146 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 147 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkMaya_3:
# 67 "data/maps/NautirustCity/scripts.pory"
	getplayerlevel
# 68 "data/maps/NautirustCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, NautirustCity_Script_TalkMaya_6
# 85 "data/maps/NautirustCity/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_lt NautirustCity_Script_TalkMaya_7
# 102 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkMaya_Text_2, MSGBOX_DEFAULT
	goto NautirustCity_Script_TalkMaya_1

NautirustCity_Script_TalkMaya_4:
# 114 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkMaya_Text_3, MSGBOX_DEFAULT
	goto NautirustCity_Script_TalkMaya_1

NautirustCity_Script_TalkMaya_5:
# 128 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkMaya_Text_4, MSGBOX_DEFAULT
	goto NautirustCity_Script_TalkMaya_1

NautirustCity_Script_TalkMaya_6:
# 69 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkMaya_Text_0, MSGBOX_DEFAULT
	goto NautirustCity_Script_TalkMaya_1

NautirustCity_Script_TalkMaya_7:
# 86 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkMaya_Text_1, MSGBOX_DEFAULT
	goto NautirustCity_Script_TalkMaya_1


NautirustCity_Script_TalkGreeter::
# 151 "data/maps/NautirustCity/scripts.pory"
	lock
# 152 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 153 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkGreeter_Text_0, MSGBOX_DEFAULT
# 174 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 175 "data/maps/NautirustCity/scripts.pory"
	release
	return


NautirustCity_Script_TalkMan1::
# 179 "data/maps/NautirustCity/scripts.pory"
	lock
# 180 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 181 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkMan1_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 194 "data/maps/NautirustCity/scripts.pory"
	release
	return


NautirustCity_Script_TalkBenchGirl::
# 198 "data/maps/NautirustCity/scripts.pory"
	lock
# 199 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 200 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkBenchGirl_Text_0, MSGBOX_DEFAULT
# 208 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 209 "data/maps/NautirustCity/scripts.pory"
	release
	return


NautirustCity_Script_TalkExpShareStore::
# 213 "data/maps/NautirustCity/scripts.pory"
	lock
# 214 "data/maps/NautirustCity/scripts.pory"
	faceplayer
# 215 "data/maps/NautirustCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, NautirustCity_Script_TalkExpShareStore_1
# 284 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_9, MSGBOX_DEFAULT
# 291 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 292 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_1:
# 216 "data/maps/NautirustCity/scripts.pory"
	message NautirustCity_Script_TalkExpShareStore_Text_0
# 225 "data/maps/NautirustCity/scripts.pory"
	waitmessage
# 226 "data/maps/NautirustCity/scripts.pory"
	showmoneybox 0, 0
# 227 "data/maps/NautirustCity/scripts.pory"
	dynmultichoice 14, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, NautirustCity_Script_TalkExpShareStore_Text_1, NautirustCity_Script_TalkExpShareStore_Text_2
# 229 "data/maps/NautirustCity/scripts.pory"
	switch VAR_RESULT
# 230 "data/maps/NautirustCity/scripts.pory"
	case 0, NautirustCity_Script_TalkExpShareStore_5
# 273 "data/maps/NautirustCity/scripts.pory"
	case 1, NautirustCity_Script_TalkExpShareStore_6
	return

NautirustCity_Script_TalkExpShareStore_5:
# 231 "data/maps/NautirustCity/scripts.pory"
	checkmoney 5000
# 232 "data/maps/NautirustCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NautirustCity_Script_TalkExpShareStore_7
# 262 "data/maps/NautirustCity/scripts.pory"
	hidemoneybox
# 263 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_7, MSGBOX_DEFAULT
# 270 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 271 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_6:
# 274 "data/maps/NautirustCity/scripts.pory"
	hidemoneybox
# 275 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_8, MSGBOX_DEFAULT
# 279 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 280 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_7:
# 233 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_3, MSGBOX_DEFAULT
# 237 "data/maps/NautirustCity/scripts.pory"
	removemoney 5000
# 238 "data/maps/NautirustCity/scripts.pory"
	hidemoneybox
# 239 "data/maps/NautirustCity/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 240 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 242 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_4, MSGBOX_YESNO
# 246 "data/maps/NautirustCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NautirustCity_Script_TalkExpShareStore_11
NautirustCity_Script_TalkExpShareStore_10:
# 254 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_6, MSGBOX_DEFAULT
# 258 "data/maps/NautirustCity/scripts.pory"
	closemessage
# 259 "data/maps/NautirustCity/scripts.pory"
	release
	return

NautirustCity_Script_TalkExpShareStore_11:
# 247 "data/maps/NautirustCity/scripts.pory"
	playse SE_POKENAV_ON
# 248 "data/maps/NautirustCity/scripts.pory"
	msgbox NautirustCity_Script_TalkExpShareStore_Text_5
# 251 "data/maps/NautirustCity/scripts.pory"
	setflag FLAG_EXP_SHARE_ENABLED
	goto NautirustCity_Script_TalkExpShareStore_10


NautirustCity_Sign_TrainerAcademy_Text_0:
# 39 "data/maps/NautirustCity/scripts.pory"
	.string "Nautirust Trainer's Academy$"

NautirustCity_Sign_TownSign_Text_0:
# 46 "data/maps/NautirustCity/scripts.pory"
	.string "NAUTIRUST CITY\n"
	.string "Streams of energy, powering the gears \l"
	.string "of history.$"

NautirustCity_Sign_GymSign_Text_0:
# 55 "data/maps/NautirustCity/scripts.pory"
	.string "NAUTIRUST CITY Pokémon Gym\n"
	.string "Leader: Landon\l"
	.string "The Sultan of Soil!$"

NautirustCity_Script_TalkMaya_Text_0:
# 70 "data/maps/NautirustCity/scripts.pory"
	.string "MAYA: Woah, {PLAYER}!\n"
	.string "You beat the gym challenge too?\p"
	.string "That means it's official!\n"
	.string "We're rivals now!\p"
	.string "You're on, {PLAYER}!\n"
	.string "I'm gonna beat all the gyms in Wohnet \l"
	.string "first!\p"
	.string "You better keep up! \n"
	.string "I need you to keep me sharp!$"

NautirustCity_Script_TalkMaya_Text_1:
# 87 "data/maps/NautirustCity/scripts.pory"
	.string "MAYA: Hey!\p"
	.string "Did you take a look inside the gym yet?\p"
	.string "I checked it out, but they told me I\n"
	.string "should train more before I can\l"
	.string "challenge the Gym Leader.\p"
	.string "Okay, {PLAYER}!\n"
	.string "Let's get strong enough to take on\l"
	.string "that gym!$"

NautirustCity_Script_TalkMaya_Text_2:
# 103 "data/maps/NautirustCity/scripts.pory"
	.string "MAYA: Hey, {PLAYER}!\n"
	.string "Guess what?\p"
	.string "I got a gym badge!\p"
	.string "You should try it out too.\n"
	.string "You better keep up with me!$"

NautirustCity_Script_TalkMaya_Text_3:
# 115 "data/maps/NautirustCity/scripts.pory"
	.string "MAYA: To be honest, I never really liked \n"
	.string "passing through this city before.\p"
	.string "It always seemed so dreary.\p"
	.string "But now that we're traveling with \n"
	.string "Pokémon…\p"
	.string "I dunno. It's making me see things \n"
	.string "through a different lens, I guess.$"

NautirustCity_Script_TalkMaya_Text_4:
# 129 "data/maps/NautirustCity/scripts.pory"
	.string "MAYA: So, if we go west from here, it'll \n"
	.string "take us through Whelchord City, and \l"
	.string "then to the Poké Ball factory in \l"
	.string "Armiter City.\p"
	.string "Or we could go south through Junopolis \n"
	.string "City to reach Canvenus City.\p"
	.string "It's gonna be a pretty long journey \n"
	.string "either way.\p"
	.string "Which road should we take?$"

NautirustCity_Script_TalkGreeter_Text_0:
# 154 "data/maps/NautirustCity/scripts.pory"
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
# 182 "data/maps/NautirustCity/scripts.pory"
	.string "All these buildings used to be \n"
	.string "factories.\p"
	.string "Nowadays, though, most of them have \n"
	.string "been made into apartments.\p"
	.string "Sometimes it feels strange, to live in\n"
	.string "a space that was never built for \l"
	.string "that purpose.$"

NautirustCity_Script_TalkBenchGirl_Text_0:
# 201 "data/maps/NautirustCity/scripts.pory"
	.string "The canals are so nice now that the\n"
	.string "city's cleaned them up!\p"
	.string "I used to hate living here, but now I \n"
	.string "can't imagine being anywhere else!$"

NautirustCity_Script_TalkExpShareStore_Text_0:
# 217 "data/maps/NautirustCity/scripts.pory"
	.string "Hi there!\p"
	.string "My days as a Pokémon trainer are \n"
	.string "behind me, so I'm selling my old gear.\p"
	.string "I have an Exp. All here.\n"
	.string "Want to buy it?$"

NautirustCity_Script_TalkExpShareStore_Text_1:
# 228 "data/maps/NautirustCity/scripts.pory"
	.string "EXP. ALL{CLEAR_TO 0x49}{FONT_SMALL}¥5,000$"

NautirustCity_Script_TalkExpShareStore_Text_2:
# 228 "data/maps/NautirustCity/scripts.pory"
	.string "No thanks$"

NautirustCity_Script_TalkExpShareStore_Text_3:
# 234 "data/maps/NautirustCity/scripts.pory"
	.string "Here you go!$"

NautirustCity_Script_TalkExpShareStore_Text_4:
# 243 "data/maps/NautirustCity/scripts.pory"
	.string "Turn the Exp. All on?$"

NautirustCity_Script_TalkExpShareStore_Text_5:
# 249 "data/maps/NautirustCity/scripts.pory"
	.string "You turned on the Exp. All.$"

NautirustCity_Script_TalkExpShareStore_Text_6:
# 255 "data/maps/NautirustCity/scripts.pory"
	.string "Thank you!$"

NautirustCity_Script_TalkExpShareStore_Text_7:
# 264 "data/maps/NautirustCity/scripts.pory"
	.string "Sorry!\n"
	.string "You don't have enough money…\p"
	.string "Maybe come back later?$"

NautirustCity_Script_TalkExpShareStore_Text_8:
# 276 "data/maps/NautirustCity/scripts.pory"
	.string "Thanks for stopping by!$"

NautirustCity_Script_TalkExpShareStore_Text_9:
# 285 "data/maps/NautirustCity/scripts.pory"
	.string "I'm all out of stock, but I still have a\n"
	.string "lease for this stand.\p"
	.string "Maybe I could sell other things?$"
