SSAnne_B1F_Room5_MapScripts::
	.byte 0

SSAnne_B1F_Room5_EventScript_Boy::
	msgbox SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks, MSGBOX_NPC
	end

SSAnne_B1F_Room5_EventScript_Machoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox SSAnne_B1F_Room5_Text_Machoke
	waitmoncry
	release
	end
	
SSAnne_B1F_Room5_EventScript_Voltorb::
	lock
	faceplayer
	setwildbattle SPECIES_ELECTRODE, 25
	waitse
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
	message SSAnne_B1F_Room5_Text_RedVoltorb
	waitmessage
	waitmoncry
	delay 10
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
	waitbuttonpress
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
	special StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
	msgbox SSAnne_B1F_Room5_Text_VoltorbDown
	removeobject VAR_LAST_TALKED
	setflag FLAG_FOUGHT_ELECTRODE
	release
	end
