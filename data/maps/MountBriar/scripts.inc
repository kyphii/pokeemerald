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


# 64 "data/maps/MountBriar/scripts.pory"
MountBriar_Moves_SkiLift:
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
	force_up
# 65 "data/maps/MountBriar/scripts.pory"
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

MountBriar_Text_RideLift::
# 59 "data/maps/MountBriar/scripts.pory"
	.string "Hello. Do you want to ride the lift \n"
	.string "to the summit?$"
