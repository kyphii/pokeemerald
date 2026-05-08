NautirustCity_Mart_MapScripts::
# 2 "data/maps/NautirustCity_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NautirustCity_Mart_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NautirustCity_Mart_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NautirustCity_Mart/scripts.pory"
	compare VAR_MAYA_CURRENT_CITY, 1
	goto_if_eq NautirustCity_Mart_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

NautirustCity_Mart_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/NautirustCity_Mart/scripts.pory"
	compare VAR_MAYA_CURRENT_POSITION, 4
	goto_if_eq NautirustCity_Mart_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 8 "data/maps/NautirustCity_Mart/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_MART_MAYA, 0, -8
	return

NautirustCity_Mart_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 5 "data/maps/NautirustCity_Mart/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_MART_MAYA, 9, 5
	return


NautirustCity_Mart_TalkBoy1::
# 15 "data/maps/NautirustCity_Mart/scripts.pory"
	lock
# 16 "data/maps/NautirustCity_Mart/scripts.pory"
	faceplayer
# 17 "data/maps/NautirustCity_Mart/scripts.pory"
	msgbox NautirustCity_Mart_TalkBoy1_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/NautirustCity_Mart/scripts.pory"
	closemessage
# 29 "data/maps/NautirustCity_Mart/scripts.pory"
	release
	return


NautirustCity_Mart_TalkMaya::
# 33 "data/maps/NautirustCity_Mart/scripts.pory"
	lock
# 35 "data/maps/NautirustCity_Mart/scripts.pory"
	setvar VAR_0x8004, 5
# 36 "data/maps/NautirustCity_Mart/scripts.pory"
	special RandomizeMayaLocation
# 38 "data/maps/NautirustCity_Mart/scripts.pory"
	msgbox NautirustCity_Mart_TalkMaya_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/NautirustCity_Mart/scripts.pory"
	faceplayer
# 47 "data/maps/NautirustCity_Mart/scripts.pory"
	msgbox NautirustCity_Mart_TalkMaya_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/NautirustCity_Mart/scripts.pory"
	closemessage
# 59 "data/maps/NautirustCity_Mart/scripts.pory"
	release
	return


NautirustCity_Mart_TalkBoy1_Text_0:
# 18 "data/maps/NautirustCity_Mart/scripts.pory"
	.string "There are so many items to choose from\n"
	.string "here…\p"
	.string "But I don't have any badges, so I can \n"
	.string "only get basic stuff.\p"
	.string "The more Wohnet Pokémon League gym \n"
	.string "badges you have, the more you can buy.$"

NautirustCity_Mart_TalkMaya_Text_0:
# 39 "data/maps/NautirustCity_Mart/scripts.pory"
	.string "MAYA: Let's see…\n"
	.string "Potions… Repels… some more Poké \l"
	.string "Balls…$"

NautirustCity_Mart_TalkMaya_Text_1:
# 48 "data/maps/NautirustCity_Mart/scripts.pory"
	.string "I forgot to stock up on supplies before \n"
	.string "we left home.\l"
	.string "Whoops!\p"
	.string "The routes out of town are pretty long.\p"
	.string "I've decided I'm gonna be proactive\n"
	.string "for once.$"
