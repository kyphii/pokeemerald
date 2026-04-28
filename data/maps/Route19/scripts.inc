Route19_MapScripts::
	.byte 0


Route19_Sign_RouteSign::
# 4 "data/maps/Route19/scripts.pory"
	msgbox Route19_Sign_RouteSign_Text_0, MSGBOX_SIGN
	return


Route19_Sign_CutMasterHouse::
# 13 "data/maps/Route19/scripts.pory"
	msgbox Route19_Sign_CutMasterHouse_Text_0, MSGBOX_SIGN
	return


Route19_Script_Talk_BenchGirl::
# 20 "data/maps/Route19/scripts.pory"
	lock
# 21 "data/maps/Route19/scripts.pory"
	faceplayer
# 22 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/Route19/scripts.pory"
	release
	return


Route19_Trainer_1::
# 30 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_ROUTE19_1, Route19_Script_Talk_BenchGirl_Text_0, Route19_Script_Talk_BenchGirl_Text_0
# 38 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_AUTOCLOSE
	return


Route19_Trainer_2::
# 45 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_ROUTE19_2, Route19_Script_Talk_BenchGirl_Text_0, Route19_Script_Talk_BenchGirl_Text_0
# 53 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_AUTOCLOSE
	return


Route19_Trainer_3::
# 60 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_ROUTE19_3, Route19_Script_Talk_BenchGirl_Text_0, Route19_Script_Talk_BenchGirl_Text_0
# 68 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_AUTOCLOSE
	return


Route19_Trainer_4::
# 75 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_ROUTE19_4, Route19_Script_Talk_BenchGirl_Text_0, Route19_Script_Talk_BenchGirl_Text_0
# 83 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_AUTOCLOSE
	return


Route19_Trainer_5::
# 90 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_ROUTE19_5, Route19_Script_Talk_BenchGirl_Text_0, Route19_Script_Talk_BenchGirl_Text_0
# 98 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_AUTOCLOSE
	return


Route19_Trainer_6::
# 105 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_ROUTE19_6, Route19_Script_Talk_BenchGirl_Text_0, Route19_Script_Talk_BenchGirl_Text_0
# 113 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_AUTOCLOSE
	return


Route19_Trainer_7::
# 120 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_ROUTE19_7, Route19_Script_Talk_BenchGirl_Text_0, Route19_Script_Talk_BenchGirl_Text_0
# 128 "data/maps/Route19/scripts.pory"
	msgbox Route19_Script_Talk_BenchGirl_Text_0, MSGBOX_AUTOCLOSE
	return


Route19_Sign_RouteSign_Text_0:
# 5 "data/maps/Route19/scripts.pory"
	.string "ROUTE 19\n"
	.string "{UP_ARROW} NAUTIRUST CITY\l"
	.string "{DOWN_ARROW} JUNOPOLIS CITY$"

Route19_Sign_CutMasterHouse_Text_0:
# 14 "data/maps/Route19/scripts.pory"
	.string "Home of the CUT MASTER$"

Route19_Script_Talk_BenchGirl_Text_0:
# 23 "data/maps/Route19/scripts.pory"
	.string "TODO$"
