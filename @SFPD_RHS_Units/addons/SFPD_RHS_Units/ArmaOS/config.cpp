
class CfgPatches {
    class SFPD_RHS_Units_ArmaOS  {
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
			"ace_compat_rhs_gref3"
		};
    };
};

class CfgFunctions {
	class ArmaOS {
		tag = "ArmaOS";
		class functions {
			file = "SFPD_RHS_Units\ArmaOS\functions";
			class installArmaOs {};
			class processInput {};
			class displayArmaOS {};
		};
	};
};


#include "dialog\ArmaOSDialog.h"
