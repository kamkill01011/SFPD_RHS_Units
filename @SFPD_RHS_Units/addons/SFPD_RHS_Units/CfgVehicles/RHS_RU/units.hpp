	//Desert
	class SFPD_RHS_OPFOR_DESERT_Rifleman: O_Soldier_base_F {
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian"};
		genericNames = "RussianMen";
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		author = "Kamkill";
		_generalMacro = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		scope = 2;
		backpack = "SFPD_RHS_OPFOR_DESERT_Rifleman_Backpack";
		displayName = "Desert Rifleman";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_AK74MR","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala",BASIC_LINKED_RED};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "rhs_uniform_mflora_patchless"; //uniform you are using//rhs_uniform_flora_patchless_alt
		camouflage = 1;
	};
	
	class SFPD_RHS_OPFOR_DESERT_NBC_Mask: SFPD_RHS_OPFOR_DESERT_Rifleman {
		displayName = "Desert NBC (Mask)";
		linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED};
	};
	
	class SFPD_RHS_OPFOR_DESERT_NBC_Suit: SFPD_RHS_OPFOR_DESERT_NBC_Mask {
		displayName = "Desert NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Rifleman_light: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Rifleman (light)";
		linkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan",BASIC_LINKED_RED};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Unequiped: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Unequiped";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"}; 
	};
	
	class SFPD_RHS_OPFOR_DESERT_Leader: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Leader_Backpack";
		displayName = "Desert Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Medic: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Medic_Backpack";
		displayName = "Desert Medic";
		icon = "iconManMedic";
		
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\flora_mf_co.paa","","","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_OPFOR_DESERT_Medic_Uniform";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Grenadier: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Grenadier_Backpack";
		displayName = "Desert Grenadier";
		weapons[] = {"SFPD_RHS_AK74MR_GL","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_GL","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_AT: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_AT_Backpack";
		displayName = "Desert AT";
		icon = "iconManAT";
		weapons[] += {"SFPD_RHS_RPG7"};
		respawnWeapons[] += {"SFPD_RHS_RPG7"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_LMG: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_LMG_Backpack";
		displayName = "Desert LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_AK_LMG","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK_LMG","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		respawnMagazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
	};
	
	class SFPD_RHS_OPFOR_DESERT_MG: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_MG_Backpack";
		displayName = "Desert MG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_PKP","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_PKP","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Marksman: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Marksman";
		weapons[] = {"SFPD_RHS_SVD","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		respawnMagazines[] = {TEN_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Commander: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Commander";
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {THREE_TIMES(rhs_mag_9x18_8_57N181S)};
		respawnMagazines[] = {THREE_TIMES(rhs_mag_9x18_8_57N181S)};
		linkedItems[] = {"rhs_vest_pistol_holster","rhs_beret_milp","G_Shades_Black",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_vest_pistol_holster","rhs_beret_milp","G_Shades_Black",BASIC_LINKED_RED};
		camouflage = 0.7;
	};
	
	class SFPD_RHS_OPFOR_DESERT_AA: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_AA_Backpack";
		displayName = "Desert AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Sniper: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Sniper";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_LYNX_DESERT","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_LYNX_DESERT","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		magazines[] = {SEVEN_TIMES(5Rnd_127x108_APDS_Mag),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {SEVEN_TIMES(5Rnd_127x108_APDS_Mag),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_FullGhillie_ard";
		camouflage = 0.5;
	};
	
	class SFPD_RHS_OPFOR_DESERT_Spotter: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Spotter_Backpack";
		displayName = "Desert Spotter";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		magazines[] = {FOUR_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue","ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {FOUR_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue","ACE_FlareTripMine_Mag"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_DefusalKit"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_DefusalKit"};
		uniformClass = "U_O_FullGhillie_ard";
		camouflage = 0.5;
	};
	
	class SFPD_RHS_OPFOR_DESERT_Recon_DMR: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Recon DMR";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_T5000","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_T5000","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_5Rnd_338lapua_t5000),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {TEN_TIMES(rhs_5Rnd_338lapua_t5000),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7;
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_Leader: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Leader_Backpack";
		displayName = "Desert SF Leader";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		respawnMagazines[] = {THREE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhsusf_opscore_ut_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhsusf_opscore_ut_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		camouflage = 0.7;
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_Grenadier: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_Grenadier_Backpack";
		displayName = "Desert SF Grenadier";
		weapons[] = {"SFPD_RHS_AK74MR_GL_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_GL_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_AT: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_AT_Backpack";
		displayName = "Desert SF AT";
		weapons[] += {"SFPD_RHS_RPG7"};
		respawnWeapons[] += {"SFPD_RHS_RPG7"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_LMG: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_LMG_Backpack";
		displayName = "Desert SF LMG";
		weapons[] = {"SFPD_RHS_AK_LMG_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK_LMG_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
		respawnMagazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S",BASIC_GRENS};
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_Backpack";
		displayName = "Desert SF";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Recon_Rifle: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Recon Rifle";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {FOUR_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		respawnMagazines[] = {FOUR_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7;
	};
	
	class SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Paporotnik AS VAL";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {EIGHT_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		respawnMagazines[] = {EIGHT_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_FullGhillie_ard";
		camouflage = 0.5;
	};
	
	class SFPD_RHS_OPFOR_DESERT_Paporotnik_SVD: SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL {
		displayName = "Desert Paporotnik SVD";
		weapons[] = {"SFPD_RHS_SVD_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {FIVE_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		respawnMagazines[] = {FIVE_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_TankCrew: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Tank Crew";
		icon = "iconMan";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {FOUR_TIMES(rhs_mag_9x18_8_57N181S),"SmokeShellRed","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(rhs_mag_9x18_8_57N181S),"SmokeShellRed","ACE_HandFlare_Yellow"};
		linkedItems[] = {"rhs_vest_commander","rhs_tsh4_ess",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_vest_commander","rhs_tsh4_ess",BASIC_LINKED_RED};
	};
	
	//Woodland
	class SFPD_RHS_OPFOR_WOODLAND_Rifleman: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Rifleman_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Rifleman";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_NBC_Mask: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_NBC_Suit: SFPD_RHS_OPFOR_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Rifleman_light: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Rifleman (light)";
		linkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli",BASIC_LINKED_RED};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Unequiped: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		displayName = "Woodland Unequipped";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"}; 
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Leader: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Leader_Backpack";
		displayName = "Woodland Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Medic: SFPD_RHS_OPFOR_DESERT_Medic {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Medic_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Medic";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};

		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base_gloves.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_vest_blue_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_pant_blue_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_OPFOR_WOODLAND_Medic_Uniform";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Grenadier: SFPD_RHS_OPFOR_DESERT_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Grenadier";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_AT: SFPD_RHS_OPFOR_DESERT_AT {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland AT";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_LMG: SFPD_RHS_OPFOR_DESERT_LMG {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland LMG";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_MG: SFPD_RHS_OPFOR_DESERT_MG {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_MG_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland MG";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Marksman: SFPD_RHS_OPFOR_DESERT_Marksman {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Marksman";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Commander: SFPD_RHS_OPFOR_DESERT_Commander {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Commander";
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_AA: SFPD_RHS_OPFOR_DESERT_AA {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_AA_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland AA";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala",BASIC_LINKED_RED};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Sniper: SFPD_RHS_OPFOR_DESERT_Sniper {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Sniper";
		weapons[] = {"SFPD_RHS_LYNX_JUNGLE","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_LYNX_JUNGLE","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Spotter: SFPD_RHS_OPFOR_DESERT_Spotter {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Spotter_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Spotter";
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Recon_DMR: SFPD_RHS_OPFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Recon DMR";
		linkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_Leader: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Leader_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF Leader";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_Grenadier: SFPD_RHS_OPFOR_DESERT_SF_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF Grenadier";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_AT: SFPD_RHS_OPFOR_DESERT_SF_AT {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF AT";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_LMG: SFPD_RHS_OPFOR_DESERT_SF_LMG {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF LMG";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF: SFPD_RHS_OPFOR_DESERT_SF {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Recon_Rifle: SFPD_RHS_OPFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Recon Rifle";
		linkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Paporotnik_ASVAL: SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Paporotnik AS VAL";
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Paporotnik_SVD: SFPD_RHS_OPFOR_DESERT_Paporotnik_SVD {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Paporotnik SVD";
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_TankCrew: SFPD_RHS_OPFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Tank Crew";
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};
	
	//Universal
	class SFPD_RHS_OPFOR_Pilot: SFPD_RHS_OPFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_OPFOR_Faction";
		displayName = "Universal Pilot";
		weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		linkedItems[] = {"rhs_6sh46","rhs_zsh7a_alt",BASIC_LINKED_RED,"ACE_NVG_Wide"};
		respawnLinkedItems[] = {"rhs_6sh46","rhs_zsh7a_alt",BASIC_LINKED_RED,"ACE_NVG_Wide"};
		uniformClass = "rhs_uniform_df15";
	};
	
	//Winter
	class SFPD_RHS_OPFOR_WINTER_Rifleman: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WINTER_Rifleman_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Rifleman";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_NBC_Mask: SFPD_RHS_OPFOR_WINTER_Rifleman {
		displayName = "Winter NBC (Mask)";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED};
	};
	
	class SFPD_RHS_OPFOR_WINTER_NBC_Suit: SFPD_RHS_OPFOR_WINTER_NBC_Mask {
		displayName = "Winter NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Rifleman_light: SFPD_RHS_OPFOR_WINTER_Rifleman {
		backpack = "";
		displayName = "Winter Rifleman (light)";
		linkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw",BASIC_LINKED_RED};
	};
	
	class SFPD_RHS_OPFOR_WINTER_Unequiped: SFPD_RHS_OPFOR_WINTER_Rifleman {
		displayName = "Winter Unequipped";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"}; 
	};
	
	class SFPD_RHS_OPFOR_WINTER_Leader: SFPD_RHS_OPFOR_WINTER_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WINTER_Leader_Backpack";
		displayName = "Winter Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Medic: SFPD_RHS_OPFOR_DESERT_Medic {
		backpack = "SFPD_RHS_OPFOR_WINTER_Medic_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Medic";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Grenadier: SFPD_RHS_OPFOR_DESERT_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WINTER_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Grenadier";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_AT: SFPD_RHS_OPFOR_DESERT_AT {
		backpack = "SFPD_RHS_OPFOR_WINTER_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter AT";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_LMG: SFPD_RHS_OPFOR_DESERT_LMG {
		backpack = "SFPD_RHS_OPFOR_WINTER_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter LMG";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_MG: SFPD_RHS_OPFOR_DESERT_MG {
		backpack = "SFPD_RHS_OPFOR_WINTER_MG_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter MG";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Marksman: SFPD_RHS_OPFOR_DESERT_Marksman {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Marksman";
		weapons[] = {"SFPD_RHS_SVD_Black","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD_Black","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_AA: SFPD_RHS_OPFOR_DESERT_AA {
		backpack = "SFPD_RHS_OPFOR_WINTER_AA_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter AA";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3",BASIC_LINKED_RED};
		uniformClass = "fsg_gorka_snw";
	};
	
	///sniper
	class SFPD_RHS_OPFOR_WINTER_Sniper: SFPD_RHS_OPFOR_DESERT_Sniper {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Sniper";
		weapons[] = {"SFPD_RHS_LYNX_Black","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_LYNX_Black","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		
		hideProxySelections[] = {"ghillie_hide"};
		model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
		textureList[] = {"snow",1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\SFPD_RHS_Units\ghillie_coverall_snow.paa","\SFPD_RHS_Units\fullghillie_camo_snow.paa"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Spotter: SFPD_RHS_OPFOR_DESERT_Spotter {
		backpack = "SFPD_RHS_OPFOR_WINTER_Spotter_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Spotter";
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	///
	
	class SFPD_RHS_OPFOR_WINTER_Recon_DMR: SFPD_RHS_OPFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Recon DMR";
		linkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Recon_Rifle: SFPD_RHS_OPFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Recon Rifle";
		linkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_Leader: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_WINTER_Leader_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF Leader";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_Grenadier: SFPD_RHS_OPFOR_DESERT_SF_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF Grenadier";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_AT: SFPD_RHS_OPFOR_DESERT_SF_AT {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF AT";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_LMG: SFPD_RHS_OPFOR_DESERT_SF_LMG {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF LMG";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF: SFPD_RHS_OPFOR_DESERT_SF {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Paporotnik_ASVAL: SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Paporotnik AS VAL";
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Paporotnik_SVD: SFPD_RHS_OPFOR_DESERT_Paporotnik_SVD {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Paporotnik SVD";
		weapons[] = {"SFPD_RHS_SVD_Black_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD_Black_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	
	class SFPD_RHS_OPFOR_WINTER_TankCrew: SFPD_RHS_OPFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Tank Crew";
		uniformClass = "fsg_gorka_snw";
	};