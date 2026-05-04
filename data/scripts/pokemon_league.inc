PokemonLeague_EventScript_OpenDoor::
	applymovement LOCALID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	playse SE_DOOR
	call PokemonLeague_EventScript_SetDoorOpen
	special DrawWholeMapView
	setflag FLAG_TEMP_4
	return

PokemonLeague_EventScript_EnterRoom::
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp5
	waitmovement 0
	setflag FLAG_TEMP_2
	playse SE_UNLOCK
	call PokemonLeague_EventScript_CloseEntry
	special DrawWholeMapView
	return

PokemonLeague_EventScript_SetDoorOpen::
	return

PokemonLeague_EventScript_PreventExit::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Text_VoiceRangOutDontRunAway
	closemessage
	applymovement LOCALID_PLAYER, PokemonLeague_Movement_ForcePlayerIn
	waitmovement 0
	releaseall
	end

PokemonLeague_EventScript_OpenDoorLance::
	applymovement LOCALID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	playse SE_DOOR
	special DrawWholeMapView
	setflag FLAG_TEMP_4
	return

PokemonLeague_EventScript_SetDoorOpenLance::
	return

PokemonLeague_EventScript_CloseEntry::
	return

PokemonLeague_Movement_ForcePlayerIn::
	walk_up
	step_end

PokemonLeague_EventScript_DoLightingEffect::
	special DoPokemonLeagueLightingEffect
	return

Text_VoiceRangOutDontRunAway::
	.string "Someone's voice rang out,\n"
	.string "“Don't run away!”$"
