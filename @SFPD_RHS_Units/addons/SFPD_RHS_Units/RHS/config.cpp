
class CfgPatches {
    class SFPD_RHS_Units_RHS_Custom  {
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
			"RHS_US_A2_AirImport",
			"rhsusf_c_airweapons",
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
	class SFPD_RHS_Units_RHS {
		tag = "RHS";
		class functions {
			file = "SFPD_RHS_Units\RHS\functions";
			class ah64_gunnerUI_KAM {};
		};
	};
	class SFPD_RHS_Units_RHS_Custom_Init {
		class SFPD_RHS_Units_RHS_Custom_Init {
			class Init {
				file = "SFPD_RHS_Units\RHS\functions\init.sqf";
				postInit = 1;
			};
		};
	};
};

class RscInGameUI {
	class RscUnitInfo;
	class RHS_RscOptics_Heli_Attack_01_gunner: RscUnitInfo {
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_ah64_gunnerUI_KAM";
	};
};

