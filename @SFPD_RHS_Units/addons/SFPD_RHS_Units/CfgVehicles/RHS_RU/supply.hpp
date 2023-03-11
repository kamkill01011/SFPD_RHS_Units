	class SFPD_RHS_OPFOR_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD RHS] RU Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_quikclot,50)
            TRANSPORT_ITEMS(ACE_bodyBag,10)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_salineIV_500,20)
            TRANSPORT_ITEMS(ACE_surgicalKit,2)
            TRANSPORT_ITEMS(ACE_tourniquet,10)
            TRANSPORT_ITEMS(ACE_splint,20)
        };
    };
	
	class SFPD_RHS_OPFOR_Ammo: Box_NATO_Ammo_F {
        displayname = "[SFPD RHS] RU Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_762x39_AK12_Mag_F,50)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Mag_Tracer_F,10)
            TRANSPORT_MAGAZINES(rhs_100Rnd_762x54mmR_green,10)
            TRANSPORT_MAGAZINES(rhs_10Rnd_762x54mmR_7N1,10)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_OPFOR_Grenades: Box_NATO_Grenades_F {
        displayname = "[SFPD RHS] RU Grenades";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(CBRN_CS,3)
            TRANSPORT_MAGAZINES(CBRN_CS_GL,3)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,20)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(O_IR_Grenade,2)
            TRANSPORT_MAGAZINES(SmokeShellBlue,5)
            TRANSPORT_MAGAZINES(SmokeShellGreen,5)
            TRANSPORT_MAGAZINES(SmokeShellRed,5)
            TRANSPORT_MAGAZINES(HandGrenade,20)
            TRANSPORT_MAGAZINES(SmokeShell,20)
            TRANSPORT_MAGAZINES(ACE_M84,20)
            TRANSPORT_MAGAZINES(1Rnd_Smoke_Grenade_shell,10)
            TRANSPORT_MAGAZINES(UGL_FlareWhite_F,10)
            TRANSPORT_MAGAZINES(1Rnd_SmokeRed_Grenade_shell,5)
            TRANSPORT_MAGAZINES(1Rnd_SmokeGreen_Grenade_shell,5)
            TRANSPORT_MAGAZINES(1Rnd_SmokeBlue_Grenade_shell,5)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_OPFOR_Explosives: Box_NATO_AmmoOrd_F {
        displayname = "[SFPD RHS] RU Explosives";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ACE_VMH3,2)
        };
		class TransportItems {
            TRANSPORT_ITEMS(ACE_DefusalKit,5)
            TRANSPORT_ITEMS(ACE_Clacker,5)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,10)
            TRANSPORT_ITEMS(ATMine_Range_Mag,2)
            TRANSPORT_ITEMS(SatchelCharge_Remote_Mag,2)
            TRANSPORT_ITEMS(ClaymoreDirectionalMine_Remote_Mag,4)
            TRANSPORT_ITEMS(SLAMDirectionalMine_Wire_Mag,4)
        };
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
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(O_NVGoggles_grn_F,10)
            TRANSPORT_ITEMS(rhs_acc_2dpZenit_ris,20)
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,2)
            TRANSPORT_ITEMS(rhsusf_acc_anpeq16a,10)
            TRANSPORT_ITEMS(ToolKit,2)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(ACE_wirecutter,2)
            TRANSPORT_ITEMS(optic_NVS,4)
            TRANSPORT_ITEMS(rhs_acc_1pn93_2,2)
            TRANSPORT_ITEMS(ACE_Tripod,1)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
            TRANSPORT_ITEMS(ACE_artilleryTable,1)
        };
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(rhssaf_kitbag_smb,4)
            TRANSPORT_BACKPACKS(ace_gunbag,1)
            TRANSPORT_BACKPACKS(ace_gunbag_Tan,1)
            TRANSPORT_BACKPACKS(TFAR_mr3000_rhs,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000_bwmod,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000_bwmod_tropen,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_RHS_OPFOR_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD RHS] RU Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_AK74MR,8)
            TRANSPORT_WEAPONS(SFPD_RHS_AK74MR_GL,2)
            TRANSPORT_WEAPONS(SFPD_RHS_AK_LMG,2)
            TRANSPORT_WEAPONS(SFPD_RHS_PKP,1)
            TRANSPORT_WEAPONS(SFPD_RHS_SVD,2)
            TRANSPORT_WEAPONS(rhs_weap_makarov_pm,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
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
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_762x39_AK12_Mag_F,50)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Mag_Tracer_F,10)
            TRANSPORT_MAGAZINES(rhs_100Rnd_762x54mmR_green,10)
            TRANSPORT_MAGAZINES(rhs_mag_9x18_8_57N181S,10)
            TRANSPORT_MAGAZINES(rhs_10Rnd_762x54mmR_7N1,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(rhs_rpg7_OG7V_mag,4)
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7V_mag,4)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_RPG7,1)
            TRANSPORT_WEAPONS(rhs_weap_rpg26,4)
            TRANSPORT_WEAPONS(SFPD_RHS_AK74MR,2)
            TRANSPORT_WEAPONS(SFPD_RHS_PKP,1)
		};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_elasticBandage,40)
            TRANSPORT_ITEMS(ACE_quikclot,40)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_salineIV_500,20)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,4)
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(ACE_splint,20)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
		};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(rhssaf_kitbag_smb,4)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };