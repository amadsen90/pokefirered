Route4_MapScripts::
	.byte 0

Route4_EventScript_Unused::
	end

Route4_EventScript_Woman::
	msgbox Route4_Text_TrippedOverGeodude, MSGBOX_NPC
	end

Route4_EventScript_MtMoonSign::
	msgbox Route4_Text_MtMoonEntrance, MSGBOX_SIGN
	end

Route4_EventScript_RouteSign::
	msgbox Route4_Text_RouteSign, MSGBOX_SIGN
	end
	
Route4_EventScript_Test::
	trainerbattle_single TRAINER_LASS_TEANA, Route4_Text_TestIntro, Route4_Text_TestDefeat, Route4_Text_TestPostBattle, MSGBOX_AUTOCLOSE
	end

Route4_EventScript_Derrell::
	trainerbattle_single TRAINER_PKMN_BREEDER_DERRELL, Route4_Text_DerrellIntro, Route4_Text_DerrellDefeat, Route4_Text_DerrellPostBattle, MSGBOX_AUTOCLOSE
	end
