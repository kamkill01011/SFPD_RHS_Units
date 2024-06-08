	class SFPD_RHS_HK416_Default: rhs_weap_hk416d10 {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_blk)
        };
    };
	
	class SFPD_RHS_HK416_GL_Default: rhs_weap_hk416d10_m320 {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
        };
    };
	
	class SFPD_RHS_M249_Default_FR: rhs_weap_m249_pip_L {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
			SFPD_WEAPON_UNDER_CFG(rhsusf_acc_saw_bipod)
        };
    };
	
	class SFPD_RHS_HK417_Default_FR: arifle_SPAR_03_blk_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_blk)
        };
    };
	
	class SFPD_RHS_M240_Default_FR: rhs_weap_m240B {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_M952V)
        };
    };
	
	class SFPD_RHS_HK416_Silenced: rhs_weap_hk416d10 {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_MUZZLE_CFG(rhsusf_acc_nt4_black)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_anpeq16a)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_blk)
        };
    };
	
	class SFPD_RHS_HK416_GL_Silenced: rhs_weap_hk416d10_m320 {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_MUZZLE_CFG(rhsusf_acc_nt4_black)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_anpeq16a)
        };
    };
	
	class SFPD_RHS_M249_Silenced_FR: rhs_weap_m249_pip_L {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(rhsusf_acc_eotech_xps3)
			SFPD_WEAPON_MUZZLE_CFG(rhsusf_acc_nt4_black)
			SFPD_WEAPON_ACC_CFG(rhsusf_acc_anpeq16a)
			SFPD_WEAPON_UNDER_CFG(rhsusf_acc_saw_bipod)
        };
    };