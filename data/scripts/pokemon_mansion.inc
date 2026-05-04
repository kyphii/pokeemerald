PokemonMansion_EventScript_SecretSwitch::
	msgbox PokemonMansion_Text_PressSecretSwitch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PokemonMansion_EventScript_DontPressSwitch
	msgbox PokemonMansion_Text_WhoWouldnt
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_ResetSwitch
	setflag FLAG_POKEMON_MANSION_SWITCH_STATE
	switch VAR_0x8004
	case 0, PokemonMansion_EventScript_PressSwitch_1F
	case 1, PokemonMansion_EventScript_PressSwitch_2F
	case 2, PokemonMansion_EventScript_PressSwitch_3F
	case 3, PokemonMansion_EventScript_PressSwitch_B1F
	end

PokemonMansion_EventScript_ResetSwitch::
	clearflag FLAG_POKEMON_MANSION_SWITCH_STATE
	switch VAR_0x8004
	case 0, PokemonMansion_EventScript_ResetSwitch_1F
	case 1, PokemonMansion_EventScript_ResetSwitch_2F
	case 2, PokemonMansion_EventScript_ResetSwitch_3F
	case 3, PokemonMansion_EventScript_ResetSwitch_B1F
	end

PokemonMansion_EventScript_DontPressSwitch::
	msgbox PokemonMansion_Text_NotQuiteYet
	releaseall
	end

PokemonMansion_EventScript_PressSwitch_1F::
	return

PokemonMansion_EventScript_ResetSwitch_1F::
	return

PokemonMansion_EventScript_PressSwitch_2F::
	return

PokemonMansion_EventScript_ResetSwitch_2F::
	return

PokemonMansion_EventScript_PressSwitch_3F::
	return

PokemonMansion_EventScript_ResetSwitch_3F::
	return

PokemonMansion_EventScript_PressSwitch_B1F::
	return

PokemonMansion_EventScript_ResetSwitch_B1F::
	return
