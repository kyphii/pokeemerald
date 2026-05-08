Route20_MapScripts::
	.byte 0


Route20_Sign_RouteSign::
# 4 "data/maps/Route20/scripts.pory"
	msgbox Route20_Sign_RouteSign_Text_0, MSGBOX_SIGN
	return


Route20_Script_TalkWithMaya::
# 13 "data/maps/Route20/scripts.pory"
	lockall
# 14 "data/maps/Route20/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 15 "data/maps/Route20/scripts.pory"
	switch VAR_0x8009
# 16 "data/maps/Route20/scripts.pory"
	case 10, Route20_Script_TalkWithMaya_3
# 17 "data/maps/Route20/scripts.pory"
	case 12, Route20_Script_TalkWithMaya_3
# 19 "data/maps/Route20/scripts.pory"
	case 11, Route20_Script_TalkWithMaya_4
# 20 "data/maps/Route20/scripts.pory"
	case 13, Route20_Script_TalkWithMaya_4
Route20_Script_TalkWithMaya_1:
# 23 "data/maps/Route20/scripts.pory"
	addobject LOCALID_ROUTE20_MAYA
# 24 "data/maps/Route20/scripts.pory"
	applymovement LOCALID_ROUTE20_MAYA, Route20_Script_TalkWithMaya_Movement_0
# 28 "data/maps/Route20/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 29 "data/maps/Route20/scripts.pory"
	delay 144
# 30 "data/maps/Route20/scripts.pory"
	switch VAR_0x8009
# 31 "data/maps/Route20/scripts.pory"
	case 10, Route20_Script_TalkWithMaya_7
# 32 "data/maps/Route20/scripts.pory"
	case 11, Route20_Script_TalkWithMaya_7
# 34 "data/maps/Route20/scripts.pory"
	case 12, Route20_Script_TalkWithMaya_8
# 35 "data/maps/Route20/scripts.pory"
	case 13, Route20_Script_TalkWithMaya_8
Route20_Script_TalkWithMaya_5:
# 38 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route20/scripts.pory"
	msgbox Route20_Script_TalkWithMaya_Text_0, MSGBOX_DEFAULT
# 46 "data/maps/Route20/scripts.pory"
	switch VAR_0x8009
# 47 "data/maps/Route20/scripts.pory"
	case 10, Route20_Script_TalkWithMaya_11
# 48 "data/maps/Route20/scripts.pory"
	case 11, Route20_Script_TalkWithMaya_11
# 50 "data/maps/Route20/scripts.pory"
	case 12, Route20_Script_TalkWithMaya_12
# 51 "data/maps/Route20/scripts.pory"
	case 13, Route20_Script_TalkWithMaya_12
Route20_Script_TalkWithMaya_9:
# 55 "data/maps/Route20/scripts.pory"
	msgbox Route20_Script_TalkWithMaya_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/Route20/scripts.pory"
	closemessage
# 70 "data/maps/Route20/scripts.pory"
	applymovement LOCALID_ROUTE20_MAYA, Route20_Script_TalkWithMaya_Movement_1
# 75 "data/maps/Route20/scripts.pory"
	delay 32
# 76 "data/maps/Route20/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 77 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route20/scripts.pory"
	setobjectxyperm LOCALID_ROUTE20_MAYA, -8, -8
# 80 "data/maps/Route20/scripts.pory"
	removeobject LOCALID_ROUTE20_MAYA
# 82 "data/maps/Route20/scripts.pory"
	setvar VAR_STORY_STATE_ACT1_B, 2
# 83 "data/maps/Route20/scripts.pory"
	clearflag FLAG_STORY_ROUTE4_TRAIL_HINT
# 85 "data/maps/Route20/scripts.pory"
	releaseall
	return

Route20_Script_TalkWithMaya_3:
# 18 "data/maps/Route20/scripts.pory"
	setobjectxyperm LOCALID_ROUTE20_MAYA, 9, 11
	goto Route20_Script_TalkWithMaya_1

Route20_Script_TalkWithMaya_4:
# 21 "data/maps/Route20/scripts.pory"
	setobjectxyperm LOCALID_ROUTE20_MAYA, 9, 12
	goto Route20_Script_TalkWithMaya_1

Route20_Script_TalkWithMaya_7:
# 33 "data/maps/Route20/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto Route20_Script_TalkWithMaya_5

Route20_Script_TalkWithMaya_8:
# 36 "data/maps/Route20/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Route20_Script_TalkWithMaya_5

Route20_Script_TalkWithMaya_11:
# 49 "data/maps/Route20/scripts.pory"
	turnobject LOCALID_ROUTE20_MAYA, DIR_NORTH
	goto Route20_Script_TalkWithMaya_9

Route20_Script_TalkWithMaya_12:
# 52 "data/maps/Route20/scripts.pory"
	turnobject LOCALID_ROUTE20_MAYA, DIR_SOUTH
	goto Route20_Script_TalkWithMaya_9


Route20_Script_TalkCrowdOldMan::
# 89 "data/maps/Route20/scripts.pory"
	lock
# 90 "data/maps/Route20/scripts.pory"
	faceplayer
# 91 "data/maps/Route20/scripts.pory"
	msgbox Route20_Script_TalkCrowdOldMan_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/Route20/scripts.pory"
	compare VAR_STORY_STATE_ACT1_B, 0
	goto_if_eq Route20_Script_TalkCrowdOldMan_2
Route20_Script_TalkCrowdOldMan_1:
# 101 "data/maps/Route20/scripts.pory"
	release
	return

Route20_Script_TalkCrowdOldMan_2:
# 99 "data/maps/Route20/scripts.pory"
	setvar VAR_STORY_STATE_ACT1_B, 1
	goto Route20_Script_TalkCrowdOldMan_1


Route20_Script_TalkCrowdMan::
# 105 "data/maps/Route20/scripts.pory"
	lock
# 106 "data/maps/Route20/scripts.pory"
	faceplayer
# 107 "data/maps/Route20/scripts.pory"
	msgbox Route20_Script_TalkCrowdMan_Text_0, MSGBOX_DEFAULT
# 113 "data/maps/Route20/scripts.pory"
	compare VAR_STORY_STATE_ACT1_B, 0
	goto_if_eq Route20_Script_TalkCrowdMan_2
Route20_Script_TalkCrowdMan_1:
# 116 "data/maps/Route20/scripts.pory"
	release
	return

Route20_Script_TalkCrowdMan_2:
# 114 "data/maps/Route20/scripts.pory"
	setvar VAR_STORY_STATE_ACT1_B, 1
	goto Route20_Script_TalkCrowdMan_1


Route20_Script_TalkCrowdWoman::
# 120 "data/maps/Route20/scripts.pory"
	lock
# 121 "data/maps/Route20/scripts.pory"
	faceplayer
# 122 "data/maps/Route20/scripts.pory"
	msgbox Route20_Script_TalkCrowdWoman_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/Route20/scripts.pory"
	compare VAR_STORY_STATE_ACT1_B, 0
	goto_if_eq Route20_Script_TalkCrowdWoman_2
Route20_Script_TalkCrowdWoman_1:
# 133 "data/maps/Route20/scripts.pory"
	release
	return

Route20_Script_TalkCrowdWoman_2:
# 131 "data/maps/Route20/scripts.pory"
	setvar VAR_STORY_STATE_ACT1_B, 1
	goto Route20_Script_TalkCrowdWoman_1


# 24 "data/maps/Route20/scripts.pory"
Route20_Script_TalkWithMaya_Movement_0:
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 25 "data/maps/Route20/scripts.pory"
	walk_right
# 26 "data/maps/Route20/scripts.pory"
	delay_16
# 26 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 70 "data/maps/Route20/scripts.pory"
Route20_Script_TalkWithMaya_Movement_1:
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route20/scripts.pory"
	walk_fast_left
# 72 "data/maps/Route20/scripts.pory"
	walk_fast_up
# 72 "data/maps/Route20/scripts.pory"
	walk_fast_up
# 72 "data/maps/Route20/scripts.pory"
	walk_fast_up
# 72 "data/maps/Route20/scripts.pory"
	walk_fast_up
# 72 "data/maps/Route20/scripts.pory"
	walk_fast_up
# 72 "data/maps/Route20/scripts.pory"
	walk_fast_up
# 73 "data/maps/Route20/scripts.pory"
	walk_fast_left
	step_end

Route20_Sign_RouteSign_Text_0:
# 5 "data/maps/Route20/scripts.pory"
	.string "ROUTE 20\n"
	.string "{LEFT_ARROW} NAUTIRUST CITY\l"
	.string "{RIGHT_ARROW} JUNOPOLIS CITY$"

Route20_Script_TalkWithMaya_Text_0:
# 41 "data/maps/Route20/scripts.pory"
	.string "MAYA: Dang, what's going on up here?\n"
	.string "More roadblocks?$"

Route20_Script_TalkWithMaya_Text_1:
# 56 "data/maps/Route20/scripts.pory"
	.string "Just our luck, huh?\p"
	.string "This doesn't look like it's gonna be\n"
	.string "clearing anytime soon.\p"
	.string "Guess we'd better start looking for\n"
	.string "another way around.\p"
	.string "Let me know if you figure anything out,\n"
	.string "okay?$"

Route20_Script_TalkCrowdOldMan_Text_0:
# 92 "data/maps/Route20/scripts.pory"
	.string "This is preposterous!\n"
	.string "Just what is going on up there?\p"
	.string "At this rate, I'll be late for my haircut!$"

Route20_Script_TalkCrowdMan_Text_0:
# 108 "data/maps/Route20/scripts.pory"
	.string "It's always something in this city.\p"
	.string "Average Wohnet traffic, am I right?$"

Route20_Script_TalkCrowdWoman_Text_0:
# 123 "data/maps/Route20/scripts.pory"
	.string "There's some people up there,\n"
	.string "holding up the whole road…\p"
	.string "They're yelling about something, but I\n"
	.string "can't make it out…$"
