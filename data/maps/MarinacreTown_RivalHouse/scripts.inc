MarinacreTown_RivalHouse_MapScripts::
	.byte 0


MarinacreTown_RivalHouse_Talk_MayasFather::
# 4 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	lock
# 5 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	faceplayer
# 6 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	switch VAR_INTRO_SEQUENCE_STATE
# 7 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	case 1, MarinacreTown_RivalHouse_Talk_MayasFather_3
# 16 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	case 3, MarinacreTown_RivalHouse_Talk_MayasFather_4
# 23 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	msgbox MarinacreTown_RivalHouse_Talk_MayasFather_Text_2, MSGBOX_DEFAULT
MarinacreTown_RivalHouse_Talk_MayasFather_1:
# 34 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	closemessage
# 35 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	release
	return

MarinacreTown_RivalHouse_Talk_MayasFather_3:
# 8 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	msgbox MarinacreTown_RivalHouse_Talk_MayasFather_Text_0, MSGBOX_DEFAULT
	goto MarinacreTown_RivalHouse_Talk_MayasFather_1

MarinacreTown_RivalHouse_Talk_MayasFather_4:
# 17 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	msgbox MarinacreTown_RivalHouse_Talk_MayasFather_Text_1, MSGBOX_DEFAULT
	goto MarinacreTown_RivalHouse_Talk_MayasFather_1


MarinacreTown_RivalHouse_Talk_MayasMother::
# 39 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	lock
# 40 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	faceplayer
# 41 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	switch VAR_INTRO_SEQUENCE_STATE
# 42 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	case 1, MarinacreTown_RivalHouse_Talk_MayasMother_3
# 48 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	case 3, MarinacreTown_RivalHouse_Talk_MayasMother_4
# 56 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	msgbox MarinacreTown_RivalHouse_Talk_MayasMother_Text_2, MSGBOX_DEFAULT
MarinacreTown_RivalHouse_Talk_MayasMother_1:
# 62 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	closemessage
# 63 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	release
	return

MarinacreTown_RivalHouse_Talk_MayasMother_3:
# 43 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	msgbox MarinacreTown_RivalHouse_Talk_MayasMother_Text_0, MSGBOX_DEFAULT
	goto MarinacreTown_RivalHouse_Talk_MayasMother_1

MarinacreTown_RivalHouse_Talk_MayasMother_4:
# 49 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	msgbox MarinacreTown_RivalHouse_Talk_MayasMother_Text_1, MSGBOX_DEFAULT
	goto MarinacreTown_RivalHouse_Talk_MayasMother_1


MarinacreTown_RivalHouse_Talk_MayasFather_Text_0:
# 9 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	.string "Oh, hello, {PLAYER}.\n"
	.string "Are you looking for Maya?\p"
	.string "She went to the beach on the south \n"
	.string "side of town.$"

MarinacreTown_RivalHouse_Talk_MayasFather_Text_1:
# 18 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	.string "Oh, hello, {PLAYER}.\n"
	.string "Did Maya tell you the news?$"

MarinacreTown_RivalHouse_Talk_MayasFather_Text_2:
# 24 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	.string "Hello, {PLAYER}.\n"
	.string "How are you and Maya doing on your \l"
	.string "travels?\p"
	.string "I'm afraid I'm quite busy with \n"
	.string "everything going on, but you're \l"
	.string "welcome to stop by anytime.$"

MarinacreTown_RivalHouse_Talk_MayasMother_Text_0:
# 44 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	.string "Oh! Hello there, {PLAYER}.\n"
	.string "Maya was looking for you earlier.$"

MarinacreTown_RivalHouse_Talk_MayasMother_Text_1:
# 50 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	.string "Maya was in a temper when she left the \n"
	.string "house.\l"
	.string "I hope she's able to feel a bit calmer.$"

MarinacreTown_RivalHouse_Talk_MayasMother_Text_2:
# 57 "data/maps/MarinacreTown_RivalHouse/scripts.pory"
	.string "Oh! Welcome back, {PLAYER}!\n"
	.string "Are you and Maya doing alright?$"
