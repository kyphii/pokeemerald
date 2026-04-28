NautirustCity_PokemonCenter_MapScripts::
# 2 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NautirustCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_NAUTIRUST_CITY
	return


NautirustCity_PokemonCenter_Script_TalkMaya::
# 8 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	lock
# 9 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	faceplayer
# 11 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	msgbox NautirustCity_PokemonCenter_Script_TalkMaya_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	release
	return


NautirustCity_PokemonCenter_Script_TalkMaya_Text_0:
# 12 "data/maps/NautirustCity_PokemonCenter/scripts.pory"
	.string "MAYA: I don't know if I've ever actually\n"
	.string "been in a Pokémon Center before.\p"
	.string "It's amazing that all this is a \n"
	.string "free service, isn't it?\p"
	.string "Well, anyways, we have two ways to go\n"
	.string "from here.\p"
	.string "We can go west towards Armiter City, or\n"
	.string "south towards Canvenus City.\p"
	.string "Honestly, I kinda want to hit up\n"
	.string "the Pokémon Gym here in town…\p"
	.string "What do you think, {PLAYER}?$"
