	//Desert
	class SFPD_MX_Default: arifle_MX_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_snd)
        };
    };
	
	class SFPD_MX_GL_Default: arifle_MX_GL_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
    };
	
	class SFPD_LMG_03_Default: LMG_03_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_blk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
    };
	
	class SFPD_DESERT_SIG_Default: srifle_DMR_03_tan_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_snd)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_snd)
        };
    };
	
	class SFPD_DESERT_Noreen_Default: srifle_DMR_02_sniper_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_snd)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_snd)
        };
    };
	
	class SFPD_MMG_Default: MMG_02_black_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_blk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_blk)
        };
    };
	
	class SFPD_DESERT_SIG_Silenced: srifle_DMR_03_tan_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_snd)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_B_snd_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_snd)
        };
    };
	
	class SFPD_DESERT_P99_Silenced: hgun_P07_blk_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_L)
        };
	};
	
	class SFPD_MXC_Silenced: arifle_MXC_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_H)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
	};
	
	class SFPD_CAMO_M200: srifle_LRR_camo_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_LRPS)
        };
    };
	
	//Woodland
	class SFPD_WOODLAND_MX: arifle_MX_khk_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
	};
	
	class SFPD_WOODLAND_MX_GL: arifle_MX_GL_khk_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
	};
	
	class SFPD_WOODLAND_SIG: srifle_DMR_03_woodland_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_khk)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_WOODLAND_Noreen: srifle_DMR_02_camo_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_khk)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_WOODLAND_SIG_Silenced: srifle_DMR_03_woodland_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_khk)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_B_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_WOODLAND_P99_Silenced: hgun_P07_blk_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_L)
        };
	};
	
	class SFPD_WOODLAND_MXC_Silenced: arifle_MXC_khk_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_khk_F)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_H_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
	};
	
	/*class SFPD_WOODLAND_MX_Silenced: arifle_MX_khk_F {
		scope = 2;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Hamr_khk_F";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_khk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
        };
	};
	
	class SFPD_WOODLAND_MX_GL_Silenced: arifle_MX_GL_khk_F {
		scope = 2;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Hamr_khk_F";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_khk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
        };
	};*/
	
	//Jungle
	class SFPD_JUNGLE_SPAR_16_Default: arifle_SPAR_01_khk_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_JUNGLE_SPAR_16_GL_Default: arifle_SPAR_01_GL_khk_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
    };
	
	class SFPD_JUNGLE_SPAR_16S_Default: arifle_SPAR_02_khk_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_JUNGLE_SPAR_17_Default: arifle_SPAR_03_khk_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_khk)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_JUNGLE_Noreen_Default: srifle_DMR_02_camo_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_khk)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_BLACK_P90_Default: SMG_03C_TR_black {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Yorris)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
    };
	
	class SFPD_JUNGLE_SPAR_17_Silenced: arifle_SPAR_03_khk_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_AMS_khk)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_B_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
    };
	
	class SFPD_JUNGLE_P99_Silenced: hgun_P07_blk_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_L)
        };
	};
	
	class SFPD_JUNGLE_SPAR_16_Silenced: arifle_SPAR_01_khk_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_khk_F)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_m_khk_F)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
			SFPD_WEAPON_UNDER_CFG(bipod_01_F_khk)
        };
	};
	
	class SFPD_JUNGLE_M200: srifle_LRR_tna_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_LRPS_tna_F)
        };
    };
	
	//Universal
	class SFPD_BLACK_AK12_Silenced: arifle_AK12_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_blk_F)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_B)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
	};
	
	class SFPD_BLACK_AK12_GL_Silenced: arifle_AK12_GL_F {
		scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_blk_F)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_B)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
	};
	
	/*class SFPD_BLACK_MX_Silenced: arifle_MX_Black_F {
		scope = 2;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_H";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
        };
	};
	
	class SFPD_BLACK_MX_GL_Silenced: arifle_MX_GL_Black_F {
		scope = 2;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_H";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
        };
	};*/
	
	class SFPD_LMG_03_Silenced: LMG_03_F {
        scope = 2;
        class LinkedItems {
			SFPD_WEAPON_OPTIC_CFG(optic_Holosight_blk_F)
			SFPD_WEAPON_MUZZLE_CFG(muzzle_snds_M)
			SFPD_WEAPON_ACC_CFG(acc_pointer_IR)
        };
    };
	
	/*class SFPD_JUNGLE_MX_Silenced: arifle_MX_khk_F {
		scope = 2;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Hamr_khk_F";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_khk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
        };
	};
	
	class SFPD_JUNGLE_MX_GL_Silenced: arifle_MX_GL_khk_F {
		scope = 2;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Hamr_khk_F";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_khk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
        };
	};*/