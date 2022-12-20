Route2_MapScripts::
	.byte 0

Route2_EventScript_RouteSign::
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
	end

Route2_EventScript_DiglettsCaveSign::
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
	end

Route2_EventScript_Henry::
	trainerbattle_single TRAINER_BUG_CATCHER_HENRY, Route2_Text_HenryIntro, Route2_Text_HenryDefeat
	msgbox Route2_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Ophelia::
	trainerbattle_single TRAINER_PICNICKER_OPHELIA, Route2_Text_OpheliaIntro, Route2_Text_OpheliaDefeat
	msgbox Route2_Text_OpheliaPostBattle, MSGBOX_AUTOCLOSE
	end
