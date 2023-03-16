
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
        units[] = {
			"SFPD_CSW_BOX_M2_low_shield",
			"SFPD_CSW_BOX_M2_hight_shield",
			"SFPD_CSW_BOX_M2_low",
			"SFPD_CSW_BOX_M2_hight",
			"SFPD_CSW_BOX_Mk6_mortar",
			"SFPD_CSW_BOX_Mk19",
			"SFPD_CSW_BOX_TOW",
			"SFPD_CSW_BOX_KORD_low",
			"SFPD_CSW_BOX_KORD_hight",
			"SFPD_CSW_BOX_AGS_30",
			"SFPD_CSW_BOX_Metis",
			"SFPD_CSW_BOX_Kornet_hight",
			"SFPD_CSW_BOX_DShK_low",
			"SFPD_CSW_BOX_DShK_hight",
			"SFPD_CSW_BOX_SPG_9"
		};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Functions_F",
			"rhs_c_weapons",
			"a3_characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhsusf_c_troops",
			"rhsusf_c_m1117",
			"rhsusf_c_statics",
			"rhsgref_c_air",
			"rhsgref_c_troops",
			"rhsgref_c_vehicles_ret",
			"rhsgref_main",
			"rhsgref_c_a2port_armor",
			"tfar_core",
			"tfar_backpacks",
			"ace_common",
			"ace_csw",
			"ace_compat_rhs_usf3",
			"ace_compat_rhs_afrf3",
			"ace_compat_rhs_gref3"
		};
    };
};



class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ace_csw_deploy {
				class ACE_CSW_M3_toHight {
					displayName = "change low tripod to HIGHT tripod";
					condition = "(secondaryWeapon _target == 'ace_csw_m3CarryTripodLow')";
					statement = "_target removeWeapon 'ace_csw_m3CarryTripodLow';_target addWeapon 'ace_csw_m3CarryTripod';";
				};
				class ACE_CSW_M3_toLow {
					displayName = "change hight tripod to LOW tripod";
					condition = "(secondaryWeapon _target == 'ace_csw_m3CarryTripod')";
					statement = "_target removeWeapon 'ace_csw_m3CarryTripod';_target addWeapon 'ace_csw_m3CarryTripodLow';";
				};
				class ACE_CSW_KORD_toHight {
					displayName = "change low tripod to HIGHT tripod";
					condition = "(secondaryWeapon _target == 'ace_csw_kordCarryTripodLow')";
					statement = "_target removeWeapon 'ace_csw_kordCarryTripodLow';_target addWeapon 'ace_csw_kordCarryTripod';";
				};
				class ACE_CSW_KORD_toLow {
					displayName = "change hight tripod to LOW tripod";
					condition = "(secondaryWeapon _target == 'ace_csw_kordCarryTripod')";
					statement = "_target removeWeapon 'ace_csw_kordCarryTripod';_target addWeapon 'ace_csw_kordCarryTripodLow';";
				};
			};
		};
	};
	
	
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
    class rhs_DSHKM_base: StaticMGWeapon {
        class ACE_CSW {
			ammoLoadTime = 10;
			ammoUnloadTime = 8;
			desiredAmmo = 100;
			disassembleTurret = "ace_csw_kordTripod";
			disassembleWeapon = "ace_compat_rhs_gref3_dshkm_carry";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'otocvez'";
			proxyWeapon = "ace_compat_rhs_gref3_rhs_weap_DSHKM";
        };
    };
    class rhs_DSHkM_Mini_TriPod_base: rhs_DSHKM_base {
        class ACE_CSW: ACE_CSW {
			ammoLoadTime = 10;
			ammoUnloadTime = 8;
			desiredAmmo = 100;
			disassembleTurret = "ace_csw_kordTripodLow";
			disassembleWeapon = "ace_compat_rhs_gref3_dshkm_carry";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'otocvez'";
			proxyWeapon = "ace_compat_rhs_gref3_rhs_weap_DSHKM";
        };
    };
	
	
	class B_supplyCrate_F;
	class SFPD_CSW_BOX_M2_low_shield: B_supplyCrate_F {
        displayname = "[SFPD CSW] M2 low (shield)";
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
	class SFPD_CSW_BOX_M2_hight_shield: B_supplyCrate_F {
        displayname = "[SFPD CSW] M2 hight (shield)";
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
        displayname = "[SFPD CSW] M2 low";
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
        displayname = "[SFPD RHS CSW] M2 hight";
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
        displayname = "[SFPD CSW] Mk6 mortar";
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
        displayname = "[SFPD CSW] Mk19";
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
        displayname = "[SFPD CSW] TOW";
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
        displayname = "[SFPD CSW] KORD low";
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
        displayname = "[SFPD CSW] KORD hight";
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
        displayname = "[SFPD CSW] AGS-30";
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
        displayname = "[SFPD CSW] Metis low";
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
        displayname = "[SFPD CSW] Kornet hight";
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
        displayname = "[SFPD CSW] DShK low";
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
        displayname = "[SFPD CSW] DShK hight";
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
        displayname = "[SFPD CSW] SPG-9";
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
