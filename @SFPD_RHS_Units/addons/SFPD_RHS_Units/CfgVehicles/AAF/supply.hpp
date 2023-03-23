	class SFPD_AAF_BOX_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD] AAF Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			SFPD_SUPPLY_MEDICAL
        };
    };
	
	class SFPD_AAF_BOX_Ammo: Box_IND_Ammo_F {
        displayname = "[SFPD] AAF Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO(30Rnd_556x45_Stanag,200Rnd_65x39_cased_Box_Tracer,5,9Rnd_45ACP_Mag,20Rnd_762x51_Mag,10Rnd_338_Mag)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_AAF_BOX_Ammo_Spec: Box_IND_Ammo_F {
        displayname = "[SFPD] AAF Special Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO_SPECIAL(20Rnd_762x51_Mag,10Rnd_338_Mag,130Rnd_338_Mag,5Rnd_127x108_APDS_Mag)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_AAF_BOX_Grenades: Box_IND_Grenades_F {
        displayname = "[SFPD] AAF Grenades";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_GRENADES(I_IR_Grenade)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_AAF_BOX_Explosives: Box_IND_AmmoOrd_F {
        displayname = "[SFPD] AAF Explosives";
        scope = 2;
		SFPD_SUPPLY_EXPLOSIVES
    };
	
	class SFPD_AAF_BOX_Launchers_AT: Box_IND_WpsLaunch_F {
        displayname = "[SFPD] AAF AT";
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
	
	class SFPD_AAF_BOX_Launchers_TITAN_AT: Box_IND_WpsLaunch_F {
        displayname = "[SFPD] AAF Titan AT";
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
	
	class SFPD_AAF_BOX_Launchers_TITAN_AA: Box_IND_WpsLaunch_F {
        displayname = "[SFPD] AAF Titan AA";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AA,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_I_Titan_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_AAF_BOX_Equipment: Box_AAF_Equip_F {
        displayname = "[SFPD] AAF Equipment";
        scope = 2;
		SFPD_SUPPLY_EQUIPMENT(acc_flashlight,,B_AssaultPack_dgtl,B_Carryall_oli,TFAR_anprc155)
    };
	
	class SFPD_AAF_BOX_Weapons: Box_IND_Wps_F {
        displayname = "[SFPD] AAF Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
			SFPD_SUPPLY_WEAPONS(SFPD_F2000,SFPD_F2000_GL,SFPD_Stoner,SFPD_ACPC2,SFPD_M14)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_AAF_BOX_Special_Weapons: Box_IND_WpsSpecial_F {
        displayname = "[SFPD] AAF Special Weapons";
        scope = 2;
		SFPD_SUPPLY_WEAPONS_SPECIAL(SFPD_M14,SFPD_Stoner,SFPD_LYNX_Default)
    };
	
	class SFPD_AAF_BOX_Cargo: I_CargoNet_01_ammo_F {
        displayname = "[SFPD] AAF Cargo";
        scope = 2;
		SFPD_SUPPLY_CARGO(30Rnd_556x45_Stanag,40,200Rnd_65x39_cased_Box_Tracer,5,9Rnd_45ACP_Mag,20Rnd_762x51_Mag,10Rnd_338_Mag,130Rnd_338_Mag,TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5),SFPD_F2000,SFPD_Stoner,launch_MRAWS_green_F,acc_flashlight,B_AssaultPack_dgtl,B_Carryall_oli)
    };