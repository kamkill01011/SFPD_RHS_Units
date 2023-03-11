	//Backpack
	class SFPD_RHS_BLUFOR_Leader_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Leader Radio";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(SmokeShellBlue,3)
        };
    };
	
	class SFPD_RHS_BLUFOR_Medic_Backpack: rhsusf_falconii_coy {
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
	
	class SFPD_RHS_BLUFOR_Grenadier_Backpack: B_LegStrapBag_coyote_F {
        displayname = "Grenadier Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,7)
        };
    };
	
	class SFPD_RHS_BLUFOR_LMG_Backpack: rhsusf_falconii_coy {
        displayname = "LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,1)
            TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_RHS_BLUFOR_AT_Backpack: B_Carryall_khk {
        displayname = "AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_maaws_HEAT,3)
        };
    };
	
	class SFPD_RHS_BLUFOR_JTAC_Backpack: TFAR_rt1523g_bwmod {
        displayname = "JTAC Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(1Rnd_SmokeRed_Grenade_shell,3)
            TRANSPORT_ITEMS(1Rnd_SmokeGreen_Grenade_shell,3)
            TRANSPORT_ITEMS(1Rnd_SmokeBlue_Grenade_shell,3)
			TRANSPORT_ITEMS(B_IR_Grenade,1)
        };
    };
	
	class SFPD_RHS_BLUFOR_SF_Grenadier_Backpack: rhsusf_falconii_coy {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_SF_LMG_Backpack: rhsusf_falconii_coy {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,2)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
        };
    };
	
	class SFPD_RHS_BLUFOR_SF_Backpack: rhsusf_falconii_coy {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_Spotter_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Spotter Radio";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(Laserdesignator, 1)
			TRANSPORT_ITEMS(Laserbatteries, 1)
		};
    };
	
	class SFPD_RHS_BLUFOR_AA_Backpack: B_Carryall_khk {
        displayname = "AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_fim92_mag,3)
        };
    };
	
	//Winter
	class SFPD_RHS_BLUFOR_WINTER_Medic_Backpack: rhsusf_assault_eagleaiii_ucp {
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
	
	class SFPD_RHS_BLUFOR_WINTER_Grenadier_Backpack: B_LegStrapBag_black_F {
        displayname = "Grenadier Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,7)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_LMG_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,1)
            TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_AT_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_maaws_HEAT,3)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Grenadier_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_SF_LMG_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,2)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,1)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_AA_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_fim92_mag,2)
        };
    };