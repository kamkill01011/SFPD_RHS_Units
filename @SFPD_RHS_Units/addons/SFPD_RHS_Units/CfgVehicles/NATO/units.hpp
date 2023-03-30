	//Desert
	class SFPD_BLUFOR_DESERT_Rifleman: B_Soldier_base_F {
		side = 1; //Blufor
		faction = "SFPD_BLUFOR_DESERT_Faction"; //Your Faction
		//backpack = "Class_Backpack"; //Backpack
		author = "Kamkill"; //Self Explanatory 
		_generalMacro = "SFPD_BLUFOR_DESERT_Rifleman"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Desert Rifleman"; //In-Game Name
		icon = "iconMan"; //Custom icon (* + Medic,Engineer,Explosive,Recon,Virtual,AT,Leader,MG,Officer)
		weapons[] = {"SFPD_MX_Default",BASIC_WEAPONS(hgun_P07_blk_F)}; //Spawning Gear
		respawnWeapons[] = {"SFPD_MX_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {EIGHT_TIMES(30Rnd_65x39_caseless_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {EIGHT_TIMES(30Rnd_65x39_caseless_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetSpecB_paint2",BASIC_LINKED_BLUE,"NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetSpecB_paint2",BASIC_LINKED_BLUE,"NVGoggles"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "U_B_CombatUniform_mcam"; //uniform you are using
		camouflage = 1;
	};
	
	class SFPD_BLUFOR_DESERT_NBC_Mask: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert NBC (Mask)";
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetSpecB_paint2","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE,"NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetSpecB_paint2","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE,"NVGoggles"};
	};
	
	class SFPD_BLUFOR_DESERT_NBC_Suit: SFPD_BLUFOR_DESERT_NBC_Mask {
		displayName = "Desert NBC (Suit)";
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
	};
	
	class SFPD_BLUFOR_DESERT_Rifleman_light: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Rifleman (light)";
		linkedItems[] = {"V_Chestrig_khk","H_Booniehat_mcamo",BASIC_LINKED_BLUE,"NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Booniehat_mcamo",BASIC_LINKED_BLUE,"NVGoggles"};
	};
	
	class SFPD_BLUFOR_DESERT_Unequiped: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Unequiped";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	};
	
	class SFPD_BLUFOR_DESERT_Grenadier: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_Grenadier_Backpack";
		displayName = "Desert Grenadier";
		weapons[] = {"SFPD_MX_GL_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_MX_GL_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_DESERT_AT: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_AT_Backpack";
		displayName = "Desert AT";
		icon = "iconManAT";
		weapons[] = {"SFPD_MX_Default","launch_MRAWS_sand_F",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_MX_Default","launch_MRAWS_sand_F",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_DESERT_AT_Heavy: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert AT (Heavy)";
		icon = "iconManAT";
		weapons[] = {"SFPD_MX_Default","launch_NLAW_F",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_MX_Default","launch_NLAW_F",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_DESERT_LMG: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_LMG_Backpack";
		displayName = "Desert LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_LMG_03_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_LMG_03_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_DESERT_Leader: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_Leader_Backpack";
		displayName = "Desert Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_BLUFOR_DESERT_Marksman: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Marksman";
		weapons[] = {"SFPD_DESERT_SIG_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_DESERT_SIG_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		magazines[] = {SEVEN_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SEVEN_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		items[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_DESERT_Sharpshooter: SFPD_BLUFOR_DESERT_Marksman {
		displayName = "Desert Sharpshooter";
		weapons[] = {"SFPD_DESERT_Noreen_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_DESERT_Noreen_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(10Rnd_338_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(10Rnd_338_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_DESERT_Medic: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_Medic_Backpack";
		displayName = "Desert Medic";
		icon = "iconManMedic";
		
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_BLUFOR_DESERT_Medic_Uniform";
	};
	
	class SFPD_BLUFOR_DESERT_Ammo: SFPD_BLUFOR_DESERT_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_DESERT_Ammo_Backpack";
		displayName = "Desert Ammo Carrier";
	};
	
	class SFPD_BLUFOR_DESERT_Assaulter: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_Assaulter_Backpack";
		displayName = "Desert Assaulter";
		weapons[] = {"SFPD_BLACK_P90_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_BLACK_P90_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {FOUR_TIMES(50Rnd_570x28_SMG_03),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {FOUR_TIMES(50Rnd_570x28_SMG_03),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrierSpec_mtp","H_HelmetSpecB_paint2",BASIC_LINKED_BLUE,"NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierSpec_mtp","H_HelmetSpecB_paint2",BASIC_LINKED_BLUE,"NVGoggles"};
	};
	
	class SFPD_BLUFOR_DESERT_EOD: SFPD_BLUFOR_DESERT_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_DESERT_EOD_Backpack";
		displayName = "Desert EOD";
		icon = "iconManExplosive";
		linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB_paint2","G_Combat",BASIC_LINKED_BLUE,"NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB_paint2","G_Combat",BASIC_LINKED_BLUE,"NVGoggles"};
		items[] = {"ACE_M26_Clacker","ACE_DefusalKit",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_M26_Clacker","ACE_DefusalKit",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_DESERT_JTAC: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_JTAC_Backpack";
		displayName = "Desert JTAC";
		weapons[] = {"SFPD_MX_GL_Default","hgun_P07_blk_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_MX_GL_Default","hgun_P07_blk_F","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_BLUFOR_DESERT_MMG: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_MMG_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_MMG_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_DESERT_MMGAss: SFPD_BLUFOR_DESERT_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_DESERT_MMG_Backpack";
		displayName = "Desert MMG Assist";
		items[] += {"ACE_EntrenchingTool"};
		respawnItems[] += {"ACE_EntrenchingTool"};
	};
	
	class SFPD_BLUFOR_DESERT_Logistician: SFPD_BLUFOR_DESERT_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_DESERT_Logistician_Backpack";
		displayName = "Desert Logistician";
		icon = "iconManEngineer";
		items[] = {"ACE_RangeTable_82mm",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_RangeTable_82mm",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_DESERT_TITAN_AT: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_TITAN_AT_Backpack";
		displayName = "Desert Titan AT";
		icon = "iconManAT";
		weapons[] += {"launch_B_Titan_short_F"};
		respawnWeapons[] += {"launch_B_Titan_short_F"};
	};
	
	class SFPD_BLUFOR_DESERT_TITAN_AA: SFPD_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_NATO_DESERT_TITAN_AA_Backpack";
		displayName = "Desert Titan AA";
		icon = "iconManAT";
		weapons[] += {"launch_B_Titan_F"};
		respawnWeapons[] += {"launch_B_Titan_F"};
	};
	
	class SFPD_BLUFOR_DESERT_Commandant: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Commandant";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		respawnMagazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		linkedItems[] = {"V_Rangemaster_belt","H_Booniehat_mcamo",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Booniehat_mcamo",BASIC_LINKED_BLUE};
		camouflage = 0.7;
	};
	
	class SFPD_BLUFOR_DESERT_Recon: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Recon DMR";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_DESERT_SIG_Silenced","SFPD_DESERT_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_DESERT_SIG_Silenced","SFPD_DESERT_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {FOUR_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {FOUR_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"V_Chestrig_khk","H_Booniehat_mcamo","G_Bandanna_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Booniehat_mcamo","G_Bandanna_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7;
	};
	
	class SFPD_BLUFOR_DESERT_Recon_Rifle: SFPD_BLUFOR_DESERT_Recon {
		displayName = "Desert Recon Rifle";
		weapons[] = {"SFPD_MXC_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_MXC_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		items[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_BLUFOR_DESERT_Sniper: SFPD_BLUFOR_DESERT_Recon {
		displayName = "Desert Sniper";
		weapons[] = {"SFPD_CAMO_M200","SFPD_DESERT_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_CAMO_M200","SFPD_DESERT_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {"7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_Chestrig_khk","G_Bandanna_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_khk","G_Bandanna_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage)};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage)};
		uniformClass = "U_B_FullGhillie_sard";
		camouflage = 0.5;
	};
	
	class SFPD_BLUFOR_DESERT_Spotter: SFPD_BLUFOR_DESERT_Sniper {
		backpack = "SFPD_NATO_DESERT_Spotter_Backpack";
		displayName = "Desert Spotter";
		weapons[] = {"SFPD_MXC_Silenced","SFPD_DESERT_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_MXC_Silenced","SFPD_DESERT_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_65x39_caseless_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(30Rnd_65x39_caseless_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
	};
	
	class SFPD_BLUFOR_DESERT_SF_Leader: SFPD_BLUFOR_DESERT_Recon {
		backpack = "SFPD_NATO_DESERT_SF_Leader_Backpack";
		displayName = "Desert SF Leader";
		weapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(30Rnd_762x39_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(30Rnd_762x39_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_snakeskin","G_Balaclava_TI_G_blk_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_snakeskin","G_Balaclava_TI_G_blk_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles"};
		items[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		uniformClass = "U_B_CTRG_Soldier_3_Arid_F";
	};
	
	class SFPD_BLUFOR_DESERT_SF_Grenadier: SFPD_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_NATO_DESERT_SF_Grenadier_Backpack";
		displayName = "Desert SF Grenadier";
		weapons[] = {"SFPD_BLACK_AK12_GL_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_GL_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_BLUFOR_DESERT_SF_AT: SFPD_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_NATO_DESERT_SF_AT_Backpack";
		displayName = "Desert SF AT";
		weapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_DESERT_P99_Silenced","launch_MRAWS_sand_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_DESERT_P99_Silenced","launch_MRAWS_sand_F","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_BLUFOR_DESERT_SF_LMG: SFPD_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_NATO_DESERT_SF_LMG_Backpack";
		displayName = "Desert SF LMG";
		weapons[] = {"SFPD_LMG_03_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_LMG_03_Silenced","SFPD_DESERT_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_DESERT_SF: SFPD_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_NATO_DESERT_SF_Backpack";//TODO
		displayName = "Desert SF";
	};
	
	class SFPD_BLUFOR_DESERT_TankCrew: SFPD_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Tank Crew";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat",BASIC_LINKED_BLUE,"NVGoggles"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat",BASIC_LINKED_BLUE,"NVGoggles"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	//Woodland
	class SFPD_BLUFOR_WOODLAND_Rifleman: SFPD_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Rifleman";
		weapons[] = {"SFPD_WOODLAND_MX",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_WOODLAND_MX",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {EIGHT_TIMES(30Rnd_65x39_caseless_khaki_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {EIGHT_TIMES(30Rnd_65x39_caseless_khaki_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetSpecB_wdl",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetSpecB_wdl",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		uniformClass = "U_B_CombatUniform_mcam_wdl_f";
	};
	
	class SFPD_BLUFOR_WOODLAND_NBC_Mask: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetSpecB_wdl","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetSpecB_wdl","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
	};
	
	class SFPD_BLUFOR_WOODLAND_NBC_Suit: SFPD_BLUFOR_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
	};
	
	class SFPD_BLUFOR_WOODLAND_Rifleman_light: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Rifleman (light)";
		linkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_wdl",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_wdl",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
	};
	
	class SFPD_BLUFOR_WOODLAND_Unequiped: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Unequiped";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	};
	
	class SFPD_BLUFOR_WOODLAND_Grenadier: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_Grenadier_Backpack";
		displayName = "Woodland Grenadier";
		weapons[] = {"SFPD_WOODLAND_MX_GL",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_WOODLAND_MX_GL",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_WOODLAND_AT: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_AT_Backpack";
		displayName = "Woodland AT";
		icon = "iconManAT";
		weapons[] = {"SFPD_WOODLAND_MX","launch_MRAWS_green_F",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_WOODLAND_MX","launch_MRAWS_green_F",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_WOODLAND_AT_Heavy: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland AT (Heavy)";
		icon = "iconManAT";
		weapons[] = {"SFPD_WOODLAND_MX","launch_NLAW_F",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_WOODLAND_MX","launch_NLAW_F",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_WOODLAND_LMG: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_LMG_Backpack";
		displayName = "Woodland LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_LMG_03_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_LMG_03_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_WOODLAND_Leader: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_Leader_Backpack";
		displayName = "Woodland Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_BLUFOR_WOODLAND_Marksman: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Marksman";
		weapons[] = {"SFPD_WOODLAND_SIG","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_SIG","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		magazines[] = {SEVEN_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SEVEN_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		items[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_WOODLAND_Sharpshooter: SFPD_BLUFOR_WOODLAND_Marksman {
		displayName = "Woodland Sharpshooter";
		weapons[] = {"SFPD_WOODLAND_Noreen","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_Noreen","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(10Rnd_338_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(10Rnd_338_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_WOODLAND_Medic: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_Medic_Backpack";
		displayName = "Woodland Medic";
		icon = "iconManMedic";
		
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"a3\Characters_F_Enoch\Uniforms\Data\clothing_mcam_wdl_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_BLUFOR_WOODLAND_Medic_Uniform";
	};
	
	class SFPD_BLUFOR_WOODLAND_Ammo: SFPD_BLUFOR_WOODLAND_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_WOODLAND_Ammo_Backpack";
		displayName = "Woodland Ammo Carrier";
	};
	
	class SFPD_BLUFOR_WOODLAND_Assaulter: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_Assaulter_Backpack";
		displayName = "Woodland Assaulter";
		weapons[] = {"SFPD_BLACK_P90_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_BLACK_P90_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {FOUR_TIMES(50Rnd_570x28_SMG_03),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {FOUR_TIMES(50Rnd_570x28_SMG_03),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrierSpec_wdl","H_HelmetSpecB_wdl",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierSpec_wdl","H_HelmetSpecB_wdl",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
	};
	
	class SFPD_BLUFOR_WOODLAND_EOD: SFPD_BLUFOR_WOODLAND_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_WOODLAND_EOD_Backpack";
		displayName = "Woodland EOD";
		icon = "iconManExplosive";
		linkedItems[] = {"V_PlateCarrierGL_wdl","H_HelmetSpecB_wdl","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_wdl","H_HelmetSpecB_wdl","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		items[] = {"ACE_M26_Clacker","ACE_DefusalKit",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_M26_Clacker","ACE_DefusalKit",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_WOODLAND_JTAC: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_JTAC_Backpack";
		displayName = "Woodland JTAC";
		weapons[] = {"SFPD_WOODLAND_MX_GL","hgun_P07_blk_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_MX_GL","hgun_P07_blk_F","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_BLUFOR_WOODLAND_MMG: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_MMG_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_MMG_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_WOODLAND_MMGAss: SFPD_BLUFOR_WOODLAND_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_WOODLAND_MMG_Backpack";
		displayName = "Woodland MMG Assist";
		items[] += {"ACE_EntrenchingTool"};
		respawnItems[] += {"ACE_EntrenchingTool"};
	};
	
	class SFPD_BLUFOR_WOODLAND_Logistician: SFPD_BLUFOR_WOODLAND_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_WOODLAND_Logistician_Backpack";
		displayName = "Woodland Logistician";
		icon = "iconManEngineer";
		items[] = {"ACE_RangeTable_82mm",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_RangeTable_82mm",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_WOODLAND_TITAN_AT: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_TITAN_AT_Backpack";
		displayName = "Woodland Titan AT";
		icon = "iconManAT";
		weapons[] += {"launch_I_Titan_short_F"};
		respawnWeapons[] += {"launch_I_Titan_short_F"};
	};
	
	class SFPD_BLUFOR_WOODLAND_TITAN_AA: SFPD_BLUFOR_WOODLAND_Rifleman {
		backpack = "SFPD_NATO_WOODLAND_TITAN_AA_Backpack";
		displayName = "Woodland Titan AA";
		icon = "iconManAT";
		weapons[] += {"launch_B_Titan_olive_F"};
		respawnWeapons[] += {"launch_B_Titan_olive_F"};
	};
	
	class SFPD_BLUFOR_WOODLAND_Commandant: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Commandant";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		respawnMagazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		linkedItems[] = {"V_Rangemaster_belt","H_Booniehat_wdl",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Booniehat_wdl",BASIC_LINKED_BLUE};
		camouflage = 0.7;
	};
	
	class SFPD_BLUFOR_WOODLAND_Recon: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Recon DMR";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_WOODLAND_SIG_Silenced","SFPD_WOODLAND_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_SIG_Silenced","SFPD_WOODLAND_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {FOUR_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {FOUR_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_wdl","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_wdl","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_INDEP"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7;
	};
	
	class SFPD_BLUFOR_WOODLAND_Recon_Rifle: SFPD_BLUFOR_WOODLAND_Recon {
		displayName = "Woodland Recon Rifle";
		weapons[] = {"SFPD_WOODLAND_MXC_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_MXC_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_khaki_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_65x39_caseless_khaki_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		items[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_BLUFOR_WOODLAND_Sniper: SFPD_BLUFOR_WOODLAND_Recon {
		displayName = "Woodland Sniper";
		weapons[] = {"SFPD_CAMO_M200","SFPD_WOODLAND_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_CAMO_M200","SFPD_WOODLAND_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {"7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_TacChestrig_grn_F","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_INDEP"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage)};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage)};
		uniformClass = "U_B_FullGhillie_lsh";
		camouflage = 0.5;
	};
	
	class SFPD_BLUFOR_WOODLAND_Spotter: SFPD_BLUFOR_WOODLAND_Sniper {
		backpack = "SFPD_NATO_WOODLAND_Spotter_Backpack";
		displayName = "Woodland Spotter";
		weapons[] = {"SFPD_WOODLAND_MXC_Silenced","SFPD_WOODLAND_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_WOODLAND_MXC_Silenced","SFPD_WOODLAND_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_65x39_caseless_khaki_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(30Rnd_65x39_caseless_khaki_mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
	};
	
	class SFPD_BLUFOR_WOODLAND_SF_Leader: SFPD_BLUFOR_WOODLAND_Recon {
		backpack = "SFPD_NATO_WOODLAND_SF_Leader_Backpack";
		displayName = "Woodland SF Leader";
		weapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(30Rnd_762x39_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(30Rnd_762x39_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light","G_Balaclava_TI_G_tna_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light","G_Balaclava_TI_G_tna_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		items[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		uniformClass = "U_B_CTRG_Soldier_3_F";
	};
	
	class SFPD_BLUFOR_WOODLAND_SF_Grenadier: SFPD_BLUFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_NATO_WOODLAND_SF_Grenadier_Backpack";
		displayName = "Woodland SF Grenadier";
		weapons[] = {"SFPD_BLACK_AK12_GL_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_GL_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_BLUFOR_WOODLAND_SF_AT: SFPD_BLUFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_NATO_WOODLAND_SF_AT_Backpack";
		displayName = "Woodland SF AT";
		weapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_WOODLAND_P99_Silenced","launch_MRAWS_green_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_WOODLAND_P99_Silenced","launch_MRAWS_green_F","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_BLUFOR_WOODLAND_SF_LMG: SFPD_BLUFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_NATO_WOODLAND_SF_LMG_Backpack";
		displayName = "Woodland SF LMG";
		weapons[] = {"SFPD_LMG_03_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_LMG_03_Silenced","SFPD_WOODLAND_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_WOODLAND_SF: SFPD_BLUFOR_WOODLAND_SF_Leader {
		backpack = "SFPD_NATO_WOODLAND_SF_Backpack";//TODO
		displayName = "Woodland SF";
	};
	
	class SFPD_BLUFOR_WOODLAND_TankCrew: SFPD_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Tank Crew";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_INDEP"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	//Jungle
	class SFPD_BLUFOR_JUNGLE_Rifleman: SFPD_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
		displayName = "Jungle Rifleman";
		weapons[] = {"SFPD_JUNGLE_SPAR_16_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {TEN_TIMES(30Rnd_556x45_Stanag_red),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {TEN_TIMES(30Rnd_556x45_Stanag_red),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		uniformClass = "U_B_T_Soldier_F";
	};
	
	class SFPD_BLUFOR_JUNGLE_NBC_Mask: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle NBC (Mask)";
		linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
	};
	
	class SFPD_BLUFOR_JUNGLE_NBC_Suit: SFPD_BLUFOR_JUNGLE_NBC_Mask {
		displayName = "Jungle NBC (Suit)";
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
	};
	
	class SFPD_BLUFOR_JUNGLE_Rifleman_light: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle Rifleman (light)";
		linkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
	};
	
	class SFPD_BLUFOR_JUNGLE_Unequiped: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle Unequiped";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	};
	
	class SFPD_BLUFOR_JUNGLE_Grenadier: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_Grenadier_Backpack";
		displayName = "Jungle Grenadier";
		weapons[] = {"SFPD_JUNGLE_SPAR_16_GL_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16_GL_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_JUNGLE_AT: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_AT_Backpack";
		displayName = "Jungle AT";
		icon = "iconManAT";
		weapons[] = {"SFPD_JUNGLE_SPAR_16_Default","launch_MRAWS_green_F",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16_Default","launch_MRAWS_green_F",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_JUNGLE_AT_Heavy: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle AT (Heavy)";
		icon = "iconManAT";
		weapons[] = {"SFPD_JUNGLE_SPAR_16_Default","launch_NLAW_F",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16_Default","launch_NLAW_F",BASIC_WEAPONS(hgun_P07_blk_F)};
	};
	
	class SFPD_BLUFOR_JUNGLE_LMG: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_LMG_Backpack";
		displayName = "Jungle LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_JUNGLE_SPAR_16S_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16S_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {THREE_TIMES(150Rnd_556x45_Drum_Mag_Tracer_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {THREE_TIMES(150Rnd_556x45_Drum_Mag_Tracer_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_JUNGLE_Leader: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_Leader_Backpack";
		displayName = "Jungle Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_BLUFOR_JUNGLE_Marksman: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle Marksman";
		weapons[] = {"SFPD_JUNGLE_SPAR_17_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_17_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		magazines[] = {SEVEN_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SEVEN_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		items[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_RangeCard","ACE_Kestrel4500",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_JUNGLE_Sharpshooter: SFPD_BLUFOR_JUNGLE_Marksman {
		displayName = "Jungle Sharpshooter";
		weapons[] = {"SFPD_JUNGLE_Noreen_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_JUNGLE_Noreen_Default","hgun_P07_blk_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(10Rnd_338_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(10Rnd_338_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_JUNGLE_Medic: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_Medic_Backpack";
		displayName = "Jungle Medic";
		icon = "iconManMedic";
		
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_BLUFOR_JUNGLE_Medic_Uniform";
	};
	
	class SFPD_BLUFOR_JUNGLE_Ammo: SFPD_BLUFOR_JUNGLE_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_JUNGLE_Ammo_Backpack";
		displayName = "Jungle Ammo Carrier";
	};
	
	class SFPD_BLUFOR_JUNGLE_Assaulter: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_Assaulter_Backpack";
		displayName = "Jungle Assaulter";
		weapons[] = {"SFPD_BLACK_P90_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_BLACK_P90_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {FOUR_TIMES(50Rnd_570x28_SMG_03),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {FOUR_TIMES(50Rnd_570x28_SMG_03),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrierSpec_tna_F","H_HelmetB_Enh_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrierSpec_tna_F","H_HelmetB_Enh_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
	};
	
	class SFPD_BLUFOR_JUNGLE_EOD: SFPD_BLUFOR_JUNGLE_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_JUNGLE_EOD_Backpack";
		displayName = "Jungle EOD";
		icon = "iconManExplosive";
		linkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_Enh_tna_F","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_Enh_tna_F","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		items[] = {"ACE_M26_Clacker","ACE_DefusalKit",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_M26_Clacker","ACE_DefusalKit",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_JUNGLE_JTAC: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_JTAC_Backpack";
		displayName = "Jungle JTAC";
		weapons[] = {"SFPD_JUNGLE_SPAR_16_GL_Default","hgun_P07_blk_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16_GL_Default","hgun_P07_blk_F","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_BLUFOR_JUNGLE_MMG: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_MMG_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {"SFPD_MMG_Default",BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_JUNGLE_MMGAss: SFPD_BLUFOR_JUNGLE_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_JUNGLE_MMG_Backpack";
		displayName = "Jungle MMG Assist";
		items[] += {"ACE_EntrenchingTool"};
		respawnItems[] += {"ACE_EntrenchingTool"};
	};
	
	class SFPD_BLUFOR_JUNGLE_Logistician: SFPD_BLUFOR_JUNGLE_Rifleman {
		scope = 0;
		scopeCurator = 0;
		backpack = "SFPD_NATO_JUNGLE_Logistician_Backpack";
		displayName = "Jungle Logistician";
		icon = "iconManEngineer";
		items[] = {"ACE_RangeTable_82mm",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {"ACE_RangeTable_82mm",BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	class SFPD_BLUFOR_JUNGLE_TITAN_AT: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_TITAN_AT_Backpack";
		displayName = "Jungle Titan AT";
		icon = "iconManAT";
		weapons[] += {"launch_B_Titan_short_tna_F"};
		respawnWeapons[] += {"launch_B_Titan_short_tna_F"};
	};
	
	class SFPD_BLUFOR_JUNGLE_TITAN_AA: SFPD_BLUFOR_JUNGLE_Rifleman {
		backpack = "SFPD_NATO_JUNGLE_TITAN_AA_Backpack";
		displayName = "Jungle Titan AA";
		icon = "iconManAT";
		weapons[] += {"launch_B_Titan_tna_F"};
		respawnWeapons[] += {"launch_B_Titan_tna_F"};
	};
	
	class SFPD_BLUFOR_JUNGLE_Commandant: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle Commandant";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		respawnMagazines[] = {THREE_TIMES(16Rnd_9x21_Mag)};
		linkedItems[] = {"V_Rangemaster_belt","H_Booniehat_tna_F",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Booniehat_tna_F",BASIC_LINKED_BLUE};
		camouflage = 0.7;
	};
	
	class SFPD_BLUFOR_JUNGLE_Recon: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle Recon DMR";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_JUNGLE_SPAR_17_Silenced","SFPD_JUNGLE_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_17_Silenced","SFPD_JUNGLE_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {FOUR_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {FOUR_TIMES(20Rnd_762x51_Mag),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_tna_F","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_tna_F","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7;
	};
	
	class SFPD_BLUFOR_JUNGLE_Recon_Rifle: SFPD_BLUFOR_JUNGLE_Recon {
		displayName = "Jungle Recon Rifle";
		weapons[] = {"SFPD_JUNGLE_SPAR_16_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(30Rnd_556x45_Stanag_red),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {SIX_TIMES(30Rnd_556x45_Stanag_red),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		items[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_BLUFOR_JUNGLE_Sniper: SFPD_BLUFOR_JUNGLE_Recon {
		displayName = "Jungle Sniper";
		weapons[] = {"SFPD_JUNGLE_M200","SFPD_JUNGLE_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_JUNGLE_M200","SFPD_JUNGLE_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {"7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_TacChestrig_grn_F","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","G_Bandanna_oli","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		items[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage)};
		respawnItems[] = {"ACE_epinephrine","ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage)};
		uniformClass = "U_B_T_FullGhillie_tna_F";
		camouflage = 0.5;
	};
	
	class SFPD_BLUFOR_JUNGLE_Spotter: SFPD_BLUFOR_JUNGLE_Sniper {
		backpack = "SFPD_NATO_JUNGLE_Spotter_Backpack";
		displayName = "Jungle Spotter";
		weapons[] = {"SFPD_JUNGLE_SPAR_16_Silenced","SFPD_JUNGLE_P99_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_JUNGLE_SPAR_16_Silenced","SFPD_JUNGLE_P99_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_556x45_Stanag_red),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(30Rnd_556x45_Stanag_red),"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
	};
	
	class SFPD_BLUFOR_JUNGLE_SF_Leader: SFPD_BLUFOR_JUNGLE_Recon {
		backpack = "SFPD_NATO_JUNGLE_SF_Leader_Backpack";
		displayName = "Jungle SF Leader";
		weapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(30Rnd_762x39_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(30Rnd_762x39_Mag_F),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light","G_Balaclava_TI_G_tna_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light","G_Balaclava_TI_G_tna_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_tna_F"};
		items[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_splint","ACE_splint"};
		uniformClass = "U_B_CTRG_Soldier_3_F";
	};
	
	class SFPD_BLUFOR_JUNGLE_SF_Grenadier: SFPD_BLUFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_NATO_JUNGLE_SF_Grenadier_Backpack";
		displayName = "Jungle SF Grenadier";
		weapons[] = {"SFPD_BLACK_AK12_GL_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_GL_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_BLUFOR_JUNGLE_SF_AT: SFPD_BLUFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_NATO_JUNGLE_SF_AT_Backpack";
		displayName = "Jungle SF AT";
		weapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_JUNGLE_P99_Silenced","launch_MRAWS_green_F","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BLACK_AK12_Silenced","SFPD_JUNGLE_P99_Silenced","launch_MRAWS_green_F","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_BLUFOR_JUNGLE_SF_LMG: SFPD_BLUFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_NATO_JUNGLE_SF_LMG_Backpack";
		displayName = "Jungle SF LMG";
		weapons[] = {"SFPD_LMG_03_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_LMG_03_Silenced","SFPD_JUNGLE_P99_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag",BASIC_GRENS};
	};
	
	class SFPD_BLUFOR_JUNGLE_SF: SFPD_BLUFOR_JUNGLE_SF_Leader {
		backpack = "SFPD_NATO_JUNGLE_SF_Backpack";//TODO
		displayName = "Jungle SF";
	};
	
	class SFPD_BLUFOR_JUNGLE_TankCrew: SFPD_BLUFOR_JUNGLE_Rifleman {
		displayName = "Jungle Tank Crew";
		weapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		respawnWeapons[] = {BASIC_WEAPONS(hgun_P07_blk_F)};
		magazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"ACE_HandFlare_Yellow","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(16Rnd_9x21_Mag),"ACE_HandFlare_Yellow","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat_Goggles_tna_F",BASIC_LINKED_BLUE,"NVGoggles_tna_F"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
	};
	
	//Universal
	class SFPD_BLUFOR_Diver: SFPD_BLUFOR_DESERT_Recon {
		backpack = "SFPD_UNIVERSAL_Diver_Backpack";
		faction = "SFPD_BLUFOR_Faction";
		displayName = "Universal Diver";
		weapons[] = {"arifle_SDAR_F","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(20Rnd_556x45_UW_mag),"SmokeShellBlue"};
		respawnMagazines[] = {SIX_TIMES(20Rnd_556x45_UW_mag),"SmokeShellBlue"};
		linkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_OPFOR"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_B_Wetsuit";
	};
	
	class SFPD_BLUFOR_HelicopterPilot: SFPD_BLUFOR_DESERT_TankCrew {
		faction = "SFPD_BLUFOR_Faction";
		displayName = "Universal Helicopter Pilot";
		linkedItems[] = {"V_Rangemaster_belt","H_CrewHelmetHeli_B",BASIC_LINKED_BLUE,"ACE_NVG_Wide"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_CrewHelmetHeli_B",BASIC_LINKED_BLUE,"ACE_NVG_Wide"};
		uniformClass = "U_B_HeliPilotCoveralls";
	};
	
	class SFPD_BLUFOR_PlanePilot: SFPD_BLUFOR_HelicopterPilot {
		displayName = "Universal Plane Pilot";
		linkedItems[] = {"H_PilotHelmetFighter_B",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_B",BASIC_LINKED_BLUE};
		uniformClass = "U_B_PilotCoveralls";
	};
	
	class SFPD_BLUFOR_SpecOps: SFPD_BLUFOR_Diver {
		backpack = "SFPD_NATO_UNIVERSAL_SpecOps_Backpack";
		displayName = "Spec Ops";
		weapons[] = {"SFPD_BALCK_Noreen_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_BALCK_Noreen_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"Laserbatteries",THREE_TIMES(50Rnd_570x28_SMG_03),THREE_TIMES(10Rnd_338_Mag)};
		respawnMagazines[] = {"Laserbatteries",THREE_TIMES(50Rnd_570x28_SMG_03),THREE_TIMES(10Rnd_338_Mag)};
		linkedItems[] = {"V_PlateCarrierSpec_blk","H_HelmetSpecB_blk","G_Balaclava_TI_G_blk_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_PlateCarrierSpec_blk","H_HelmetSpecB_blk","G_Balaclava_TI_G_blk_F","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","NVGoggles_OPFOR"};
		items[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_RangeCard"};
		respawnItems[] = {"ACE_epinephrine",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_RangeCard"};
		uniformClass = "U_B_CTRG_1";
		camouflage = 0.5;
	};
	
	class SFPD_BLUFOR_Colonel: SFPD_BLUFOR_DESERT_Commandant {
		faction = "SFPD_BLUFOR_Faction";
		displayName = "Colonel";
		icon = "iconManOfficer";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"H_ParadeDressCap_01_US_F","G_Aviator",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"H_ParadeDressCap_01_US_F","G_Aviator",BASIC_LINKED_BLUE};
		items[] = {"ACE_MapTools","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		respawnItems[] = {"ACE_MapTools","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		uniformClass = "U_B_ParadeUniform_01_US_decorated_F";
		camouflage = 0.7;
	};