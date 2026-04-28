Route4_MapScripts::
	.byte 0


Route4_Talk_OldPrincesTrailHint::
# 4 "data/maps/Route4/scripts.pory"
	lock
# 5 "data/maps/Route4/scripts.pory"
	fadeoutbgm 2
# 6 "data/maps/Route4/scripts.pory"
	delay 90
# 7 "data/maps/Route4/scripts.pory"
	msgbox Route4_Talk_OldPrincesTrailHint_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/Route4/scripts.pory"
	closemessage
# 16 "data/maps/Route4/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 17 "data/maps/Route4/scripts.pory"
	switch VAR_0x8008
# 18 "data/maps/Route4/scripts.pory"
	case 17, Route4_Talk_OldPrincesTrailHint_3
# 19 "data/maps/Route4/scripts.pory"
	case 19, Route4_Talk_OldPrincesTrailHint_3
# 23 "data/maps/Route4/scripts.pory"
	case 18, Route4_Talk_OldPrincesTrailHint_4
Route4_Talk_OldPrincesTrailHint_1:
# 29 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route4/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/Route4/scripts.pory"
	setflag FLAG_STORY_ROUTE4_TRAIL_HINT
# 33 "data/maps/Route4/scripts.pory"
	fadeinbgm 1
# 34 "data/maps/Route4/scripts.pory"
	release
	return

Route4_Talk_OldPrincesTrailHint_3:
# 20 "data/maps/Route4/scripts.pory"
	applymovement VAR_LAST_TALKED, Route4_Talk_OldPrincesTrailHint_Movement_0
	goto Route4_Talk_OldPrincesTrailHint_1

Route4_Talk_OldPrincesTrailHint_4:
# 24 "data/maps/Route4/scripts.pory"
	applymovement VAR_LAST_TALKED, Route4_Talk_OldPrincesTrailHint_Movement_1
	goto Route4_Talk_OldPrincesTrailHint_1


Route4_Sign_RouteSign::
# 38 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_RouteSign_Text_0, MSGBOX_SIGN
	return


Route4_Talk_IndecisiveWoman::
# 48 "data/maps/Route4/scripts.pory"
	lock
# 49 "data/maps/Route4/scripts.pory"
	faceplayer
# 50 "data/maps/Route4/scripts.pory"
	msgbox Route4_Talk_IndecisiveWoman_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/Route4/scripts.pory"
	closemessage
# 68 "data/maps/Route4/scripts.pory"
	release
	return


Route4_Trainer_1::
# 72 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_1, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 80 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_2::
# 87 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_2, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 95 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_3::
# 102 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_3, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 110 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_4::
# 117 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_4, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 125 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_5::
# 132 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_5, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 140 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_6::
# 147 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_6, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 155 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_7::
# 162 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_7, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 170 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_8::
# 177 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_8, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 185 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_9::
# 192 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_9, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 200 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route4_Trainer_10::
# 207 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_10, Route4_Trainer_1_Text_0, Route4_Trainer_1_Text_0
# 215 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


# 20 "data/maps/Route4/scripts.pory"
Route4_Talk_OldPrincesTrailHint_Movement_0:
# 21 "data/maps/Route4/scripts.pory"
	walk_down
# 21 "data/maps/Route4/scripts.pory"
	walk_down
# 21 "data/maps/Route4/scripts.pory"
	walk_down
# 21 "data/maps/Route4/scripts.pory"
	walk_down
# 21 "data/maps/Route4/scripts.pory"
	walk_down
# 21 "data/maps/Route4/scripts.pory"
	walk_down
# 21 "data/maps/Route4/scripts.pory"
	walk_down
# 21 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/Route4/scripts.pory"
Route4_Talk_OldPrincesTrailHint_Movement_1:
# 25 "data/maps/Route4/scripts.pory"
	walk_right
# 26 "data/maps/Route4/scripts.pory"
	walk_down
# 26 "data/maps/Route4/scripts.pory"
	walk_down
# 26 "data/maps/Route4/scripts.pory"
	walk_down
# 26 "data/maps/Route4/scripts.pory"
	walk_down
# 26 "data/maps/Route4/scripts.pory"
	walk_down
# 26 "data/maps/Route4/scripts.pory"
	walk_down
# 26 "data/maps/Route4/scripts.pory"
	walk_down
# 26 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

Route4_Talk_OldPrincesTrailHint_Text_0:
# 8 "data/maps/Route4/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…\n"
	.string "…The way{PAUSE 20} beneath…\p"
	.string "…{PAUSE 10}There{PAUSE 20} is{PAUSE 5} a{PAUSE 5} way{PAUSE 30} beneath…$"

Route4_Sign_RouteSign_Text_0:
# 39 "data/maps/Route4/scripts.pory"
	.string "ROUTE 4\n"
	.string "{DOWN_ARROW} WHELCHORD CITY\l"
	.string "{RIGHT_ARROW} NAUTIRUST CITY\l"
	.string "{UP_ARROW} MOUNT BRIAR$"

Route4_Talk_IndecisiveWoman_Text_0:
# 51 "data/maps/Route4/scripts.pory"
	.string "Oh dear, oh dear.\n"
	.string "I'm exhausted… This route is so rugged… \p"
	.string "And it splits in two! \n"
	.string "which way should I go?\p"
	.string "I could turn around back to Nautirust \n"
	.string "City… but I already made it halfway to \l"
	.string "Whelchord City!\p"
	.string "Oh, what to do?\p"
	.string "…Maybe I can just pitch a tent, and say \n"
	.string "I live here now.$"

Route4_Trainer_1_Text_0:
# 75 "data/maps/Route4/scripts.pory"
	.string "TODO$"
