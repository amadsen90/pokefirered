DiglettsCave_SouthEntrance_MapScripts::
	.byte 0

DiglettsCave_SouthEntrance_EventScript_Brendan::
	trainerbattle_single TRAINER_BRENDAN_2, DiglettsCave_SouthEntrance_Text_BrendanIntro, DiglettsCave_SouthEntrance_Text_BrendanDefeat
	msgbox DiglettsCave_SouthEntrance_Text_BrendanPostBattle, MSGBOX_AUTOCLOSE
	setflag FLAG_HIDE_BRENDAN2
	end
