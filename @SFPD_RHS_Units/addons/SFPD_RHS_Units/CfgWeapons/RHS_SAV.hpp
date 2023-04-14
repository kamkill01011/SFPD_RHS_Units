	class SFPD_RHS_G36KV: rhs_weap_g36kv {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
        };
    };
	
	class SFPD_RHS_G36KV_GL: rhs_weap_g36kv_ag36 {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
        };
    };
	
	class SFPD_RHS_MINIMI_PARA: rhs_weap_minimi_para_railed {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
			SFPD_WEAPON_UNDER_CFG(rhsusf_acc_saw_bipod)
        };
    };
	
	class SFPD_RHS_M14_RAIL: rhs_weap_m14_rail_wd {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_khk)
			SFPD_WEAPON_UNDER_CFG(rhsusf_acc_m14_bipod)
        };
    };