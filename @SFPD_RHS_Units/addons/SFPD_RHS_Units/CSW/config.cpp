
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
};
