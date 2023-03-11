
class CfgPatches {
    class SFPD_RHS_Units_damage  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhs_c_weapons",
			"rhsusf_c_troops",
			"rhsusf_c_m1117",
			"rhsusf_c_statics",
			"rhsusf_c_weapons",
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
	
	class Plane_Base_F;
	class Plane_CAS_01_base_F: Plane_Base_F {
		armor = 160;//base 80
	};
	class Plane_CAS_02_base_F: Plane_Base_F {
		armor = 160;//base 80
	};
	
	class Plane_Fighter_01_Base_F: Plane_Base_F {
		armor = 240;//base 60
	};
	class Plane_Fighter_02_Base_F: Plane_Base_F {
		armor = 260;//base 65
	};
	class Plane_Fighter_04_Base_F: Plane_Base_F {
		armor = 120;//base 60
	};
	
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F {
		armor = 1000;//base 400
	};
	class VTOL_02_base_F: VTOL_Base_F {
		armor = 100;//base 100
	};
};
