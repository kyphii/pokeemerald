SecretCove_MapScripts::
	.byte 0


SecretCove_Talk_Lady::
# 4 "data/maps/SecretCove/scripts.pory"
	lock
# 5 "data/maps/SecretCove/scripts.pory"
	faceplayer
# 6 "data/maps/SecretCove/scripts.pory"
	goto_if_set FLAG_TEMP_1, SecretCove_Talk_Lady_1
# 18 "data/maps/SecretCove/scripts.pory"
	msgbox SecretCove_Talk_Lady_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/SecretCove/scripts.pory"
	setflag FLAG_TEMP_1
# 38 "data/maps/SecretCove/scripts.pory"
	release
	end

SecretCove_Talk_Lady_1:
# 7 "data/maps/SecretCove/scripts.pory"
	msgbox SecretCove_Talk_Lady_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/SecretCove/scripts.pory"
	release
	end


SecretCove_Talk_Lady_Text_0:
# 7 "data/maps/SecretCove/scripts.pory"
	.string "Have you come to get away from it all,\n"
	.string "too?\p"
	.string "Take all your anxiety, your worries…\p"
	.string "…and set them adrift in the sea.$"

SecretCove_Talk_Lady_Text_1:
# 18 "data/maps/SecretCove/scripts.pory"
	.string "Oh! A person…\p"
	.string "This is my special place. Not many\n"
	.string "people find it.\p"
	.string "It's nice and quiet here.\n"
	.string "I need to get away from everything,\l"
	.string "Sometimes.\p"
	.string "…Okay, most of the time.\n"
	.string "I basically live here.\p"
	.string "…Can you keep this spot a secret,\n"
	.string "please?\l"
	.string "Just between us?\p"
	.string "I've seen some rare wild Pokémon\n"
	.string "here, if that interests you.$"
