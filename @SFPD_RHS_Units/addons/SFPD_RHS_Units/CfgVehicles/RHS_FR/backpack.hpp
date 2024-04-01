	//Backpack
	class SFPD_RHS_FR_Leader_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Leader Radio";
        scope = 1;
        class TransportItems {
			SFPD_BACKPACK_LEADER(SmokeShellBlue)
        };
    };
	
	class SFPD_RHS_FR_Medic_Backpack: OFrP_Bag_Felin_45L {
        displayname = "Medic Backpack";
        scope = 1;
        class TransportItems {
            SFPD_BACKPACK_MEDIC
        };
    };
	
	class SFPD_RHS_FR_Grenadier_Backpack: OFrP_Bag_Felin_45L {
        displayname = "Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_GRENADIER
        };
    };
	
	class SFPD_RHS_FR_LMG_Backpack: OFrP_Bag_Felin_45L {
        displayname = "LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,1)
            TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_RHS_FR_SF_Grenadier_Backpack: OFrP_Bag_Felin_45L {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(rhs_mag_30Rnd_556x45_M855A1_PMAG)
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
        };
    };
	
	class SFPD_RHS_FR_SF_LMG_Backpack: OFrP_Bag_Felin_45L {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,2)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
        };
    };
	
	class SFPD_RHS_FR_SF_Backpack: OFrP_Bag_Felin_45L {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			SFPD_BACKPACK_SF(rhs_mag_30Rnd_556x45_M855A1_PMAG)
        };
    };
	
	class SFPD_RHS_FR_Spotter_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Spotter Radio";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(Laserdesignator,1)
			TRANSPORT_ITEMS(Laserbatteries,1)
		};
    };
	
	class SFPD_RHS_FR_AA_Backpack: B_Carryall_khk {
        displayname = "AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_fim92_mag,3)
        };
    };
