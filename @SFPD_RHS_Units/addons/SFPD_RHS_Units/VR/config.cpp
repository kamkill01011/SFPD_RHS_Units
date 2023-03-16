
class CfgPatches {
    class SFPD_RHS_Units_VR  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
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
			"ace_compat_rhs_gref3",
			"SFPD_ZEUS_LAG"
		};
    };
};

class CfgVehicles {
	class B_Soldier_base_F;
	class B_Soldier_VR_F: B_Soldier_base_F {
		faction = "SFPD_BLUFOR_Faction";
		scopeCurator = 2;
	};
	class O_Soldier_base_F;
	class O_Soldier_VR_F: O_Soldier_base_F {
		faction = "SFPD_OPFOR_Faction";
		scopeCurator = 2;
	};
	class I_Soldier_base_F;
	class I_Soldier_VR_F: I_Soldier_base_F {
		faction = "SFPD_AAF_Faction";
		scopeCurator = 2;
	};
	class C_man_1;
	class C_Soldier_VR_F: C_man_1 {
		faction = "BLU_F";
		scopeCurator = 2;
	};
};

