Route19_House_MapScripts::
	.byte 0


Route19_House_TalkCutMaster::
# 4 "data/maps/Route19_House/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_CUT, Route19_House_TalkCutMaster_1
# 49 "data/maps/Route19_House/scripts.pory"
	lock
# 50 "data/maps/Route19_House/scripts.pory"
	faceplayer
# 51 "data/maps/Route19_House/scripts.pory"
	msgbox Route19_House_TalkCutMaster_Text_5, MSGBOX_DEFAULT
# 59 "data/maps/Route19_House/scripts.pory"
	release
	return

Route19_House_TalkCutMaster_1:
# 5 "data/maps/Route19_House/scripts.pory"
	lock
# 6 "data/maps/Route19_House/scripts.pory"
	faceplayer
# 8 "data/maps/Route19_House/scripts.pory"
	msgbox Route19_House_TalkCutMaster_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/Route19_House/scripts.pory"
	msgbox Route19_House_TalkCutMaster_Text_1, MSGBOX_YESNO
# 24 "data/maps/Route19_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route19_House_TalkCutMaster_4
# 36 "data/maps/Route19_House/scripts.pory"
	msgbox Route19_House_TalkCutMaster_Text_4, MSGBOX_DEFAULT
# 44 "data/maps/Route19_House/scripts.pory"
	closemessage
# 45 "data/maps/Route19_House/scripts.pory"
	release
	return

Route19_House_TalkCutMaster_4:
# 25 "data/maps/Route19_House/scripts.pory"
	trainerbattle_single TRAINER_CUT_MASTER_1, Route19_House_TalkCutMaster_Text_2, Route19_House_TalkCutMaster_Text_3, Route19_House_CutMasterPostBattle
	return


Route19_House_CutMasterPostBattle::
# 64 "data/maps/Route19_House/scripts.pory"
	lock
# 65 "data/maps/Route19_House/scripts.pory"
	faceplayer
# 66 "data/maps/Route19_House/scripts.pory"
	msgbox Route19_House_CutMasterPostBattle_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/Route19_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 77 "data/maps/Route19_House/scripts.pory"
	message Route19_House_CutMasterPostBattle_Text_1
# 79 "data/maps/Route19_House/scripts.pory"
	waitmessage
# 80 "data/maps/Route19_House/scripts.pory"
	waitfanfare
# 82 "data/maps/Route19_House/scripts.pory"
	addplayerlevel 1
# 84 "data/maps/Route19_House/scripts.pory"
	msgbox Route19_House_CutMasterPostBattle_Text_2, MSGBOX_DEFAULT
# 95 "data/maps/Route19_House/scripts.pory"
	closemessage
# 97 "data/maps/Route19_House/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 99 "data/maps/Route19_House/scripts.pory"
	release
	return


Route19_House_TalkScyther::
# 103 "data/maps/Route19_House/scripts.pory"
	playmoncry SPECIES_SCYTHER, 0
# 104 "data/maps/Route19_House/scripts.pory"
	waitmoncry
	return


Route19_House_Sign_CutMasterNote::
# 108 "data/maps/Route19_House/scripts.pory"
	msgbox Route19_House_Sign_CutMasterNote_Text_0, MSGBOX_SIGN
	return


Route19_House_TalkCutMaster_Text_0:
# 9 "data/maps/Route19_House/scripts.pory"
	.string "Ah!\n"
	.string "I knew you would find me here.\p"
	.string "Very well! I will teach you my secret\n"
	.string "CUT technique.\l"
	.string "…That is, if you defeat me in Pokémon \l"
	.string "combat!$"

Route19_House_TalkCutMaster_Text_1:
# 20 "data/maps/Route19_House/scripts.pory"
	.string "What say you?\n"
	.string "Shall we clash blades?$"

Route19_House_TalkCutMaster_Text_2:
# 28 "data/maps/Route19_House/scripts.pory"
	.string "En garde!$"

Route19_House_TalkCutMaster_Text_3:
# 30 "data/maps/Route19_House/scripts.pory"
	.string "Well!\n"
	.string "You're a cut above!$"

Route19_House_TalkCutMaster_Text_4:
# 37 "data/maps/Route19_House/scripts.pory"
	.string "If you will not face me,\n"
	.string "you will never be worthy of my secret\l"
	.string "art!\p"
	.string "Begone!$"

Route19_House_TalkCutMaster_Text_5:
# 52 "data/maps/Route19_House/scripts.pory"
	.string "You have returned.\n"
	.string "Do you have further need of my\l"
	.string "mastery?\p"
	.string "Documents to shred, perhaps?$"

Route19_House_CutMasterPostBattle_Text_0:
# 67 "data/maps/Route19_House/scripts.pory"
	.string "Well, now!\n"
	.string "That was quite the battle!\p"
	.string "You are certainly worthy of my\n"
	.string "technique.\p"
	.string "Let me show you!$"

Route19_House_CutMasterPostBattle_Text_1:
# 77 "data/maps/Route19_House/scripts.pory"
	.string "{PLAYER} learned how to use the \n"
	.string "field move CUT!$"

Route19_House_CutMasterPostBattle_Text_2:
# 85 "data/maps/Route19_House/scripts.pory"
	.string "Now that I've passed down my CUT\n"
	.string "technique, I can finally pass on from\l"
	.string "this world…\p"
	.string "…{PAUSE 30}Or maybe not.\n"
	.string "My show's on tonight.\p"
	.string "Use my technique wisely, young one!$"

Route19_House_Sign_CutMasterNote_Text_0:
# 109 "data/maps/Route19_House/scripts.pory"
	.string "There's a note on the table.\p"
	.string "“I have gone away to hone my\n"
	.string "blades up on Mount Briar.”\l"
	.string "“Seek me there!”\l"
	.string "“Also, get out of my house!”\p"
	.string "“- THE CUT MASTER”$"
