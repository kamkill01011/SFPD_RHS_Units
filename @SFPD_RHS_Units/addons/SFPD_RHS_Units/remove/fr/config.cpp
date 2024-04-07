
#define REMOVE_ZEUS(CLASS,PARENT) \
	class CLASS : PARENT { \
		scopeCurator = 0; \
	};



class CfgPatches {
    class SFPD_RHS_remove_rf  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"A3_Supplies_F_Heli_Slingload",
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
			"ace_rearm",
			"ace_compat_rhs_usf3",
			"ace_compat_rhs_afrf3",
			"ace_compat_rhs_gref3"
		};
    };
};

class CfgVehicles {
	class OFrP_P4_Base;
	class OFrP_P4_ConvEx1_base;
	class OFrP_P4_ConvEx2_base;
	class OFrP_P4_ConvEx3_base;
	class OFrP_P4_AANF1_base;
	class OFrP_P4_M2_base;
	REMOVE_ZEUS(OFrP_P4_FO,OFrP_P4_Base)
	REMOVE_ZEUS(OFrP_P4_ConvEx1_FO,OFrP_P4_ConvEx1_base)
	REMOVE_ZEUS(OFrP_P4_ConvEx2_FO,OFrP_P4_ConvEx2_base)
	REMOVE_ZEUS(OFrP_P4_ConvEx3_FO,OFrP_P4_ConvEx3_base)
	REMOVE_ZEUS(OFrP_P4_AANF1_FO,OFrP_P4_AANF1_base)
	REMOVE_ZEUS(OFrP_P4_M2_FO,OFrP_P4_M2_base)
};