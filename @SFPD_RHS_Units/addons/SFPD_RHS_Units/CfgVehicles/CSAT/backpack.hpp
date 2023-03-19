	//Desert
	class SFPD_CSAT_DESERT_AT_Backpack: B_FieldPack_ocamo {
        displayname = "Desert AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(RPG32_F,3)
        };
    };
	
	class SFPD_CSAT_DESERT_AT_Heavy_Backpack: B_FieldPack_ocamo {
        displayname = "Desert AT Heavy Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(Vorona_HEAT,2)
        };
    };
	
	class SFPD_CSAT_DESERT_LMG_Backpack: B_FieldPack_ocamo {
        displayname = "Desert LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(150Rnd_762x54_Box_Tracer,2)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_CSAT_DESERT_Leader_Backpack: TFAR_mr3000 {
        displayname = "Desert Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellRed)
        };
    };
	
	class SFPD_CSAT_DESERT_Medic_Backpack: B_FieldPack_ocamo {
        displayname = "Desert Medic Backpack";
        scope = 1;
		class TransportItems {
            SFPD_BACKPACK_MEDIC
        };
    };
	
	class SFPD_CSAT_DESERT_JTAC_Backpack: TFAR_mr3000 {
        displayname = "Desert JTAC Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_JTAC(O_IR_Grenade)
        };
    };
	
	class SFPD_CSAT_DESERT_MMG_ASS_Backpack: B_TacticalPack_ocamo {
        displayname = "Desert MMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(150Rnd_93x64_Mag,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_CSAT_DESERT_TITAN_AT_Backpack: B_TacticalPack_ocamo {
        displayname = "Desert AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AT,2)
        };
    };
	
	class SFPD_CSAT_DESERT_TITAN_AA_Backpack: B_TacticalPack_ocamo {
        displayname = "Desert AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_CSAT_DESERT_Spotter_Backpack: TFAR_mr3000 {
        displayname = "Desert Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_DESERT_SF_Backpack: B_FieldPack_ocamo {
        displayname = "Desert SF Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30rnd_762x39_AK12_Arid_Mag_F)
        };
    };
	
	class SFPD_CSAT_DESERT_SF_Leader_Backpack: TFAR_mr3000 {
        displayname = "Desert SF Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellRed)
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Arid_Mag_F,3)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_DESERT_SF_Grenadier_Backpack: B_FieldPack_ocamo {
        displayname = "Desert SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30rnd_762x39_AK12_Arid_Mag_F)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
        };
    };
	
	class SFPD_CSAT_DESERT_SF_AT_Backpack: B_FieldPack_ocamo {
        displayname = "Desert SF AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Arid_Mag_F,3)
			TRANSPORT_ITEMS(RPG32_F,2)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_DESERT_SF_LMG_Backpack: B_FieldPack_ocamo {
        displayname = "Desert SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Arid_Mag_Tracer_F,7)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_DESERT_Viper_Backpack: B_ViperLightHarness_hex_F {
        displayname = "Desert Viper Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,2)
            TRANSPORT_ITEMS(ACE_epinephrine,1)
            TRANSPORT_ITEMS(ACE_elasticBandage,10)
            TRANSPORT_ITEMS(30Rnd_65x39_caseless_green,10)
            TRANSPORT_ITEMS(ACE_M84,3)
            TRANSPORT_ITEMS(SmokeShell,3)
            TRANSPORT_ITEMS(HandGrenade,3)
            TRANSPORT_ITEMS(10Rnd_50BW_Mag_F,3)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_splint,2)
        };
    };
	
	//Woodland
	class SFPD_CSAT_WOODLAND_Rifleman_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland Rifleman Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
        };
    };
	
	class SFPD_CSAT_WOODLAND_Grenadier_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland Grenadier Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,4)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,5)
        };
    };
	
	class SFPD_CSAT_WOODLAND_AT_Backpack: B_Carryall_taiga_F {
        displayname = "Woodland AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
			TRANSPORT_ITEMS(RPG32_F,3)
        };
    };
	
	class SFPD_CSAT_WOODLAND_AT_Heavy_Backpack: B_Carryall_taiga_F {
        displayname = "Woodland AT Heavy Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
			TRANSPORT_ITEMS(Vorona_HEAT,2)
        };
    };
	
	class SFPD_CSAT_WOODLAND_LMG_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(75rnd_762x39_AK12_Lush_Mag_Tracer_F,6)
        };
    };
	
	class SFPD_CSAT_WOODLAND_Leader_Backpack: TFAR_mr3000_bwmod {
        displayname = "Woodland Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellRed)
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
        };
    };
	
	class SFPD_CSAT_WOODLAND_Sharpshooter_Backpack: B_LegStrapBag_olive_F {
        displayname = "Woodland Sharpshooter Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(10Rnd_93x64_DMR_05_Mag,5)
        };
    };
	
	class SFPD_CSAT_WOODLAND_MMG_Backpack: B_LegStrapBag_olive_F {
        displayname = "Woodland MMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(150Rnd_93x64_Mag,1)
        };
    };
	
	class SFPD_CSAT_WOODLAND_Medic_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland Medic Backpack";
        scope = 1;
		class TransportItems {
            SFPD_BACKPACK_MEDIC
        };
    };
	
	class SFPD_CSAT_WOODLAND_JTAC_Backpack: TFAR_mr3000_bwmod {
        displayname = "Woodland JTAC Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_JTAC(O_IR_Grenade)
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,5)
        };
    };
	
	class SFPD_CSAT_WOODLAND_MMG_ASS_Backpack: B_Carryall_taiga_F {
        displayname = "Woodland MMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
            TRANSPORT_ITEMS(150Rnd_93x64_Mag,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
			TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
    };
	
	class SFPD_CSAT_WOODLAND_TITAN_AT_Backpack: B_Carryall_taiga_F {
        displayname = "Woodland AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
            TRANSPORT_ITEMS(Titan_AT,2)
        };
    };
	
	class SFPD_CSAT_WOODLAND_TITAN_AA_Backpack: B_Carryall_taiga_F {
        displayname = "Woodland AA Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_CSAT_WOODLAND_Spotter_Backpack: TFAR_mr3000_bwmod {
        displayname = "Woodland Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_WOODLAND_SF_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland SF Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30rnd_762x39_AK12_Lush_Mag_F)
        };
    };
	
	class SFPD_CSAT_WOODLAND_SF_Leader_Backpack: TFAR_mr3000_bwmod {
        displayname = "Woodland SF Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellRed)
            TRANSPORT_ITEMS(Laserbatteries,1)
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
        };
    };
	
	class SFPD_CSAT_WOODLAND_SF_Grenadier_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30rnd_762x39_AK12_Lush_Mag_F)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
        };
    };
	
	class SFPD_CSAT_WOODLAND_SF_AT_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland SF AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
			TRANSPORT_ITEMS(RPG32_F,2)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_WOODLAND_SF_LMG_Backpack: B_FieldPack_taiga_F {
        displayname = "Woodland SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Lush_Mag_Tracer_F,7)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	//Jungle
	class SFPD_CSAT_JUNGLE_AT_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(RPG32_F,3)
        };
    };
	
	class SFPD_CSAT_JUNGLE_AT_Heavy_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle AT Heavy Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(Vorona_HEAT,2)
        };
    };
	
	class SFPD_CSAT_JUNGLE_LMG_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(100Rnd_580x42_Mag_Tracer_F,4)
        };
    };
	
	class SFPD_CSAT_JUNGLE_Leader_Backpack: TFAR_mr3000_bwmod {
        displayname = "Jungle Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellRed)
        };
    };
	
	class SFPD_CSAT_JUNGLE_Medic_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle Medic Backpack";
        scope = 1;
		class TransportItems {
            SFPD_BACKPACK_MEDIC
        };
    };
	
	class SFPD_CSAT_JUNGLE_JTAC_Backpack: TFAR_mr3000_bwmod {
        displayname = "Jungle JTAC Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_JTAC(O_IR_Grenade)
        };
    };
	
	class SFPD_CSAT_JUNGLE_MMG_ASS_Backpack: B_TacticalPack_oli {
        displayname = "Jungle MMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(150Rnd_93x64_Mag,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_CSAT_JUNGLE_TITAN_AT_Backpack: B_TacticalPack_oli {
        displayname = "Jungle AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AT,2)
        };
    };
	
	class SFPD_CSAT_JUNGLE_TITAN_AA_Backpack: B_TacticalPack_oli {
        displayname = "Jungle AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_CSAT_JUNGLE_Spotter_Backpack: TFAR_mr3000_bwmod {
        displayname = "Jungle Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_JUNGLE_SF_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle SF Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30rnd_762x39_AK12_Lush_Mag_F)
        };
    };
	
	class SFPD_CSAT_JUNGLE_SF_Leader_Backpack: TFAR_mr3000_bwmod {
        displayname = "Jungle SF Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellRed)
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_JUNGLE_SF_Grenadier_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(30rnd_762x39_AK12_Lush_Mag_F)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
        };
    };
	
	class SFPD_CSAT_JUNGLE_SF_AT_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle SF AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30rnd_762x39_AK12_Lush_Mag_F,3)
			TRANSPORT_ITEMS(RPG32_F,2)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_JUNGLE_SF_LMG_Backpack: B_FieldPack_ghex_F {
        displayname = "Jungle SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Lush_Mag_Tracer_F,7)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_CSAT_JUNGLE_Viper_Backpack: B_ViperLightHarness_ghex_F {
        displayname = "Jungle Viper Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,2)
            TRANSPORT_ITEMS(ACE_epinephrine,1)
            TRANSPORT_ITEMS(ACE_elasticBandage,10)
            TRANSPORT_ITEMS(30Rnd_65x39_caseless_green,10)
            TRANSPORT_ITEMS(ACE_M84,3)
            TRANSPORT_ITEMS(SmokeShell,3)
            TRANSPORT_ITEMS(HandGrenade,3)
            TRANSPORT_ITEMS(10Rnd_50BW_Mag_F,3)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_splint,2)
        };
    };