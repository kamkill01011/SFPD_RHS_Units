	//Taliban
	class SFPD_RHS_TALIBAN_DESERT_Rifleman_1: I_Soldier_base_F {
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		genericNames = "TakistaniMen";
		faction = "SFPD_RHS_TALIBAN_DESERT_Faction";
		author = "Kamkill";
		scope = 2;
		displayName = "Rifleman 1";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_AK74","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_30Rnd_545x39_7N6M_AK),"MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhs_30Rnd_545x39_7N6M_AK),"MiniGrenade"};
		linkedItems[] = {"LOP_H_Turban_mask",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_H_Turban_mask",BASIC_LINKED_GREEN};
		items[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		uniformClass = "LOP_U_AM_Fatigue_03_6";
		camouflage = 1;
	};
	
	class SFPD_RHS_TALIBAN_DESERT_Rifleman_2: SFPD_RHS_TALIBAN_DESERT_Rifleman_1 {
		displayName = "Rifleman 2";
		linkedItems[] = {"LOP_H_Turban",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_H_Turban",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_AM_Fatigue_01_3";
	};
	
	class SFPD_RHS_TALIBAN_DESERT_Rifleman_3: SFPD_RHS_TALIBAN_DESERT_Rifleman_1 {
		displayName = "Rifleman 3";
		linkedItems[] = {"LOP_H_Shemag_GRE",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_H_Shemag_GRE",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_AM_Fatigue_01_2";
	};
	
	class SFPD_RHS_TALIBAN_DESERT_Rifleman_4: SFPD_RHS_TALIBAN_DESERT_Rifleman_1 {
		displayName = "Rifleman 4";
		linkedItems[] = {"LOP_H_Worker_cap",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_H_Worker_cap",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_AM_Fatigue_03";
	};
	
	class SFPD_RHS_TALIBAN_DESERT_MG: SFPD_RHS_TALIBAN_DESERT_Rifleman_4 {
		backpack = "SFPD_RHS_INDEP_MG_Backpack";
		displayName = "MG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","MiniGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","MiniGrenade"};
	};
	
	class SFPD_RHS_TALIBAN_DESERT_AT: SFPD_RHS_TALIBAN_DESERT_Rifleman_1 {
		backpack = "SFPD_RHS_INDEP_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg7"};
		respawnWeapons[] += {"rhs_weap_rpg7"};
	};
	
	class SFPD_RHS_TALIBAN_DESERT_Marksman: SFPD_RHS_TALIBAN_DESERT_Rifleman_2 {
		backpack = "";
		displayName = "Marksman";
		weapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
	};
	
	class SFPD_RHS_TALIBAN_DESERT_Commander: SFPD_RHS_TALIBAN_DESERT_Rifleman_1 {
		displayName = "Commander";
		icon = "iconManOfficer";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		respawnMagazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		linkedItems[] = {"V_Rangemaster_belt","H_Beret_gen_F","G_Aviator",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Beret_gen_F","G_Aviator",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Camo_F";//U_BG_leader
		camouflage = 0.7;
	};
	
	class SFPD_RHS_TALIBAN_DESERT_AA: SFPD_RHS_TALIBAN_DESERT_Rifleman_3 {
		backpack = "SFPD_RHS_INDEP_AA_Backpack";
		displayName = "AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	//ISIS
	class SFPD_RHS_INDEP_Rifleman_1: I_Soldier_base_F {
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		genericNames = "TakistaniMen";
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		author = "Kamkill";
		scope = 2;
		displayName = "Rifleman 1";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_AK74","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_30Rnd_545x39_7N6M_AK),"MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhs_30Rnd_545x39_7N6M_AK),"MiniGrenade"};
		linkedItems[] = {"LOP_V_6Sh92_WDL","LOP_H_Shemag_GRE",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_WDL","LOP_H_Shemag_GRE",BASIC_LINKED_GREEN};
		items[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		uniformClass = "LOP_U_ISTS_Fatigue_12";
		camouflage = 1;
	};
	
	class SFPD_RHS_INDEP_NBC_Mask: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "NBC (Mask)";
		linkedItems[] = {"LOP_V_6Sh92_WDL","G_RegulatorMask_F",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_WDL","G_RegulatorMask_F",BASIC_LINKED_GREEN};
	};
	
	class SFPD_RHS_INDEP_NBC_Suit: SFPD_RHS_INDEP_NBC_Mask {
		displayName = "NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_White_F";
	};
	
	class SFPD_RHS_INDEP_Rifleman_2: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Rifleman 2";
		linkedItems[] = {"LOP_V_6Sh92_CDF","LOP_H_Shemag_OLV",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_CDF","LOP_H_Shemag_OLV",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_ISTS_Fatigue_10";
	};
	
	class SFPD_RHS_INDEP_Rifleman_3: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Rifleman 3";
		linkedItems[] = {"LOP_V_Chestrig_Kamysh","LOP_H_Shemag_TAN",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh","LOP_H_Shemag_TAN",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_ISTS_Fatigue_14";
	};
	
	class SFPD_RHS_INDEP_Rifleman_4: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Rifleman 4";
		linkedItems[] = {"LOP_V_6Sh92_OLV","LOP_H_Shemag_BLK",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV","LOP_H_Shemag_BLK",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_ISTS_Fatigue_05";
	};
	
	class SFPD_RHS_INDEP_MG: SFPD_RHS_INDEP_Rifleman_4 {
		backpack = "SFPD_RHS_INDEP_MG_Backpack";
		displayName = "MG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","MiniGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","MiniGrenade"};
	};
	
	class SFPD_RHS_INDEP_AT: SFPD_RHS_INDEP_Rifleman_1 {
		backpack = "SFPD_RHS_INDEP_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg7"};
		respawnWeapons[] += {"rhs_weap_rpg7"};
	};
	
	class SFPD_RHS_INDEP_Marksman: SFPD_RHS_INDEP_Rifleman_2 {
		backpack = "";
		displayName = "Marksman";
		weapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
	};
	
	class SFPD_RHS_INDEP_Commander: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Commander";
		icon = "iconManOfficer";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		respawnMagazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		linkedItems[] = {"V_Rangemaster_belt","H_Beret_gen_F","G_Aviator",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Beret_gen_F","G_Aviator",BASIC_LINKED_GREEN};
		uniformClass = "U_I_C_Soldier_Camo_F";//U_BG_leader
		camouflage = 0.7;
	};
	
	class SFPD_RHS_INDEP_AA: SFPD_RHS_INDEP_Rifleman_3 {
		backpack = "SFPD_RHS_INDEP_AA_Backpack";
		displayName = "AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	class SFPD_RHS_INDEP_Black_ISIS: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Black ISIS";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_ISIS_M16","rhs_weap_savz61_folded","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_ISIS_M16","rhs_weap_savz61_folded","rhs_pdu4","Throw","Put"};
		magazines[] = {EIGHT_TIMES(rhs_mag_30Rnd_556x45_M855A1_Stanag),FOUR_TIMES(rhsgref_20rnd_765x17_vz61),BASIC_GRENS,"DemoCharge_Remote_Mag"};
		respawnMagazines[] = {EIGHT_TIMES(rhs_mag_30Rnd_556x45_M855A1_Stanag),FOUR_TIMES(rhsgref_20rnd_765x17_vz61),BASIC_GRENS,"DemoCharge_Remote_Mag"};
		linkedItems[] = {"LOP_H_Shemag_BLK","LOP_V_CarrierRig_BLK",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_H_Shemag_BLK","LOP_V_CarrierRig_BLK",BASIC_LINKED_GREEN};
		items[] = {"ACE_DeadManSwitch","ACE_Cellphone",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_DeadManSwitch","ACE_Cellphone",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		uniformClass = "LOP_U_UVF_Fatigue_BL";
		camouflage = 0.7;
	};
	
	//Woodland
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_1: I_Soldier_base_F {
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian"};
		genericNames = "RussianMen";
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		author = "Kamkill";
		scope = 2;
		displayName = "Rifleman 1";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_AKS74","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AKS74","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_30Rnd_545x39_7N6M_AK),"MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhs_30Rnd_545x39_7N6M_AK),"MiniGrenade"};
		linkedItems[] = {"LOP_V_6Sh92_CDF","rhssaf_booniehat_md2camo",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_CDF","rhssaf_booniehat_md2camo",BASIC_LINKED_GREEN};
		items[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_M81_OLV";
		camouflage = 1;
	};
	
	class SFPD_RHS_INDEP_WOODLAND_NBC_Mask: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "NBC (Mask)";
		linkedItems[] = {"LOP_V_6Sh92_CDF","G_RegulatorMask_F",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_CDF","G_RegulatorMask_F",BASIC_LINKED_GREEN};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_NBC_Suit: SFPD_RHS_INDEP_WOODLAND_NBC_Mask {
		displayName = "NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_White_F";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_2: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Rifleman 2";
		linkedItems[] = {"LOP_V_6Sh92_WDL","rhs_balaclava1_olive",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_WDL","rhs_balaclava1_olive",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_UA_Fatigue_04";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_3: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Rifleman 3";
		linkedItems[] = {"LOP_V_Chestrig_Kamysh","rhsgref_patrolcap_specter",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh","rhsgref_patrolcap_specter",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_IRA_Fatigue_DPM_GNSW";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_4: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Rifleman 4";
		linkedItems[] = {"LOP_V_6Sh92_OLV","rhs_beanie_green",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV","rhs_beanie_green",BASIC_LINKED_GREEN};
		uniformClass = "LOP_U_BH_Fatigue_GUE_FWDL";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_MG: SFPD_RHS_INDEP_WOODLAND_Rifleman_4 {
		backpack = "SFPD_RHS_INDEP_WOODLAND_MG_Backpack";
		displayName = "MG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","MiniGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","MiniGrenade"};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_AT: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		backpack = "SFPD_RHS_INDEP_WOODLAND_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg7"};
		respawnWeapons[] += {"rhs_weap_rpg7"};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Marksman: SFPD_RHS_INDEP_WOODLAND_Rifleman_2 {
		backpack = "";
		displayName = "Marksman";
		weapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Commander: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Commander";
		icon = "iconManOfficer";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		respawnMagazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		linkedItems[] = {"V_Rangemaster_belt","rhssaf_beret_green",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhssaf_beret_green",BASIC_LINKED_GREEN};
		uniformClass = "rhssaf_uniform_m10_digital_tan_boots";
		camouflage = 0.7;
	};
	
	class SFPD_RHS_INDEP_WOODLAND_AA: SFPD_RHS_INDEP_WOODLAND_Rifleman_3 {
		backpack = "SFPD_RHS_INDEP_WOODLAND_AA_Backpack";
		displayName = "AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	//Winter
	class SFPD_RHS_INDEP_WINTER_Rifleman_1: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		faction = "SFPD_RHS_INDEP_WINTER_Faction";
		linkedItems[] = {"V_TacChestrig_grn_F","fsg_booniehat_snw",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","fsg_booniehat_snw",BASIC_LINKED_GREEN};
		uniformClass = "rhsgref_uniform_reed";
	};
	
	class SFPD_RHS_INDEP_WINTER_NBC_Mask: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "NBC (Mask)";
		linkedItems[] = {"V_TacChestrig_grn_F","G_RegulatorMask_F",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","G_RegulatorMask_F",BASIC_LINKED_GREEN};
	};
	
	class SFPD_RHS_INDEP_WINTER_NBC_Suit: SFPD_RHS_INDEP_WINTER_NBC_Mask {
		displayName = "NBC (Suit)";
		uniformClass = "U_C_CBRN_Suit_01_White_F";
	};
	
	class SFPD_RHS_INDEP_WINTER_Rifleman_2: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Rifleman 2";
		linkedItems[] = {"V_TacChestrig_grn_F","fsg_Balaclava_Snw",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","fsg_Balaclava_Snw",BASIC_LINKED_GREEN};
		uniformClass = "rhsgref_uniform_ttsko_urban";
	};
	
	class SFPD_RHS_INDEP_WINTER_Rifleman_3: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Rifleman 3";
		linkedItems[] = {"V_TacChestrig_grn_F","rhsgref_fieldcap_ttsko_urban",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhsgref_fieldcap_ttsko_urban",BASIC_LINKED_GREEN};
		uniformClass = "rhsgref_uniform_para_ttsko_urban";
	};
	
	class SFPD_RHS_INDEP_WINTER_Rifleman_4: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Rifleman 4";
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_beanie",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_beanie",BASIC_LINKED_GREEN};
		uniformClass = "rhsgref_uniform_para_ttsko_oxblood";
	};
	
	class SFPD_RHS_INDEP_WINTER_MG: SFPD_RHS_INDEP_WINTER_Rifleman_4 {
		backpack = "SFPD_RHS_INDEP_WINTER_MG_Backpack";
		displayName = "MG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
	};
	
	class SFPD_RHS_INDEP_WINTER_AT: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		backpack = "SFPD_RHS_INDEP_WINTER_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg7"};
		respawnWeapons[] += {"rhs_weap_rpg7"};
	};
	
	class SFPD_RHS_INDEP_WINTER_Marksman: SFPD_RHS_INDEP_WINTER_Rifleman_2 {
		backpack = "";
		displayName = "Marksman";
		weapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
	};
	
	class SFPD_RHS_INDEP_WINTER_Commander: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Commander";
		icon = "iconManOfficer";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		respawnMagazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		linkedItems[] = {"V_Rangemaster_belt","rhs_beret_milp",BASIC_LINKED_GREEN};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_beret_milp",BASIC_LINKED_GREEN};
		uniformClass = "rhsgref_uniform_para_ttsko_mountain";
		camouflage = 0.7;
	};
	
	class SFPD_RHS_INDEP_WINTER_AA: SFPD_RHS_INDEP_WINTER_Rifleman_3 {
		backpack = "SFPD_RHS_INDEP_WINTER_AA_Backpack";
		displayName = "AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	