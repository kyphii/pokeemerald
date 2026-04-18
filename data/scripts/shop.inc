Mart_EventScript_Clerk::
# 2 "data/scripts/shop.pory"
	lock
# 3 "data/scripts/shop.pory"
	faceplayer
# 4 "data/scripts/shop.pory"
	message gText_HowMayIServeYou
# 5 "data/scripts/shop.pory"
	waitmessage
# 6 "data/scripts/shop.pory"
	getbadgecount
# 7 "data/scripts/shop.pory"
	switch VAR_RESULT
# 8 "data/scripts/shop.pory"
	case 0, Mart_EventScript_Clerk_3
# 10 "data/scripts/shop.pory"
	case 1, Mart_EventScript_Clerk_4
# 12 "data/scripts/shop.pory"
	case 2, Mart_EventScript_Clerk_5
# 14 "data/scripts/shop.pory"
	case 3, Mart_EventScript_Clerk_6
# 16 "data/scripts/shop.pory"
	case 4, Mart_EventScript_Clerk_7
# 18 "data/scripts/shop.pory"
	case 5, Mart_EventScript_Clerk_8
# 20 "data/scripts/shop.pory"
	case 6, Mart_EventScript_Clerk_9
# 22 "data/scripts/shop.pory"
	case 7, Mart_EventScript_Clerk_10
# 24 "data/scripts/shop.pory"
	case 8, Mart_EventScript_Clerk_11
Mart_EventScript_Clerk_1:
# 27 "data/scripts/shop.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 28 "data/scripts/shop.pory"
	release
	return

Mart_EventScript_Clerk_3:
# 9 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_4:
# 11 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_5:
# 13 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 15 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 17 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 19 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 21 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 23 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_7
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 25 "data/scripts/shop.pory"
	pokemart Mart_Pokemart_8
	goto Mart_EventScript_Clerk_1


	.align 2
# 31 "data/scripts/shop.pory"
Mart_Pokemart_0:
# 32 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 34 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 37 "data/scripts/shop.pory"
Mart_Pokemart_1:
# 38 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 39 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 40 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 41 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 42 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 43 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 44 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 45 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 46 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 48 "data/scripts/shop.pory"
Mart_Pokemart_2:
# 49 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 50 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 51 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 52 "data/scripts/shop.pory"
	.2byte ITEM_ETHER
# 53 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 54 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 55 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 56 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 57 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 58 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
# 59 "data/scripts/shop.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 61 "data/scripts/shop.pory"
Mart_Pokemart_3:
# 62 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 63 "data/scripts/shop.pory"
	.2byte ITEM_GREAT_BALL
# 64 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 65 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 66 "data/scripts/shop.pory"
	.2byte ITEM_ETHER
# 67 "data/scripts/shop.pory"
	.2byte ITEM_MAX_ETHER
# 68 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 69 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 70 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 71 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 72 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 73 "data/scripts/shop.pory"
	.2byte ITEM_REVIVE
# 74 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
# 75 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_REPEL
# 76 "data/scripts/shop.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 78 "data/scripts/shop.pory"
Mart_Pokemart_4:
# 79 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 80 "data/scripts/shop.pory"
	.2byte ITEM_GREAT_BALL
# 81 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 82 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 83 "data/scripts/shop.pory"
	.2byte ITEM_ETHER
# 84 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 85 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 86 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 87 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 88 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 89 "data/scripts/shop.pory"
	.2byte ITEM_REVIVE
# 90 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
# 91 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_REPEL
# 92 "data/scripts/shop.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 94 "data/scripts/shop.pory"
Mart_Pokemart_5:
# 95 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 96 "data/scripts/shop.pory"
	.2byte ITEM_GREAT_BALL
# 97 "data/scripts/shop.pory"
	.2byte ITEM_ULTRA_BALL
# 98 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 99 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 100 "data/scripts/shop.pory"
	.2byte ITEM_HYPER_POTION
# 101 "data/scripts/shop.pory"
	.2byte ITEM_ETHER
# 102 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 103 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 104 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 105 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 106 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 107 "data/scripts/shop.pory"
	.2byte ITEM_FULL_HEAL
# 108 "data/scripts/shop.pory"
	.2byte ITEM_REVIVE
# 109 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
# 110 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_REPEL
# 111 "data/scripts/shop.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 113 "data/scripts/shop.pory"
Mart_Pokemart_6:
# 114 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 115 "data/scripts/shop.pory"
	.2byte ITEM_GREAT_BALL
# 116 "data/scripts/shop.pory"
	.2byte ITEM_ULTRA_BALL
# 117 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 118 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 119 "data/scripts/shop.pory"
	.2byte ITEM_HYPER_POTION
# 120 "data/scripts/shop.pory"
	.2byte ITEM_ETHER
# 121 "data/scripts/shop.pory"
	.2byte ITEM_ELIXIR
# 122 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 123 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 124 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 125 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 126 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 127 "data/scripts/shop.pory"
	.2byte ITEM_FULL_HEAL
# 128 "data/scripts/shop.pory"
	.2byte ITEM_REVIVE
# 129 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
# 130 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_REPEL
# 131 "data/scripts/shop.pory"
	.2byte ITEM_MAX_REPEL
# 132 "data/scripts/shop.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 134 "data/scripts/shop.pory"
Mart_Pokemart_7:
# 135 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 136 "data/scripts/shop.pory"
	.2byte ITEM_GREAT_BALL
# 137 "data/scripts/shop.pory"
	.2byte ITEM_ULTRA_BALL
# 138 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 139 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 140 "data/scripts/shop.pory"
	.2byte ITEM_HYPER_POTION
# 141 "data/scripts/shop.pory"
	.2byte ITEM_ETHER
# 142 "data/scripts/shop.pory"
	.2byte ITEM_ELIXIR
# 143 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 144 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 145 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 146 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 147 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 148 "data/scripts/shop.pory"
	.2byte ITEM_FULL_HEAL
# 149 "data/scripts/shop.pory"
	.2byte ITEM_REVIVE
# 150 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
# 151 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_REPEL
# 152 "data/scripts/shop.pory"
	.2byte ITEM_MAX_REPEL
# 153 "data/scripts/shop.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 155 "data/scripts/shop.pory"
Mart_Pokemart_8:
# 156 "data/scripts/shop.pory"
	.2byte ITEM_POKE_BALL
# 157 "data/scripts/shop.pory"
	.2byte ITEM_GREAT_BALL
# 158 "data/scripts/shop.pory"
	.2byte ITEM_ULTRA_BALL
# 159 "data/scripts/shop.pory"
	.2byte ITEM_POTION
# 160 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_POTION
# 161 "data/scripts/shop.pory"
	.2byte ITEM_MAX_POTION
# 162 "data/scripts/shop.pory"
	.2byte ITEM_FULL_RESTORE
# 163 "data/scripts/shop.pory"
	.2byte ITEM_ETHER
# 164 "data/scripts/shop.pory"
	.2byte ITEM_ELIXIR
# 165 "data/scripts/shop.pory"
	.2byte ITEM_ANTIDOTE
# 166 "data/scripts/shop.pory"
	.2byte ITEM_PARALYZE_HEAL
# 167 "data/scripts/shop.pory"
	.2byte ITEM_AWAKENING
# 168 "data/scripts/shop.pory"
	.2byte ITEM_BURN_HEAL
# 169 "data/scripts/shop.pory"
	.2byte ITEM_ICE_HEAL
# 170 "data/scripts/shop.pory"
	.2byte ITEM_FULL_HEAL
# 171 "data/scripts/shop.pory"
	.2byte ITEM_REVIVE
# 172 "data/scripts/shop.pory"
	.2byte ITEM_REPEL
# 173 "data/scripts/shop.pory"
	.2byte ITEM_SUPER_REPEL
# 174 "data/scripts/shop.pory"
	.2byte ITEM_MAX_REPEL
# 175 "data/scripts/shop.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE
