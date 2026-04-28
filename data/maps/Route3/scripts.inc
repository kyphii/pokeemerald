Route3_MapScripts::
	.byte 0


Route3_Sign_RouteSign::
# 4 "data/maps/Route3/scripts.pory"
	msgbox Route3_Sign_RouteSign_Text_0, MSGBOX_SIGN
	return


Route3_Trainer_1::
# 13 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_1, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 21 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_2::
# 28 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_2, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 36 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_3::
# 43 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_3, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 51 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_4::
# 58 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_4, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 66 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_5::
# 73 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_5, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 81 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_6::
# 88 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_6, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 96 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_7::
# 103 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_7, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 111 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Trainer_8::
# 118 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_8, Route3_Trainer_1_Text_0, Route3_Trainer_1_Text_0
# 126 "data/maps/Route3/scripts.pory"
	msgbox Route3_Trainer_1_Text_0, MSGBOX_AUTOCLOSE
	return


Route3_Sign_RouteSign_Text_0:
# 5 "data/maps/Route3/scripts.pory"
	.string "ROUTE 3\n"
	.string "{LEFT_ARROW} WHELCHORD CITY\l"
	.string "{RIGHT_ARROW} NAUTIRUST CITY$"

Route3_Trainer_1_Text_0:
# 16 "data/maps/Route3/scripts.pory"
	.string "TODO$"
