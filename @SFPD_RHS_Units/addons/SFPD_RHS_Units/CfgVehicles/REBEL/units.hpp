	class SFPD_REBEL_Rifleman_AKM_1: I_G_Soldier_base_F {
		faction = "SFPD_REBEL_Faction";
		author = "Kamkill";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AKM) 1";
		icon = "iconMan";
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {SEVEN_TIMES(30Rnd_762x39_Mag_F),"minigrenade"};
		respawnMagazines[] = {SEVEN_TIMES(30Rnd_762x39_Mag_F),"minigrenade"};
		linkedItems[] = {"V_BandollierB_rgr","H_Cap_tan",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_Cap_tan",BASIC_LINKED_GREEN};
		items[] = {"ACE_Cellphone",BASIC_ITEMS,TEN_TIMES(ACE_fieldDressing)};
		respawnItems[] = {"ACE_Cellphone",BASIC_ITEMS,TEN_TIMES(ACE_fieldDressing)};
		uniformClass = "U_IG_Guerilla1_1";
		camouflage = 1;
		
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			init = "if (local (_this select 0)) then {[(_this select 0), 0] call KAM_fnc_randomizeOutfit;};";
		}
	};
	
	class SFPD_REBEL_Rifleman_AKM_2: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Rifleman (AKM) 2";
		linkedItems[] = {"V_Chestrig_khk","H_Bandanna_sgg",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Bandanna_sgg",BASIC_LINKED_GREEN};
		uniformClass = "U_IG_Guerilla2_1";
	};
	
	class SFPD_REBEL_Rifleman_AKM_3: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Rifleman (AKM) 3";
		linkedItems[] = {"V_BandollierB_oli","H_Shemag_olive",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_oli","H_Shemag_olive",BASIC_LINKED_GREEN};
		uniformClass = "U_IG_Guerilla2_2";
	};
	
	class SFPD_REBEL_Rifleman_AKS_1: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Rifleman (AKS) 1";
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {SEVEN_TIMES(30Rnd_545x39_Mag_F),"minigrenade"};
		respawnMagazines[] = {SEVEN_TIMES(30Rnd_545x39_Mag_F),"minigrenade"};
		linkedItems[] = {"V_Chestrig_rgr","H_Bandanna_surfer",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_Bandanna_surfer",BASIC_LINKED_GREEN};
		uniformClass = "U_IG_Guerilla2_3";
	};
	
	class SFPD_REBEL_Rifleman_AKS_2: SFPD_REBEL_Rifleman_AKS_1 {
		displayName = "Rifleman (AKS) 2";
		linkedItems[] = {"V_Chestrig_blk","H_ShemagOpen_tan",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_blk","H_ShemagOpen_tan",BASIC_LINKED_GREEN};
		uniformClass = "U_IG_leader";
	};
	
	class SFPD_REBEL_Rifleman_AKS_3: SFPD_REBEL_Rifleman_AKS_1 {
		displayName = "Rifleman (AKS) 3";
		linkedItems[] = {"V_Chestrig_oli","H_Bandanna_camo",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Bandanna_camo",BASIC_LINKED_GREEN};
		uniformClass = "U_IG_Guerrilla_6_1";
	};
	
	class SFPD_REBEL_Rifleman_TRG_1: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Rifleman (TRG) 1";
		weapons[] = {"arifle_TRG20_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","Throw","Put"};
		magazines[] = {SEVEN_TIMES(30Rnd_556x45_Stanag),"minigrenade"};
		respawnMagazines[] = {SEVEN_TIMES(30Rnd_556x45_Stanag),"minigrenade"};
		linkedItems[] = {"V_BandollierB_cbr","H_Hat_Safari_olive_F",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_cbr","H_Hat_Safari_olive_F",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Para_1_F";
	};
	
	class SFPD_REBEL_Rifleman_TRG_2: SFPD_REBEL_Rifleman_TRG_1 {
		displayName = "Rifleman (TRG) 2";
		linkedItems[] = {"V_BandollierB_khk","H_Cap_blk",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Cap_blk",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Para_2_F";
	};
	
	class SFPD_REBEL_Rifleman_TRG_3: SFPD_REBEL_Rifleman_TRG_1 {
		displayName = "Rifleman (TRG) 3";
		linkedItems[] = {"V_BandollierB_ghex_F","H_Cap_grn",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_ghex_F","H_Cap_grn",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Para_3_F";
	};
	
	class SFPD_REBEL_AT_AKM: SFPD_REBEL_Rifleman_AKM_1 {
		backpack = "SFPD_REBEL_AT_Backpack";
		displayName = "AT (AKM)";
		icon = "iconManAT";
		weapons[] += {"launch_RPG7_F"};
		respawnWeapons[] += {"launch_RPG7_F"};
		linkedItems[] = {"V_BandollierB_blk","H_Bandanna_blu",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_blk","H_Bandanna_blu",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Para_4_F";
	};
	
	class SFPD_REBEL_AT_AKS: SFPD_REBEL_Rifleman_AKS_1 {
		backpack = "SFPD_REBEL_AT_Backpack";
		displayName = "AT (AKS)";
		icon = "iconManAT";
		weapons[] += {"launch_RPG7_F"};
		respawnWeapons[] += {"launch_RPG7_F"};
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
	};
	
	class SFPD_REBEL_AT_TRG: SFPD_REBEL_Rifleman_TRG_1 {
		backpack = "SFPD_REBEL_AT_Backpack";
		displayName = "AT (TRG)";
		icon = "iconManAT";
		weapons[] += {"launch_RPG7_F"};
		respawnWeapons[] += {"launch_RPG7_F"};
		linkedItems[] = {"V_Chestrig_khk","H_Booniehat_mgrn",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Booniehat_mgrn",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Bandit_2_F";
	};
	
	class SFPD_REBEL_Shotgun: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Shotgun";
		weapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
		respawnWeapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
		magazines[] = {TWELVE_TIMES(2Rnd_12Gauge_Pellets),"minigrenade"};
		respawnMagazines[] = {TWELVE_TIMES(2Rnd_12Gauge_Pellets),"minigrenade"};
		linkedItems[] = {"V_BandollierB_oli","H_Bandanna_cbr",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_oli","H_Bandanna_cbr",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Bandit_3_F";
	};
	
	class SFPD_REBEL_Shotgun_sawoff: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Shotgun sawoff";
		weapons[] = {"sgun_HunterShotgun_01_sawedoff_F","Throw","Put"};
		respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F","Throw","Put"};
		magazines[] = {TWELVE_TIMES(2Rnd_12Gauge_Pellets),"minigrenade"};
		respawnMagazines[] = {TWELVE_TIMES(2Rnd_12Gauge_Pellets),"minigrenade"};
		linkedItems[] = {"V_BandollierB_blk","H_Bandanna_blu",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_blk","H_Bandanna_blu",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Para_4_F";
	};
	
	class SFPD_REBEL_Rifle: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Rifle";
		weapons[] = {"srifle_DMR_06_hunter_F","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_06_hunter_F","Throw","Put"};
		magazines[] = {TWELVE_TIMES(10Rnd_Mk14_762x51_Mag),"minigrenade"};
		respawnMagazines[] = {TWELVE_TIMES(10Rnd_Mk14_762x51_Mag),"minigrenade"};
		linkedItems[] = {"V_Chestrig_khk","H_Booniehat_mgrn",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Booniehat_mgrn",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Bandit_2_F";
	};
	
	class SFPD_REBEL_Pistol: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Pistol";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {TWELVE_TIMES(6Rnd_45ACP_Cylinder),"minigrenade"};
		respawnMagazines[] = {TWELVE_TIMES(6Rnd_45ACP_Cylinder),"minigrenade"};
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
	};
	
	class SFPD_REBEL_LMG: SFPD_REBEL_Rifleman_AKM_1 {
		backpack = "SFPD_REBEL_LMG_Backpack";
		displayName = "LMG";
		icon = "iconManMG";
		weapons[] = {"LMG_03_F","Throw","Put"};
		respawnWeapons[] = {"LMG_03_F","Throw","Put"};
		magazines[] = {THREE_TIMES(200Rnd_556x45_Box_Tracer_F),"minigrenade"};
		respawnMagazines[] = {THREE_TIMES(200Rnd_556x45_Box_Tracer_F),"minigrenade"};
		linkedItems[] = {"V_Chestrig_rgr","H_ShemagOpen_khk",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_ShemagOpen_khk",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Bandit_4_F";
	};
	
	class SFPD_REBEL_Marksman: SFPD_REBEL_Rifleman_AKM_1 {
		displayName = "Marksman";
		weapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put"};
		magazines[] = {TEN_TIMES(10Rnd_Mk14_762x51_Mag),TEN_TIMES(10Rnd_Mk14_762x51_Mag),"minigrenade"};
		respawnMagazines[] = {TEN_TIMES(10Rnd_Mk14_762x51_Mag),TEN_TIMES(10Rnd_Mk14_762x51_Mag),"minigrenade"};
		linkedItems[] = {"V_Chestrig_blk","H_Bandanna_sand",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Chestrig_blk","H_Bandanna_sand",BASIC_LINKED_GREEN};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
	};