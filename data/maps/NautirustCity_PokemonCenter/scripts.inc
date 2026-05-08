NautirustCity_PokemonCenter_MapScripts::
# 2 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_NAUTIRUST_CITY
	return

NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	compare VAR_MAYA_CURRENT_CITY, 1
	goto_if_eq NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	compare VAR_MAYA_CURRENT_POSITION, 0
	goto_if_eq NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 11 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_PC_MAYA, 0, -8
	return

NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 8 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	setobjectxyperm LOCALID_NAUTIRUST_PC_MAYA, 3, 12
	return


NautirustCity_PokemonCenter_TalkMan1::
# 18 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	lock
# 19 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	faceplayer
# 21 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	msgbox NautirustCity_PokemonCenter_TalkMan1_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	release
	return


NautirustCity_PokemonCenter_TalkMaya::
# 38 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	lock
# 39 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	faceplayer
# 41 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 5
# 42 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	special RandomizeMayaLocation
# 44 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq NautirustCity_PokemonCenter_TalkMaya_1
# 63 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	msgbox NautirustCity_PokemonCenter_TalkMaya_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	closemessage
# 78 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	release
	return

NautirustCity_PokemonCenter_TalkMaya_1:
# 45 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	msgbox NautirustCity_PokemonCenter_TalkMaya_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	setvar VAR_TEMP_1, 1
# 56 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 5
# 57 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	special RandomizeMayaLocation
# 59 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	closemessage
# 60 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	release
	return


NautirustCity_PokemonCenter_TalkMan1_Text_0:
# 22 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	.string "The Pokémon Centers in Alola have \n"
	.string "coffee shops in them.\p"
	.string "It's a shame that hasn't caught on \n"
	.string "everywhere else.\p"
	.string "I guess it makes sense. Otherwise,\n"
	.string "they'd probably never get rid of me.$"

NautirustCity_PokemonCenter_TalkMaya_Text_0:
# 46 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	.string "MAYA: I don't know if I've ever actually\n"
	.string "been in a Pokémon Center before.\p"
	.string "It's amazing that all this is a \n"
	.string "free service, isn't it?$"

NautirustCity_PokemonCenter_TalkMaya_Text_1:
# 64 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	.string "MAYA: Well, anyways, we have two ways\n"
	.string "to go from here.\p"
	.string "We can go west towards Armiter City, or\n"
	.string "south towards Canvenus City.\p"
	.string "Honestly, I kinda want to hit up\n"
	.string "the Pokémon Gym here in town…\p"
	.string "What do you think, {PLAYER}?$"
