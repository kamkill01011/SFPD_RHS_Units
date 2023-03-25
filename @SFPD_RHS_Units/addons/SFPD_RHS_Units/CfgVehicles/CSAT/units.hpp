	//Desert
	class SFPD_OPFOR_DESERT_Rifleman: O_Soldier_base_F {
		backpack = "";
		side = 0;
		faction = "SFPD_OPFOR_DESERT_Faction";
		author = "Kamkill";
		scope = 2;
		displayName = "Desert Rifleman";
		weapons[] = {"SFPD_KATIBA_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_KATIBA_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {EIGHT_TIMES(30Rnd_65x39_caseless_green),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {EIGHT_TIMES(30Rnd_65x39_caseless_green),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"SFPD_V_HarnessO_brn","H_HelmetLeaderO_ocamo",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"SFPD_V_HarnessO_brn","H_HelmetLeaderO_ocamo",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "U_O_CombatUniform_ocamo";
		camouflage = 1;
	};
	
	class SFPD_OPFOR_DESERT_NBC_Mask: SFPD_OPFOR_DESERT_Rifleman {
		displayName = "Desert NBC (Mask)";
		linkedItems[] = {"SFPD_V_HarnessO_brn","H_HelmetLeaderO_ocamo","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"SFPD_V_HarnessO_brn","H_HelmetLeaderO_ocamo","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
	};
	
	class SFPD_OPFOR_DESERT_NBC_Suit: SFPD_OPFOR_DESERT_NBC_Mask {
		displayName = "Desert NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
	};
	
	class SFPD_OPFOR_DESERT_Rifleman_light: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Rifleman (light)";
		linkedItems[] = {"V_HarnessO_brn","H_MilCap_ocamo",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_MilCap_ocamo",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
	};
	
	class SFPD_OPFOR_DESERT_Grenadier: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_Grenadier_Backpack";
		displayName = "Desert Grenadier";
		weapons[] = {"SFPD_KATIBA_GL_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_KATIBA_GL_Default",BASIC_WEAPONS(hgun_Rook40_F)};
	};
	
	class SFPD_OPFOR_DESERT_AT: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_AT_Backpack";
		displayName = "Desert AT";
		icon = "iconManAT";
		weapons[] += {"launch_RPG32_F"};
		respawnWeapons[] += {"launch_RPG32_F"};
	};
	
	class SFPD_OPFOR_DESERT_AT_Heavy: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_AT_Heavy_Backpack";
		displayName = "Desert AT (Heavy)";
		icon = "iconManAT";
		weapons[] += {"launch_O_Vorona_brown_F"};
		respawnWeapons[] += {"launch_O_Vorona_brown_F"};
	};
	
	class SFPD_OPFOR_DESERT_LMG: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_LMG_Backpack";
		displayName = "Desert LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_Zafir_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_Zafir_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_DESERT_Leader: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_Leader_Backpack";
		displayName = "Desert Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_OPFOR_DESERT_Marksman: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Marksman";
		weapons[] = {"SFPD_RAHIM_Default","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RAHIM_Default","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		magazines[] = {TEN_TIMES(10Rnd_762x54_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {TEN_TIMES(10Rnd_762x54_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_OPFOR_DESERT_Sharpshooter: SFPD_OPFOR_DESERT_Marksman {
		backpack = "";
		displayName = "Desert Sharpshooter";
		weapons[] = {"SFPD_CYRUS_Default","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_CYRUS_Default","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(10Rnd_93x64_DMR_05_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(10Rnd_93x64_DMR_05_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_DESERT_Medic: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_Medic_Backpack";
		displayName = "Desert Medic";
		icon = "iconManMedic";
		
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\unif\iran_top.paa","\dvk_altcsat\data\unif\csat_altis.paa","\dvk_altcsat\data\unif\guanti.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_OPFOR_DESERT_Medic_Uniform";
	};
	
	class SFPD_OPFOR_DESERT_JTAC: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_JTAC_Backpack";
		displayName = "Desert JTAC";
		weapons[] = {"SFPD_KATIBA_GL_Default","hgun_Rook40_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_KATIBA_GL_Default","hgun_Rook40_F","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_OPFOR_DESERT_MMG: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_NAVID_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_NAVID_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {"150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_DESERT_MMGAss: SFPD_OPFOR_DESERT_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_CSAT_DESERT_MMG_ASS_Backpack";
		displayName = "Desert MMG Assist";
		items[] += {"ACE_EntrenchingTool"};
		respawnItems[] += {"ACE_EntrenchingTool"};
	};
	
	class SFPD_OPFOR_DESERT_TITAN_AT: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_TITAN_AT_Backpack";
		displayName = "Desert Titan AT";
		icon = "iconManAT";
		weapons[] += {"launch_O_Titan_short_F"};
		respawnWeapons[] += {"launch_O_Titan_short_F"};
	};
	
	class SFPD_OPFOR_DESERT_TITAN_AA: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_CSAT_DESERT_TITAN_AA_Backpack";
		displayName = "Desert Titan AA";
		icon = "iconManAT";
		weapons[] += {"launch_O_Titan_F"};
		respawnWeapons[] += {"launch_O_Titan_F"};
	};
	
	class SFPD_OPFOR_DESERT_Commandant: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Commandant";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		respawnMagazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_ocamo",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_MilCap_ocamo",BASIC_LINKED_RED};
		uniformClass = "U_O_OfficerUniform_ocamo";
		camouflage = 0.7;
	};
	
	class SFPD_OPFOR_DESERT_Recon: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Recon Rifle";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_KATIBAC_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_KATIBAC_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_green),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_green),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		linkedItems[] = {"V_HarnessO_brn","H_MilCap_ocamo","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_MilCap_ocamo","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_hex_F"};
		items[] = {"ACE_epinephrine","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_SpecopsUniform_ocamo";
		camouflage = 0.7;
	};
	
	class SFPD_OPFOR_DESERT_Recon_DMR: SFPD_OPFOR_DESERT_Recon {
		displayName = "Desert Recon DMR";
		weapons[] = {"SFPD_RAHIM_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RAHIM_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {EIGHT_TIMES(10Rnd_762x54_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Laserbatteries"};
		respawnMagazines[] = {EIGHT_TIMES(10Rnd_762x54_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Laserbatteries"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_OPFOR_DESERT_Sniper: SFPD_OPFOR_DESERT_Recon {
		displayName = "Desert Sniper";
		weapons[] = {"SFPD_LYNX_DESERT_Default","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_LYNX_DESERT_Default","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {EIGHT_TIMES(5Rnd_127x108_APDS_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {EIGHT_TIMES(5Rnd_127x108_APDS_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_hex_F"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_FullGhillie_sard";
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_DESERT_Spotter: SFPD_OPFOR_DESERT_Sniper {
		backpack = "SFPD_CSAT_DESERT_Spotter_Backpack";
		displayName = "Desert Spotter";
		weapons[] = {"SFPD_KATIBAC_Silenced","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_KATIBAC_Silenced","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_65x39_caseless_green),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(30Rnd_65x39_caseless_green),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","ACE_FlareTripMine_Mag"};
		items[] += {"ACE_DefusalKit"};
		respawnItems[] += {"ACE_DefusalKit"};
	};
	
	class SFPD_OPFOR_DESERT_SF_Leader: SFPD_OPFOR_DESERT_Recon {
		backpack = "SFPD_CSAT_DESERT_SF_Leader_Backpack";
		displayName = "Desert SF Leader";
		weapons[] = {"SFPD_DESERT_AK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_DESERT_AK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"SFPD_V_HarnessO_brn","H_HelmetSpecO_ocamo","G_Balaclava_blk","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"SFPD_V_HarnessO_brn","H_HelmetSpecO_ocamo","G_Balaclava_blk","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_hex_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_DESERT_SF_Grenadier: SFPD_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_CSAT_DESERT_SF_Grenadier_Backpack";
		displayName = "Desert SF Grenadier";
		weapons[] = {"SFPD_DESERT_AK12_GL_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_DESERT_AK12_GL_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_DESERT_SF_AT: SFPD_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_CSAT_DESERT_SF_AT_Backpack";
		displayName = "Desert SF AT";
		weapons[] += {"launch_RPG32_F"};
		respawnWeapons[] += {"launch_RPG32_F"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_DESERT_SF_LMG: SFPD_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_CSAT_DESERT_SF_LMG_Backpack";
		displayName = "Desert SF LMG";
		weapons[] = {"SFPD_DESERT_RPK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_DESERT_RPK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Arid_Mag_Tracer_F","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"75rnd_762x39_AK12_Arid_Mag_Tracer_F","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_DESERT_SF: SFPD_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_CSAT_DESERT_SF_Backpack";//TODO
		displayName = "Desert SF";
	};
	
	class SFPD_OPFOR_DESERT_Viper: SFPD_OPFOR_DESERT_Recon {
		backpack = "SFPD_CSAT_DESERT_Viper_Backpack";
		displayName = "Desert Viper";
		weapons[] = {"SFPD_TYPE115_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_TYPE115_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetO_ViperSP_hex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetO_ViperSP_hex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,"ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,"ACE_splint","ACE_splint"};
		uniformClass = "U_O_V_Soldier_Viper_hex_F";
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_DESERT_TankCrew: SFPD_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Tank Crew";
		weapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellRed","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellRed","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_O","G_Combat",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_O","G_Combat",BASIC_LINKED_RED,"O_NVGoggles_hex_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	//Woodland
	class SFPD_OPFOR_WOODLAND_Rifleman: SFPD_OPFOR_DESERT_Rifleman {
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};
		genericNames = "RussianMen";
		backpack = "SFPD_CSAT_WOODLAND_Rifleman_Backpack";
		faction = "SFPD_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Rifleman";
		weapons[] = {"SFPD_WOODLAND_AK12",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_WOODLAND_AK12",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {FIVE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {FIVE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetAggressor_cover_taiga_F",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetAggressor_cover_taiga_F",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "U_O_R_Gorka_01_camo_F";
	};
	
	class SFPD_OPFOR_WOODLAND_NBC_Mask: SFPD_OPFOR_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetAggressor_cover_taiga_F","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetAggressor_cover_taiga_F","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
	};
	
	class SFPD_OPFOR_WOODLAND_NBC_Suit: SFPD_OPFOR_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
	};
	
	class SFPD_OPFOR_WOODLAND_Rifleman_light: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Rifleman (light)";
		magazines[] = {EIGHT_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {EIGHT_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_SmershVest_01_radio_F","H_Booniehat_taiga",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_SmershVest_01_radio_F","H_Booniehat_taiga",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
	};
	
	class SFPD_OPFOR_WOODLAND_Grenadier: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_Grenadier_Backpack";
		displayName = "Woodland Grenadier";
		weapons[] = {"SFPD_WOODLAND_AK12_GL",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_WOODLAND_AK12_GL",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {FOUR_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {FOUR_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_WOODLAND_AT: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_AT_Backpack";
		displayName = "Woodland AT";
		icon = "iconManAT";
		weapons[] += {"launch_RPG32_green_F"};
		respawnWeapons[] += {"launch_RPG32_green_F"};
	};
	
	class SFPD_OPFOR_WOODLAND_AT_Heavy: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_AT_Heavy_Backpack";
		displayName = "Woodland AT (Heavy)";
		icon = "iconManAT";
		weapons[] += {"launch_O_Vorona_green_F"};
		respawnWeapons[] += {"launch_O_Vorona_green_F"};
	};
	
	class SFPD_OPFOR_WOODLAND_LMG: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_LMG_Backpack";
		displayName = "Woodland LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_WOODLAND_RPK12",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_WOODLAND_RPK12",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {"75rnd_762x39_AK12_Lush_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"75rnd_762x39_AK12_Lush_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_WOODLAND_Leader: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_Leader_Backpack";
		displayName = "Woodland Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_OPFOR_WOODLAND_Sharpshooter: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_Sharpshooter_Backpack";
		displayName = "Woodland Sharpshooter";
		weapons[] = {"SFPD_CYRUS_Black","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_CYRUS_Black","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_OPFOR_WOODLAND_Medic: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_Medic_Backpack";
		displayName = "Woodland Medic";
		icon = "iconManMedic";
		
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Khaki_taiga_CO.paa","","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_OPFOR_WOODLAND_Medic_Uniform";
	};
	
	class SFPD_OPFOR_WOODLAND_JTAC: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_JTAC_Backpack";
		displayName = "Woodland JTAC";
		weapons[] = {"SFPD_WOODLAND_AK12_GL","hgun_Rook40_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_AK12_GL","hgun_Rook40_F","Laserdesignator","Throw","Put"};
		magazines[] = {THREE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS,"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] = {THREE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS,"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_OPFOR_WOODLAND_MMG: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_MMG_Backpack";
		displayName = "Woodland MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_NAVID_Tan",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_NAVID_Tan",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_WOODLAND_MMGAss: SFPD_OPFOR_WOODLAND_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_CSAT_WOODLAND_MMG_ASS_Backpack";
		displayName = "Woodland MMG Assist";
	};
	
	class SFPD_OPFOR_WOODLAND_TITAN_AT: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_TITAN_AT_Backpack";
		displayName = "Woodland Titan AT";
		icon = "iconManAT";
		weapons[] += {"launch_I_Titan_short_F"};
		respawnWeapons[] += {"launch_I_Titan_short_F"};
	};
	
	class SFPD_OPFOR_WOODLAND_TITAN_AA: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_CSAT_WOODLAND_TITAN_AA_Backpack";
		displayName = "Woodland Titan AA";
		icon = "iconManAT";
		weapons[] += {"launch_B_Titan_olive_F"};
		respawnWeapons[] += {"launch_B_Titan_olive_F"};
	};
	
	class SFPD_OPFOR_WOODLAND_Commandant: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Commandant";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		respawnMagazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_grn",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_MilCap_grn",BASIC_LINKED_RED};
		uniformClass = "U_O_R_Gorka_01_F";
		camouflage = 0.7;
	};
	
	class SFPD_OPFOR_WOODLAND_Recon: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Recon Rifle";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_WOODLAND_AKU12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_AKU12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FIVE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {FIVE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		linkedItems[] = {"V_SmershVest_01_radio_F","H_Booniehat_taiga","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_SmershVest_01_radio_F","H_Booniehat_taiga","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		items[] = {"ACE_epinephrine","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7;
	};
	
	class SFPD_OPFOR_WOODLAND_Recon_DMR: SFPD_OPFOR_WOODLAND_Recon {
		displayName = "Woodland Recon DMR";
		weapons[] = {"SFPD_CYRUS_Black_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_CYRUS_Black_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(10Rnd_93x64_DMR_05_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Laserbatteries"};
		respawnMagazines[] = {SIX_TIMES(10Rnd_93x64_DMR_05_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Laserbatteries"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_OPFOR_WOODLAND_Sniper: SFPD_OPFOR_WOODLAND_Recon {
		displayName = "Woodland Sniper";
		weapons[] = {"SFPD_LYNX_Default","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_LYNX_Default","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {EIGHT_TIMES(5Rnd_127x108_APDS_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {EIGHT_TIMES(5Rnd_127x108_APDS_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_SmershVest_01_radio_F","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_SmershVest_01_radio_F","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_FullGhillie_lsh";
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_WOODLAND_Spotter: SFPD_OPFOR_WOODLAND_Sniper {
		backpack = "SFPD_CSAT_WOODLAND_Spotter_Backpack";
		displayName = "Woodland Spotter";
		weapons[] = {"SFPD_WOODLAND_AKU12_Silenced","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_AKU12_Silenced","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(30rnd_762x39_AK12_Lush_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","ACE_FlareTripMine_Mag"};
		items[] += {"ACE_DefusalKit"};
		respawnItems[] += {"ACE_DefusalKit"};
	};
	
	class SFPD_OPFOR_WOODLAND_SF_Leader: SFPD_OPFOR_WOODLAND_Recon {
		backpack = "SFPD_CSAT_WOODLAND_SF_Leader_Backpack";
		displayName = "Woodland SF Leader";
		weapons[] = {"SFPD_WOODLAND_AK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_AK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetAggressor_cover_taiga_F","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetAggressor_cover_taiga_F","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_grn_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_WOODLAND_SF_Grenadier: SFPD_OPFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_CSAT_WOODLAND_SF_Grenadier_Backpack";
		displayName = "Woodland SF Grenadier";
		weapons[] = {"SFPD_WOODLAND_AK12_GL_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_AK12_GL_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_WOODLAND_SF_AT: SFPD_OPFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_CSAT_WOODLAND_SF_AT_Backpack";
		displayName = "Woodland SF AT";
		weapons[] += {"launch_RPG32_green_F"};
		respawnWeapons[] += {"launch_RPG32_green_F"};
		magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_WOODLAND_SF_LMG: SFPD_OPFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_CSAT_WOODLAND_SF_LMG_Backpack";
		displayName = "Woodland SF LMG";
		weapons[] = {"SFPD_WOODLAND_RPK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_RPK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Lush_Mag_Tracer_F","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"75rnd_762x39_AK12_Lush_Mag_Tracer_F","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_WOODLAND_SF: SFPD_OPFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_CSAT_WOODLAND_SF_Backpack";//TODO
		displayName = "Woodland SF";
	};
	
	class SFPD_OPFOR_WOODLAND_TankCrew: SFPD_OPFOR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Tank Crew";
		weapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellRed","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellRed","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_Tank_black_F",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Tank_black_F",BASIC_LINKED_RED,"O_NVGoggles_grn_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	//Jungle
	class SFPD_OPFOR_JUNGLE_Rifleman: O_T_Soldier_F {
		backpack = "";
		side = 0;
		faction = "SFPD_OPFOR_JUNGLE_Faction";
		author = "Kamkill";
		scope = 2;
		scopeCurator = 2;
		displayName = "Jungle Rifleman";
		weapons[] = {"SFPD_CAR95_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_CAR95_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {TEN_TIMES(30Rnd_580x42_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {TEN_TIMES(30Rnd_580x42_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"SFPD_V_HarnessO_ghex_F","H_HelmetLeaderO_ghex_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"SFPD_V_HarnessO_ghex_F","H_HelmetLeaderO_ghex_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "U_O_T_Soldier_F";
		camouflage = 1;
	};
	
	class SFPD_OPFOR_JUNGLE_NBC_Mask: SFPD_OPFOR_JUNGLE_Rifleman {
		displayName = "Jungle NBC (Mask)";
		linkedItems[] = {"SFPD_V_HarnessO_ghex_F","H_HelmetLeaderO_ghex_F","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"SFPD_V_HarnessO_ghex_F","H_HelmetLeaderO_ghex_F","G_AirPurifyingRespirator_02_black_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
	};
	
	class SFPD_OPFOR_JUNGLE_NBC_Suit: SFPD_OPFOR_JUNGLE_NBC_Mask {
		displayName = "Jungle NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
	};
	
	class SFPD_OPFOR_JUNGLE_Rifleman_light: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "";
		displayName = "Jungle Rifleman (light)";
		linkedItems[] = {"V_HarnessO_ghex_F","H_MilCap_ghex_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","H_MilCap_ghex_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
	};
	
	class SFPD_OPFOR_JUNGLE_Grenadier: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_Grenadier_Backpack";
		displayName = "Jungle Grenadier";
		weapons[] = {"SFPD_CAR95_GL_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_CAR95_GL_Default",BASIC_WEAPONS(hgun_Rook40_F)};
	};
	
	class SFPD_OPFOR_JUNGLE_AT: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_AT_Backpack";
		displayName = "Jungle AT";
		icon = "iconManAT";
		weapons[] += {"launch_RPG32_ghex_F"};
		respawnWeapons[] += {"launch_RPG32_ghex_F"};
	};
	
	class SFPD_OPFOR_JUNGLE_AT_Heavy: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_AT_Heavy_Backpack";
		displayName = "Jungle AT (Heavy)";
		icon = "iconManAT";
		weapons[] += {"launch_O_Vorona_green_F"};
		respawnWeapons[] += {"launch_O_Vorona_green_F"};
	};
	
	class SFPD_OPFOR_JUNGLE_LMG: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_LMG_Backpack";
		displayName = "Jungle LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_CAR951_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_CAR951_Default",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {FIVE_TIMES(100Rnd_580x42_Mag_Tracer_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {FIVE_TIMES(100Rnd_580x42_Mag_Tracer_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_JUNGLE_Leader: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_Leader_Backpack";
		displayName = "Jungle Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_OPFOR_JUNGLE_Marksman: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "";
		displayName = "Jungle Marksman";
		weapons[] = {"SFPD_CMR76_Default","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_CMR76_Default","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		magazines[] = {EIGHT_TIMES(20Rnd_650x39_Cased_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {EIGHT_TIMES(20Rnd_650x39_Cased_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_OPFOR_JUNGLE_Sharpshooter: SFPD_OPFOR_JUNGLE_Marksman {
		backpack = "";
		displayName = "Jungle Sharpshooter";
		weapons[] = {"SFPD_CYRUS_Black","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_CYRUS_Black","hgun_Rook40_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(10Rnd_93x64_DMR_05_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(10Rnd_93x64_DMR_05_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_JUNGLE_Medic: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_Medic_Backpack";
		displayName = "Jungle Medic";
		icon = "iconManMedic";
		
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\unif\csat_tna_top.paa","\dvk_altcsat\data\unif\csat_tna.paa","\dvk_altcsat\data\unif\guanti.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_OPFOR_JUNGLE_Medic_Uniform";
	};
	
	class SFPD_OPFOR_JUNGLE_JTAC: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_JTAC_Backpack";
		displayName = "Jungle JTAC";
		weapons[] = {"SFPD_CAR95_GL_Default","hgun_Rook40_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_CAR95_GL_Default","hgun_Rook40_F","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_OPFOR_JUNGLE_MMG: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "";
		displayName = "Jungle MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_NAVID_Tan",BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {"SFPD_NAVID_Tan",BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {"150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_JUNGLE_MMGAss: SFPD_OPFOR_JUNGLE_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_CSAT_JUNGLE_MMG_ASS_Backpack";
		displayName = "Jungle MMG Assist";
		items[] += {"ACE_EntrenchingTool"};
		respawnItems[] += {"ACE_EntrenchingTool"};
	};
	
	class SFPD_OPFOR_JUNGLE_TITAN_AT: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_TITAN_AT_Backpack";
		displayName = "Jungle Titan AT";
		icon = "iconManAT";
		weapons[] += {"launch_O_Titan_short_ghex_F"};
		respawnWeapons[] += {"launch_O_Titan_short_ghex_F"};
	};
	
	class SFPD_OPFOR_JUNGLE_TITAN_AA: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "SFPD_CSAT_JUNGLE_TITAN_AA_Backpack";
		displayName = "Jungle Titan AA";
		icon = "iconManAT";
		weapons[] += {"launch_O_Titan_ghex_F"};
		respawnWeapons[] += {"launch_O_Titan_ghex_F"};
	};
	
	class SFPD_OPFOR_JUNGLE_Commandant: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "";
		displayName = "Jungle Commandant";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		respawnMagazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_ghex_F",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_MilCap_ghex_F",BASIC_LINKED_RED};
		uniformClass = "U_O_T_Officer_F";
		camouflage = 0.7;
	};
	
	class SFPD_OPFOR_JUNGLE_Recon: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "";
		displayName = "Jungle Recon Rifle";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_CAR95_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_CAR95_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_580x42_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_580x42_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		linkedItems[] = {"V_HarnessO_ghex_F","H_MilCap_ghex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","H_MilCap_ghex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_ghex_F"};
		items[] = {"ACE_epinephrine","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "dvk_csat_uv_tanoa_u";
		camouflage = 0.7;
	};
	
	class SFPD_OPFOR_JUNGLE_Recon_DMR: SFPD_OPFOR_JUNGLE_Recon {
		displayName = "Jungle Recon DMR";
		weapons[] = {"SFPD_CMR76_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_CMR76_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FOUR_TIMES(20Rnd_650x39_Cased_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Laserbatteries"};
		respawnMagazines[] = {FOUR_TIMES(20Rnd_650x39_Cased_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Laserbatteries"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_OPFOR_JUNGLE_Sniper: SFPD_OPFOR_JUNGLE_Recon {
		displayName = "Jungle Sniper";
		weapons[] = {"SFPD_LYNX_JUNGLE_Default","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_LYNX_JUNGLE_Default","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {EIGHT_TIMES(5Rnd_127x108_APDS_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {EIGHT_TIMES(5Rnd_127x108_APDS_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_ghex_F"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_JUNGLE_Spotter: SFPD_OPFOR_JUNGLE_Sniper {
		backpack = "SFPD_CSAT_JUNGLE_Spotter_Backpack";
		displayName = "Jungle Spotter";
		weapons[] = {"SFPD_CAR95_Silenced","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_CAR95_Silenced","SFPD_ROOK_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_580x42_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(30Rnd_580x42_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","ACE_FlareTripMine_Mag"};
		items[] += {"ACE_DefusalKit"};
		respawnItems[] += {"ACE_DefusalKit"};
	};
	
	class SFPD_OPFOR_JUNGLE_SF_Leader: SFPD_OPFOR_JUNGLE_Recon {
		backpack = "SFPD_CSAT_JUNGLE_SF_Leader_Backpack";
		displayName = "Jungle SF Leader";
		weapons[] = {"SFPD_WOODLAND_AK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_AK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"SFPD_V_HarnessO_ghex_F","H_HelmetSpecO_ghex_F","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"SFPD_V_HarnessO_ghex_F","H_HelmetSpecO_ghex_F","G_Balaclava_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","O_NVGoggles_ghex_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_JUNGLE_SF_Grenadier: SFPD_OPFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_CSAT_JUNGLE_SF_Grenadier_Backpack";
		displayName = "Jungle SF Grenadier";
		weapons[] = {"SFPD_WOODLAND_AK12_GL_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_AK12_GL_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_JUNGLE_SF_AT: SFPD_OPFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_CSAT_JUNGLE_SF_AT_Backpack";
		displayName = "Jungle SF AT";
		weapons[] += {"launch_RPG32_ghex_F"};
		respawnWeapons[] += {"launch_RPG32_ghex_F"};
		magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_JUNGLE_SF_LMG: SFPD_OPFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_CSAT_JUNGLE_SF_LMG_Backpack";
		displayName = "Jungle SF LMG";
		weapons[] = {"SFPD_WOODLAND_RPK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_RPK12_Silenced","SFPD_ROOK_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Lush_Mag_Tracer_F","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"75rnd_762x39_AK12_Lush_Mag_Tracer_F","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_OPFOR_JUNGLE_SF: SFPD_OPFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_CSAT_JUNGLE_SF_Backpack";//TODO
		displayName = "Jungle SF";
	};
	
	class SFPD_OPFOR_JUNGLE_Viper: SFPD_OPFOR_JUNGLE_Recon {
		backpack = "SFPD_CSAT_JUNGLE_Viper_Backpack";
		displayName = "Jungle Viper";
		weapons[] = {"SFPD_TYPE115_JUNGLE_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_TYPE115_JUNGLE_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_HarnessOGL_ghex_F","H_HelmetO_ViperSP_ghex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessOGL_ghex_F","H_HelmetO_ViperSP_ghex_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,"ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,"ACE_splint","ACE_splint"};
		uniformClass = "U_O_V_Soldier_Viper_F";
		camouflage = 0.5;
	};
	
	class SFPD_OPFOR_JUNGLE_TankCrew: SFPD_OPFOR_JUNGLE_Rifleman {
		backpack = "";
		displayName = "Jungle Tank Crew";
		weapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_Rook40_F)};
		magazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellRed","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellRed","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_O_ghex_F","G_Combat_Goggles_tna_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_O_ghex_F","G_Combat_Goggles_tna_F",BASIC_LINKED_RED,"O_NVGoggles_ghex_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	//Universal
	class SFPD_OPFOR_HelicopterPilot: SFPD_OPFOR_DESERT_TankCrew {
		faction = "SFPD_OPFOR_Faction";
		displayName = "Universal Helicopter Pilot";
		linkedItems[] = {"V_Rangemaster_belt","H_CrewHelmetHeli_O",BASIC_LINKED_RED,"ACE_NVG_Wide"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_CrewHelmetHeli_O",BASIC_LINKED_RED,"ACE_NVG_Wide"};
		uniformClass = "U_O_PilotCoveralls";
	};
	
	class SFPD_OPFOR_PlanePilot: SFPD_OPFOR_HelicopterPilot {
		displayName = "Universal Plane Pilot";
		linkedItems[] = {"H_PilotHelmetFighter_O",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_O",BASIC_LINKED_RED};
	};
	
	class SFPD_OPFOR_Diver: SFPD_OPFOR_DESERT_Recon {
		backpack = "SFPD_UNIVERSAL_Diver_Backpack";
		faction = "SFPD_OPFOR_Faction";
		displayName = "Universal Diver";
		weapons[] = {"arifle_SDAR_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(20Rnd_556x45_UW_mag),"SmokeShellRed"};
		respawnMagazines[] = {SIX_TIMES(20Rnd_556x45_UW_mag),"SmokeShellRed"};
		linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","NVGoggles_OPFOR"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_Wetsuit";
	};
	
	class SFPD_OPFOR_Colonel: SFPD_OPFOR_DESERT_Commandant {
		faction = "SFPD_OPFOR_Faction";
		backpack = "";
		displayName = "Colonel";
		icon = "iconManOfficer";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"H_ParadeDressCap_01_CSAT_F","G_Aviator",BASIC_LINKED_RED};
		respawnLinkedItems[] = {"H_ParadeDressCap_01_CSAT_F","G_Aviator",BASIC_LINKED_RED};
		items[] = {"ACE_MapTools","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		respawnItems[] = {"ACE_MapTools","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		uniformClass = "U_O_ParadeUniform_01_CSAT_decorated_F";
		camouflage = 0.7;
	};