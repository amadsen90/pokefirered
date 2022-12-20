SSAnne_B1F_Corridor_MapScripts::
	.byte 0
	
SSAnne_B1F_Corridor_EventScript_Aqua::
	trainerbattle_single TRAINER_AQUA_GRUNT_F, SSAnne_B1F_Corridor_Text_AquaIntro, SSAnne_B1F_Corridor_Text_AquaDefeat
	msgbox SSAnne_B1F_Corridor_AquaPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Corridor_Text_AquaIntro::
	.string "This ship will never leave\n"
	.string "the harbor!$"

SSAnne_B1F_Corridor_Text_AquaDefeat::
	.string "I can't believe I lost!$"

SSAnne_B1F_Corridor_AquaPostBattle::
	.string "WHISPERS: I hope he does not\n"
	.string "find the exploding POKEMON.\p"
