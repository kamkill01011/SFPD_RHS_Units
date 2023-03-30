	//Desert
	class SFPD_RHS_BLUFOR_DESERT_Rifleman: B_Soldier_base_F { //Unit Class name: Class getting info from 
		side = 1; //Blufor
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction"; //Your Faction
		//backpack = "Class_Backpack"; //Backpack
		author = "Kamkill"; //Self Explanatory 
		_generalMacro = "SFPD_RHS_BLUFOR_DESERT_Rifleman"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Desert Rifleman"; //In-Game Name
		icon = "iconMan"; //Custom icon (* + Medic,Engineer,Explosive,Recon,Virtual,AT,Leader,MG,Officer)
		weapons[] = {"SFPD_RHS_M4_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)}; //Spawning Gear
		respawnWeapons[] = {"SFPD_RHS_M4_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {TEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		respawnMagazines[] = {TEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "rhs_uniform_FROG01_d"; //uniform you are using
		camouflage = 1;
	};
	
	class SFPD_RHS_BLUFOR_DESERT_NBC_Mask: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert NBC (Mask)";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_NBC_Suit: SFPD_RHS_BLUFOR_DESERT_NBC_Mask {
		displayName = "Desert NBC (Suit)";
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Rifleman_light: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Rifleman (light)";
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Unequiped: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Unequiped";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"}; 
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Leader: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_Leader_Backpack";
		displayName = "Desert Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Medic: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_Medic_Backpack";
		displayName = "Desert Medic";
		icon = "iconManMedic";
		
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_marine_v2.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhs_frog02_d_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_BLUFOR_DESERT_Medic_Uniform";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Grenadier: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_Grenadier_Backpack";
		displayName = "Desert Grenadier";
		weapons[] = {"SFPD_RHS_M4_GL_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M4_GL_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_AT: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_AT_Backpack";
		displayName = "Desert AT";
		icon = "iconManAT";
		weapons[] = {"SFPD_RHS_M4_Default","SFPD_RHS_Glock17","rhs_weap_maaws_optic","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Default","SFPD_RHS_Glock17","rhs_weap_maaws_optic","ACE_Vector","Throw","Put"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_AT_M136: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert AT (M136)";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_M136_hedp"};
		respawnWeapons[] += {"rhs_weap_M136_hedp"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_LMG: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_LMG_Backpack";
		displayName = "Desert LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_M249_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M249_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};//rhs_200rnd_556x45_T_SAW
		respawnMagazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Marksman: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Marksman";
		weapons[] = {"SFPD_RHS_DESERT_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_DESERT_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_JTAC: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_JTAC_Backpack";
		displayName = "Desert JTAC";
		weapons[] = {"SFPD_RHS_M4_GL_Default","SFPD_RHS_Glock17","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_GL_Default","SFPD_RHS_Glock17","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_MMG: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_M240_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M240_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Commander: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Commander";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {THREE_TIMES(rhsusf_mag_17Rnd_9x19_JHP)};
		respawnMagazines[] = {THREE_TIMES(rhsusf_mag_17Rnd_9x19_JHP)};
		linkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED_BLUE};
		camouflage = 0.7;  
	};
	
	class SFPD_RHS_BLUFOR_DESERT_AA: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_AA_Backpack";
		displayName = "Desert AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_fim92"};
		respawnWeapons[] += {"rhs_weap_fim92"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Recon_DMR: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Recon DMR";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_RHS_DESERT_M2010_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_DESERT_M2010_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {EIGHT_TIMES(rhsusf_5Rnd_300winmag_xm2010),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue","Laserbatteries"};
		respawnMagazines[] = {EIGHT_TIMES(rhsusf_5Rnd_300winmag_xm2010),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue","Laserbatteries"};
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7; 
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_Leader: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		backpack = "SFPD_RHS_BLUFOR_Leader_Backpack";
		displayName = "Desert SF Leader";
		weapons[] = {"SFPD_RHS_M4_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
		respawnMagazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_Grenadier: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_BLUFOR_SF_Grenadier_Backpack";
		displayName = "Desert SF Grenadier";
		weapons[] = {"SFPD_RHS_M4_GL_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_GL_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_AT: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "";
		displayName = "Desert SF AT";
		weapons[] += {"rhs_weap_M136_hedp"};
		respawnWeapons[] += {"rhs_weap_M136_hedp"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_LMG: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_BLUFOR_SF_LMG_Backpack";
		displayName = "Desert SF LMG";
		weapons[] = {"SFPD_RHS_M249_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M249_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
		respawnMagazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_BLUFOR_SF_Backpack";
		displayName = "Desert SF";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Recon_Rifle: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		displayName = "Desert Recon Rifle";
		weapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		items[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Sniper: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		backpack = "";
		displayName = "Desert Sniper";
		weapons[] = {"SFPD_RHS_M200","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M200","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_B_FullGhillie_ard";
		camouflage = 0.5;
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Spotter: SFPD_RHS_BLUFOR_DESERT_Sniper {
		backpack = "SFPD_RHS_BLUFOR_Spotter_Backpack";
		displayName = "Desert Spotter";
		weapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		items[] = {"ACE_EntrenchingTool","ACE_Kestrel4500","ACE_RangeCard","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_DefusalKit"};
		respawnItems[] = {"ACE_EntrenchingTool","ACE_Kestrel4500","ACE_RangeCard","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_DefusalKit"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_TankCrew: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Tank Crew";
		weapons[] = {"SFPD_RHS_Glock17","Binocular","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_Glock17","Binocular","Throw","Put"};
		magazines[] = {FOUR_TIMES(rhsusf_mag_17Rnd_9x19_JHP),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(rhsusf_mag_17Rnd_9x19_JHP),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat",BASIC_LINKED_BLUE};
		items[] = {BASIC_ITEMS,EIGHT_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,EIGHT_TIMES(ACE_quikclot)};
	};
	
	//Woodland
	class SFPD_RHS_BLUFOR_WOODLAND_Rifleman: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Rifleman";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_NBC_Mask: SFPD_RHS_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_NBC_Suit: SFPD_RHS_BLUFOR_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Rifleman_light: SFPD_RHS_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Rifleman (light)";
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Unequiped: SFPD_RHS_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Unequiped";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"}; 
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Leader: SFPD_RHS_BLUFOR_DESERT_Leader {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Leader";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Medic: SFPD_RHS_BLUFOR_DESERT_Medic {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Medic";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_marine_v2.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhs_frog02_wd_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_BLUFOR_WOODLAND_Medic_Uniform";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Grenadier: SFPD_RHS_BLUFOR_DESERT_Grenadier {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Grenadier";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_AT: SFPD_RHS_BLUFOR_DESERT_AT {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland AT";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_AT_M136: SFPD_RHS_BLUFOR_DESERT_AT_M136 {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland AT (M136)";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_LMG: SFPD_RHS_BLUFOR_DESERT_LMG {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland LMG";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Marksman: SFPD_RHS_BLUFOR_DESERT_Marksman {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Marksman";
		weapons[] = {"SFPD_RHS_WOODLAND_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WOODLAND_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_JTAC: SFPD_RHS_BLUFOR_DESERT_JTAC {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland JTAC";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_MMG: SFPD_RHS_BLUFOR_DESERT_MMG {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland MMG";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Commander: SFPD_RHS_BLUFOR_DESERT_Commander {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Commander";
		linkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_AA: SFPD_RHS_BLUFOR_DESERT_AA {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland AA";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Recon_DMR: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Recon DMR";
		weapons[] = {"SFPD_RHS_WOODLAND_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WOODLAND_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_Leader: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF Leader";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_Grenadier: SFPD_RHS_BLUFOR_DESERT_SF_Grenadier {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF Grenadier";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_AT: SFPD_RHS_BLUFOR_DESERT_SF_AT {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF AT";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_LMG: SFPD_RHS_BLUFOR_DESERT_SF_LMG {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF LMG";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF: SFPD_RHS_BLUFOR_DESERT_SF {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Recon_Rifle: SFPD_RHS_BLUFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Recon Rifle";
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Sniper: SFPD_RHS_BLUFOR_DESERT_Sniper {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Sniper";
		linkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "U_B_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Spotter: SFPD_RHS_BLUFOR_DESERT_Spotter {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Spotter";
		linkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "U_B_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_TankCrew: SFPD_RHS_BLUFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Tank Crew";
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	//Universal
	class SFPD_RHS_BLUFOR_HelicopterPilot: SFPD_RHS_BLUFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_BLUFOR_Faction";
		displayName = "Universal Helicopter Pilot";
		weapons[] = {"SFPD_RHS_Glock17","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_Glock17","Throw","Put"};
		linkedItems[] = {"V_Rangemaster_belt","rhsusf_hgu56p_visor_mask_black_skull",BASIC_LINKED_BLUE,"ACE_NVG_Wide"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhsusf_hgu56p_visor_mask_black_skull",BASIC_LINKED_BLUE,"ACE_NVG_Wide"};
		uniformClass = "U_B_HeliPilotCoveralls";
	};
	
	class SFPD_RHS_BLUFOR_PlanePilot: SFPD_RHS_BLUFOR_HelicopterPilot {
		displayName = "Universal Plane Pilot";
		linkedItems[] = {"H_PilotHelmetFighter_B",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_B",BASIC_LINKED_BLUE};
		uniformClass = "U_B_PilotCoveralls";
	};
	
	class SFPD_RHS_BLUFOR_ION_Protector: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_RHS_BLUFOR_Faction";
		displayName = "ION Protector";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_HK416_ION",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_HK416_ION",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {SEVEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		respawnMagazines[] = {SEVEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		linkedItems[] = {"rhsusf_spc_squadleader","H_Cap_blk_ION","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","H_Cap_blk_ION","rhs_googles_black",BASIC_LINKED_BLUE};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500"};
		uniformClass = "U_I_G_Story_Protagonist_F";
	};
	
	//Winter
	class SFPD_RHS_BLUFOR_WINTER_Rifleman: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Rifleman";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_NBC_Mask: SFPD_RHS_BLUFOR_WINTER_Rifleman {
		displayName = "Winter NBC (Mask)";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_BLUFOR_WINTER_NBC_Suit: SFPD_RHS_BLUFOR_WINTER_NBC_Mask {
		displayName = "Winter NBC (Suit)";
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Rifleman_light: SFPD_RHS_BLUFOR_WINTER_Rifleman {
		displayName = "Winter Rifleman (light)";
		linkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Unequiped: SFPD_RHS_BLUFOR_WINTER_Rifleman {
		displayName = "Winter Unequiped";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"}; 
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Leader: SFPD_RHS_BLUFOR_DESERT_Leader {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Leader";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Medic: SFPD_RHS_BLUFOR_DESERT_Medic {
		backpack = "SFPD_RHS_BLUFOR_WINTER_Medic_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Medic";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa","rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa","","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_BLUFOR_WINTER_Medic_Uniform";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Grenadier: SFPD_RHS_BLUFOR_DESERT_Grenadier {
		backpack = "SFPD_RHS_BLUFOR_WINTER_Grenadier_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Grenadier";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_AT: SFPD_RHS_BLUFOR_DESERT_AT {
		backpack = "SFPD_RHS_BLUFOR_WINTER_AT_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter AT";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_AT_M136: SFPD_RHS_BLUFOR_DESERT_AT_M136 {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter AT (M136)";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_LMG: SFPD_RHS_BLUFOR_DESERT_LMG {
		backpack = "SFPD_RHS_BLUFOR_WINTER_LMG_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter LMG";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Marksman: SFPD_RHS_BLUFOR_DESERT_Marksman {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Marksman";
		weapons[] = {"SFPD_RHS_WINTER_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WINTER_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_JTAC: SFPD_RHS_BLUFOR_DESERT_JTAC {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter JTAC";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_MMG: SFPD_RHS_BLUFOR_DESERT_MMG {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter MMG";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Commander: SFPD_RHS_BLUFOR_DESERT_Commander {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Commander";
		linkedItems[] = {"V_Rangemaster_belt","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_AA: SFPD_RHS_BLUFOR_DESERT_AA {
		backpack = "SFPD_RHS_BLUFOR_WINTER_AA_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter AA";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED_BLUE};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Recon_DMR: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Recon DMR";
		weapons[] = {"SFPD_RHS_WINTER_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WINTER_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		linkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Leader: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF Leader";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Grenadier: SFPD_RHS_BLUFOR_DESERT_SF_Grenadier {
		backpack = "SFPD_RHS_BLUFOR_WINTER_SF_Grenadier_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF Grenadier";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_AT: SFPD_RHS_BLUFOR_DESERT_SF_AT {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF AT";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_LMG: SFPD_RHS_BLUFOR_DESERT_SF_LMG {
		backpack = "SFPD_RHS_BLUFOR_WINTER_SF_LMG_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF LMG";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF: SFPD_RHS_BLUFOR_DESERT_SF {
		backpack = "SFPD_RHS_BLUFOR_WINTER_SF_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Recon_Rifle: SFPD_RHS_BLUFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Recon Rifle";
		linkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Sniper: SFPD_RHS_BLUFOR_DESERT_Sniper {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Sniper";
		linkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		
		hideProxySelections[] = {"ghillie_hide"};
		model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
		textureList[] = {"snow",1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\SFPD_RHS_Units\ghillie_coverall_snow.paa","\SFPD_RHS_Units\fullghillie_camo_snow.paa"};
		uniformClass = "U_B_FullGhillie_Snow";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Spotter: SFPD_RHS_BLUFOR_DESERT_Spotter {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Spotter";
		linkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "U_B_FullGhillie_Snow";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_TankCrew: SFPD_RHS_BLUFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Tank Crew";
		uniformClass = "rhs_uniform_cu_ucp";
	};