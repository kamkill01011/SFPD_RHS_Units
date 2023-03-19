	//Desert
	class SFPD_NATO_DESERT_AT_Backpack: B_AssaultPack_mcamo {
        displayname = "Desert AT Backpack";//In-Game Name
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(MRAWS_HEAT_F,3)
        };
    };
	
	class SFPD_NATO_DESERT_Leader_Backpack: TFAR_rt1523g {
        displayname = "Desert Leader Radio";
        scope = 1;
        class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellBlue)
        };
    };
	
	class SFPD_NATO_DESERT_Medic_Backpack: B_AssaultPack_mcamo {
        displayname = "Desert Medic Backpack";
        scope = 1;
        class TransportItems {
            SFPD_BACKPACK_MEDIC
        };
    };
	
	class SFPD_NATO_DESERT_Ammo_Backpack: B_AssaultPack_mcamo {
        displayname = "Desert Ammo Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,10)
			TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,3)
        };
	};
	
	class SFPD_NATO_DESERT_Assaulter_Backpack: B_AssaultPack_mcamo {
        displayname = "Desert Assaulter Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ACE_CableTie,8)
            TRANSPORT_ITEMS(ACE_M84,5)
            TRANSPORT_ITEMS(HandGrenade,2)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
			TRANSPORT_ITEMS(50Rnd_570x28_SMG_03,4)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
        };
    };
	
	class SFPD_NATO_DESERT_EOD_Backpack: B_AssaultPack_mcamo {
        displayname = "Desert EOD Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,4)
            TRANSPORT_ITEMS(ACE_VMH3,1)
            TRANSPORT_ITEMS(ACE_M14,2)
        };
    };
	
	class SFPD_NATO_DESERT_JTAC_Backpack: TFAR_rt1523g {
        displayname = "Desert JTAC Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_JTAC(B_IR_Grenade)
        };
    };
	
	class SFPD_NATO_DESERT_LMG_Backpack: B_AssaultPack_mcamo {
        displayname = "Desert LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,2)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_NATO_DESERT_MMG_Backpack: B_TacticalPack_mcamo {
        displayname = "Desert MMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(130Rnd_338_Mag,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_NATO_DESERT_TITAN_AT_Backpack: B_TacticalPack_mcamo {
        displayname = "Desert AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AT,3)
        };
    };
	
	class SFPD_NATO_DESERT_TITAN_AA_Backpack: B_TacticalPack_mcamo {
        displayname = "Desert AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_NATO_DESERT_Logistician_Backpack: B_AssaultPack_mcamo {
        displayname = "Desert Logistician Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ToolKit,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
    };
	
	class SFPD_NATO_DESERT_Spotter_Backpack: TFAR_rt1523g {
        displayname = "Desert Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_DefusalKit,1)
        };
    };
	
	//Jungle
	class SFPD_NATO_JUNGLE_AT_Backpack: B_AssaultPack_tna_F {
        displayname = "Jungle AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(MRAWS_HEAT_F,3)
        };
    };
	
	class SFPD_NATO_JUNGLE_LMG_Backpack: B_AssaultPack_tna_F {
        displayname = "Jungle LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(150Rnd_556x45_Drum_Mag_Tracer_F,3)
        };
    };
	
	class SFPD_NATO_JUNGLE_Leader_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Jungle Leader Radio";
        scope = 1;
        class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellBlue)
        };
    };
	
	class SFPD_NATO_JUNGLE_Medic_Backpack: B_AssaultPack_tna_F {
        displayname = "Jungle Medic Backpack";
        scope = 1;
        class TransportItems {
            SFPD_BACKPACK_MEDIC
        };
    };
	
	class SFPD_NATO_JUNGLE_Ammo_Backpack: B_AssaultPack_tna_F {
        displayname = "Jungle Ammo Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,10)
			TRANSPORT_ITEMS(30Rnd_556x45_Stanag_red,10)
        };
	};
	
	class SFPD_NATO_JUNGLE_Assaulter_Backpack: B_AssaultPack_tna_F {
        displayname = "Jungle Assaulter Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ACE_CableTie,8)
            TRANSPORT_ITEMS(ACE_M84,5)
            TRANSPORT_ITEMS(HandGrenade,2)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
			TRANSPORT_ITEMS(50Rnd_570x28_SMG_03,4)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
        };
    };
	
	class SFPD_NATO_JUNGLE_EOD_Backpack: B_AssaultPack_tna_F {
        displayname = "Jungle EOD Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,4)
            TRANSPORT_ITEMS(ACE_VMH3,1)
            TRANSPORT_ITEMS(ACE_M14,2)
        };
    };
	
	class SFPD_NATO_JUNGLE_JTAC_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Jungle JTAC Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_JTAC(B_IR_Grenade)
        };
    };
	
	class SFPD_NATO_JUNGLE_MMG_Backpack: B_TacticalPack_oli {
        displayname = "Jungle MMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(130Rnd_338_Mag,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_NATO_JUNGLE_TITAN_AT_Backpack: B_TacticalPack_oli {
        displayname = "Jungle AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AT,2)
        };
    };
	
	class SFPD_NATO_JUNGLE_TITAN_AA_Backpack: B_TacticalPack_oli {
        displayname = "Jungle AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_NATO_JUNGLE_Logistician_Backpack: B_AssaultPack_tna_F {
        displayname = "Jungle Logistician Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ToolKit,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
    };
	
	class SFPD_NATO_JUNGLE_Spotter_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Jungle Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_DefusalKit,1)
        };
    };
	
	//Woodland
	class SFPD_NATO_WOODLAND_AT_Backpack: B_AssaultPack_wdl_F {
        displayname = "Woodland AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(MRAWS_HEAT_F,3)
        };
    };
	
	class SFPD_NATO_WOODLAND_Leader_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Woodland Leader Radio";
        scope = 1;
        class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellBlue)
        };
    };
	
	class SFPD_NATO_WOODLAND_Medic_Backpack: B_AssaultPack_wdl_F {
        displayname = "Woodland Medic Backpack";
        scope = 1;
        class TransportItems {
            SFPD_BACKPACK_MEDIC
        };
    };
	
	class SFPD_NATO_WOODLAND_Ammo_Backpack: B_AssaultPack_wdl_F {
        displayname = "Woodland Ammo Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,10)
			TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,3)
        };
	};
	
	class SFPD_NATO_WOODLAND_Assaulter_Backpack: B_AssaultPack_wdl_F {
        displayname = "Woodland Assaulter Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ACE_CableTie,8)
            TRANSPORT_ITEMS(ACE_M84,5)
            TRANSPORT_ITEMS(HandGrenade,2)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
			TRANSPORT_ITEMS(50Rnd_570x28_SMG_03,4)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
        };
    };
	
	class SFPD_NATO_WOODLAND_EOD_Backpack: B_AssaultPack_wdl_F {
        displayname = "Woodland EOD Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,4)
            TRANSPORT_ITEMS(ACE_VMH3,1)
            TRANSPORT_ITEMS(ACE_M14,2)
        };
    };
	
	class SFPD_NATO_WOODLAND_JTAC_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Woodland JTAC Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_JTAC(B_IR_Grenade)
        };
    };
	
	class SFPD_NATO_WOODLAND_LMG_Backpack: B_AssaultPack_wdl_F {
        displayname = "Woodland LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,2)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_NATO_WOODLAND_MMG_Backpack: B_TacticalPack_oli {
        displayname = "Woodland MMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(130Rnd_338_Mag,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_NATO_WOODLAND_TITAN_AT_Backpack: B_TacticalPack_oli {
        displayname = "Woodland AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AT,3)
        };
    };
	
	class SFPD_NATO_WOODLAND_TITAN_AA_Backpack: B_TacticalPack_oli {
        displayname = "Woodland AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_NATO_WOODLAND_Logistician_Backpack: B_AssaultPack_wdl_F {
        displayname = "Woodland Logistician Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ToolKit,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
    };
	
	class SFPD_NATO_WOODLAND_Spotter_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Woodland Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_DefusalKit,1)
        };
    };
	
	//Universal
	class SFPD_NATO_DESERT_SF_Backpack: B_AssaultPack_rgr {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30Rnd_762x39_Mag_F)
        };
    };
	
	class SFPD_NATO_DESERT_SF_Leader_Backpack: TFAR_rt1523g_black {
        displayname = "SF Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellBlue)
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,1)
			TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_NATO_DESERT_SF_Grenadier_Backpack: B_AssaultPack_rgr {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30Rnd_762x39_Mag_F)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
        };
    };
	
	class SFPD_NATO_DESERT_SF_AT_Backpack: B_AssaultPack_rgr {
        displayname = "SF AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(MRAWS_HEAT_F,2)
			TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_NATO_DESERT_SF_LMG_Backpack: B_AssaultPack_rgr {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,2)
			TRANSPORT_ITEMS(Laserbatteries,1)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_NATO_JUNGLE_SF_Backpack: B_AssaultPack_sgg {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30Rnd_762x39_Mag_F)
        };
    };
	
	class SFPD_NATO_JUNGLE_SF_Leader_Backpack: TFAR_rt1523g_green {
        displayname = "SF Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellBlue)
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,1)
			TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_NATO_JUNGLE_SF_Grenadier_Backpack: B_AssaultPack_sgg {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30Rnd_762x39_Mag_F)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
        };
    };
	
	class SFPD_NATO_JUNGLE_SF_AT_Backpack: B_AssaultPack_sgg {
        displayname = "SF AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(MRAWS_HEAT_F,2)
			TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_NATO_JUNGLE_SF_LMG_Backpack: B_AssaultPack_sgg {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,2)
			TRANSPORT_ITEMS(Laserbatteries,1)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_NATO_WOODLAND_SF_Backpack: B_AssaultPack_sgg {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30Rnd_762x39_Mag_F)
        };
    };
	
	class SFPD_NATO_WOODLAND_SF_Leader_Backpack: TFAR_rt1523g_green {
        displayname = "SF Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellBlue)
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,1)
			TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_NATO_WOODLAND_SF_Grenadier_Backpack: B_AssaultPack_sgg {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30Rnd_762x39_Mag_F)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
        };
    };
	
	class SFPD_NATO_WOODLAND_SF_AT_Backpack: B_AssaultPack_sgg {
        displayname = "SF AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(MRAWS_HEAT_F,2)
			TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_NATO_WOODLAND_SF_LMG_Backpack: B_AssaultPack_sgg {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(200Rnd_556x45_Box_Tracer_Red_F,2)
			TRANSPORT_ITEMS(Laserbatteries,1)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_UNIVERSAL_Diver_Backpack: B_AssaultPack_blk {
        displayname = "Diver Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_wirecutter,1)
			TRANSPORT_ITEMS(ACE_surgicalKit,1)
			TRANSPORT_ITEMS(DemoCharge_Remote_Mag,2)
			TRANSPORT_ITEMS(30Rnd_556x45_Stanag_red,6)
			TRANSPORT_ITEMS(SmokeShell,3)
			TRANSPORT_ITEMS(ACE_M84,3)
        };
    };
	
	class SFPD_NATO_UNIVERSAL_SpecOps_Backpack: ace_gunbag_Tan {
        displayname = "SpecOps Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
		class TransportWeapons {
			TRANSPORT_WEAPONS(SFPD_BLACK_P90_Silenced,1)
		}
		class TransportMagazines {
			TRANSPORT_MAGAZINES(50Rnd_570x28_SMG_03,1)
		}
    };