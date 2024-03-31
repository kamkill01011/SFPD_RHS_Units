	//Woodland
	class SFPD_RHS_FR_WOODLAND_Rifleman: B_Soldier_base_F {
		identityTypes[] = {"LanguageFRE_F","Head_NATO","G_NATO_default"};
		side = 1;
		faction = "SFPD_RHS_FR_WOODLAND_Faction";
		backpack = "OFrP_Bag_Felin_45L";
		scope = 2;
		displayName = "Woodland Rifleman";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_HK416_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_HK416_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {EIGHT_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		respawnMagazines[] = {EIGHT_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		linkedItems[] = {"OFrP_Vest_SMB_Teamleader_Kaki","OFrP_Helmet_Spectra_02_ESSCOVER_CE",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"OFrP_Vest_SMB_Teamleader_Kaki","OFrP_Helmet_Spectra_02_ESSCOVER_CE",BASIC_LINKED_BLUE};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "OFrP_Uniform_T4S2_UBAS_CE02_FRHV_SDTBV";
		camouflage = 1;
	};
	
	class SFPD_RHS_FR_WOODLAND_NBC_Mask: SFPD_RHS_FR_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"OFrP_Vest_SMB_Teamleader_Kaki","OFrP_Helmet_Spectra_02_ESSCOVER_CE","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"OFrP_Vest_SMB_Teamleader_Kaki","OFrP_Helmet_Spectra_02_ESSCOVER_CE","G_AirPurifyingRespirator_01_F",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_FR_WOODLAND_NBC_Suit: SFPD_RHS_FR_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
	};
	
	class SFPD_RHS_FR_WOODLAND_Rifleman_light: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Rifleman (light)";
		linkedItems[] = {"V_HarnessO_brn","OFrP_Hat_Bob_CE",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_HarnessO_brn","OFrP_Hat_Bob_CE",BASIC_LINKED_BLUE};
	};
	
	class SFPD_RHS_FR_WOODLAND_Leader: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_FR_Leader_Backpack";
		displayName = "Woodland Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_FR_WOODLAND_Medic: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_FR_Medic_Backpack";
		displayName = "Woodland Medic";
		icon = "iconManMedic";
		
		//model = "\rhsusf\addons\rhsusf_infantry\rhsusf_marine_v2.p3d";
		//hiddenSelections[] = {"camo","insignia"};
		//hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhs_frog02_d_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		//uniformClass = "OFrP_Uniform_T4S2_UBAS_CE02_FRHV_SDTBV";
	};
	
	class SFPD_RHS_FR_WOODLAND_Grenadier: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_FR_Grenadier_Backpack";
		displayName = "Woodland Grenadier";
		weapons[] = {"SFPD_RHS_HK416_GL_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_HK416_GL_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
	};
	
	class SFPD_RHS_FR_WOODLAND_AT: SFPD_RHS_FR_WOODLAND_Rifleman {
		displayName = "Woodland AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_M136_hedp"};
		respawnWeapons[] += {"rhs_weap_M136_hedp"};
	};
	
	class SFPD_RHS_FR_WOODLAND_LMG: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_FR_LMG_Backpack";
		displayName = "Woodland LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_M249_Default_FR",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M249_Default_FR",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};//rhs_200rnd_556x45_T_SAW
		respawnMagazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
	};
	
	class SFPD_RHS_FR_WOODLAND_Marksman: SFPD_RHS_FR_WOODLAND_Rifleman {
		displayName = "Woodland Marksman";
		weapons[] = {"SFPD_RHS_WINTER_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WINTER_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		respawnMagazines[] = {SIX_TIMES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_FR_WOODLAND_MMG: SFPD_RHS_FR_WOODLAND_Rifleman {
		displayName = "Woodland MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_M240_Default_FR",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M240_Default_FR",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS};
	};
	
	class SFPD_RHS_FR_WOODLAND_Commander: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Commander";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {THREE_TIMES(rhsusf_mag_17Rnd_9x19_JHP)};
		respawnMagazines[] = {THREE_TIMES(rhsusf_mag_17Rnd_9x19_JHP)};
		linkedItems[] = {"V_Rangemaster_belt","OFrP_Hat_Bob_CE",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_Rangemaster_belt","OFrP_Hat_Bob_CE",BASIC_LINKED_BLUE};
		camouflage = 0.7;  
	};
	
	class SFPD_RHS_FR_WOODLAND_AA: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_FR_AA_Backpack";
		displayName = "Woodland AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_fim92"};
		respawnWeapons[] += {"rhs_weap_fim92"};
	};
	
	class SFPD_RHS_FR_WOODLAND_Recon_DMR: SFPD_RHS_FR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Recon DMR";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_RHS_WINTER_M2010_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WINTER_M2010_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {EIGHT_TIMES(rhsusf_5Rnd_300winmag_xm2010),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue","Laserbatteries"};
		respawnMagazines[] = {EIGHT_TIMES(rhsusf_5Rnd_300winmag_xm2010),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue","Laserbatteries"};
		linkedItems[] = {"V_HarnessO_brn","OFrP_Hat_Bob_CE","rhsusf_shemagh2_gogg_od","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","OFrP_Hat_Bob_CE","rhsusf_shemagh2_gogg_od","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7; 
	};
	
	class SFPD_RHS_FR_WOODLAND_SF_Leader: SFPD_RHS_FR_WOODLAND_Recon_DMR {
		backpack = "SFPD_RHS_FR_Leader_Backpack";
		displayName = "Woodland SF Leader";
		weapons[] = {"SFPD_RHS_HK416_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_HK416_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {FIVE_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
		respawnMagazines[] = {FIVE_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
		linkedItems[] = {"OFrP_Vest_SMB_Teamleader_Kaki","OFrP_Helmet_TC3000_cover_ESSCOVER_CE","rhsusf_shemagh2_gogg_od","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"OFrP_Vest_SMB_Teamleader_Kaki","OFrP_Helmet_TC3000_cover_ESSCOVER_CE","rhsusf_shemagh2_gogg_od","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
	};
	
	class SFPD_RHS_FR_WOODLAND_SF_Grenadier: SFPD_RHS_FR_WOODLAND_SF_Leader {
		backpack = "SFPD_RHS_FR_SF_Grenadier_Backpack";
		displayName = "Woodland SF Grenadier";
		weapons[] = {"SFPD_RHS_HK416_GL_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_HK416_GL_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_RHS_FR_WOODLAND_SF_AT: SFPD_RHS_FR_WOODLAND_SF_Leader {
		backpack = "";
		displayName = "Woodland SF AT";
		weapons[] += {"rhs_weap_M136_hedp"};
		respawnWeapons[] += {"rhs_weap_M136_hedp"};
	};
	
	class SFPD_RHS_FR_WOODLAND_SF_LMG: SFPD_RHS_FR_WOODLAND_SF_Leader {
		backpack = "SFPD_RHS_FR_SF_LMG_Backpack";
		displayName = "Woodland SF LMG";
		weapons[] = {"SFPD_RHS_M249_Silenced_FR","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M249_Silenced_FR","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
		respawnMagazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP",BASIC_GRENS,"Laserbatteries"};
	};
	
	class SFPD_RHS_FR_WOODLAND_SF: SFPD_RHS_FR_WOODLAND_SF_Leader {
		backpack = "SFPD_RHS_FR_SF_Backpack";
		displayName = "Woodland SF";
	};
	
	class SFPD_RHS_FR_WOODLAND_Recon_Rifle: SFPD_RHS_FR_WOODLAND_Recon_DMR {
		backpack = "";
		displayName = "Woodland Recon Rifle";
		weapons[] = {"SFPD_RHS_HK416_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_HK416_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		items[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_RHS_FR_WOODLAND_Sniper: SFPD_RHS_FR_WOODLAND_Recon_DMR {
		backpack = "";
		displayName = "Woodland Sniper";
		weapons[] = {"SFPD_RHS_M200","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M200","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_od","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_od","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_B_FullGhillie_sard";
		camouflage = 0.5;
	};
	
	class SFPD_RHS_FR_WOODLAND_Spotter: SFPD_RHS_FR_WOODLAND_Sniper {
		backpack = "SFPD_RHS_FR_Spotter_Backpack";
		displayName = "Woodland Spotter";
		weapons[] = {"SFPD_RHS_HK416_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_HK416_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(rhs_mag_30Rnd_556x45_M855A1_PMAG),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		items[] = {"ACE_EntrenchingTool","ACE_Kestrel4500","ACE_RangeCard","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_DefusalKit"};
		respawnItems[] = {"ACE_EntrenchingTool","ACE_Kestrel4500","ACE_RangeCard","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_DefusalKit"};
	};
