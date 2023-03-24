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
			SFPD_SUPPLY_AMMO(30Rnd_65x39_caseless_green,150Rnd_762x54_Box_Tracer,6,16Rnd_9x21_Mag,10Rnd_762x54_Mag,10Rnd_93x64_DMR_05_Mag)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Ammo: Box_East_Ammo_F {
        displayname = "[SFPD] CSAT (W) Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO(30rnd_762x39_AK12_Lush_Mag_F,75rnd_762x39_AK12_Lush_Mag_Tracer_F,12,16Rnd_9x21_Mag,10Rnd_762x54_Mag,10Rnd_93x64_DMR_05_Mag)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Ammo: Box_East_Ammo_F {
        displayname = "[SFPD] CSAT (J) Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO(30Rnd_580x42_Mag_F,100Rnd_580x42_Mag_Tracer_F,10,16Rnd_9x21_Mag,20Rnd_650x39_Cased_Mag_F,10Rnd_93x64_DMR_05_Mag)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_BOX_Ammo: Box_East_Ammo_F {
        displayname = "[SFPD] CSAT Special Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO_SPECIAL(10Rnd_762x54_Mag,10Rnd_93x64_DMR_05_Mag,150Rnd_93x64_Mag,5Rnd_127x108_APDS_Mag)
            TRANSPORT_MAGAZINES(20Rnd_650x39_Cased_Mag_F,5)
            TRANSPORT_MAGAZINES(30rnd_762x39_AK12_Arid_Mag_F,10)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Arid_Mag_Tracer_F,5)
            TRANSPORT_MAGAZINES(30rnd_762x39_AK12_Lush_Mag_F,10)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Lush_Mag_Tracer_F,5)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_BOX_Grenades: Box_East_Grenades_F {
        displayname = "[SFPD] CSAT Grenades";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_GRENADES(O_IR_Grenade)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_OPFOR_BOX_Explosives: Box_East_AmmoOrd_F {
        displayname = "[SFPD] CSAT Explosives";
        scope = 2;
		SFPD_SUPPLY_EXPLOSIVES
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
		SFPD_SUPPLY_EQUIPMENT(acc_flashlight,,B_FieldPack_ocamo,B_Carryall_ocamo,TFAR_mr3000)
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Equipment: Box_CSAT_Equip_F {
        displayname = "[SFPD] CSAT (W) Equipment";
        scope = 2;
		SFPD_SUPPLY_EQUIPMENT(acc_flashlight,,B_FieldPack_taiga_F,B_Carryall_taiga_F,TFAR_mr3000_bwmod)
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Equipment: Box_CSAT_Equip_F {
        displayname = "[SFPD] CSAT (J) Equipment";
        scope = 2;
		SFPD_SUPPLY_EQUIPMENT(acc_flashlight,,B_FieldPack_ghex_F,B_Carryall_ghex_F,TFAR_mr3000_bwmod)
    };
	
	class SFPD_OPFOR_DESERT_BOX_Weapons: Box_East_Wps_F {
        displayname = "[SFPD] CSAT (D) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
			SFPD_SUPPLY_WEAPONS(SFPD_KATIBA_Default,SFPD_KATIBA_GL_Default,SFPD_Zafir_Default,hgun_Rook40_F,SFPD_RAHIM_Default)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Weapons: Box_East_Wps_F {
        displayname = "[SFPD] CSAT (W) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
			SFPD_SUPPLY_WEAPONS(SFPD_WOODLAND_AK12,SFPD_WOODLAND_AK12_GL,SFPD_WOODLAND_RPK12,hgun_Rook40_F,SFPD_CYRUS_Black)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Weapons: Box_East_Wps_F {
        displayname = "[SFPD] CSAT (J) Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
			SFPD_SUPPLY_WEAPONS(SFPD_CAR95_Default,SFPD_CAR95_GL_Default,SFPD_CAR951_Default,hgun_Rook40_F,SFPD_CMR76_Default)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_OPFOR_DESERT_BOX_Special_Weapons: Box_East_WpsSpecial_F {
        displayname = "[SFPD] CSAT (D) Special Weapons";
        scope = 2;
		SFPD_SUPPLY_WEAPONS_SPECIAL(SFPD_CYRUS_Default,SFPD_NAVID_Default,SFPD_LYNX_DESERT_Default)
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Special_Weapons: Box_East_WpsSpecial_F {
        displayname = "[SFPD] CSAT (W) Special Weapons";
        scope = 2;
		SFPD_SUPPLY_WEAPONS_SPECIAL(SFPD_CYRUS_Black,SFPD_NAVID_Tan,SFPD_LYNX_Default)
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Special_Weapons: Box_East_WpsSpecial_F {
        displayname = "[SFPD] CSAT (J) Special Weapons";
        scope = 2;
		SFPD_SUPPLY_WEAPONS_SPECIAL(SFPD_CYRUS_Black,SFPD_NAVID_Tan,SFPD_LYNX_JUNGLE_Default)
    };
	
	class SFPD_OPFOR_DESERT_BOX_Cargo: O_CargoNet_01_ammo_F {
        displayname = "[SFPD] CSAT (D) Cargo";
        scope = 2;
		SFPD_SUPPLY_CARGO(30Rnd_65x39_caseless_green,40,150Rnd_762x54_Box_Tracer,6,16Rnd_9x21_Mag,10Rnd_762x54_Mag,10Rnd_93x64_DMR_05_Mag,150Rnd_93x64_Mag,TRANSPORT_MAGAZINES(RPG32_F,5) TRANSPORT_MAGAZINES(RPG32_HE_F,5),SFPD_KATIBA_Default,SFPD_NAVID_Default,launch_RPG32_F,acc_flashlight,B_FieldPack_ocamo,B_Carryall_ocamo)
    };
	
	class SFPD_OPFOR_WOODLAND_BOX_Cargo: O_CargoNet_01_ammo_F {
        displayname = "[SFPD] CSAT (W) Cargo";
        scope = 2;
		SFPD_SUPPLY_CARGO(30rnd_762x39_AK12_Lush_Mag_F,40,75rnd_762x39_AK12_Lush_Mag_Tracer_F,12,16Rnd_9x21_Mag,10Rnd_762x54_Mag,10Rnd_93x64_DMR_05_Mag,150Rnd_93x64_Mag,TRANSPORT_MAGAZINES(RPG32_F,5) TRANSPORT_MAGAZINES(RPG32_HE_F,5),SFPD_WOODLAND_AK12,SFPD_NAVID_Tan,launch_RPG32_green_F,acc_flashlight,B_FieldPack_taiga_F,B_Carryall_taiga_F)
    };
	
	class SFPD_OPFOR_JUNGLE_BOX_Cargo: O_CargoNet_01_ammo_F {
        displayname = "[SFPD] CSAT (J) Cargo";
        scope = 2;
		SFPD_SUPPLY_CARGO(30Rnd_580x42_Mag_F,40,100Rnd_580x42_Mag_Tracer_F,10,16Rnd_9x21_Mag,20Rnd_650x39_Cased_Mag_F,10Rnd_93x64_DMR_05_Mag,150Rnd_93x64_Mag,TRANSPORT_MAGAZINES(RPG32_F,5) TRANSPORT_MAGAZINES(RPG32_HE_F,5),SFPD_CAR95_Default,SFPD_NAVID_Tan,launch_RPG32_ghex_F,acc_flashlight,B_FieldPack_ghex_F,B_Carryall_ghex_F)
    };