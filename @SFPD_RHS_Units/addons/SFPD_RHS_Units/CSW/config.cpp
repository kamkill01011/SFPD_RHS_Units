
#define TRANSPORT_ITEMS(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        name = #CLASS_NAME; \
        count = AMOUNT; \
    };
	
#define TRANSPORT_MAGAZINES(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        magazine = #CLASS_NAME; \
        count = AMOUNT; \
    };
	
#define TRANSPORT_WEAPONS(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        weapon = #CLASS_NAME; \
        count = AMOUNT; \
    };
	
#define TRANSPORT_BACKPACKS(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        backpack = #CLASS_NAME; \
        count = AMOUNT; \
    };


class CfgPatches {
    class SFPD_RHS_Units_CSW  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Functions_F",
			"rhs_c_weapons"
		};
    };
};



class CfgVehicles {
	class StaticMGWeapon;
	class rhs_nsv_tripod_base: StaticMGWeapon {
        class ACE_CSW {
			ammoLoadTime = 10;
			ammoUnloadTime = 8;
			desiredAmmo = 100;
			disassembleTurret = "ace_csw_kordTripodLow";
			disassembleWeapon = "ace_compat_rhs_afrf3_nsv_carry";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'magazine'";
			proxyWeapon = "ace_compat_rhs_afrf3_rhs_weap_nsvt_effects";
        };
    };
    class RHS_KORD_Base: rhs_nsv_tripod_base {
        class ACE_CSW: ACE_CSW {
			ammoLoadTime = 10;
			ammoUnloadTime = 8;
			desiredAmmo = 100;
			disassembleTurret = "ace_csw_kordTripodLow";
			disassembleWeapon = "ace_compat_rhs_afrf3_kord_carry";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'magazine'";
			proxyWeapon = "ace_compat_rhs_afrf3_rhs_weap_KORD";
        };
    };
    class RHS_KORD_high_base: RHS_KORD_Base {
        class ACE_CSW: ACE_CSW {
			ammoLoadTime = 10;
			ammoUnloadTime = 8;
			desiredAmmo = 100;
			disassembleTurret = "ace_csw_kordTripod";
			disassembleWeapon = "ace_compat_rhs_afrf3_kord_carry";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'magazine'";
			proxyWeapon = "ace_compat_rhs_afrf3_rhs_weap_KORD";
        };
    };
	
	
	class B_supplyCrate_F;
	class SFPD_CSW_BOX_M2_low: B_supplyCrate_F {
        displayname = "[SFPD] M2 low";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_100Rnd_127x99_mag_red,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_m3CarryTripodLow,1)
            TRANSPORT_WEAPONS(ace_csw_staticM2ShieldCarry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_M2_hight: B_supplyCrate_F {
        displayname = "[SFPD] M2 hight";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_100Rnd_127x99_mag_red,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_m3CarryTripod,1)
            TRANSPORT_WEAPONS(ace_csw_staticM2ShieldCarry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_M2_low: B_supplyCrate_F {
        displayname = "[SFPD] M2 low";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_100Rnd_127x99_mag_red,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_m3CarryTripodLow,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_usf3_m2_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_M2_hight: B_supplyCrate_F {
        displayname = "[SFPD RHS] M2 hight";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_100Rnd_127x99_mag_red,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_m3CarryTripod,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_usf3_m2_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_Mk6_mortar: B_supplyCrate_F {
        displayname = "[SFPD] Mk6 mortar";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ACE_1Rnd_82mm_Mo_HE,20)
            TRANSPORT_MAGAZINES(ACE_1Rnd_82mm_Mo_Smoke,10)
            TRANSPORT_MAGAZINES(ACE_1Rnd_82mm_Mo_Illum,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_carryMortarBaseplate,1)
            TRANSPORT_WEAPONS(ace_csw_staticMortarCarry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_Mk19: B_supplyCrate_F {
        displayname = "[SFPD] Mk19";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_compat_rhs_usf3_48Rnd_40mm_MK19_M430A1,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_m3CarryTripodLow,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_usf3_mk19_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_TOW: B_supplyCrate_F {
        displayname = "[SFPD] TOW";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_compat_rhs_usf3_mag_TOW2A,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_m220CarryTripod,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_usf3_tow_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_KORD_low: B_supplyCrate_F {
        displayname = "[SFPD] KORD low";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_50Rnd_127x108_mag,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_kordCarryTripodLow,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_afrf3_kord_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_KORD_hight: B_supplyCrate_F {
        displayname = "[SFPD] KORD hight";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_50Rnd_127x108_mag,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_kordCarryTripod,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_afrf3_kord_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_AGS_30: B_supplyCrate_F {
        displayname = "[SFPD] AGS-30";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_compat_rhs_afrf3_mag_VOG30_30,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_sag30CarryTripod,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_afrf3_ags30_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_Metis: B_supplyCrate_F {
        displayname = "[SFPD] Metis low";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_compat_rhs_afrf3_mag_9M131M,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_compat_rhs_afrf3_metis_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_Kornet_hight: B_supplyCrate_F {
        displayname = "[SFPD] Kornet hight";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_compat_rhs_afrf3_mag_9m133,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_compat_rhs_afrf3_kornet_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_DShK_low: B_supplyCrate_F {
        displayname = "[SFPD] DShK low";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_50Rnd_127x108_mag,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_kordCarryTripodLow,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_gref3_dshkm_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_DShK_hight: B_supplyCrate_F {
        displayname = "[SFPD] DShK hight";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_csw_50Rnd_127x108_mag,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_kordCarryTripod,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_gref3_dshkm_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	class SFPD_CSW_BOX_SPG_9: B_supplyCrate_F {
        displayname = "[SFPD] SPG-9";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(ace_compat_rhs_afrf3_mag_PG9V,20)
            TRANSPORT_MAGAZINES(ace_compat_rhs_afrf3_mag_OG9V,20)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ace_csw_spg9CarryTripod,1)
            TRANSPORT_WEAPONS(ace_compat_rhs_afrf3_spg9_carry,1)
		};
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_oli,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	
};
