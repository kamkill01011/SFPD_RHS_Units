	class SFPD_OPFOR_BOX_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD] CSAT Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			SFPD_SUPPLY_MEDICAL
        };
    };
	
	class SFPD_OPFOR_DESERT_BOX_Ammo: Box_East_Ammo_F {
        displayname = "[SFPD] CSAT (D) Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_green,40)
            TRANSPORT_MAGAZINES(150Rnd_762x54_Box_Tracer,10)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Ammo: Box_East_Ammo_F {
        displayname = "[SFPD] CSAT (W) Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30rnd_762x39_AK12_Lush_Mag_F,40)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Lush_Mag_Tracer_F,20)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Ammo: Box_East_Ammo_F {
        displayname = "[SFPD] CSAT (J) Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_580x42_Mag_F,50)
            TRANSPORT_MAGAZINES(100Rnd_580x42_Mag_Tracer_F,10)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_BOX_Ammo: Box_East_Ammo_F {
        displayname = "[SFPD] CSAT Special Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(5Rnd_127x108_APDS_Mag,6)
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_green,6)
            TRANSPORT_MAGAZINES(30Rnd_580x42_Mag_F,6)
            TRANSPORT_MAGAZINES(10Rnd_93x64_DMR_05_Mag,6)
            TRANSPORT_MAGAZINES(10Rnd_762x54_Mag,6)
            TRANSPORT_MAGAZINES(20Rnd_650x39_Cased_Mag_F,6)
            TRANSPORT_MAGAZINES(150Rnd_93x64_Mag,6)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_BOX_Grenades: Box_East_Grenades_F {
        displayname = "[SFPD] CSAT Grenades";
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
	
	class SFPD_OPFOR_BOX_Explosives: Box_East_AmmoOrd_F {
        displayname = "[SFPD] CSAT Explosives";
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
	
	class SFPD_OPFOR_DESERT_BOX_Launchers_AT: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (D) AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(RPG32_F,4)
            TRANSPORT_MAGAZINES(RPG32_HE_F,4)
            TRANSPORT_MAGAZINES(Vorona_HEAT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_RPG32_F,1)
            TRANSPORT_WEAPONS(launch_O_Vorona_brown_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_DESERT_BOX_Launchers_TITAN_AT: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (D) Titan AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_O_Titan_short_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_DESERT_BOX_Launchers_TITAN_AA: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (D) Titan AA";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AA,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_O_Titan_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Launchers_AT: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (W) AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(RPG32_F,4)
            TRANSPORT_MAGAZINES(RPG32_HE_F,4)
            TRANSPORT_MAGAZINES(Vorona_HEAT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_RPG32_green_F,1)
            TRANSPORT_WEAPONS(launch_O_Vorona_green_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Launchers_TITAN_AT: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (W) Titan AT";
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
	
	class SFPD_OPFOR_WOODLAND_BOX_Launchers_TITAN_AA: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (W) Titan AA";
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
	
	class SFPD_OPFOR_JUNGLE_BOX_Launchers_AT: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (J) AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(RPG32_F,4)
            TRANSPORT_MAGAZINES(RPG32_HE_F,4)
            TRANSPORT_MAGAZINES(Vorona_HEAT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_RPG32_ghex_F,1)
            TRANSPORT_WEAPONS(launch_O_Vorona_green_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Launchers_TITAN_AT: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (J) Titan AT";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_O_Titan_short_ghex_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Launchers_TITAN_AA: Box_East_WpsLaunch_F {
        displayname = "[SFPD] CSAT (J) Titan AA";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(Titan_AA,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_O_Titan_ghex_F,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_DESERT_BOX_Equipment: Box_CSAT_Equip_F {
        displayname = "[SFPD] CSAT (D) Equipment";
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
            TRANSPORT_BACKPACKS(B_FieldPack_ocamo,6)
            TRANSPORT_BACKPACKS(ace_gunbag_Tan,2)
            TRANSPORT_BACKPACKS(B_Carryall_ocamo,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Equipment: Box_CSAT_Equip_F {
        displayname = "[SFPD] CSAT (W) Equipment";
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
            TRANSPORT_BACKPACKS(B_FieldPack_taiga_F,6)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(B_Carryall_taiga_F,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000_bwmod,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Equipment: Box_CSAT_Equip_F {
        displayname = "[SFPD] CSAT (J) Equipment";
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
            TRANSPORT_BACKPACKS(B_FieldPack_ghex_F,6)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(B_Carryall_ghex_F,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000_bwmod,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_OPFOR_DESERT_BOX_Weapons: Box_East_Wps_F {
        displayname = "[SFPD] CSAT (D) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_KATIBA_Default,8)
            TRANSPORT_WEAPONS(SFPD_KATIBA_GL_Default,2)
            TRANSPORT_WEAPONS(SFPD_Zafir_Default,2)
            TRANSPORT_WEAPONS(SFPD_RAHIM_Default,2)
            TRANSPORT_WEAPONS(hgun_Rook40_F,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Weapons: Box_East_Wps_F {
        displayname = "[SFPD] CSAT (W) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_WOODLAND_AK12,8)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_AK12_GL,2)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_RPK12,2)
            TRANSPORT_WEAPONS(hgun_Rook40_F,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Weapons: Box_East_Wps_F {
        displayname = "[SFPD] CSAT (J) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_CAR95_Default,8)
            TRANSPORT_WEAPONS(SFPD_CAR95_GL_Default,8,2)
            TRANSPORT_WEAPONS(SFPD_CAR951_Default,2)
            TRANSPORT_WEAPONS(SFPD_CMR76_Default,2)
            TRANSPORT_WEAPONS(hgun_Rook40_F,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_DESERT_BOX_Special_Weapons: Box_East_WpsSpecial_F {
        displayname = "[SFPD] CSAT (D) Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_CYRUS_Default,1)
            TRANSPORT_WEAPONS(SFPD_NAVID_Default,2)
            TRANSPORT_WEAPONS(SFPD_KATIBAC_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_RAHIM_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_LYNX_DESERT_Default,1)
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
	
	class SFPD_OPFOR_WOODLAND_BOX_Special_Weapons: Box_East_WpsSpecial_F {
        displayname = "[SFPD] CSAT (W) Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_CYRUS_Black,1)
            TRANSPORT_WEAPONS(SFPD_NAVID_Tan,2)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_AKU12_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_CYRUS_Black_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_LYNX_Default,1)
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
	
	class SFPD_OPFOR_JUNGLE_BOX_Special_Weapons: Box_East_WpsSpecial_F {
        displayname = "[SFPD] CSAT (J) Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_CYRUS_Black,1)
            TRANSPORT_WEAPONS(SFPD_NAVID_Tan,2)
            TRANSPORT_WEAPONS(SFPD_CAR95_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_CMR76_Silenced,2)
            TRANSPORT_WEAPONS(SFPD_LYNX_JUNGLE_Default,1)
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
	
	class SFPD_OPFOR_DESERT_BOX_Cargo: O_CargoNet_01_ammo_F {
        displayname = "[SFPD] CSAT (D) Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_green,40)
            TRANSPORT_MAGAZINES(150Rnd_762x54_Box_Tracer,5)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,10)
            TRANSPORT_MAGAZINES(10Rnd_762x54_Mag,10)
            TRANSPORT_MAGAZINES(10Rnd_93x64_DMR_05_Mag,10)
            TRANSPORT_MAGAZINES(150Rnd_93x64_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(RPG32_F,5)
            TRANSPORT_MAGAZINES(RPG32_HE_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_RPG32_F,1)
            TRANSPORT_WEAPONS(SFPD_KATIBA_Default,2)
            TRANSPORT_WEAPONS(SFPD_NAVID_Default,1)
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
            TRANSPORT_BACKPACKS(B_FieldPack_ocamo,2)
            TRANSPORT_BACKPACKS(B_Carryall_ocamo,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Cargo: O_CargoNet_01_ammo_F {
        displayname = "[SFPD] CSAT (W) Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30rnd_762x39_AK12_Lush_Mag_F,50)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Lush_Mag_Tracer_F,8)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,10)
            TRANSPORT_MAGAZINES(10Rnd_93x64_DMR_05_Mag,10)
            TRANSPORT_MAGAZINES(150Rnd_93x64_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(RPG32_F,5)
            TRANSPORT_MAGAZINES(RPG32_HE_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_RPG32_green_F,1)
            TRANSPORT_WEAPONS(SFPD_WOODLAND_AK12,2)
            TRANSPORT_WEAPONS(SFPD_NAVID_Tan,1)
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
            TRANSPORT_BACKPACKS(B_FieldPack_taiga_F,2)
            TRANSPORT_BACKPACKS(B_Carryall_taiga_F,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Cargo: O_CargoNet_01_ammo_F {
        displayname = "[SFPD] CSAT (J) Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_580x42_Mag_F,50)
            TRANSPORT_MAGAZINES(100Rnd_580x42_Mag_Tracer_F,10)
            TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,10)
            TRANSPORT_MAGAZINES(20Rnd_650x39_Cased_Mag_F,10)
            TRANSPORT_MAGAZINES(10Rnd_93x64_DMR_05_Mag,10)
            TRANSPORT_MAGAZINES(150Rnd_93x64_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(RPG32_F,5)
            TRANSPORT_MAGAZINES(RPG32_HE_F,5)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(launch_RPG32_ghex_F,1)
            TRANSPORT_WEAPONS(SFPD_CAR95_Default,2)
            TRANSPORT_WEAPONS(SFPD_NAVID_Tan,1)
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
            TRANSPORT_BACKPACKS(B_FieldPack_ghex_F,2)
            TRANSPORT_BACKPACKS(B_Carryall_ghex_F,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };