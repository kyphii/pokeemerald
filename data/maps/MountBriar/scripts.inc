MountBriar_MapScripts::
	.byte 0


MountBriar_Sign_Lodge::
# 4 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Sign_Lodge_Text_0, MSGBOX_SIGN
	return


MountBriar_Talk_Man1::
# 11 "data/maps/MountBriar/scripts.pory"
	lock
# 12 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 13 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/MountBriar/scripts.pory"
	closemessage
# 18 "data/maps/MountBriar/scripts.pory"
	release
	return


MountBriar_Talk_Woman1::
# 22 "data/maps/MountBriar/scripts.pory"
	lock
# 23 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 24 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/MountBriar/scripts.pory"
	closemessage
# 29 "data/maps/MountBriar/scripts.pory"
	release
	return


MountBriar_Talk_Woman2::
# 33 "data/maps/MountBriar/scripts.pory"
	lock
# 34 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/MountBriar/scripts.pory"
	closemessage
# 39 "data/maps/MountBriar/scripts.pory"
	release
	return


MountBriar_Trainer_1::
# 43 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_1, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 51 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_2::
# 58 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_2, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 66 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_3::
# 73 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_3, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 81 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_4::
# 88 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_4, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 96 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_5::
# 103 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_5, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 111 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Trainer_6::
# 118 "data/maps/MountBriar/scripts.pory"
	trainerbattle_single TRAINER_MOUNT_BRIAR_6, MountBriar_Talk_Man1_Text_0, MountBriar_Talk_Man1_Text_0
# 126 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_Man1_Text_0, MSGBOX_AUTOCLOSE
	return


MountBriar_Talk_LiftAttendant::
# 133 "data/maps/MountBriar/scripts.pory"
	lock
# 134 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 135 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Text_RideLift, MSGBOX_YESNO
# 136 "data/maps/MountBriar/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MountBriar_Talk_LiftAttendant_1
# 147 "data/maps/MountBriar/scripts.pory"
	closemessage
# 148 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Talk_LiftAttendant_1:
# 137 "data/maps/MountBriar/scripts.pory"
	closemessage
# 138 "data/maps/MountBriar/scripts.pory"
	release
# 139 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Talk_LiftAttendant_Movement_0
# 143 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 144 "data/maps/MountBriar/scripts.pory"
	goto MountBriar_Script_RideLift
	return


MountBriar_Trigger_LiftAttendant::
# 153 "data/maps/MountBriar/scripts.pory"
	lock
# 154 "data/maps/MountBriar/scripts.pory"
	turnobject LOCALID_LIFT_ATTENDANT, DIR_EAST
# 155 "data/maps/MountBriar/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 156 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Text_RideLift, MSGBOX_YESNO
# 157 "data/maps/MountBriar/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MountBriar_Trigger_LiftAttendant_2
MountBriar_Trigger_LiftAttendant_1:
# 160 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Trigger_LiftAttendant_2:
# 158 "data/maps/MountBriar/scripts.pory"
	goto MountBriar_Script_RideLift
	goto MountBriar_Trigger_LiftAttendant_1


MountBriar_Script_RideLift::
# 164 "data/maps/MountBriar/scripts.pory"
	closemessage
# 167 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_SKI_LIFT
# 168 "data/maps/MountBriar/scripts.pory"
	addobject LOCALID_SKI_LIFT
# 170 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Script_RideLift_Movement_0
# 173 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 174 "data/maps/MountBriar/scripts.pory"
	delay 20
# 176 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Moves_SkiLift
# 177 "data/maps/MountBriar/scripts.pory"
	delay 1
# 178 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_SKI_LIFT, MountBriar_Moves_SkiLift
# 179 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 181 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_PLAYER, MountBriar_Script_RideLift_Movement_1
# 185 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
	return


MountBriar_Talk_CutMaster::
# 189 "data/maps/MountBriar/scripts.pory"
	lock
# 190 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_0
# 193 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 194 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMaster_Text_0, MSGBOX_DEFAULT
# 206 "data/maps/MountBriar/scripts.pory"
	playmoncry SPECIES_SCYTHER, 0
# 207 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_0
# 210 "data/maps/MountBriar/scripts.pory"
	delay 15
# 211 "data/maps/MountBriar/scripts.pory"
	applymovement LOCALID_MOUNTBRIAR_TREE, Movement_CutTreeDown
# 212 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 213 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_MOUNTBRIAR_TREE
# 215 "data/maps/MountBriar/scripts.pory"
	delay 15
# 216 "data/maps/MountBriar/scripts.pory"
	faceplayer
# 218 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMaster_Text_1, MSGBOX_DEFAULT
# 233 "data/maps/MountBriar/scripts.pory"
	closemessage
# 235 "data/maps/MountBriar/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
# 236 "data/maps/MountBriar/scripts.pory"
	delay 20
# 237 "data/maps/MountBriar/scripts.pory"
	removeobject LOCALID_MOUNTBRIAR_CUTMASTERMON
# 238 "data/maps/MountBriar/scripts.pory"
	playse SE_BALL
# 240 "data/maps/MountBriar/scripts.pory"
	delay 30
# 242 "data/maps/MountBriar/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 243 "data/maps/MountBriar/scripts.pory"
	switch VAR_0x8008
# 244 "data/maps/MountBriar/scripts.pory"
	case 40, MountBriar_Talk_CutMaster_3
# 249 "data/maps/MountBriar/scripts.pory"
	case 41, MountBriar_Talk_CutMaster_4
MountBriar_Talk_CutMaster_1:
# 255 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 257 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_3
# 268 "data/maps/MountBriar/scripts.pory"
	waitmovement 0
# 270 "data/maps/MountBriar/scripts.pory"
	removeobject VAR_LAST_TALKED
# 271 "data/maps/MountBriar/scripts.pory"
	setflag FLAG_STORY_MET_CUT_MASTER
# 272 "data/maps/MountBriar/scripts.pory"
	clearflag FLAG_STORY_CUT_MASTER_AWAY
# 274 "data/maps/MountBriar/scripts.pory"
	release
	return

MountBriar_Talk_CutMaster_3:
# 245 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_1
	goto MountBriar_Talk_CutMaster_1

MountBriar_Talk_CutMaster_4:
# 250 "data/maps/MountBriar/scripts.pory"
	applymovement VAR_LAST_TALKED, MountBriar_Talk_CutMaster_Movement_2
	goto MountBriar_Talk_CutMaster_1


MountBriar_Talk_CutMasterMon::
# 278 "data/maps/MountBriar/scripts.pory"
	playmoncry SPECIES_SCYTHER, 0
# 279 "data/maps/MountBriar/scripts.pory"
	waitmoncry
# 280 "data/maps/MountBriar/scripts.pory"
	msgbox MountBriar_Talk_CutMasterMon_Text_0, MSGBOX_DEFAULT
# 285 "data/maps/MountBriar/scripts.pory"
	closemessage
	return


# 293 "data/maps/MountBriar/scripts.pory"
MountBriar_Moves_SkiLift:
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
# 294 "data/maps/MountBriar/scripts.pory"
	force_up
	step_end

# 139 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_LiftAttendant_Movement_0:
# 140 "data/maps/MountBriar/scripts.pory"
	walk_right
# 141 "data/maps/MountBriar/scripts.pory"
	walk_up
	step_end

# 170 "data/maps/MountBriar/scripts.pory"
MountBriar_Script_RideLift_Movement_0:
# 171 "data/maps/MountBriar/scripts.pory"
	walk_up
# 171 "data/maps/MountBriar/scripts.pory"
	walk_up
# 171 "data/maps/MountBriar/scripts.pory"
	walk_up
	step_end

# 181 "data/maps/MountBriar/scripts.pory"
MountBriar_Script_RideLift_Movement_1:
# 182 "data/maps/MountBriar/scripts.pory"
	force_up
# 183 "data/maps/MountBriar/scripts.pory"
	jump_up
	step_end

# 190 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_0:
# 191 "data/maps/MountBriar/scripts.pory"
	walk_in_place_left
# 191 "data/maps/MountBriar/scripts.pory"
	walk_in_place_left
	step_end

# 245 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_1:
# 246 "data/maps/MountBriar/scripts.pory"
	walk_right
# 247 "data/maps/MountBriar/scripts.pory"
	walk_down
	step_end

# 250 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_2:
# 251 "data/maps/MountBriar/scripts.pory"
	walk_down
# 252 "data/maps/MountBriar/scripts.pory"
	walk_right
	step_end

# 257 "data/maps/MountBriar/scripts.pory"
MountBriar_Talk_CutMaster_Movement_3:
# 258 "data/maps/MountBriar/scripts.pory"
	walk_right
# 259 "data/maps/MountBriar/scripts.pory"
	walk_down
# 260 "data/maps/MountBriar/scripts.pory"
	delay_16
# 260 "data/maps/MountBriar/scripts.pory"
	delay_16
# 261 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 261 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 261 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 261 "data/maps/MountBriar/scripts.pory"
	walk_in_place_faster_down
# 262 "data/maps/MountBriar/scripts.pory"
	force_down
# 262 "data/maps/MountBriar/scripts.pory"
	force_down
# 262 "data/maps/MountBriar/scripts.pory"
	force_down
# 262 "data/maps/MountBriar/scripts.pory"
	force_down
# 262 "data/maps/MountBriar/scripts.pory"
	force_down
# 263 "data/maps/MountBriar/scripts.pory"
	face_left
# 264 "data/maps/MountBriar/scripts.pory"
	force_left
# 265 "data/maps/MountBriar/scripts.pory"
	face_down
# 266 "data/maps/MountBriar/scripts.pory"
	force_down
	step_end

MountBriar_Sign_Lodge_Text_0:
# 5 "data/maps/MountBriar/scripts.pory"
	.string "Aurora Veil Lodge$"

MountBriar_Talk_Man1_Text_0:
# 14 "data/maps/MountBriar/scripts.pory"
	.string "TODO$"

MountBriar_Talk_CutMaster_Text_0:
# 195 "data/maps/MountBriar/scripts.pory"
	.string "Observe, if you will,\n"
	.string "the obstacle before you.\p"
	.string "Contemplate its shape.\n"
	.string "In every shape lies a weakness,\l"
	.string "a fault plane.\p"
	.string "Align your blade with that…\n"
	.string "and then…{PAUSE 30} release!$"

MountBriar_Talk_CutMaster_Text_1:
# 219 "data/maps/MountBriar/scripts.pory"
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
# 281 "data/maps/MountBriar/scripts.pory"
	.string "Scyther is focused intently, ready to\n"
	.string "strike.$"

MountBriar_Text_RideLift::
# 288 "data/maps/MountBriar/scripts.pory"
	.string "Hello. Do you want to ride the lift \n"
	.string "to the summit?$"
