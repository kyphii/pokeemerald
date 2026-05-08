MountBriar_MapScripts::
# 2 "data/maps/MountBriar/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MountBriar_MapScripts_MAP_SCRIPT_ON_RESUME
# 5 "data/maps/MountBriar/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MountBriar_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MountBriar_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/MountBriar/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

MountBriar_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/MountBriar/scripts.pory"
	goto_if_unset FLAG_VISITED_MOUNT_BRIAR, MountBriar_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MountBriar_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/MountBriar/scripts.pory"
	setflag FLAG_VISITED_MOUNT_BRIAR
# 8 "data/maps/MountBriar/scripts.pory"
	addplayerlevel 1
	return


MountBriar_Sign_Lodge::
# 14 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Sign_Lodge_Text_0, MSGBOX_SIGN
	return


MountBriar_Talk_Man1::
# 21 "data/maps/MountBriar/scripts.pory"
	lock
# 22 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 23 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/MountBriar/scripts.pory"
	closemessage
# 28 "data/maps/MountBriar/scripts.pory"
	release
	return


MountBriar_Talk_Woman1::
# 32 "data/maps/MountBriar/scripts.pory"
	lock
# 33 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 34 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/MountBriar/scripts.pory"
	closemessage
# 39 "data/maps/MountBriar/scripts.pory"
	release
	return


MountBriar_Talk_Woman2::
# 43 "data/maps/MountBriar/scripts.pory"
	lock
# 44 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/MountBriar/scripts.pory"
	closemessage
# 49 "data/maps/MountBriar/scripts.pory"
	release
	return


MountBriar_Trainer_1::
# 53 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_1, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 61 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_2::
# 68 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_2, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 76 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_3::
# 83 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_3, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 91 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_4::
# 98 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_4, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 106 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_5::
# 113 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_5, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 121 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_6::
# 128 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_6, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 136 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Talk_LiftAttendant::
# 143 "data/maps/MountBriar/scripts.pory"
	lock
# 144 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 145 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Text_RideLift, MSGBOX_YESNO
# 146 "data/maps/MountBriar/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MountBriar_Talk_LiftAttendant_1
# 157 "data/maps/MountBriar/scripts.pory"
	closemessage
# 158 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Talk_LiftAttendant_1:
# 147 "data/maps/MountBriar/scripts.pory"
	closemessage
# 148 "data/maps/MountBriar/scripts.pory"
	release
# 149 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Talk_LiftAttendant_Movement_0
# 153 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 154 "data/maps/MountBriar/scripts.pory"
	goto MountBriar_Script_RideLift
	return


MountBriar_Trigger_LiftAttendant::
# 163 "data/maps/MountBriar/scripts.pory"
	lock
# 164 "data/maps/MountBriar/scripts.pory"
	turnobject LOCALID_LIFT_ATTENDANT, DIR_EAST
# 165 "data/maps/MountBriar/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 166 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Text_RideLift, MSGBOX_YESNO
# 167 "data/maps/MountBriar/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MountBriar_Trigger_LiftAttendant_2
MountBriar_Trigger_LiftAttendant_1:
# 170 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Trigger_LiftAttendant_2:
# 168 "data/maps/MountBriar/scripts.pory"
	goto MountBriar_Script_RideLift
	goto MountBriar_Trigger_LiftAttendant_1


MountBriar_Script_RideLift::
# 174 "data/maps/MountBriar/scripts.pory"
	closemessage
# 177 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_SKI_LIFT
# 178 "data/maps/MountBriar/scripts.pory"
	addobject LOCALID_SKI_LIFT
# 180 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Script_RideLift_Movement_0
# 183 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 184 "data/maps/MountBriar/scripts.pory"
	delay 20
# 186 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Moves_SkiLift
# 187 "data/maps/MountBriar/scripts.pory"
	delay 1
# 188 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_SKI_LIFT, MountBriar_Moves_SkiLift
# 189 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 191 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Script_RideLift_Movement_1
# 195 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
	return


MountBriar_Talk_CutMaster::
# 199 "data/maps/MountBriar/scripts.pory"
	lock
# 200 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceLeft
# 201 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 202 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMaster_Text_0, MSGBOX_DEFAULT
# 214 "data/maps/MountBriar/scripts.pory"
	playmoncry SPECIES_SCYTHER, 0
# 215 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceLeft
# 216 "data/maps/MountBriar/scripts.pory"
	delay 15
# 217 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_MOUNTBRIAR_TREE, Movement_CutTreeDown
# 218 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 219 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_MOUNTBRIAR_TREE
# 221 "data/maps/MountBriar/scripts.pory"
	delay 15
# 222 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 224 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMaster_Text_1, MSGBOX_DEFAULT
# 239 "data/maps/MountBriar/scripts.pory"
	closemessage
# 241 "data/maps/MountBriar/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
# 242 "data/maps/MountBriar/scripts.pory"
	delay 20
# 243 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_MOUNTBRIAR_CUTMASTERMON
# 244 "data/maps/MountBriar/scripts.pory"
	playse SE_BALL
# 246 "data/maps/MountBriar/scripts.pory"
	delay 30
# 248 "data/maps/MountBriar/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 249 "data/maps/MountBriar/scripts.pory"
	switch VAR_0x8008
# 250 "data/maps/MountBriar/scripts.pory"
	case 40, MountBriar_Talk_CutMaster_3
# 255 "data/maps/MountBriar/scripts.pory"
	case 41, MountBriar_Talk_CutMaster_4
MountBriar_Talk_CutMaster_1:
# 261 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 263 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_2
# 274 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 276 "data/maps/MountBriar/scripts.pory"
	removeobject VAR_LAST_TALKED
# 277 "data/maps/MountBriar/scripts.pory"
	setflag FLAG_STORY_MET_CUT_MASTER
# 278 "data/maps/MountBriar/scripts.pory"
	clearflag FLAG_STORY_CUT_MASTER_AWAY
# 280 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Talk_CutMaster_3:
# 251 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_0
	goto MountBriar_Talk_CutMaster_1

MountBriar_Talk_CutMaster_4:
# 256 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_1
	goto MountBriar_Talk_CutMaster_1


MountBriar_Talk_CutMasterMon::
# 284 "data/maps/MountBriar/scripts.pory"
	playmoncry SPECIES_SCYTHER, 0
# 285 "data/maps/MountBriar/scripts.pory"
	waitmoncry
# 286 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMasterMon_Text_0, MSGBOX_DEFAULT
# 291 "data/maps/MountBriar/scripts.pory"
	closemessage
	return


# 299 "data/maps/MountBriar/scripts.pory"
MountBriar_Moves_SkiLift:
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
# 300 "data/maps/MountBriar/scripts.pory"
	force_up
	step_end

# 149 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_LiftAttendant_Movement_0:
# 150 "data/maps/MountBriar/scripts.pory"
	walk_right
# 151 "data/maps/MountBriar/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/MountBriar/scripts.pory"
MountBriar_Script_RideLift_Movement_0:
# 181 "data/maps/MountBriar/scripts.pory"
	walk_up
# 181 "data/maps/MountBriar/scripts.pory"
	walk_up
# 181 "data/maps/MountBriar/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/MountBriar/scripts.pory"
MountBriar_Script_RideLift_Movement_1:
# 192 "data/maps/MountBriar/scripts.pory"
	force_up
# 193 "data/maps/MountBriar/scripts.pory"
	jump_up
	step_end

# 251 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_0:
# 252 "data/maps/MountBriar/scripts.pory"
	walk_right
# 253 "data/maps/MountBriar/scripts.pory"
	walk_down
	step_end

# 256 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_1:
# 257 "data/maps/MountBriar/scripts.pory"
	walk_down
# 258 "data/maps/MountBriar/scripts.pory"
	walk_right
	step_end

# 263 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_2:
# 264 "data/maps/MountBriar/scripts.pory"
	walk_right
# 265 "data/maps/MountBriar/scripts.pory"
	walk_down
# 266 "data/maps/MountBriar/scripts.pory"
	delay_16
# 266 "data/maps/MountBriar/scripts.pory"
	delay_16
# 267 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 267 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 267 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 267 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 268 "data/maps/MountBriar/scripts.pory"
	force_down
# 268 "data/maps/MountBriar/scripts.pory"
	force_down
# 268 "data/maps/MountBriar/scripts.pory"
	force_down
# 268 "data/maps/MountBriar/scripts.pory"
	force_down
# 268 "data/maps/MountBriar/scripts.pory"
	force_down
# 269 "data/maps/MountBriar/scripts.pory"
	face_left
# 270 "data/maps/MountBriar/scripts.pory"
	force_left
# 271 "data/maps/MountBriar/scripts.pory"
	face_down
# 272 "data/maps/MountBriar/scripts.pory"
	force_down
	step_end

MountBriar_Sign_Lodge_Text_0:
# 15 "data/maps/MountBriar/scripts.pory"
	.string "Aurora Veil Lodge$"

MountBriar_Talk_Man1_Text_0:
# 24 "data/maps/MountBriar/scripts.pory"
	.string "TODO$"

MountBriar_Talk_CutMaster_Text_0:
# 203 "data/maps/MountBriar/scripts.pory"
	.string "Observe, if you will,\n"
	.string "the obstacle before you.\p"
	.string "Contemplate its shape.\n"
	.string "In every shape lies a weakness,\l"
	.string "a fault plane.\p"
	.string "Align your blade with that…\n"
	.string "and then…{PAUSE 30} release!$"

MountBriar_Talk_CutMaster_Text_1:
# 225 "data/maps/MountBriar/scripts.pory"
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
# 287 "data/maps/MountBriar/scripts.pory"
	.string "Scyther is focused intently, ready to\n"
	.string "strike.$"

MountBriar_Text_RideLift::
# 294 "data/maps/MountBriar/scripts.pory"
	.string "Hello. Do you want to ride the lift \n"
	.string "to the summit?$"
