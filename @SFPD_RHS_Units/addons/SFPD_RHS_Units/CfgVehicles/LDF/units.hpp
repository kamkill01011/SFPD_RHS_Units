	class SFPD_LDF_Rifleman: I_Soldier_base_F {
		identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};
		genericNames = "EnochMen";
		faction = "SFPD_LDF_Faction";
		author = "Kamkill";
		scope = 2;
		displayName = "Rifleman";
		icon = "iconMan";
		weapons[] = {"SFPD_Promet",BASIC_WEAPONS(SFPD_ACPC2)};
		respawnWeapons[] = {"SFPD_Promet",BASIC_WEAPONS(SFPD_ACPC2)};
		magazines[] = {SEVEN_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",BASIC_GRENS};
		respawnMagazines[] = {SEVEN_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",BASIC_GRENS};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_chops_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_chops_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "U_I_E_Uniform_01_F";
		camouflage = 1;
	};
	
	class SFPD_LDF_NBC_Mask: SFPD_LDF_Rifleman {
		displayName = "NBC (Mask)";
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_chops_F","G_RegulatorMask_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_chops_F","G_RegulatorMask_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
	};
	
	class SFPD_LDF_NBC_Suit: SFPD_LDF_NBC_Mask {
		displayName = "NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_White_F";
	};
	
	class SFPD_LDF_Rifleman_light: SFPD_LDF_Rifleman {
		displayName = "Rifleman (light)";
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_eaf",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_eaf",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
	};
	
	class SFPD_LDF_Grenadier: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_Grenadier_Backpack";
		displayName = "Grenadier";
		weapons[] = {"SFPD_Promet_GL",BASIC_WEAPONS(SFPD_ACPC2)};
		respawnWeapons[] = {"SFPD_Promet_GL",BASIC_WEAPONS(SFPD_ACPC2)};
	};
	
	class SFPD_LDF_Assaulter: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_SFPD_LDF_Assaulter_Backpack";
		displayName = "Assaulter";
		weapons[] = {"SFPD_Promet_SG",BASIC_WEAPONS(SFPD_ACPC2)};
		respawnWeapons[] = {"SFPD_Promet_SG",BASIC_WEAPONS(SFPD_ACPC2)};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_chops_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_chops_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
	};
	
	class SFPD_LDF_AT: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_SFPD_LDF_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"launch_MRAWS_green_F",};
		respawnWeapons[] += {"launch_MRAWS_green_F"};
	};
	
	class SFPD_LDF_AT_Heavy: SFPD_LDF_Rifleman {
		displayName = "AT (Heavy)";
		icon = "iconManAT";
		weapons[] += {"launch_NLAW_F",};
		respawnWeapons[] += {"launch_NLAW_F"};
	};
	
	class SFPD_LDF_LMG: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_LMG_Backpack";
		displayName = "LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_Stoner_Black",BASIC_WEAPONS(SFPD_ACPC2)};
		respawnWeapons[] = {"SFPD_Stoner_Black",BASIC_WEAPONS(SFPD_ACPC2)};
		magazines[] = {"200Rnd_65x39_cased_Box_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",BASIC_GRENS};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",BASIC_GRENS};
	};
	
	class SFPD_LDF_Leader: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_Leader_Backpack";
		displayName = "Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_LDF_Marksman: SFPD_LDF_Rifleman {
		displayName = "Marksman";
		weapons[] = {"SFPD_Promet_MR","SFPD_ACPC2","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_Promet_MR","SFPD_ACPC2","ACE_Vector","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",BASIC_GRENS};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",BASIC_GRENS};
		items[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_LDF_Medic: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_Medic_Backpack";
		displayName = "Medic";
		icon = "iconManMedic";
		
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa",
			"\SFPD_RHS_Units\RedCross.paa"
		};
		uniformClass = "SFPD_LDF_Medic_Uniform";
	};
	
	class SFPD_LDF_JTAC: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_JTAC_Backpack";
		displayName = "JTAC";
		weapons[] = {"SFPD_Promet_GL","SFPD_ACPC2","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_Promet_GL","SFPD_ACPC2","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_LDF_TITAN_AT: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_TITAN_AT_Backpack";
		displayName = "Titan AT";
		icon = "iconManAT";
		weapons[] += {"launch_I_Titan_short_F"};
		respawnWeapons[] += {"launch_I_Titan_short_F"};
	};
	
	class SFPD_LDF_TITAN_AA: SFPD_LDF_Rifleman {
		backpack = "SFPD_LDF_TITAN_AA_Backpack";
		displayName = "Titan AA";
		icon = "iconManAT";
		weapons[] += {"launch_I_Titan_eaf_F"};
		respawnWeapons[] += {"launch_I_Titan_eaf_F"};
	};
	
	class SFPD_LDF_Commandant: SFPD_LDF_Rifleman {
		displayName = "Commandant";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(SFPD_ACPC2)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_ACPC2)};
		magazines[] = {THREE_TIMES(9Rnd_45ACP_Mag)};
		respawnMagazines[] = {THREE_TIMES(9Rnd_45ACP_Mag)};
		linkedItems[] = {"V_Rangemaster_belt","H_Beret_EAF_01_F",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Beret_EAF_01_F",BASIC_LINKED_GREEN};
		uniformClass = "U_I_E_Uniform_01_officer_F";
		camouflage = 0.7;
	};
	
	class SFPD_LDF_Recon: SFPD_LDF_Rifleman {
		displayName = "Recon Rifle";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_Promet_Silenced","SFPD_ACPC2_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_Promet_Silenced","SFPD_ACPC2_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_eaf","ItemMap","ItemCompass","ACE_Altimeter""TFAR_anprc148jem","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_eaf","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc148jem","NVGoggles_INDEP"};
		items[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_I_E_Uniform_01_shortsleeve_F";
		camouflage = 0.7;
	};
	
	class SFPD_LDF_Recon_DMR: SFPD_LDF_Recon {
		displayName = "Recon DMR";
		weapons[] = {"SFPD_Promet_MR_Silenced","SFPD_ACPC2_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_Promet_MR_Silenced","SFPD_ACPC2_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FOUR_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","Laserbatteries"};
		respawnMagazines[] = {FOUR_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","Laserbatteries"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_LDF_Sniper: SFPD_LDF_Recon {
		displayName = "Sniper";
		weapons[] = {"SFPD_LYNX_Default","SFPD_ACPC2_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_LYNX_Default","SFPD_ACPC2_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {SEVEN_TIMES(5Rnd_127x108_APDS_Mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {SEVEN_TIMES(5Rnd_127x108_APDS_Mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_Chestrig_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc148jem","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc148jem","NVGoggles_INDEP"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_I_FullGhillie_lsh";
		camouflage = 0.5;
	};
	
	class SFPD_LDF_Spotter: SFPD_LDF_Sniper {
		backpack = "SFPD_LDF_Spotter_Backpack";
		displayName = "Spotter";
		weapons[] = {"SFPD_Promet_Silenced","SFPD_ACPC2_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_Promet_Silenced","SFPD_ACPC2_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(30Rnd_65x39_caseless_msbs_mag),"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","ACE_FlareTripMine_Mag"};
		items[] += {"ACE_DefusalKit"};
		respawnItems[] += {"ACE_DefusalKit"};
	};
	
	class SFPD_LDF_Diver: SFPD_LDF_Recon {
		backpack = "SFPD_UNIVERSAL_Diver_Backpack";
		displayName = "Diver";
		weapons[] = {"arifle_SDAR_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(20Rnd_556x45_UW_mag),"SmokeShellGreen"};
		respawnMagazines[] = {SIX_TIMES(20Rnd_556x45_UW_mag),"SmokeShellGreen"};
		linkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc148jem","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc148jem","NVGoggles_OPFOR"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_I_Wetsuit";
	};
	
	class SFPD_LDF_TankCrew: SFPD_LDF_Rifleman {
		displayName = "Tank Crew";
		weapons[] = {BASIC_WEAPONS(SFPD_ACPC2)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_ACPC2)};
		magazines[] = {FOUR_TIMES(9Rnd_45ACP_Mag),"ACE_HandFlare_Yellow","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(9Rnd_45ACP_Mag),"ACE_HandFlare_Yellow","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_Tank_eaf_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Tank_eaf_F",BASIC_LINKED_GREEN,"NVGoggles_INDEP"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_LDF_HelicopterPilot: SFPD_LDF_TankCrew {
		displayName = "Helicopter Pilot";
		linkedItems[] = {"V_Rangemaster_belt","H_CrewHelmetHeli_I_E",BASIC_LINKED_GREEN,"ACE_NVG_Wide"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_CrewHelmetHeli_I_E",BASIC_LINKED_GREEN,"ACE_NVG_Wide"};
		uniformClass = "U_I_E_Uniform_01_coveralls_F";
	};
	
	class SFPD_LDF_PlanePilot: SFPD_LDF_HelicopterPilot {
		displayName = "Plane Pilot";
		linkedItems[] = {"H_PilotHelmetFighter_I_E",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_I_E",BASIC_LINKED_GREEN};
		uniformClass = "U_I_pilotCoveralls";
	};
	
	class SFPD_LDF_Colonel: SFPD_LDF_Commandant {
		displayName = "Colonel";
		icon = "iconManOfficer";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"H_ParadeDressCap_01_LDF_F","G_Aviator",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"H_ParadeDressCap_01_LDF_F","G_Aviator",BASIC_LINKED_GREEN};
		items[] = {"ACE_MapTools","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		respawnItems[] = {"ACE_MapTools","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		uniformClass = "U_I_E_ParadeUniform_01_LDF_decorated_F";
		camouflage = 0.7;
	};