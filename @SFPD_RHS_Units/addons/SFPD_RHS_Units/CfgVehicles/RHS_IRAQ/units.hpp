	class SFPD_RHS_IRAQ_WOODLAND_Rifleman: I_Soldier_base_F {
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		genericNames = "TakistaniMen";
		faction = "SFPD_RHS_IRAQ_WOODLAND_Faction";
		author = "Kamkill";
		scope = 2;
		displayName = "Woodland Rifleman";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_IRAQ_AKM","Binocular","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_IRAQ_AKM","Binocular","Throw","Put"};
		magazines[] = {FIVE_TIMES(rhs_30Rnd_762x39mm),BASIC_GRENS};
		respawnMagazines[] = {FIVE_TIMES(rhs_30Rnd_762x39mm),BASIC_GRENS};
		linkedItems[] = {"rhsgref_helmet_pasgt_woodland","LOP_V_CarrierLite_WDL",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"rhsgref_helmet_pasgt_woodland","LOP_V_CarrierLite_WDL",BASIC_LINKED_GREEN};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "LOP_U_IA_Fatigue_02_slv";
		camouflage = 1;
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_NBC_Mask: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"rhsgref_helmet_pasgt_woodland","LOP_V_CarrierLite_WDL","G_RegulatorMask_F",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"rhsgref_helmet_pasgt_woodland","LOP_V_CarrierLite_WDL","G_RegulatorMask_F",BASIC_LINKED_GREEN};
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_NBC_Suit: SFPD_RHS_IRAQ_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_White_F";
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_Rifleman_light: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		displayName = "Woodland Rifleman (light)";
		magazines[] = {FIVE_TIMES(rhs_30Rnd_762x39mm),FOUR_TIMES(SmokeShell)};
		respawnMagazines[] = {FIVE_TIMES(rhs_30Rnd_762x39mm),FOUR_TIMES(SmokeShell)};
		linkedItems[] = {"LOP_V_6Sh92_WDL","rhssaf_booniehat_woodland",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_WDL","rhssaf_booniehat_woodland",BASIC_LINKED_GREEN};
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_Leader: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_IRAQ_WOODLAND_Leader_Backpack";
		displayName = "Woodland Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_Medic: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_IRAQ_WOODLAND_Medic_Backpack";
		displayName = "Woodland Medic";
		icon = "iconManMedic";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\po_factions_me\data\aaf_u_ia_m81_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_IRAQ_WOODLAND_Medic_Uniform";
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_Grenadier: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_IRAQ_WOODLAND_Grenadier_Backpack";
		displayName = "Woodland Grenadier";
		weapons[] = {"SFPD_RHS_IRAQ_AKM_GL","Binocular","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_IRAQ_AKM_GL","Binocular","Throw","Put"};
		magazines[] += {"rhs_VOG25","rhs_VOG25"};
		respawnMagazines[] += {"rhs_VOG25","rhs_VOG25"};
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_AT: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_IRAQ_WOODLAND_AT_Backpack";
		displayName = "Woodland AT";
		icon = "iconManAT";
		weapons[] += {"SFPD_RHS_RPG7"};
		respawnWeapons[] += {"SFPD_RHS_RPG7"};
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_LMG: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_IRAQ_WOODLAND_LMG_Backpack";
		displayName = "Woodland LMG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_pkm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Binocular","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green",BASIC_GRENS};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green",BASIC_GRENS};
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_Marksman: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		displayName = "Woodland Marksman";
		weapons[] = {"SFPD_RHS_IRAQ_SVD","rhs_weap_cz99","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_IRAQ_SVD","rhs_weap_cz99","ACE_Vector","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
		respawnMagazines[] = {TEN_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_Commander: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		displayName = "Woodland Commander";
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_cz99","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_cz99","Binocular","Throw","Put"};
		magazines[] = {THREE_TIMES(rhssaf_mag_15Rnd_9x19_FMJ)};
		respawnMagazines[] = {THREE_TIMES(rhssaf_mag_15Rnd_9x19_FMJ)};
		linkedItems[] = {"rhs_vest_pistol_holster","rhssaf_booniehat_woodland",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"rhs_vest_pistol_holster","rhssaf_booniehat_woodland",BASIC_LINKED_GREEN};
		camouflage = 0.7;
	};
	
	class SFPD_RHS_IRAQ_WOODLAND_AA: SFPD_RHS_IRAQ_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_IRAQ_WOODLAND_AA_Backpack";
		displayName = "Woodland AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};