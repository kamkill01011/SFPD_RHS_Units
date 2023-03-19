	class SFPD_LDF_BOX_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD] LDF Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			SFPD_SUPPLY_MEDICAL
        };
    };
	
	class SFPD_LDF_BOX_Ammo: Box_EAF_Ammo_F {
        displayname = "[SFPD] LDF Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_msbs_mag,40)
            TRANSPORT_MAGAZINES(200Rnd_65x39_cased_Box_Tracer,8)
            TRANSPORT_MAGAZINES(6Rnd_12Gauge_Pellets,8)
            TRANSPORT_MAGAZINES(6Rnd_12Gauge_Slug,8)
            TRANSPORT_MAGAZINES(9Rnd_45ACP_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_LDF_BOX_Ammo_Spec: Box_EAF_Ammo_F {
        displayname = "[SFPD] LDF Special Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(5Rnd_127x108_APDS_Mag,10)
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_msbs_mag,10)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_LDF_BOX_Grenades: Box_EAF_Grenades_F {
        displayname = "[SFPD] LDF Grenades";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(CBRN_CS,3)
            TRANSPORT_MAGAZINES(CBRN_CS_GL,3)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,20)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(I_IR_Grenade,2)
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
	
	class SFPD_LDF_BOX_Explosives: Box_EAF_AmmoOrd_F {
        displayname = "[SFPD] LDF Explosives";
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
	
	class SFPD_LDF_BOX_Launchers_AT: Box_EAF_WpsLaunch_F {
        displayname = "[SFPD] LDF AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_MRAWS_green_F,1)
            TRANSPORT_WEAPONS(launch_NLAW_F,3)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_LDF_BOX_Launchers_TITAN_AT: Box_EAF_WpsLaunch_F {
        displayname = "[SFPD] LDF Titan AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_I_Titan_short_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_LDF_BOX_Launchers_TITAN_AA: Box_EAF_WpsLaunch_F {
        displayname = "[SFPD] LDF Titan AA";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AA,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_I_Titan_eaf_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_LDF_BOX_Equipment: Box_EAF_Equip_F {
        displayname = "[SFPD] LDF Equipment";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,2)
            TRANSPORT_ITEMS(ToolKit,2)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(ACE_wirecutter,2)
            TRANSPORT_ITEMS(optic_NVS,4)
            TRANSPORT_ITEMS(acc_flashlight,20)
            TRANSPORT_ITEMS(ACE_Tripod,1)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
            TRANSPORT_ITEMS(ACE_artilleryTable,1)
        };
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_AssaultPack_eaf_F,6)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_RadioBag_01_eaf_F,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_LDF_BOX_Weapons: Box_EAF_Wps_F {
        displayname = "[SFPD] LDF Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_Promet,8)
            TRANSPORT_WEAPONS(SFPD_Promet_GL,2)
            TRANSPORT_WEAPONS(SFPD_Promet_SG,2)
            TRANSPORT_WEAPONS(SFPD_Stoner_Black,2)
            TRANSPORT_WEAPONS(SFPD_ACPC2,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_LDF_BOX_Special_Weapons: Box_EAF_WpsSpecial_F {
        displayname = "[SFPD] LDF Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_Promet_MR,2)
            TRANSPORT_WEAPONS(SFPD_Promet_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_Promet_MR_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_LYNX_Default,1)
			
			TRANSPORT_WEAPONS(Laserdesignator,1)
			TRANSPORT_WEAPONS(ACE_Vector,4)
		};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_Tripod,2)
			TRANSPORT_ITEMS(ACE_SpottingScope,2)
			TRANSPORT_ITEMS(ACE_ATragMX,2)
			TRANSPORT_ITEMS(ACE_RangeCard,4)
			TRANSPORT_ITEMS(ACE_Kestrel4500,4)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_LDF_BOX_Cargo: I_E_CargoNet_01_ammo_F {
        displayname = "[SFPD] LDF Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_msbs_mag,50)
            TRANSPORT_MAGAZINES(200Rnd_65x39_cased_Box_Tracer,5)
            TRANSPORT_MAGAZINES(9Rnd_45ACP_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(6Rnd_12Gauge_Pellets,8)
            TRANSPORT_MAGAZINES(6Rnd_12Gauge_Slug,8)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_MRAWS_green_F,4)
            TRANSPORT_WEAPONS(SFPD_Promet,2)
            TRANSPORT_WEAPONS(SFPD_Stoner_Black,1)
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
            TRANSPORT_ITEMS(acc_flashlight,10)
            TRANSPORT_ITEMS(ACE_splint,20)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
		};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_AssaultPack_eaf_F,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };