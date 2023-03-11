	class SFPD_RHS_SAV_WOODLAND_Leader_Backpack: TFAR_anprc155 {
        displayname = "Woodland Leader Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(SmokeShellGreen,3)
        };
    };
	
	class SFPD_RHS_SAV_WOODLAND_Medic_Backpack: B_Kitbag_rgr {
        displayname = "Woodland Medic Backpack";
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
	
	class SFPD_RHS_SAV_WOODLAND_Grenadier_Backpack: B_LegStrapBag_olive_F {
        displayname = "Woodland Grenadier Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,8)
        };
    };
	
	class SFPD_RHS_SAV_WOODLAND_AT_Backpack: B_Kitbag_rgr {
        displayname = "Woodland AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_weap_rpg75,2)
        };
    };
	
	class SFPD_RHS_SAV_WOODLAND_LMG_Backpack: B_Kitbag_rgr {
        displayname = "Woodland LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,3)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_RHS_SAV_WOODLAND_AA_Backpack: B_Kitbag_rgr {
        displayname = "Woodland AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_9k38_rocket,3)
        };
    };