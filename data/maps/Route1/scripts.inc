.equ LOCALID_CRYSTAL, 		1
Route1_MapScripts::
	.byte 0

Route1_EventScript_MartClerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
	msgbox Route1_Text_WorkAtPokeMartTakeSample
	textcolor NPC_TEXT_COLOR_NEUTRAL
	checkitemspace ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	bufferitemname STR_VAR_2, ITEM_POTION
	playfanfare MUS_LEVEL_UP
	message Text_ObtainedTheX
	waitmessage
	waitfanfare
	additem ITEM_POTION
	msgbox Route1_Text_PutPotionAway
	call EventScript_RestorePrevTextColor
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	release
	end

Route1_EventScript_AlreadyGotPotion::
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release
	end

Route1_EventScript_Boy::
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_RouteSign::
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end
	
Route1_EventScript_Crystal::
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox Route1_Text_CrystalIntro
	goto_if_set FLAG_HIDE_CRYSTAL_ROUTE_1, Route1_EventScript_PostCrystalbattle
	msgbox Route1_Text_CrystalBattle
	waitmessage
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
	waitbuttonpress
	setvar VAR_LAST_TALKED, LOCALID_CRYSTAL
	trainerbattle_no_intro TRAINER_CRYSTAL, Route1_Text_CrystalDefeat
	setvar VAR_MAP_SCENE_ROUTE1, 1
	setflag FLAG_HIDE_CRYSTAL_ROUTE_1
	releaseall
	return
	end
	
Route1_EventScript_PostCrystalbattle::
	msgbox Route1_Text_CrystalPostBattle
	release
	end
