MountBriar_MapScripts::
	.byte 0


MountBriar_Talk_LiftAttendant::
# 4 "data/maps/MountBriar/scripts.pory"
	lock
# 5 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 6 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Text_RideLift, MSGBOX_YESNO
# 7 "data/maps/MountBriar/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MountBriar_Talk_LiftAttendant_1
# 18 "data/maps/MountBriar/scripts.pory"
	closemessage
# 19 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Talk_LiftAttendant_1:
# 8 "data/maps/MountBriar/scripts.pory"
	closemessage
# 9 "data/maps/MountBriar/scripts.pory"
	release
# 10 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Talk_LiftAttendant_Movement_0
# 14 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 15 "data/maps/MountBriar/scripts.pory"
	goto MountBriar_Script_RideLift
	return


MountBriar_Trigger_LiftAttendant::
# 24 "data/maps/MountBriar/scripts.pory"
	lock
# 25 "data/maps/MountBriar/scripts.pory"
	turnobject LOCALID_LIFT_ATTENDANT, DIR_EAST
# 26 "data/maps/MountBriar/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 27 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Text_RideLift, MSGBOX_YESNO
# 28 "data/maps/MountBriar/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MountBriar_Trigger_LiftAttendant_2
MountBriar_Trigger_LiftAttendant_1:
# 31 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Trigger_LiftAttendant_2:
# 29 "data/maps/MountBriar/scripts.pory"
	goto MountBriar_Script_RideLift
	goto MountBriar_Trigger_LiftAttendant_1


MountBriar_Script_RideLift::
# 35 "data/maps/MountBriar/scripts.pory"
	closemessage
# 38 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_SKI_LIFT
# 39 "data/maps/MountBriar/scripts.pory"
	addobject LOCALID_SKI_LIFT
# 41 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Script_RideLift_Movement_0
# 44 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 45 "data/maps/MountBriar/scripts.pory"
	delay 20
# 47 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Moves_SkiLift
# 48 "data/maps/MountBriar/scripts.pory"
	delay 1
# 49 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_SKI_LIFT, MountBriar_Moves_SkiLift
# 50 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 52 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Script_RideLift_Movement_1
# 56 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
	return


MountBriar_Talk_CutMaster::
# 60 "data/maps/MountBriar/scripts.pory"
	lock
# 61 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_0
# 64 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 65 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMaster_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/MountBriar/scripts.pory"
	playmoncry SPECIES_SCYTHER, 0
# 78 "data/maps/MountBriar/scripts.pory"
	delay 15
# 79 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_MOUNTBRIAR_TREE, Movement_CutTreeDown
# 80 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 81 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_MOUNTBRIAR_TREE
# 83 "data/maps/MountBriar/scripts.pory"
	delay 15
# 84 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 86 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMaster_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/MountBriar/scripts.pory"
	closemessage
# 103 "data/maps/MountBriar/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
# 104 "data/maps/MountBriar/scripts.pory"
	delay 20
# 105 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_MOUNTBRIAR_CUTMASTERMON
# 106 "data/maps/MountBriar/scripts.pory"
	playse SE_BALL
# 108 "data/maps/MountBriar/scripts.pory"
	delay 30
# 110 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_1
# 129 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 131 "data/maps/MountBriar/scripts.pory"
	removeobject VAR_LAST_TALKED
# 132 "data/maps/MountBriar/scripts.pory"
	setflag FLAG_STORY_MET_CUT_MASTER
# 133 "data/maps/MountBriar/scripts.pory"
	clearflag FLAG_STORY_CUT_MASTER_AWAY
# 135 "data/maps/MountBriar/scripts.pory"
	release
	return


MountBriar_Talk_CutMasterMon::
# 139 "data/maps/MountBriar/scripts.pory"
	playmoncry SPECIES_SCYTHER, 0
# 140 "data/maps/MountBriar/scripts.pory"
	waitmoncry
# 141 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMasterMon_Text_0, MSGBOX_DEFAULT
# 146 "data/maps/MountBriar/scripts.pory"
	closemessage
	return


# 154 "data/maps/MountBriar/scripts.pory"
MountBriar_Moves_SkiLift:
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
# 155 "data/maps/MountBriar/scripts.pory"
	force_up
	step_end

# 10 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_LiftAttendant_Movement_0:
# 11 "data/maps/MountBriar/scripts.pory"
	walk_right
# 12 "data/maps/MountBriar/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/MountBriar/scripts.pory"
MountBriar_Script_RideLift_Movement_0:
# 42 "data/maps/MountBriar/scripts.pory"
	walk_up
# 42 "data/maps/MountBriar/scripts.pory"
	walk_up
# 42 "data/maps/MountBriar/scripts.pory"
	walk_up
	step_end

# 52 "data/maps/MountBriar/scripts.pory"
MountBriar_Script_RideLift_Movement_1:
# 53 "data/maps/MountBriar/scripts.pory"
	force_up
# 54 "data/maps/MountBriar/scripts.pory"
	jump_up
	step_end

# 61 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_0:
# 62 "data/maps/MountBriar/scripts.pory"
	walk_in_place_left
# 62 "data/maps/MountBriar/scripts.pory"
	walk_in_place_left
	step_end

# 110 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_1:
# 111 "data/maps/MountBriar/scripts.pory"
	walk_left
# 111 "data/maps/MountBriar/scripts.pory"
	walk_left
# 111 "data/maps/MountBriar/scripts.pory"
	walk_left
# 112 "data/maps/MountBriar/scripts.pory"
	walk_down
# 113 "data/maps/MountBriar/scripts.pory"
	delay_16
# 113 "data/maps/MountBriar/scripts.pory"
	delay_16
# 114 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 114 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 114 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 114 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 115 "data/maps/MountBriar/scripts.pory"
	force_down
# 115 "data/maps/MountBriar/scripts.pory"
	force_down
# 115 "data/maps/MountBriar/scripts.pory"
	force_down
# 116 "data/maps/MountBriar/scripts.pory"
	face_right
# 117 "data/maps/MountBriar/scripts.pory"
	force_right
# 118 "data/maps/MountBriar/scripts.pory"
	face_down
# 119 "data/maps/MountBriar/scripts.pory"
	force_down
# 120 "data/maps/MountBriar/scripts.pory"
	face_right
# 121 "data/maps/MountBriar/scripts.pory"
	force_right
# 121 "data/maps/MountBriar/scripts.pory"
	force_right
# 121 "data/maps/MountBriar/scripts.pory"
	force_right
# 121 "data/maps/MountBriar/scripts.pory"
	force_right
# 121 "data/maps/MountBriar/scripts.pory"
	force_right
# 121 "data/maps/MountBriar/scripts.pory"
	force_right
# 122 "data/maps/MountBriar/scripts.pory"
	face_down
# 123 "data/maps/MountBriar/scripts.pory"
	force_down
# 124 "data/maps/MountBriar/scripts.pory"
	face_right
# 125 "data/maps/MountBriar/scripts.pory"
	force_right
# 126 "data/maps/MountBriar/scripts.pory"
	face_down
# 127 "data/maps/MountBriar/scripts.pory"
	force_down
# 127 "data/maps/MountBriar/scripts.pory"
	force_down
	step_end

MountBriar_Talk_CutMaster_Text_0:
# 66 "data/maps/MountBriar/scripts.pory"
	.string "Observe, if you will,\n"
	.string "the obstacle before you.\p"
	.string "Contemplate its shape.\n"
	.string "In every shape lies a weakness,\l"
	.string "a fault plane.\p"
	.string "Align your blade with that…\n"
	.string "and then…{PAUSE 30} release!$"

MountBriar_Talk_CutMaster_Text_1:
# 87 "data/maps/MountBriar/scripts.pory"
	.string "To have sought me out on this \n"
	.string "mountain… you seek the CUT technique, \l"
	.string "surely.\p"
	.string "Very well!\p"
	.string "If you are truly dedicated to obtain my\n"
	.string "secret art…\p"
	.string "Then find me once more, in my most\n"
	.string "secret of sanctuaries!\l"
	.string "I will be waiting!$"

MountBriar_Talk_CutMasterMon_Text_0:
# 142 "data/maps/MountBriar/scripts.pory"
	.string "Scyther is focused intently, ready to\n"
	.string "strike.$"

MountBriar_Text_RideLift::
# 149 "data/maps/MountBriar/scripts.pory"
	.string "Hello. Do you want to ride the lift \n"
	.string "to the summit?$"
