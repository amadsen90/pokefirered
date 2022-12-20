.equ LOCALID_BLOCK,		3
Route3_MapScripts::
	.byte 0

Route3_EventScript_Youngster::
	msgbox Route3_Text_TunnelFromCeruleanTiring, MSGBOX_NPC
	end

Route3_EventScript_RouteSign::
	msgbox Route3_Text_RouteSign, MSGBOX_SIGN
	end
	
Route3_EventScript_Block::
	lock
	faceplayer
	checkflag FLAG_HIDDEN_GROTTO
	msgbox Route3_Text_GoBack
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Movement_TurnAround
	goto_if_set FLAG_HIDDEN_GROTTO, Route3_EventScript_BlockTrigger
	release 
	end
	
Route3_EventScript_BlockTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Route3_Text_GoBack
	closemessage
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_BLOCK
	clearflag FLAG_HIDDEN_GROTTO
	releaseall
	end
	
Route3_Movement_TurnAround::
	walk_left
	walk_left
	step_end
	
Route3_EventScript_TriggerTop::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route3_EventScript_Block
	end

Route3_EventScript_TriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route3_EventScript_Block
	end

Route3_EventScript_TriggerBottom::
	lockall
	setvar VAR_TEMP_1, 2
	goto Route3_EventScript_Block
	end

Route3_EventScript_Jalissa::
	trainerbattle_single TRAINER_COOLTRAINER_F_JALISSA, Route3_Text_JalissaIntro, Route3_Text_JalissaDefeat
	msgbox Route3_Text_JalissaPostBattle, MSGBOX_AUTOCLOSE
	end
