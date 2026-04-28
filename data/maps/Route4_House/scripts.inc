Route4_House_MapScripts::
	.byte 0


Route4_House_TalkWoman::
# 4 "data/maps/Route4_House/scripts.pory"
	goto_if_set FLAG_ROUTE_4_MET_HEALER, Route4_House_TalkWoman_1
# 36 "data/maps/Route4_House/scripts.pory"
	lock
# 37 "data/maps/Route4_House/scripts.pory"
	faceplayer
# 39 "data/maps/Route4_House/scripts.pory"
	msgbox Route4_House_TalkWoman_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/Route4_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 61 "data/maps/Route4_House/scripts.pory"
	msgbox Route4_House_TalkWoman_Text_3, MSGBOX_DEFAULT
# 72 "data/maps/Route4_House/scripts.pory"
	setflag FLAG_ROUTE_4_MET_HEALER
# 74 "data/maps/Route4_House/scripts.pory"
	closemessage
# 75 "data/maps/Route4_House/scripts.pory"
	release
	return

Route4_House_TalkWoman_1:
# 5 "data/maps/Route4_House/scripts.pory"
	lock
# 6 "data/maps/Route4_House/scripts.pory"
	faceplayer
# 8 "data/maps/Route4_House/scripts.pory"
	msgbox Route4_House_TalkWoman_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/Route4_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 24 "data/maps/Route4_House/scripts.pory"
	msgbox Route4_House_TalkWoman_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/Route4_House/scripts.pory"
	closemessage
# 33 "data/maps/Route4_House/scripts.pory"
	release
	return


Route4_House_TalkWoman_Text_0:
# 9 "data/maps/Route4_House/scripts.pory"
	.string "Oh, it's you again. Welcome!\p"
	.string "Still on that mission of yours? I'd love \n"
	.string "to hear about it!\p"
	.string "Oh, do you and your Pokémon need a \n"
	.string "rest?\p"
	.string "I've just brewed a pot of tea. Come, \n"
	.string "stay a while!$"

Route4_House_TalkWoman_Text_1:
# 25 "data/maps/Route4_House/scripts.pory"
	.string "Wonderful! Your Pokémon look all ready \n"
	.string "to get back out there!\p"
	.string "Good luck!$"

Route4_House_TalkWoman_Text_2:
# 40 "data/maps/Route4_House/scripts.pory"
	.string "Oh, hello. Are you a traveling \n"
	.string "Pokémon trainer?\p"
	.string "What brings you on this rocky route?\p"
	.string "…\p"
	.string "Missing Pokémon? You want to return \n"
	.string "them to their original owner?\p"
	.string "Wow, what a story! What a wonderful \n"
	.string "goal you have!\p"
	.string "You look tired from your journey. \n"
	.string "Come, stay a while, and tell me about \l"
	.string "your adventure!$"

Route4_House_TalkWoman_Text_3:
# 62 "data/maps/Route4_House/scripts.pory"
	.string "How exciting!\p"
	.string "Well, I shouldn't keep you. It looks like \n"
	.string "your Pokémon are rested up and ready \l"
	.string "to get back out there!\p"
	.string "Good luck, trainer!$"
