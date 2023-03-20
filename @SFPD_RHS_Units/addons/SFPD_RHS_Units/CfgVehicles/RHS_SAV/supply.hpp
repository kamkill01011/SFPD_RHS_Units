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
		SFPD_SUPPLY_CARGO(rhssaf_30rnd_556x45_EPR_G36,40,SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,5,rhssaf_mag_15Rnd_9x19_FMJ,rhsusf_20Rnd_762x51_m80_Mag,rhs_5Rnd_338lapua_t5000,rhs_100Rnd_762x54mmR_green,,SFPD_RHS_G36KV,SFPD_RHS_MINIMI_PARA,rhs_weap_rpg75,rhsusf_acc_M952V,B_Kitbag_rgr,rhsgref_hidf_alicepack)
    };