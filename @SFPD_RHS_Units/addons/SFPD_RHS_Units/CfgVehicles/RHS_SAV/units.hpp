	class SFPD_RHS_SAV_WOODLAND_Rifleman: I_Soldier_base_F {
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian"};
		genericNames = "RussianMen";
		faction = "SFPD_RHS_SAV_WOODLAND_Faction";
		author = "Kamkill";
		scope = 2;
		displayName = "Woodland Rifleman";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_G36KV","rhs_weap_cz99","Binocular","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_G36KV","rhs_weap_cz99","Binocular","Throw","Put"};
		magazines[] = {EIGHT_TIMES(rhssaf_30rnd_556x45_EPR_G36),"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
		respawnMagazines[] = {EIGHT_TIMES(rhssaf_30rnd_556x45_EPR_G36),"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
		linkedItems[] = {"rhssaf_helmet_m97_digital_black_ess_bare","rhssaf_vest_md99_digital_rifleman",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"rhssaf_helmet_m97_digital_black_ess_bare","rhssaf_vest_md99_digital_rifleman",BASIC_LINKED_GREEN};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "rhssaf_uniform_m10_digital";
		camouflage = 1;
	};
	
	class SFPD_RHS_SAV_WOODLAND_NBC_Mask: SFPD_RHS_SAV_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"rhssaf_helmet_m97_digital_black_ess_bare","rhssaf_vest_md99_digital_rifleman","G_RegulatorMask_F",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"rhssaf_helmet_m97_digital_black_ess_bare","rhssaf_vest_md99_digital_rifleman","G_RegulatorMask_F",BASIC_LINKED_GREEN};
	};
	
	class SFPD_RHS_SAV_WOODLAND_NBC_Suit: SFPD_RHS_SAV_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_White_F";
	};
	
	class SFPD_RHS_SAV_WOODLAND_Rifleman_light: SFPD_RHS_SAV_WOODLAND_Rifleman {
		displayName = "Woodland Rifleman (light)";
		linkedItems[] = {"rhsgref_chicom","rhssaf_booniehat_digital",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"rhsgref_chicom","rhssaf_booniehat_digital",BASIC_LINKED_GREEN};
	};
	
	class SFPD_RHS_SAV_WOODLAND_Unequiped: SFPD_RHS_SAV_WOODLAND_Rifleman {
		displayName = "Woodland Unequiped";
		weapons[] = {"rhs_weap_cz99","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_cz99","Binocular","Throw","Put"};
		magazines[] = {"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ"};
		respawnMagazines[] = {"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ"}; 
	};
	
	class SFPD_RHS_SAV_WOODLAND_Leader: SFPD_RHS_SAV_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_SAV_WOODLAND_Leader_Backpack";
		displayName = "Woodland Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_SAV_WOODLAND_Medic: SFPD_RHS_SAV_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_SAV_WOODLAND_Medic_Backpack";
		displayName = "Woodland Medic";
		icon = "iconManMedic";
		
		// TODO
		/*model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_SAV_WOODLAND_Medic_Uniform";*/
	};
	
	class SFPD_RHS_SAV_WOODLAND_Grenadier: SFPD_RHS_SAV_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_SAV_WOODLAND_Grenadier_Backpack";
		displayName = "Woodland Grenadier";
		weapons[] = {"SFPD_RHS_G36KV_GL","rhs_weap_cz99","Binocular","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_G36KV_GL","rhs_weap_cz99","Binocular","Throw","Put"};
		magazines[] += {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] += {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	
	class SFPD_RHS_SAV_WOODLAND_AT: SFPD_RHS_SAV_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_SAV_WOODLAND_AT_Backpack";
		displayName = "Woodland AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg75"};
		respawnWeapons[] += {"rhs_weap_rpg75"};
	};
	
	class SFPD_RHS_SAV_WOODLAND_LMG: SFPD_RHS_SAV_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_SAV_WOODLAND_LMG_Backpack";
		displayName = "Woodland LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_MINIMI_PARA","rhs_weap_cz99","Binocular","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_MINIMI_PARA","rhs_weap_cz99","Binocular","Throw","Put"};
		magazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
		respawnMagazines[] = {"SFPD_RHS_rhsusf_200rnd_556x45_tracer_box","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
	};
	
	class SFPD_RHS_SAV_WOODLAND_Marksman: SFPD_RHS_SAV_WOODLAND_Rifleman {
		displayName = "Woodland Marksman";
		weapons[] = {"SFPD_RHS_M14_RAIL","rhs_weap_cz99","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M14_RAIL","rhs_weap_cz99","ACE_Vector","Throw","Put"};
		magazines[] = {FIVE_TIMES(rhsusf_20Rnd_762x51_m80_Mag),"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
		respawnMagazines[] = {FIVE_TIMES(rhsusf_20Rnd_762x51_m80_Mag),"rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ",BASIC_GRENS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_SAV_WOODLAND_Commander: SFPD_RHS_SAV_WOODLAND_Rifleman {
		displayName = "Woodland Commander";
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_cz99","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_cz99","Binocular","Throw","Put"};
		magazines[] = {THREE_TIMES(rhssaf_mag_15Rnd_9x19_FMJ)};
		respawnMagazines[] = {THREE_TIMES(rhssaf_mag_15Rnd_9x19_FMJ)};
		linkedItems[] = {"rhs_vest_pistol_holster","rhssaf_booniehat_digital",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"rhs_vest_pistol_holster","rhssaf_booniehat_digital",BASIC_LINKED_GREEN};
		camouflage = 0.7;
	};
	
	class SFPD_RHS_SAV_WOODLAND_AA: SFPD_RHS_SAV_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_SAV_WOODLAND_AA_Backpack";
		displayName = "Woodland AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};