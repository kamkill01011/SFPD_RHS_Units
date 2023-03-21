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
			SFPD_SUPPLY_AMMO(30Rnd_65x39_caseless_msbs_mag, 200Rnd_65x39_cased_Box_Tracer, 5, 9Rnd_45ACP_Mag, 6Rnd_12Gauge_Pellets, 6Rnd_12Gauge_Slug)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_LDF_BOX_Ammo_Spec: Box_EAF_Ammo_F {
        displayname = "[SFPD] LDF Special Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO_SPECIAL(6Rnd_12Gauge_Pellets, 6Rnd_12Gauge_Slug, 20Rnd_762x51_Mag, 5Rnd_127x108_APDS_Mag)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_LDF_BOX_Grenades: Box_EAF_Grenades_F {
        displayname = "[SFPD] LDF Grenades";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_GRENADES(I_IR_Grenade)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_LDF_BOX_Explosives: Box_EAF_AmmoOrd_F {
        displayname = "[SFPD] LDF Explosives";
        scope = 2;
		SFPD_SUPPLY_EXPLOSIVES
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
		SFPD_SUPPLY_EQUIPMENT(acc_flashlight,, B_AssaultPack_eaf_F, B_Carryall_oli, B_RadioBag_01_eaf_F)
    };
	
	class SFPD_LDF_BOX_Weapons: Box_EAF_Wps_F {
        displayname = "[SFPD] LDF Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
			SFPD_SUPPLY_WEAPONS(SFPD_Promet, SFPD_Promet_GL, SFPD_Stoner_Black, SFPD_ACPC2, SFPD_Promet_MR)
            TRANSPORT_WEAPONS(SFPD_Promet_SG,2)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_LDF_BOX_Special_Weapons: Box_EAF_WpsSpecial_F {
        displayname = "[SFPD] LDF Special Weapons";
        scope = 2;
		SFPD_SUPPLY_WEAPONS_SPECIAL(SFPD_Promet_MR, SFPD_Stoner_Black, SFPD_LYNX_Default)
    };
	
	class SFPD_LDF_BOX_Cargo: I_E_CargoNet_01_ammo_F {
        displayname = "[SFPD] LDF Cargo";
        scope = 2;
		SFPD_SUPPLY_CARGO(30Rnd_65x39_caseless_msbs_mag,40,200Rnd_65x39_cased_Box_Tracer,5,9Rnd_45ACP_Mag,20Rnd_762x51_Mag,6Rnd_12Gauge_Pellets,6Rnd_12Gauge_Slug,TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5),SFPD_F2000,SFPD_Stoner,launch_MRAWS_green_F,acc_flashlight,B_AssaultPack_eaf_F,B_Carryall_oli)
    };