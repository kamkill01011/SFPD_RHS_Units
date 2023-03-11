	class SFPD_AAF_BOX_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD] AAF Medical";
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
	
	class SFPD_AAF_BOX_Explosives: Box_IND_AmmoOrd_F {
        displayname = "[SFPD] AAF Explosives";
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
            TRANSPORT_BACKPACKS(B_AssaultPack_dgtl,6)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(TFAR_anprc155,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
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
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_556x45_Stanag,40)
            TRANSPORT_MAGAZINES(200Rnd_65x39_cased_Box_Tracer,5)
            TRANSPORT_MAGAZINES(9Rnd_45ACP_Mag,10)
            TRANSPORT_MAGAZINES(20Rnd_762x51_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_MRAWS_green_F,4)
            TRANSPORT_WEAPONS(SFPD_F2000,2)
            TRANSPORT_WEAPONS(SFPD_Stoner,1)
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
            TRANSPORT_BACKPACKS(B_AssaultPack_dgtl,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };