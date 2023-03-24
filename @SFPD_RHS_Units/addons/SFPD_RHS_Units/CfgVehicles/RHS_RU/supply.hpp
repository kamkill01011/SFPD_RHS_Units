	class SFPD_RHS_OPFOR_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD RHS] RU Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			SFPD_SUPPLY_MEDICAL
        };
    };
	
	class SFPD_RHS_OPFOR_Ammo1: Box_NATO_Ammo_F {
        displayname = "[SFPD RHS] RU Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO(30Rnd_762x39_AK12_Mag_F,75rnd_762x39_AK12_Mag_Tracer_F,12,rhs_mag_9x18_8_57N181S,rhs_10Rnd_762x54mmR_7N1,rhs_5Rnd_338lapua_t5000)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_OPFOR_Ammo2: Box_NATO_Ammo_F {
        displayname = "[SFPD RHS] RU Special Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO_SPECIAL(rhs_10Rnd_762x54mmR_7N1,rhs_5Rnd_338lapua_t5000,rhs_100Rnd_762x54mmR_green,5Rnd_127x108_APDS_Mag)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_OPFOR_Grenades: Box_NATO_Grenades_F {
        displayname = "[SFPD RHS] RU Grenades";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_GRENADES(O_IR_Grenade)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_OPFOR_Explosives: Box_NATO_AmmoOrd_F {
        displayname = "[SFPD RHS] RU Explosives";
        scope = 2;
		SFPD_SUPPLY_EXPLOSIVES
    };
	
	class SFPD_RHS_OPFOR_Launchers1: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD RHS] RU Launchers Igla/RPG26";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_9k38_rocket,5)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_igla,2)
            TRANSPORT_WEAPONS(rhs_weap_rpg26,5)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Launchers2: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD RHS] RU Launchers RPG7";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_rpg7_OG7V_mag,8)
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7V_mag,8)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_RPG7,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Launchers3: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD RHS] RU Launchers RPG7 heavy";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_rpg7_TBG7V_mag,8)
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7VR_mag,8)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_RPG7,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Equipment: Box_NATO_Equip_F {
        displayname = "[SFPD RHS] RU Equipment";
        scope = 2;
		SFPD_SUPPLY_EQUIPMENT(rhs_acc_2dpZenit_ris,TRANSPORT_ITEMS(O_NVGoggles_grn_F,10) TRANSPORT_ITEMS(rhsusf_acc_anpeq16a,10) TRANSPORT_ITEMS(rhs_acc_1pn93_2,2),rhs_tortila_emr,rhs_tortila_khaki,TFAR_mr3000_bwmod)
    };
	
	class SFPD_RHS_OPFOR_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD RHS] RU Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
			SFPD_SUPPLY_WEAPONS(SFPD_RHS_AK74MR,SFPD_RHS_AK74MR_GL,SFPD_RHS_AK_LMG,rhs_weap_makarov_pm,SFPD_RHS_SVD)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Special_Weapons: Box_NATO_WpsSpecial_F {
        displayname = "[SFPD RHS] RU Special Weapons";
        scope = 2;
		SFPD_SUPPLY_WEAPONS_SPECIAL(SFPD_RHS_T5000,SFPD_RHS_PKP,SFPD_RHS_LYNX_Black)
    };
	
	class SFPD_RHS_OPFOR_NBC_suits: Land_PlasticCase_01_large_black_CBRN_F {
        displayname = "[SFPD RHS] RU NBC Suits";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(U_C_CBRN_Suit_01_Blue_F,10)
		};
		class TransportBackpacks {
			TRANSPORT_BACKPACKS(B_AssaultPack_rgr,10)
		};
    };
	
	class SFPD_RHS_OPFOR_NBC_masks: Land_PlasticCase_01_medium_black_CBRN_F {
        displayname = "[SFPD RHS] RU NBC Masks";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(G_AirPurifyingRespirator_02_black_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_NBC_drugs: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD RHS] RU NBC Drugs";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_adenosine,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_NBC_detector: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD RHS] RU NBC Detector";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ChemicalDetector_01_watch_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Rappeling: Land_PlasticCase_01_medium_black_F {
        displayname = "[SFPD RHS] RU Rappeling";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(AUR_Rappel_Gear,1)
			TRANSPORT_ITEMS(AUR_Rappel_Rope_10,3)
			TRANSPORT_ITEMS(AUR_Rappel_Rope_20,3)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD RHS] RU Cargo";
        scope = 2;
		SFPD_SUPPLY_CARGO(30Rnd_762x39_AK12_Mag_F,40,75rnd_762x39_AK12_Mag_Tracer_F,12,rhs_mag_9x18_8_57N181S,rhs_10Rnd_762x54mmR_7N1,rhs_5Rnd_338lapua_t5000,rhs_100Rnd_762x54mmR_green,TRANSPORT_MAGAZINES(rhs_rpg7_PG7V_mag,5) TRANSPORT_MAGAZINES(rhs_rpg7_OG7V_mag,5),SFPD_RHS_AK74MR,SFPD_RHS_PKP,SFPD_RHS_RPG7,rhs_acc_2dpZenit_ris,rhs_tortila_emr,rhs_tortila_khaki)
    };