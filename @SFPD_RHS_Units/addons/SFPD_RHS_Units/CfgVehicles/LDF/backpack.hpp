	class SFPD_LDF_Grenadier_Backpack: B_LegStrapBag_black_F {
        displayname = "Grenadier Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,5)
        };
    };
	
	class SFPD_LDF_SFPD_LDF_Assaulter_Backpack: B_LegStrapBag_black_F {
        displayname = "Assaulter Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(6Rnd_12Gauge_Pellets,4)
			TRANSPORT_ITEMS(6Rnd_12Gauge_Slug,4)
        };
    };
	
	class SFPD_LDF_SFPD_LDF_AT_Backpack: B_AssaultPack_eaf_F {
        displayname = "AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(MRAWS_HEAT_F,3)
        };
    };
	
	class SFPD_LDF_LMG_Backpack: B_AssaultPack_eaf_F {
        displayname = "LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(200Rnd_65x39_cased_Box_Tracer,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_LDF_Leader_Backpack: B_RadioBag_01_eaf_F {
        displayname = "Leader Radio";
        scope = 1;
		class TransportItems {
			SFPD_RHS_BACKPACK_LEADER(SmokeShellGreen)
        };
    };
	
	class SFPD_LDF_Medic_Backpack: B_AssaultPack_eaf_F {
        displayname = "Medic Backpack";
        scope = 1;
		class TransportItems {
            SFPD_RHS_BACKPACK_MEDIC
        };
    };
	
	class SFPD_LDF_JTAC_Backpack: B_RadioBag_01_eaf_F {
        displayname = "JTAC Radio";
        scope = 1;
		class TransportItems {
			SFPD_RHS_BACKPACK_JTAC(I_IR_Grenade)
        };
    };
	
	class SFPD_LDF_TITAN_AT_Backpack: B_TacticalPack_oli {
        displayname = "AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AT,2)
        };
    };
	
	class SFPD_LDF_TITAN_AA_Backpack: B_TacticalPack_oli {
        displayname = "AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_LDF_Spotter_Backpack: B_RadioBag_01_eaf_F {
        displayname = "Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };