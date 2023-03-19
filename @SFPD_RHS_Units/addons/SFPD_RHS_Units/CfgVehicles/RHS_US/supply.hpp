	class SFPD_RHS_BLUFOR_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD RHS] US Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			SFPD_SUPPLY_MEDICAL
        };
    };
	
	class SFPD_RHS_BLUFOR_Ammo1: Box_NATO_Ammo_F {
        displayname = "[SFPD RHS] US Ammo 1";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_30Rnd_556x45_Mk318_Stanag,50)
            TRANSPORT_MAGAZINES(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,10)
            TRANSPORT_MAGAZINES(rhsusf_mag_17Rnd_9x19_JHP,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_BLUFOR_Ammo2: Box_NATO_Ammo_F {
        displayname = "[SFPD RHS] US Ammo 2";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,10)
            TRANSPORT_MAGAZINES(7Rnd_408_Mag,10)
            TRANSPORT_MAGAZINES(rhsusf_5Rnd_300winmag_xm2010,20)
            TRANSPORT_MAGAZINES(rhsusf_100Rnd_762x51_m62_tracer,10)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_BLUFOR_Grenades: Box_NATO_Grenades_F {
        displayname = "[SFPD RHS] US Grenades";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(CBRN_CS,3)
            TRANSPORT_MAGAZINES(CBRN_CS_GL,3)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,20)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(B_IR_Grenade,2)
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
	
	class SFPD_RHS_BLUFOR_Explosives: Box_NATO_AmmoOrd_F {
        displayname = "[SFPD RHS] US Explosives";
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
	
	class SFPD_RHS_BLUFOR_Launchers1: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD RHS] US Launchers Stinger/M72";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_fim92_mag,5)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_fim92,2)
            TRANSPORT_WEAPONS(rhs_weap_m72a7,5)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Launchers2: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD RHS] US Launchers M3 MAAWS";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HE,4)
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HEDP,4)
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HEAT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_maaws_optic,1)
			TRANSPORT_WEAPONS(ACE_Vector,1)
        };
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	
	class SFPD_RHS_BLUFOR_Launchers3: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD RHS] US Launchers Javelin";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_fgm148_magazine_AT,3)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_fgm148,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Launchers4: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD RHS] US Launchers M136";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_M136_hedp,8)
			TRANSPORT_WEAPONS(ACE_Vector,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Equipment: Box_NATO_Equip_F {
        displayname = "[SFPD RHS] US Equipment";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(rhsusf_ANPVS_15,10)
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,2)
            TRANSPORT_ITEMS(ToolKit,2)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(rhsusf_acc_M952V,20)
            TRANSPORT_ITEMS(rhsusf_acc_anpeq16a,10)
            TRANSPORT_ITEMS(ACE_wirecutter,2)
            TRANSPORT_ITEMS(optic_NVS,4)
            TRANSPORT_ITEMS(ACE_Tripod,1)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
            TRANSPORT_ITEMS(ACE_artilleryTable,1)
        };
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(rhsusf_falconii_coy,6)
            TRANSPORT_BACKPACKS(ace_gunbag,1)
            TRANSPORT_BACKPACKS(ace_gunbag_Tan,1)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
            TRANSPORT_BACKPACKS(TFAR_rt1523g_bwmod,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_RHS_BLUFOR_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD RHS] US Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_M4_Default,8)
            TRANSPORT_WEAPONS(SFPD_RHS_M4_GL_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_M249_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_DESERT_MK11_Default,1)
            TRANSPORT_WEAPONS(SFPD_RHS_WOODLAND_MK11_Default,1)
            TRANSPORT_WEAPONS(SFPD_RHS_Glock17,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Shotgun: Box_NATO_Wps_F {
        displayname = "[SFPD RHS] US Shotgun";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhsusf_8Rnd_00Buck,10)
            TRANSPORT_MAGAZINES(rhsusf_8Rnd_Slug,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_M590_8RD,1)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Special_Weapons: Box_NATO_WpsSpecial_F {
        displayname = "[SFPD RHS] US Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_M240_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_DESERT_M2010_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_RHS_WOODLAND_M2010_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_RHS_M4_Spotter,1)
            TRANSPORT_WEAPONS(SFPD_RHS_M200,1)
			TRANSPORT_WEAPONS(Laserdesignator,1)
			TRANSPORT_WEAPONS(ACE_Vector,4)
		};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_Tripod,2)
			TRANSPORT_ITEMS(ACE_SpottingScope,2)
			TRANSPORT_ITEMS(ACE_ATragMX,2)
			TRANSPORT_ITEMS(ACE_RangeCard,8)
			TRANSPORT_ITEMS(ACE_Kestrel4500,4)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_NBC_suits: Land_PlasticCase_01_large_black_CBRN_F {
        displayname = "[SFPD RHS] US NBC Suits";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(U_B_CBRN_Suit_01_MTP_F,10)
		};
		class TransportBackpacks {
			TRANSPORT_BACKPACKS(B_AssaultPack_rgr,10)
		};
    };
	
	class SFPD_RHS_BLUFOR_NBC_masks: Land_PlasticCase_01_medium_black_CBRN_F {
        displayname = "[SFPD RHS] US NBC Masks";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(G_AirPurifyingRespirator_01_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_NBC_drugs: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD RHS] US NBC Drugs";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_adenosine,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_NBC_detector: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD RHS] US NBC Detector";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ChemicalDetector_01_watch_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Rappeling: Land_PlasticCase_01_medium_black_F {
        displayname = "[SFPD RHS] US Rappeling";
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
	
	class SFPD_RHS_BLUFOR_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD RHS] US Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_30Rnd_556x45_Mk318_Stanag,50)
            TRANSPORT_MAGAZINES(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,5)
            TRANSPORT_MAGAZINES(rhsusf_mag_17Rnd_9x19_JHP,10)
            TRANSPORT_MAGAZINES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,10)
            TRANSPORT_MAGAZINES(rhsusf_100Rnd_762x51_m62_tracer,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HEAT,4)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_maaws_optic,1)
            TRANSPORT_WEAPONS(rhs_weap_M136_hedp,4)
            TRANSPORT_WEAPONS(rhs_weap_m72a7,4)
            TRANSPORT_WEAPONS(SFPD_RHS_M4_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_M240_Default,1)
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
            TRANSPORT_BACKPACKS(rhsusf_falconii_coy,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };