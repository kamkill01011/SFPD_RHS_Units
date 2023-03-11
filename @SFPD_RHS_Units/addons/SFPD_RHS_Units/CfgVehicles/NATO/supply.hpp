	class SFPD_BLUFOR_BOX_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD] NATO Medical";
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
	
	class SFPD_BLUFOR_DESERT_BOX_Ammo: Box_NATO_Ammo_F {
        displayname = "[SFPD] NATO (D) Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_mag,40)
            TRANSPORT_MAGAZINES(200Rnd_556x45_Box_Tracer_Red_F,6)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_BLUFOR_WOODLAND_BOX_Ammo: Box_NATO_Ammo_F {
        displayname = "[SFPD] NATO (W) Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_khaki_mag,40)
            TRANSPORT_MAGAZINES(200Rnd_556x45_Box_Tracer_Red_F,6)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_BLUFOR_JUNGLE_BOX_Ammo: Box_NATO_Ammo_F {
        displayname = "[SFPD] NATO (J) Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_556x45_Stanag_red,50)
            TRANSPORT_MAGAZINES(150Rnd_556x45_Drum_Mag_Tracer_F,8)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_BLUFOR_BOX_Ammo: Box_NATO_Ammo_F {
        displayname = "[SFPD] NATO Special Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(7Rnd_408_Mag,10)
            TRANSPORT_MAGAZINES(20Rnd_762x51_Mag,10)
            TRANSPORT_MAGAZINES(10Rnd_338_Mag,10)
            TRANSPORT_MAGAZINES(130Rnd_338_Mag,10)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_BLUFOR_BOX_Grenades: Box_NATO_Grenades_F {
        displayname = "[SFPD] NATO Grenades";
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
	
	class SFPD_BLUFOR_BOX_Explosives: Box_NATO_AmmoOrd_F {
        displayname = "[SFPD] NATO Explosives";
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
	
	class SFPD_BLUFOR_DESERT_BOX_Launchers_AT: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (D) AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_NLAW_F,3)
            TRANSPORT_WEAPONS(launch_MRAWS_sand_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_DESERT_BOX_Launchers_TITAN_AT: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (D) Titan AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_B_Titan_short_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_DESERT_BOX_Launchers_TITAN_AA: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (D) Titan AA";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AA,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_B_Titan_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_WOODLAND_BOX_Launchers_AT: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (W) AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_NLAW_F,3)
            TRANSPORT_WEAPONS(launch_MRAWS_green_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_WOODLAND_BOX_Launchers_TITAN_AT: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (W) Titan AT";
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
	
	class SFPD_BLUFOR_WOODLAND_BOX_Launchers_TITAN_AA: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (W) Titan AA";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AA,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_B_Titan_olive_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_JUNGLE_BOX_Launchers_AT: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (J) AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_NLAW_F,3)
            TRANSPORT_WEAPONS(launch_MRAWS_green_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_JUNGLE_BOX_Launchers_TITAN_AT: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (J) Titan AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_B_Titan_short_tna_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_JUNGLE_BOX_Launchers_TITAN_AA: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] NATO (J) Titan AA";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AA,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_B_Titan_tna_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_DESERT_BOX_Equipment: Box_NATO_Equip_F {
        displayname = "[SFPD] NATO (D) Equipment";
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
            TRANSPORT_BACKPACKS(B_AssaultPack_mcamo,6)
            TRANSPORT_BACKPACKS(ace_gunbag_Tan,2)
            TRANSPORT_BACKPACKS(B_Carryall_mcamo,2)
            TRANSPORT_BACKPACKS(TFAR_rt1523g,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_BLUFOR_WOODLAND_BOX_Equipment: Box_NATO_Equip_F {
        displayname = "[SFPD] NATO (W) Equipment";
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
            TRANSPORT_BACKPACKS(B_AssaultPack_wdl_F,6)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(TFAR_rt1523g_bwmod,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_BLUFOR_JUNGLE_BOX_Equipment: Box_NATO_Equip_F {
        displayname = "[SFPD] NATO (J) Equipment";
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
            TRANSPORT_BACKPACKS(B_AssaultPack_tna_F,6)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(TFAR_rt1523g_bwmod,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_BLUFOR_DESERT_BOX_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD] NATO (D) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_MX_Default,8)
            TRANSPORT_WEAPONS(SFPD_MX_GL_Default,2)
            TRANSPORT_WEAPONS(SFPD_LMG_03_Default,2)
            TRANSPORT_WEAPONS(SFPD_DESERT_SIG_Default,2)
            TRANSPORT_WEAPONS(hgun_P07_blk_F,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_WOODLAND_BOX_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD] NATO (W) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_WOODLAND_MX,8)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_MX_GL,2)
            TRANSPORT_WEAPONS(SFPD_LMG_03_Default,2)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_SIG,2)
            TRANSPORT_WEAPONS(hgun_P07_blk_F,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_JUNGLE_BOX_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD] NATO (J) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_JUNGLE_SPAR_16_Default,8)
            TRANSPORT_WEAPONS(SFPD_JUNGLE_SPAR_16_GL_Default,2)
            TRANSPORT_WEAPONS(SFPD_JUNGLE_SPAR_16S_Default,2)
            TRANSPORT_WEAPONS(SFPD_JUNGLE_SPAR_17_Default,2)
            TRANSPORT_WEAPONS(hgun_P07_blk_F,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_BLUFOR_DESERT_BOX_Special_Weapons: Box_NATO_WpsSpecial_F {
        displayname = "[SFPD] NATO (D) Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_DESERT_Noreen_Default,1)
            TRANSPORT_WEAPONS(SFPD_MMG_Default,2)
            TRANSPORT_WEAPONS(SFPD_DESERT_SIG_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_MXC_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_CAMO_M200,1)
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
	
	class SFPD_BLUFOR_WOODLAND_BOX_Special_Weapons: Box_NATO_WpsSpecial_F {
        displayname = "[SFPD] NATO (W) Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_WOODLAND_Noreen,1)
            TRANSPORT_WEAPONS(SFPD_MMG_Default,2)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_SIG_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_MXC_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_CAMO_M200,1)
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
	
	class SFPD_BLUFOR_JUNGLE_BOX_Special_Weapons: Box_NATO_WpsSpecial_F {
        displayname = "[SFPD] NATO (J) Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_JUNGLE_Noreen_Default,1)
            TRANSPORT_WEAPONS(SFPD_MMG_Default,2)
            TRANSPORT_WEAPONS(SFPD_JUNGLE_SPAR_17_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_JUNGLE_SPAR_16_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_JUNGLE_M200,1)
			
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
	
	class SFPD_BLUFOR_DESERT_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD] NATO (D) Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_mag,40)
            TRANSPORT_MAGAZINES(200Rnd_556x45_Box_Tracer_Red_F,5)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,10)
            TRANSPORT_MAGAZINES(20Rnd_762x51_Mag,10)
            TRANSPORT_MAGAZINES(10Rnd_338_Mag,10)
            TRANSPORT_MAGAZINES(130Rnd_338_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_MRAWS_sand_F,1)
            TRANSPORT_WEAPONS(SFPD_MX_Default,2)
            TRANSPORT_WEAPONS(SFPD_MMG_Default,1)
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
            TRANSPORT_BACKPACKS(B_AssaultPack_mcamo,2)
            TRANSPORT_BACKPACKS(B_Carryall_mcamo,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };
	
	class SFPD_BLUFOR_WOODLAND_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD] NATO (W) Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_khaki_mag,40)
            TRANSPORT_MAGAZINES(200Rnd_556x45_Box_Tracer_Red_F,5)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,10)
            TRANSPORT_MAGAZINES(20Rnd_762x51_Mag,10)
            TRANSPORT_MAGAZINES(10Rnd_338_Mag,10)
            TRANSPORT_MAGAZINES(130Rnd_338_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_MRAWS_green_F,1)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_MX,2)
            TRANSPORT_WEAPONS(SFPD_MMG_Default,1)
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
            TRANSPORT_BACKPACKS(B_AssaultPack_wdl_F,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };
	
	class SFPD_BLUFOR_JUNGLE_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD] NATO (J) Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_556x45_Stanag_red,50)
            TRANSPORT_MAGAZINES(150Rnd_556x45_Drum_Mag_Tracer_F,5)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,10)
            TRANSPORT_MAGAZINES(20Rnd_762x51_Mag,10)
            TRANSPORT_MAGAZINES(10Rnd_338_Mag,10)
            TRANSPORT_MAGAZINES(130Rnd_338_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(MRAWS_HEAT_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_MRAWS_green_F,1)
            TRANSPORT_WEAPONS(SFPD_JUNGLE_SPAR_16_Default,2)
            TRANSPORT_WEAPONS(SFPD_MMG_Default,1)
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
            TRANSPORT_BACKPACKS(B_AssaultPack_tna_F,2)
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };