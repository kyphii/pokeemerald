Route1_MapScripts::
	.byte 0


Route1_Intro_PreventExitWest::
# 4 "data/maps/Route1/scripts.pory"
	msgbox Route1_Intro_PreventExitWest_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/Route1/scripts.pory"
	closemessage
# 10 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Intro_PreventExitWest_Movement_0
# 13 "data/maps/Route1/scripts.pory"
	waitmovement 0
	return


Route1_Intro_TalkBattler1::
# 17 "data/maps/Route1/scripts.pory"
	lock
# 18 "data/maps/Route1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WINGULL
# 19 "data/maps/Route1/scripts.pory"
	goto Route1_Intro_BattlerSeq
	return


Route1_Intro_TalkBattler2::
# 23 "data/maps/Route1/scripts.pory"
	lock
# 24 "data/maps/Route1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKITTY
# 25 "data/maps/Route1/scripts.pory"
	goto Route1_Intro_BattlerSeq
	return


Route1_Intro_BattlerSeq::
# 29 "data/maps/Route1/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Route1_Intro_BattlerSeq_2
Route1_Intro_BattlerSeq_1:
# 32 "data/maps/Route1/scripts.pory"
	addvar VAR_TEMP_0, 1
# 33 "data/maps/Route1/scripts.pory"
	switch VAR_TEMP_0
# 34 "data/maps/Route1/scripts.pory"
	case 1, Route1_Intro_BattlerSeq_6
# 39 "data/maps/Route1/scripts.pory"
	case 2, Route1_Intro_BattlerSeq_7
# 45 "data/maps/Route1/scripts.pory"
	case 3, Route1_Intro_BattlerSeq_8
# 51 "data/maps/Route1/scripts.pory"
	case 4, Route1_Intro_BattlerSeq_9
# 57 "data/maps/Route1/scripts.pory"
	case 5, Route1_Intro_BattlerSeq_10
Route1_Intro_BattlerSeq_4:
# 64 "data/maps/Route1/scripts.pory"
	closemessage
# 65 "data/maps/Route1/scripts.pory"
	release
	return

Route1_Intro_BattlerSeq_2:
# 30 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Route1_Intro_BattlerSeq_1

Route1_Intro_BattlerSeq_6:
# 35 "data/maps/Route1/scripts.pory"
	msgbox Route1_Intro_BattlerSeq_Text_0, MSGBOX_DEFAULT
	goto Route1_Intro_BattlerSeq_4

Route1_Intro_BattlerSeq_7:
# 40 "data/maps/Route1/scripts.pory"
	msgbox Route1_Intro_BattlerSeq_Text_1, MSGBOX_DEFAULT
	goto Route1_Intro_BattlerSeq_4

Route1_Intro_BattlerSeq_8:
# 46 "data/maps/Route1/scripts.pory"
	msgbox Route1_Intro_BattlerSeq_Text_2, MSGBOX_DEFAULT
	goto Route1_Intro_BattlerSeq_4

Route1_Intro_BattlerSeq_9:
# 52 "data/maps/Route1/scripts.pory"
	msgbox Route1_Intro_BattlerSeq_Text_3, MSGBOX_DEFAULT
	goto Route1_Intro_BattlerSeq_4

Route1_Intro_BattlerSeq_10:
# 58 "data/maps/Route1/scripts.pory"
	msgbox Route1_Intro_BattlerSeq_Text_4, MSGBOX_DEFAULT
	goto Route1_Intro_BattlerSeq_4


Route1_Intro_CryWingull::
# 69 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 70 "data/maps/Route1/scripts.pory"
	waitmoncry
	return


Route1_Intro_CrySkitty::
# 74 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 75 "data/maps/Route1/scripts.pory"
	waitmoncry
	return


Route1_Talk_RoadWorker::
# 79 "data/maps/Route1/scripts.pory"
	lock
# 80 "data/maps/Route1/scripts.pory"
	faceplayer
# 81 "data/maps/Route1/scripts.pory"
	msgbox Route1_Talk_RoadWorker_Text_0, MSGBOX_DEFAULT
# 90 "data/maps/Route1/scripts.pory"
	closemessage
# 91 "data/maps/Route1/scripts.pory"
	release
	return


Route1_Talk_ConspiracyLady::
# 95 "data/maps/Route1/scripts.pory"
	lock
# 96 "data/maps/Route1/scripts.pory"
	faceplayer
# 97 "data/maps/Route1/scripts.pory"
	msgbox Route1_Talk_ConspiracyLady_Text_0, MSGBOX_DEFAULT
# 110 "data/maps/Route1/scripts.pory"
	closemessage
# 111 "data/maps/Route1/scripts.pory"
	release
	return


Route1_RouteSign::
# 115 "data/maps/Route1/scripts.pory"
	msgbox Route1_RouteSign_Text_0, MSGBOX_SIGN
# 122 "data/maps/Route1/scripts.pory"
	closemessage
	return


# 10 "data/maps/Route1/scripts.pory"
Route1_Intro_PreventExitWest_Movement_0:
# 11 "data/maps/Route1/scripts.pory"
	walk_right
	step_end

Route1_Intro_PreventExitWest_Text_0:
# 5 "data/maps/Route1/scripts.pory"
	.string "They're locked in a heated battle.\n"
	.string "Best not get in the way.$"

Route1_Intro_BattlerSeq_Text_0:
# 36 "data/maps/Route1/scripts.pory"
	.string "{STR_VAR_1}, use GROWL!$"

Route1_Intro_BattlerSeq_Text_1:
# 41 "data/maps/Route1/scripts.pory"
	.string "{STR_VAR_1}, stay focused!\n"
	.string "Counter with a GROWL$"

Route1_Intro_BattlerSeq_Text_2:
# 47 "data/maps/Route1/scripts.pory"
	.string "{STR_VAR_1}, now's your chance!\n"
	.string "GROWL!$"

Route1_Intro_BattlerSeq_Text_3:
# 53 "data/maps/Route1/scripts.pory"
	.string "Gah, we can't take much more!\n"
	.string "GROWL, {STR_VAR_1}, GROWL!$"

Route1_Intro_BattlerSeq_Text_4:
# 59 "data/maps/Route1/scripts.pory"
	.string "This is it, {STR_VAR_1}!\n"
	.string "Use GROWL!$"

Route1_Talk_RoadWorker_Text_0:
# 82 "data/maps/Route1/scripts.pory"
	.string "The renovations on the road are still\n"
	.string "ongoing. It will take time to clear all\l"
	.string "the overgrowth.\p"
	.string "If you have to get through, make sure\n"
	.string "you have a Pokémon with you.$"

Route1_Talk_ConspiracyLady_Text_0:
# 98 "data/maps/Route1/scripts.pory"
	.string "Are you headed to the lab up north?\p"
	.string "I tried to get an interview with\n"
	.string "Professor Hawthorn, but she slammed\l"
	.string "the door in my face! The indignity!\p"
	.string "All I wanted was to ask her about her\n"
	.string "research, and her accomplishments, and\l"
	.string "her opinions on my Ditto People Theory!\l"
	.string "Now who am I gonna have on my podcast?$"

Route1_RouteSign_Text_0:
# 116 "data/maps/Route1/scripts.pory"
	.string "ROUTE 1\n"
	.string "{UP_ARROW} HAWTHORN LABS\l"
	.string "{LEFT_ARROW} NAUTIRUST CITY\l"
	.string "{RIGHT_ARROW} MARINACRE TOWN$"
