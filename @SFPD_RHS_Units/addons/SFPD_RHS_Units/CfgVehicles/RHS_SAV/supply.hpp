	class SFPD_RHS_SAV_NBC_suits: Land_PlasticCase_01_large_black_CBRN_F {
        displayname = "[SFPD RHS] SAV NBC Suits";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(U_C_CBRN_Suit_01_White_F,10)
		};
		class TransportBackpacks {
			TRANSPORT_BACKPACKS(B_AssaultPack_rgr,10)
		};
    };
	
	class SFPD_RHS_SAV_NBC_masks: Land_PlasticCase_01_medium_black_CBRN_F {
        displayname = "[SFPD RHS] SAV NBC Masks";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(G_RegulatorMask_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_SAV_NBC_drugs: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD RHS] SAV NBC Drugs";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_adenosine,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_SAV_NBC_detector: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD RHS] SAV NBC Detector";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ChemicalDetector_01_watch_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_SAV_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD RHS] SAV Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhssaf_30rnd_556x45_EPR_G36,50)
            TRANSPORT_MAGAZINES(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,5)
            TRANSPORT_MAGAZINES(rhssaf_mag_15Rnd_9x19_FMJ,10)
            TRANSPORT_MAGAZINES(rhsusf_20Rnd_762x51_m80_Mag,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_rpg75,4)
            TRANSPORT_WEAPONS(SFPD_RHS_G36KV,2)
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
            TRANSPORT_ITEMS(ACE_splint,20)
			TRANSPORT_ITEMS(ACE_SpareBarrel_Item,2)
            TRANSPORT_ITEMS(ACE_artilleryTable,1)
		};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Kitbag_rgr,4)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };