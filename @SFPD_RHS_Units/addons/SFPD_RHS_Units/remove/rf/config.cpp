
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
	class ThingX;
	class Slingload_01_Base_F;
	class Pod_Heli_Transport_04_base_F;
	class Launcher_Base_F;
	class Item_Base_F;
	class UGV_02_Science_backpack_base_F;
	class UGV_02_Demining_backpack_base_F;
	class UAV_06_medical_backpack_base_F;
	class UAV_06_backpack_base_F;
	class Weapon_Bag_Base;
	class Wall_F;
	class B_soldier_UAV_F;
	class B_support_AMort_F;
	class B_soldier_LAT2_F;
	class B_Soldier_GL_F;
	class B_Soldier_F;
	class B_Soldier_SL_F;
	class B_soldier_AR_F;
	class B_medic_F;
	class B_Sharpshooter_F;
	class I_support_AMort_F;
	class I_E_Support_Mort_F;
	class O_soldier_UAV_F;
	class O_support_AMort_F;
	class O_Soldier_SL_F;
	class O_soldier_M_F;
	class O_Soldier_HAT_F;
	class O_Soldier_GL_F;
	class O_Soldier_F;
	class O_Soldier_AR_F;
	class O_A_soldier_F;
	class O_medic_F;
	class C_man_1;
	class I_CommandoMortar_RF;
	class Pod_Heli_Transport_04_crewed_base_F;
	class Pickup_covered_base_rf;
	class Pickup_comms_base_rf;
	class Pickup_01_mmg_base_rf;
	class Pickup_01_aat_base_rf;
	class Pickup_01_base_rf;
	class UAV_RC40_Base_Sensor_RF;
	class UAV_RC40_Base_SmokeWhite_RF;
	class UAV_RC40_Base_SmokeRed_RF;
	class UAV_RC40_Base_SmokeOrange_RF;
	class UAV_RC40_Base_SmokeGreen_RF;
	class UAV_RC40_Base_SmokeBlue_RF;
	class UAV_RC40_Base_HE_RF;
	class Heli_EC_04_military_base_RF;
	class Heli_EC_03_base_RF;
	class Heli_EC_02_base_RF;
	class Heli_EC_01A_military_base_RF;
	class Heli_light_03_unarmed_base_F;
	class Heli_light_03_dynamicLoadout_base_F;
	REMOVE_ZEUS(Slingload_MortarContainer_Base_RF,ThingX)
	REMOVE_ZEUS(Slingload_MortarContainerLid_Base_RF,Slingload_MortarContainer_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainerLid_Tan_RF,Slingload_MortarContainerLid_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainerLid_Olive_RF,Slingload_MortarContainerLid_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainerLid_nato_RF,Slingload_MortarContainerLid_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainerLid_AAF_RF,Slingload_MortarContainerLid_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainer_Tan_RF,Slingload_MortarContainer_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainer_Olive_RF,Slingload_MortarContainer_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainer_nato_RF,Slingload_MortarContainer_Base_RF)
	REMOVE_ZEUS(Slingload_MortarContainer_AAF_RF,Slingload_MortarContainer_Base_RF)
	REMOVE_ZEUS(B_Slingload_01_Repair_F,Slingload_01_Base_F)
	REMOVE_ZEUS(B_Slingload_01_Medevac_F,Slingload_01_Base_F)
	REMOVE_ZEUS(B_Slingload_01_Fuel_F,Slingload_01_Base_F)
	REMOVE_ZEUS(B_Slingload_01_Cargo_F,Slingload_01_Base_F)
	REMOVE_ZEUS(B_Slingload_01_Ammo_F,Slingload_01_Base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_repair_F,Pod_Heli_Transport_04_base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_repair_black_F,Land_Pod_Heli_Transport_04_repair_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_fuel_F,Pod_Heli_Transport_04_base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_fuel_black_F,Land_Pod_Heli_Transport_04_fuel_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_box_F,Pod_Heli_Transport_04_base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_box_black_F,Land_Pod_Heli_Transport_04_box_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_ammo_F,Pod_Heli_Transport_04_base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_ammo_black_F,Land_Pod_Heli_Transport_04_ammo_F)
	REMOVE_ZEUS(Weapon_launch_launch_B_Titan_short_F,Launcher_Base_F)
	REMOVE_ZEUS(Weapon_launch_O_Titan_short_F,Weapon_launch_launch_B_Titan_short_F)
	REMOVE_ZEUS(Weapon_launch_I_Titan_short_F,Weapon_launch_launch_B_Titan_short_F)
	REMOVE_ZEUS(Weapon_launch_B_Titan_F,Launcher_Base_F)
	REMOVE_ZEUS(Weapon_launch_O_Titan_F,Weapon_launch_B_Titan_F)
	REMOVE_ZEUS(Weapon_launch_I_Titan_F,Weapon_launch_B_Titan_F)
	REMOVE_ZEUS(Item_I_E_UavTerminal,Item_Base_F)
	REMOVE_ZEUS(Item_B_UavTerminal,Item_Base_F)
	REMOVE_ZEUS(Item_O_UavTerminal,Item_B_UavTerminal)
	REMOVE_ZEUS(Item_I_UavTerminal,Item_B_UavTerminal)
	REMOVE_ZEUS(O_UGV_02_Science_backpack_F,UGV_02_Science_backpack_base_F)
	REMOVE_ZEUS(I_UGV_02_Science_backpack_F,UGV_02_Science_backpack_base_F)
	REMOVE_ZEUS(I_E_UGV_02_Science_backpack_F,UGV_02_Science_backpack_base_F)
	REMOVE_ZEUS(B_UGV_02_Science_backpack_F,UGV_02_Science_backpack_base_F)
	REMOVE_ZEUS(O_UGV_02_Demining_backpack_F,UGV_02_Demining_backpack_base_F)
	REMOVE_ZEUS(I_UGV_02_Demining_backpack_F,UGV_02_Demining_backpack_base_F)
	REMOVE_ZEUS(I_E_UGV_02_Demining_backpack_F,UGV_02_Demining_backpack_base_F)
	REMOVE_ZEUS(B_UGV_02_Demining_backpack_F,UGV_02_Demining_backpack_base_F)
	REMOVE_ZEUS(O_UAV_06_medical_backpack_F,UAV_06_medical_backpack_base_F)
	REMOVE_ZEUS(I_UAV_06_medical_backpack_F,UAV_06_medical_backpack_base_F)
	REMOVE_ZEUS(I_E_UAV_06_medical_backpack_F,UAV_06_medical_backpack_base_F)
	REMOVE_ZEUS(B_UAV_06_medical_backpack_F,UAV_06_medical_backpack_base_F)
	REMOVE_ZEUS(O_UAV_06_backpack_F,UAV_06_backpack_base_F)
	REMOVE_ZEUS(I_UAV_06_backpack_F,UAV_06_backpack_base_F)
	REMOVE_ZEUS(I_E_UAV_06_backpack_F,UAV_06_backpack_base_F)
	REMOVE_ZEUS(B_UAV_06_backpack_F,UAV_06_backpack_base_F)
	REMOVE_ZEUS(O_UAV_02_backpack_lxWS,Weapon_Bag_Base)
	REMOVE_ZEUS(I_UAV_02_backpack_lxWS,Weapon_Bag_Base)
	REMOVE_ZEUS(I_E_UAV_01_backpack_F,Weapon_Bag_Base)
	REMOVE_ZEUS(B_UAV_02_backpack_lxWS,Weapon_Bag_Base)
	REMOVE_ZEUS(B_UAV_01_backpack_F,Weapon_Bag_Base)
	REMOVE_ZEUS(O_UAV_01_backpack_F,B_UAV_01_backpack_F)
	REMOVE_ZEUS(I_UAV_01_backpack_F,B_UAV_01_backpack_F)
	REMOVE_ZEUS(B_CommandoMortar_weapon_RF,Weapon_Bag_Base)
	REMOVE_ZEUS(O_CommandoMortar_weapon_RF,B_CommandoMortar_weapon_RF)
	REMOVE_ZEUS(I_CommandoMortar_weapon_RF,B_CommandoMortar_weapon_RF)
	REMOVE_ZEUS(I_E_CommandoMortar_weapon_RF,I_CommandoMortar_weapon_RF)
	REMOVE_ZEUS(B_shield_lxWS,Wall_F)
	REMOVE_ZEUS(I_shield_lxWS,B_shield_lxWS)
	REMOVE_ZEUS(O_shield_lxWS,I_shield_lxWS)
	REMOVE_ZEUS(O_shield_GHEX_lxWS,O_shield_lxWS)
	REMOVE_ZEUS(B_QRF_soldier_UAV_RF,B_soldier_UAV_F)
	REMOVE_ZEUS(B_support_CMort_RF,B_support_AMort_F)
	REMOVE_ZEUS(B_QRF_soldier_LAT2_RF,B_soldier_LAT2_F)
	REMOVE_ZEUS(B_QRF_Soldier_GL_RF,B_Soldier_GL_F)
	REMOVE_ZEUS(B_QRF_Soldier_RF,B_Soldier_F)
	REMOVE_ZEUS(B_QRF_Soldier_SL_RF,B_Soldier_SL_F)
	REMOVE_ZEUS(B_QRF_Soldier_AR_RF,B_soldier_AR_F)
	REMOVE_ZEUS(B_QRF_medic_RF,B_medic_F)
	REMOVE_ZEUS(B_QRF_Sharpshooter_RF,B_Sharpshooter_F)
	REMOVE_ZEUS(I_support_CMort_RF,I_support_AMort_F)
	REMOVE_ZEUS(I_E_support_CMort_RF,I_E_Support_Mort_F)
	REMOVE_ZEUS(O_QRF_Soldier_UAV_RF,O_soldier_UAV_F)
	REMOVE_ZEUS(O_support_CMort_RF,O_support_AMort_F)
	REMOVE_ZEUS(O_QRF_Soldier_SL_RF,O_Soldier_SL_F)
	REMOVE_ZEUS(O_QRF_soldier_M_RF,O_soldier_M_F)
	REMOVE_ZEUS(O_QRF_Soldier_HAT_RF,O_Soldier_HAT_F)
	REMOVE_ZEUS(O_QRF_Soldier_GL_RF,O_Soldier_GL_F)
	REMOVE_ZEUS(O_QRF_Soldier_RF,O_Soldier_F)
	REMOVE_ZEUS(O_QRF_Soldier_AR_RF,O_Soldier_AR_F)
	REMOVE_ZEUS(O_A_scout_RF,O_A_soldier_F)
	REMOVE_ZEUS(O_QRF_medic_RF,O_medic_F)
	REMOVE_ZEUS(C_Soldier_VR_F,C_man_1)
	REMOVE_ZEUS(I_E_CommandoMortar_RF,I_CommandoMortar_RF)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_medevac_F,Pod_Heli_Transport_04_crewed_base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_medevac_black_F,Land_Pod_Heli_Transport_04_medevac_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_covered_F,Pod_Heli_Transport_04_crewed_base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_covered_black_F,Land_Pod_Heli_Transport_04_covered_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_bench_F,Pod_Heli_Transport_04_crewed_base_F)
	REMOVE_ZEUS(Land_Pod_Heli_Transport_04_bench_black_F,Land_Pod_Heli_Transport_04_bench_F)
	REMOVE_ZEUS(I_E_Pickup_Covered_rf,Pickup_covered_base_rf)
	REMOVE_ZEUS(O_Pickup_Comms_rf,Pickup_comms_base_rf)
	REMOVE_ZEUS(O_T_Pickup_Comms_rf,O_Pickup_Comms_rf)
	REMOVE_ZEUS(I_Pickup_Comms_rf,Pickup_comms_base_rf)
	REMOVE_ZEUS(I_E_Pickup_Comms_rf,Pickup_comms_base_rf)
	REMOVE_ZEUS(B_Pickup_Comms_rf,Pickup_comms_base_rf)
	REMOVE_ZEUS(B_T_Pickup_Comms_rf,B_Pickup_Comms_rf)
	REMOVE_ZEUS(I_Pickup_mmg_rf,Pickup_01_mmg_base_rf)
	REMOVE_ZEUS(B_Pickup_mmg_rf,Pickup_01_mmg_base_rf)
	REMOVE_ZEUS(B_T_Pickup_mmg_rf,B_Pickup_mmg_rf)
	REMOVE_ZEUS(I_Pickup_aat_rf,Pickup_01_aat_base_rf)
	REMOVE_ZEUS(B_Pickup_aat_rf,Pickup_01_aat_base_rf)
	REMOVE_ZEUS(B_T_Pickup_aat_rf,B_Pickup_aat_rf)
	REMOVE_ZEUS(O_Pickup_rf,Pickup_01_base_rf)
	REMOVE_ZEUS(O_T_Pickup_rf,O_Pickup_rf)
	REMOVE_ZEUS(I_Pickup_rf,Pickup_01_base_rf)
	REMOVE_ZEUS(I_E_Pickup_rf,Pickup_01_base_rf)
	REMOVE_ZEUS(B_Pickup_rf,Pickup_01_base_rf)
	REMOVE_ZEUS(B_T_Pickup_rf,B_Pickup_rf)
	REMOVE_ZEUS(O_UAV_RC40_SENSOR_RF,UAV_RC40_Base_Sensor_RF)
	REMOVE_ZEUS(I_UAV_RC40_SENSOR_RF,UAV_RC40_Base_Sensor_RF)
	REMOVE_ZEUS(B_UAV_RC40_SENSOR_RF,UAV_RC40_Base_Sensor_RF)
	REMOVE_ZEUS(O_UAV_RC40_SmokeWhite_RF,UAV_RC40_Base_SmokeWhite_RF)
	REMOVE_ZEUS(I_UAV_RC40_SmokeWhite_RF,UAV_RC40_Base_SmokeWhite_RF)
	REMOVE_ZEUS(B_UAV_RC40_SmokeWhite_RF,UAV_RC40_Base_SmokeWhite_RF)
	REMOVE_ZEUS(O_UAV_RC40_SmokeRed_RF,UAV_RC40_Base_SmokeRed_RF)
	REMOVE_ZEUS(I_UAV_RC40_SmokeRed_RF,UAV_RC40_Base_SmokeRed_RF)
	REMOVE_ZEUS(B_UAV_RC40_SmokeRed_RF,UAV_RC40_Base_SmokeRed_RF)
	REMOVE_ZEUS(O_UAV_RC40_SmokeOrange_RF,UAV_RC40_Base_SmokeOrange_RF)
	REMOVE_ZEUS(I_UAV_RC40_SmokeOrange_RF,UAV_RC40_Base_SmokeOrange_RF)
	REMOVE_ZEUS(B_UAV_RC40_SmokeOrange_RF,UAV_RC40_Base_SmokeOrange_RF)
	REMOVE_ZEUS(O_UAV_RC40_SmokeGreen_RF,UAV_RC40_Base_SmokeGreen_RF)
	REMOVE_ZEUS(I_UAV_RC40_SmokeGreen_RF,UAV_RC40_Base_SmokeGreen_RF)
	REMOVE_ZEUS(B_UAV_RC40_SmokeGreen_RF,UAV_RC40_Base_SmokeGreen_RF)
	REMOVE_ZEUS(O_UAV_RC40_SmokeBlue_RF,UAV_RC40_Base_SmokeBlue_RF)
	REMOVE_ZEUS(I_UAV_RC40_SmokeBlue_RF,UAV_RC40_Base_SmokeBlue_RF)
	REMOVE_ZEUS(B_UAV_RC40_SmokeBlue_RF,UAV_RC40_Base_SmokeBlue_RF)
	REMOVE_ZEUS(O_UAV_RC40_HE_RF,UAV_RC40_Base_HE_RF)
	REMOVE_ZEUS(I_UAV_RC40_HE_RF,UAV_RC40_Base_HE_RF)
	REMOVE_ZEUS(B_UAV_RC40_HE_RF,UAV_RC40_Base_HE_RF)
	REMOVE_ZEUS(B_Heli_EC_04_military_RF,Heli_EC_04_military_base_RF)
	REMOVE_ZEUS(B_Heli_EC_03_RF,Heli_EC_03_base_RF)
	REMOVE_ZEUS(I_Heli_EC_02_RF,Heli_EC_02_base_RF)
	REMOVE_ZEUS(I_E_EC_02_RF,Heli_EC_02_base_RF)
	REMOVE_ZEUS(I_Heli_EC_01A_military_RF,Heli_EC_01A_military_base_RF)
	REMOVE_ZEUS(I_E_Heli_EC_01A_military_RF,Heli_EC_01A_military_base_RF)
	REMOVE_ZEUS(B_Heli_light_03_unarmed_RF,Heli_light_03_unarmed_base_F)
	REMOVE_ZEUS(I_Heli_light_03_unarmed_RF,B_Heli_light_03_unarmed_RF)
	REMOVE_ZEUS(I_E_Heli_light_03_unarmed_RF,I_Heli_light_03_unarmed_RF)
	REMOVE_ZEUS(B_Heli_light_03_dynamicLoadout_RF,Heli_light_03_dynamicLoadout_base_F)
	REMOVE_ZEUS(I_Heli_light_03_dynamicLoadout_RF,B_Heli_light_03_dynamicLoadout_RF)
	REMOVE_ZEUS(I_E_Heli_light_03_dynamicLoadout_RF,I_Heli_light_03_dynamicLoadout_RF)
};
