.set LOCALID_CRYSTAL, 	1

Route25_MapScripts::
	.byte 0

Route25_EventScript_SeaCottageSign::
	msgbox Route25_Text_SeaCottageSign, MSGBOX_SIGN
	end

Route25_EventScript_Man::
	msgbox Route25_Text_AreYouHereAlone, MSGBOX_NPC
	end
	
Route25_EventScript_CrystalTrigger::
	lockall
	setvar VAR_TEMP_1, 0
	setobjectxyperm LOCALID_CRYSTAL, 51, 11
	goto Route25_EventScript_Crystal
	end

Route25_EventScript_Crystal::
	textcolor NPC_TEXT_COLOR_FEMALE
	addobject LOCALID_CRYSTAL
	call_if_eq VAR_TEMP_1, 0, Route25_EventScript_CrystalEnter
	delay 6
	applymovement OBJ_EVENT_ID_PLAYER, Route25_Movement_FaceCrystal
	msgbox Route25_Text_CrystalIntro
	call Route25_EventScript_CrystalBattle
	msgbox Route25_Text_CrystalPostBattle
	closemessage
	delay 5
	giveitem ITEM_SUPER_POTION, 5
	msgbox Route25_Text_CrystalGoodbye
	closemessage
	applymovement LOCALID_CRYSTAL, Route25_EventScript_CrystalExit
	waitmovement 0
	removeobject LOCALID_CRYSTAL
	setvar VAR_MAP_SCENE_ROUTE25, 1
	setflag FLAG_HIDE_CRYSTAL2
	releaseall
	end
	
Route25_EventScript_CrystalEnter::
	applymovement LOCALID_CRYSTAL, Route25_Movement_CrystalEnter
	waitmovement 0
	return
	
Route25_Movement_FaceCrystal::
	face_down
	return
	
Route25_EventScript_CrystalBattle::
	trainerbattle_no_intro TRAINER_CRYSTAL_2, Route25_Text_CrystalDefeat
	return
	
Route25_EventScript_CrystalExit::
	applymovement LOCALID_CRYSTAL, Route25_Movement_CrystalExit
	waitmovement 0
	return
	
Route25_Movement_CrystalEnter::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	
Route25_Movement_CrystalExit::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
