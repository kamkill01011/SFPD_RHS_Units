	class SFPD_AAF_Grenadier_Backpack: B_LegStrapBag_olive_F {
        displayname = "Grenadier Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,4)
        };
    };
	
	class SFPD_AAF_AT_Backpack: B_AssaultPack_dgtl {
        displayname = "AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(MRAWS_HEAT_F,3)
        };
    };
	
	class SFPD_AAF_LMG_Backpack: B_AssaultPack_dgtl {
        displayname = "LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(200Rnd_65x39_cased_Box_Tracer,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_AAF_Leader_Backpack: TFAR_anprc155 {
        displayname = "Leader Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(SmokeShellGreen,3)
        };
    };
	
	class SFPD_AAF_Medic_Backpack: B_AssaultPack_dgtl {
        displayname = "Medic Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,10)
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_splint,12)
        };
    };
	
	class SFPD_AAF_JTAC_Backpack: TFAR_anprc155 {
        displayname = "JTAC Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(1Rnd_SmokeRed_Grenade_shell,3)
            TRANSPORT_ITEMS(1Rnd_SmokeGreen_Grenade_shell,3)
            TRANSPORT_ITEMS(1Rnd_SmokeBlue_Grenade_shell,3)
			TRANSPORT_ITEMS(I_IR_Grenade,1)
			TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };
	
	class SFPD_AAF_TITAN_AT_Backpack: B_TacticalPack_oli {
        displayname = "AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AT,2)
        };
    };
	
	class SFPD_AAF_TITAN_AA_Backpack: B_TacticalPack_oli {
        displayname = "AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Titan_AA,2)
        };
    };
	
	class SFPD_AAF_Spotter_Backpack: TFAR_anprc155 {
        displayname = "Spotter Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
        };
    };