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
            TRANSPORT_MAGAZINES(30Rnd_556x45_Stanag,50)
            TRANSPORT_MAGAZINES(200Rnd_65x39_cased_Box_Tracer,8)
            TRANSPORT_MAGAZINES(9Rnd_45ACP_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_AAF_BOX_Ammo_Spec: Box_IND_Ammo_F {
        displayname = "[SFPD] AAF Special Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(5Rnd_127x108_APDS_Mag,10)
            TRANSPORT_MAGAZINES(20Rnd_762x51_Mag,10)
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
		SFPD_SUPPLY_EQUIPMENT(acc_flashlight,, B_AssaultPack_dgtl, B_Carryall_oli, TFAR_anprc155)
    };
	
	class SFPD_AAF_BOX_Weapons: Box_IND_Wps_F {
        displayname = "[SFPD] AAF Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_F2000,8)
            TRANSPORT_WEAPONS(SFPD_F2000_GL,2)
            TRANSPORT_WEAPONS(SFPD_Stoner,2)
            TRANSPORT_WEAPONS(SFPD_ACPC2,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_AAF_BOX_Special_Weapons: Box_IND_WpsSpecial_F {
        displayname = "[SFPD] AAF Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_M14,2)
            TRANSPORT_WEAPONS(SFPD_F2000_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_M14_Silenced,1)
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
	
	class SFPD_AAF_BOX_Cargo: I_CargoNet_01_ammo_F {
        displayname = "[SFPD] AAF Cargo";
        scope = 2;
		SFPD_SUPPLY_CARGO(30Rnd_556x45_Stanag,40,200Rnd_65x39_cased_Box_Tracer,5,9Rnd_45ACP_Mag,20Rnd_762x51_Mag,10Rnd_338_Mag,130Rnd_338_Mag,TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5),SFPD_F2000,SFPD_Stoner,launch_MRAWS_green_F,acc_flashlight,B_AssaultPack_dgtl,B_Carryall_oli)
    };