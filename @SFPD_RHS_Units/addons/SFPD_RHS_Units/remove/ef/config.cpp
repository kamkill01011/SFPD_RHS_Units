
#define REMOVE_ZEUS(CLASS,PARENT) \
	class CLASS : PARENT { \
		scopeCurator = 0; \
	};



class CfgPatches {
    class SFPD_RHS_remove_ef  {
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
	class I_soldier_F;
	class EF_B_Marine_Wdl_Base_5;
	class EF_LPD_Turret_1_Base;
	class Heli_Attack_01_pylons_dynamicLoadout_base_F;
	class Heli_Transport_01_pylons_base_F;
	class EF_B_Marine_Des_Base_3;
	class EF_B_Marine_Des_Base_1;
	class EF_B_Marine_Des_Base_4;
	class EF_B_Marine_Des_Base_2;
	class EF_B_Marine_Des_Base_6;
	class EF_B_Marine_Des_Base_5;
	class EF_B_Marine_Support_Base_Des;
	class EF_B_Marine_Recon_Des_base;
	class EF_B_Marine_Diver_Des_Base;
	class EF_B_Marine_Wdl_Base_3;
	class EF_B_Marine_Wdl_Base_1;
	class EF_B_Marine_Wdl_Base_2;
	class EF_B_Marine_Wdl_Base_4;
	class EF_B_Marine_Wdl_Base_6;
	class EF_B_Marine_Support_Base_Wdl;
	class EF_B_Marine_Recon_Wdl_base;
	class EF_B_Marine_Diver_Wdl_Base;
	class B_HMG_01_F;
	class B_HMG_01_high_F;
	class B_GMG_01_F;
	class B_Mortar_01_F;
	class B_Heli_Attack_01_dynamicLoadout_F;
	class EF_AH99J_dynamicLoadout_base;
	class EF_CombatBoat_Unarmed_Base;
	class EF_CombatBoat_HMG_West_Base;
	class EF_CombatBoat_HMG_East_Base;
	class EF_CombatBoat_HMG_Indep_Base;
	class EF_CombatBoat_AT_West_Base;
	class EF_CombatBoat_AT_East_Base;
	class EF_CombatBoat_AT_Indep_Base;
	class B_UAV_01_F;
	class EF_MRAP_01_FSV_base;
	class EF_MRAP_01_LAAD_base;
	class EF_MRAP_01_AT_base;
	class EF_LCC_Base;
	class EF_LCC_SideLoad_Base;
	class Heli_Transport_01_base_F;
	class B_MBT_01_cannon_F;
	class B_MBT_01_TUSK_F;
	class B_MBT_01_mlrs_F;
	class B_Boat_Armed_01_minigun_F;
	class B_Boat_Transport_01_F;
	class B_Lifeboat;
	class B_Truck_01_transport_F;
	class B_Truck_01_covered_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_box_F;
	class B_Truck_01_Repair_F;
	class B_Truck_01_ammo_F;
	class B_Truck_01_fuel_F;
	class B_Truck_01_medical_F;
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class B_Quadbike_01_F;
	class B_UAV_02_dynamicLoadout_F;
	class B_UGV_01_F;
	class B_UGV_01_rcws_F;
	class B_static_AT_F;
	class B_static_AA_F;
	class B_SDV_01_F;
	class B_CommandoMortar_RF;
	class B_CommandoMortar_weapon_RF;
	class Pickup_01_base_rf;
	class Pickup_comms_base_rf;
	class Pickup_01_mmg_base_rf;
	class EF_AAV9_Base;
	class EF_AAV9_50mm_Base;
	REMOVE_ZEUS(EF_I_Soldier_MP,I_soldier_F)
	REMOVE_ZEUS(EF_B_Marine_R_Des,EF_B_Marine_Des_Base_3)
	REMOVE_ZEUS(EF_B_Marine_AR_Des,EF_B_Marine_Des_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Light_Des,EF_B_Marine_Des_Base_1)
	REMOVE_ZEUS(EF_B_Marine_TL_Des,EF_B_Marine_Des_Base_4)
	REMOVE_ZEUS(EF_B_Marine_GL_Des,EF_B_Marine_Des_Base_4)
	REMOVE_ZEUS(EF_B_Marine_SL_Des,EF_B_Marine_Des_Base_4)
	REMOVE_ZEUS(EF_B_Marine_JTAC_Des,EF_B_Marine_Des_Base_4)
	REMOVE_ZEUS(EF_B_Marine_LAT_Des,EF_B_Marine_Des_Base_2)
	REMOVE_ZEUS(EF_B_Marine_LAT2_Des,EF_B_Marine_Des_Base_2)
	REMOVE_ZEUS(EF_B_Marine_Mark_Des,EF_B_Marine_Des_Base_1)
	REMOVE_ZEUS(EF_B_Marine_Medic_Des,EF_B_Marine_Des_Base_4)
	REMOVE_ZEUS(EF_B_Marine_Repair_Des,EF_B_Marine_Des_Base_1)
	REMOVE_ZEUS(EF_B_Marine_Exp_Des,EF_B_Marine_Des_Base_1)
	REMOVE_ZEUS(EF_B_Marine_AT_Des,EF_B_Marine_Des_Base_1)
	REMOVE_ZEUS(EF_B_Marine_AA_Des,EF_B_Marine_Des_Base_1)
	REMOVE_ZEUS(EF_B_Marine_Eng_Des,EF_B_Marine_Des_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Crew_Des,EF_B_Marine_Des_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Officer_Des,EF_B_Marine_Des_Base_6)
	REMOVE_ZEUS(EF_B_Marine_UAV_Des,EF_B_Marine_Des_Base_5)
	REMOVE_ZEUS(EF_B_Marine_Universal_Des,EF_B_Marine_R_Des)
	REMOVE_ZEUS(EF_B_Marine_Unarmed_Des,EF_B_Marine_R_Des)
	REMOVE_ZEUS(EF_B_Marine_AAT_Des,EF_B_Marine_Support_Base_Des)
	REMOVE_ZEUS(EF_B_Marine_AAA_Des,EF_B_Marine_AAT_Des)
	REMOVE_ZEUS(EF_B_Marine_HMG_Des,EF_B_Marine_Support_Base_Des)
	REMOVE_ZEUS(EF_B_Marine_GMG_Des,EF_B_Marine_Support_Base_Des)
	REMOVE_ZEUS(EF_B_Marine_Mort_Des,EF_B_Marine_Support_Base_Des)
	REMOVE_ZEUS(EF_B_Marine_AMG_Des,EF_B_Marine_Support_Base_Des)
	REMOVE_ZEUS(EF_B_Marine_AMort_Des,EF_B_Marine_Support_Base_Des)
	REMOVE_ZEUS(EF_B_Marine_BoatCrew_Des,EF_B_Marine_Des_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Recon_Des,EF_B_Marine_Recon_Des_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_LAT_Des,EF_B_Marine_Recon_Des_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_Exp_Des,EF_B_Marine_Recon_Des_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_Medic_Des,EF_B_Marine_Recon_Des_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_TL_Des,EF_B_Marine_Recon_Des_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_M_Des,EF_B_Marine_Recon_Des_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_JTAC_Des,EF_B_Marine_Recon_Des_base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Des,EF_B_Marine_Diver_Des_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_TL_Des,EF_B_Marine_Diver_Des_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Eng_Des,EF_B_Marine_Diver_Des_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Pointman_Des,EF_B_Marine_Diver_Des_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Scout_Des,EF_B_Marine_Diver_Des_Base)
	REMOVE_ZEUS(EF_B_Marine_R_Wdl,EF_B_Marine_Wdl_Base_3)
	REMOVE_ZEUS(EF_B_Marine_AR_Wdl,EF_B_Marine_Wdl_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Light_Wdl,EF_B_Marine_Wdl_Base_1)
	REMOVE_ZEUS(EF_B_Marine_TL_Wdl,EF_B_Marine_Wdl_Base_4)
	REMOVE_ZEUS(EF_B_Marine_GL_Wdl,EF_B_Marine_Wdl_Base_4)
	REMOVE_ZEUS(EF_B_Marine_SL_Wdl,EF_B_Marine_Wdl_Base_4)
	REMOVE_ZEUS(EF_B_Marine_JTAC_Wdl,EF_B_Marine_Wdl_Base_4)
	REMOVE_ZEUS(EF_B_Marine_LAT_Wdl,EF_B_Marine_Wdl_Base_2)
	REMOVE_ZEUS(EF_B_Marine_LAT2_Wdl,EF_B_Marine_Wdl_Base_2)
	REMOVE_ZEUS(EF_B_Marine_Mark_Wdl,EF_B_Marine_Wdl_Base_1)
	REMOVE_ZEUS(EF_B_Marine_Medic_Wdl,EF_B_Marine_Wdl_Base_4)
	REMOVE_ZEUS(EF_B_Marine_Repair_Wdl,EF_B_Marine_Wdl_Base_1)
	REMOVE_ZEUS(EF_B_Marine_Exp_Wdl,EF_B_Marine_Wdl_Base_1)
	REMOVE_ZEUS(EF_B_Marine_AT_Wdl,EF_B_Marine_Wdl_Base_1)
	REMOVE_ZEUS(EF_B_Marine_AA_Wdl,EF_B_Marine_Wdl_Base_1)
	REMOVE_ZEUS(EF_B_Marine_Eng_Wdl,EF_B_Marine_Wdl_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Crew_Wdl,EF_B_Marine_Wdl_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Officer_Wdl,EF_B_Marine_Wdl_Base_6)
	REMOVE_ZEUS(EF_B_Marine_Universal_Wdl,EF_B_Marine_R_Wdl)
	REMOVE_ZEUS(EF_B_Marine_Unarmed_Wdl,EF_B_Marine_R_Wdl)
	REMOVE_ZEUS(EF_B_Marine_AAT_Wdl,EF_B_Marine_Support_Base_Wdl)
	REMOVE_ZEUS(EF_B_Marine_AAA_Wdl,EF_B_Marine_AAT_Wdl)
	REMOVE_ZEUS(EF_B_Marine_HMG_Wdl,EF_B_Marine_Support_Base_Wdl)
	REMOVE_ZEUS(EF_B_Marine_GMG_Wdl,EF_B_Marine_Support_Base_Wdl)
	REMOVE_ZEUS(EF_B_Marine_Mort_Wdl,EF_B_Marine_Support_Base_Wdl)
	REMOVE_ZEUS(EF_B_Marine_AMG_Wdl,EF_B_Marine_Support_Base_Wdl)
	REMOVE_ZEUS(EF_B_Marine_AMort_Wdl,EF_B_Marine_Support_Base_Wdl)
	REMOVE_ZEUS(EF_B_Marine_BoatCrew_Wdl,EF_B_Marine_Wdl_Base_3)
	REMOVE_ZEUS(EF_B_Marine_Recon_Wdl,EF_B_Marine_Recon_Wdl_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_LAT_Wdl,EF_B_Marine_Recon_Wdl_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_Exp_Wdl,EF_B_Marine_Recon_Wdl_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_Medic_Wdl,EF_B_Marine_Recon_Wdl_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_TL_Wdl,EF_B_Marine_Recon_Wdl_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_M_Wdl,EF_B_Marine_Recon_Wdl_base)
	REMOVE_ZEUS(EF_B_Marine_Recon_JTAC_Wdl,EF_B_Marine_Recon_Wdl_base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Wdl,EF_B_Marine_Diver_Wdl_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_TL_Wdl,EF_B_Marine_Diver_Wdl_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Eng_Wdl,EF_B_Marine_Diver_Wdl_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Pointman_Wdl,EF_B_Marine_Diver_Wdl_Base)
	REMOVE_ZEUS(EF_B_Marine_Diver_Scout_Wdl,EF_B_Marine_Diver_Wdl_Base)
	REMOVE_ZEUS(EF_B_HMG_01_MJTF_Des,B_HMG_01_F)
	REMOVE_ZEUS(EF_B_HMG_01_MJTF_Wdl,B_HMG_01_F)
	REMOVE_ZEUS(EF_B_HMG_01_high_MJTF_Des,B_HMG_01_high_F)
	REMOVE_ZEUS(EF_B_HMG_01_high_MJTF_Wdl,B_HMG_01_high_F)
	REMOVE_ZEUS(EF_B_GMG_01_MJTF_Des,B_GMG_01_F)
	REMOVE_ZEUS(EF_B_GMG_01_MJTF_Wdl,B_GMG_01_F)
	REMOVE_ZEUS(EF_B_Mortar_01_MJTF_Des,B_Mortar_01_F)
	REMOVE_ZEUS(EF_B_Mortar_01_MJTF_Wdl,B_Mortar_01_F)
	REMOVE_ZEUS(EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Des,B_Heli_Attack_01_dynamicLoadout_F)
	REMOVE_ZEUS(EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Wdl,B_Heli_Attack_01_dynamicLoadout_F)
	REMOVE_ZEUS(EF_B_AH99J_MJTF_Des,EF_AH99J_dynamicLoadout_base)
	REMOVE_ZEUS(EF_B_AH99J_MJTF_Wdl,EF_AH99J_dynamicLoadout_base)
	REMOVE_ZEUS(EF_B_AH99J_NATO,EF_AH99J_dynamicLoadout_base)
	REMOVE_ZEUS(EF_B_CombatBoat_Unarmed_NATO,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_Unarmed_NATO_T,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_Unarmed_MJTF_Des,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_Unarmed_MJTF_Wdl,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_Unarmed_CTRG,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_Unarmed_OPF,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_Unarmed_OPF_T,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_Unarmed_OPF_R,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_I_CombatBoat_Unarmed_AAF,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_HMG_NATO,EF_CombatBoat_HMG_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_HMG_NATO_T,EF_CombatBoat_HMG_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_HMG_MJTF_Des,EF_CombatBoat_HMG_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_HMG_MJTF_Wdl,EF_CombatBoat_HMG_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_HMG_CTRG,EF_CombatBoat_HMG_West_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_HMG_OPF,EF_CombatBoat_HMG_East_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_HMG_OPF_T,EF_CombatBoat_HMG_East_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_HMG_OPF_R,EF_CombatBoat_HMG_East_Base)
	REMOVE_ZEUS(EF_I_CombatBoat_HMG_AAF,EF_CombatBoat_HMG_Indep_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_AT_NATO,EF_CombatBoat_AT_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_AT_NATO_T,EF_CombatBoat_AT_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_AT_MJTF_Des,EF_CombatBoat_AT_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_AT_MJTF_Wdl,EF_CombatBoat_AT_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_AT_CTRG,EF_CombatBoat_AT_West_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_AT_OPF,EF_CombatBoat_AT_East_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_AT_OPF_T,EF_CombatBoat_AT_East_Base)
	REMOVE_ZEUS(EF_O_CombatBoat_AT_OPF_R,EF_CombatBoat_AT_East_Base)
	REMOVE_ZEUS(EF_I_CombatBoat_AT_AAF,EF_CombatBoat_AT_Indep_Base)
	REMOVE_ZEUS(EF_B_UAV_01_MJTF_Des,B_UAV_01_F)
	REMOVE_ZEUS(EF_B_UAV_01_MJTF_Wdl,B_UAV_01_F)
	REMOVE_ZEUS(EF_B_MRAP_01_FSV_MJTF_Des,EF_MRAP_01_FSV_base)
	REMOVE_ZEUS(EF_B_MRAP_01_LAAD_MJTF_Des,EF_MRAP_01_LAAD_base)
	REMOVE_ZEUS(EF_B_MRAP_01_AT_MJTF_Des,EF_MRAP_01_AT_base)
	REMOVE_ZEUS(EF_B_MRAP_01_FSV_MJTF_Wdl,EF_MRAP_01_FSV_base)
	REMOVE_ZEUS(EF_B_MRAP_01_LAAD_MJTF_Wdl,EF_MRAP_01_LAAD_base)
	REMOVE_ZEUS(EF_B_MRAP_01_AT_MJTF_Wdl,EF_MRAP_01_AT_base)
	REMOVE_ZEUS(EF_B_MRAP_01_FSV_NATO,EF_MRAP_01_FSV_base)
	REMOVE_ZEUS(EF_B_MRAP_01_LAAD_NATO,EF_MRAP_01_LAAD_base)
	REMOVE_ZEUS(EF_B_MRAP_01_AT_NATO,EF_MRAP_01_AT_base)
	REMOVE_ZEUS(EF_B_MRAP_01_FSV_NATO_T,EF_MRAP_01_FSV_base)
	REMOVE_ZEUS(EF_B_MRAP_01_LAAD_NATO_T,EF_MRAP_01_LAAD_base)
	REMOVE_ZEUS(EF_B_MRAP_01_AT_NATO_T,EF_MRAP_01_AT_base)
	REMOVE_ZEUS(EF_B_LCC_MJTF_Des,EF_LCC_Base)
	REMOVE_ZEUS(EF_B_LCC_SideLoad_MJTF_Des,EF_LCC_SideLoad_Base)
	REMOVE_ZEUS(EF_B_LCC_MJTF_Wdl,EF_LCC_Base)
	REMOVE_ZEUS(EF_B_LCC_SideLoad_MJTF_Wdl,EF_LCC_SideLoad_Base)
	REMOVE_ZEUS(EF_B_Heli_Transport_01_MJTF_Des,Heli_Transport_01_base_F)
	REMOVE_ZEUS(EF_B_Heli_Transport_01_MJTF_Wdl,EF_B_Heli_Transport_01_MJTF_Des)
	REMOVE_ZEUS(EF_B_MBT_01_cannon_MJTF_Des,B_MBT_01_cannon_F)
	REMOVE_ZEUS(EF_B_MBT_01_cannon_MJTF_Wdl,B_MBT_01_cannon_F)
	REMOVE_ZEUS(EF_B_MBT_01_TUSK_MJTF_Des,B_MBT_01_TUSK_F)
	REMOVE_ZEUS(EF_B_MBT_01_TUSK_MJTF_Wdl,B_MBT_01_TUSK_F)
	REMOVE_ZEUS(EF_B_MBT_01_mlrs_MJTF_Des,B_MBT_01_mlrs_F)
	REMOVE_ZEUS(EF_B_MBT_01_mlrs_MJTF_Wdl,B_MBT_01_mlrs_F)
	REMOVE_ZEUS(EF_B_Boat_Armed_01_minigun_MJTF_Des,B_Boat_Armed_01_minigun_F)
	REMOVE_ZEUS(EF_B_Boat_Armed_01_minigun_MJTF_Wdl,B_Boat_Armed_01_minigun_F)
	REMOVE_ZEUS(EF_B_Boat_Transport_01_MJTF_Des,B_Boat_Transport_01_F)
	REMOVE_ZEUS(EF_B_Boat_Transport_01_MJTF_Wdl,B_Boat_Transport_01_F)
	REMOVE_ZEUS(EF_B_Lifeboat_MJTF_Des,B_Lifeboat)
	REMOVE_ZEUS(EF_B_Lifeboat_MJTF_Wdl,B_Lifeboat)
	REMOVE_ZEUS(EF_B_Truck_01_transport_MJTF_Des,B_Truck_01_transport_F)
	REMOVE_ZEUS(EF_B_Truck_01_transport_MJTF_Wdl,B_Truck_01_transport_F)
	REMOVE_ZEUS(EF_B_Truck_01_covered_MJTF_Des,B_Truck_01_covered_F)
	REMOVE_ZEUS(EF_B_Truck_01_covered_MJTF_Wdl,B_Truck_01_covered_F)
	REMOVE_ZEUS(EF_B_Truck_01_mover_MJTF_Des,B_Truck_01_mover_F)
	REMOVE_ZEUS(EF_B_Truck_01_mover_MJTF_Wdl,B_Truck_01_mover_F)
	REMOVE_ZEUS(EF_B_Truck_01_box_MJTF_Des,B_Truck_01_box_F)
	REMOVE_ZEUS(EF_B_Truck_01_box_MJTF_Wdl,B_Truck_01_box_F)
	REMOVE_ZEUS(EF_B_Truck_01_Repair_MJTF_Des,B_Truck_01_Repair_F)
	REMOVE_ZEUS(EF_B_Truck_01_Repair_MJTF_Wdl,B_Truck_01_Repair_F)
	REMOVE_ZEUS(EF_B_Truck_01_ammo_MJTF_Des,B_Truck_01_ammo_F)
	REMOVE_ZEUS(EF_B_Truck_01_ammo_MJTF_Wdl,B_Truck_01_ammo_F)
	REMOVE_ZEUS(EF_B_Truck_01_fuel_MJTF_Des,B_Truck_01_fuel_F)
	REMOVE_ZEUS(EF_B_Truck_01_fuel_MJTF_Wdl,B_Truck_01_fuel_F)
	REMOVE_ZEUS(EF_B_Truck_01_medical_MJTF_Des,B_Truck_01_medical_F)
	REMOVE_ZEUS(EF_B_Truck_01_medical_MJTF_Wdl,B_Truck_01_medical_F)
	REMOVE_ZEUS(EF_B_MRAP_01_MJTF_Des,B_MRAP_01_F)
	REMOVE_ZEUS(EF_B_MRAP_01_MJTF_Wdl,B_MRAP_01_F)
	REMOVE_ZEUS(EF_B_MRAP_01_gmg_MJTF_Des,B_MRAP_01_gmg_F)
	REMOVE_ZEUS(EF_B_MRAP_01_gmg_MJTF_Wdl,B_MRAP_01_gmg_F)
	REMOVE_ZEUS(EF_B_MRAP_01_hmg_MJTF_Des,B_MRAP_01_hmg_F)
	REMOVE_ZEUS(EF_B_MRAP_01_hmg_MJTF_Wdl,B_MRAP_01_hmg_F)
	REMOVE_ZEUS(EF_B_Quadbike_01_MJTF_Des,B_Quadbike_01_F)
	REMOVE_ZEUS(EF_B_Quadbike_01_MJTF_Wdl,B_Quadbike_01_F)
	REMOVE_ZEUS(EF_B_UAV_02_dynamicLoadout_MJTF_Des,B_UAV_02_dynamicLoadout_F)
	REMOVE_ZEUS(EF_B_UAV_02_dynamicLoadout_MJTF_Wdl,B_UAV_02_dynamicLoadout_F)
	REMOVE_ZEUS(EF_B_UGV_01_MJTF_Des,B_UGV_01_F)
	REMOVE_ZEUS(EF_B_UGV_01_MJTF_Wdl,B_UGV_01_F)
	REMOVE_ZEUS(EF_B_UGV_01_rcws_MJTF_Des,B_UGV_01_rcws_F)
	REMOVE_ZEUS(EF_B_UGV_01_rcws_MJTF_Wdl,B_UGV_01_rcws_F)
	REMOVE_ZEUS(EF_B_Static_AT_MJTF_Des,B_static_AT_F)
	REMOVE_ZEUS(EF_B_Static_AT_MJTF_Wdl,B_static_AT_F)
	REMOVE_ZEUS(EF_B_Static_AA_MJTF_Des,B_static_AA_F)
	REMOVE_ZEUS(EF_B_Static_AA_MJTF_Wdl,B_static_AA_F)
	REMOVE_ZEUS(EF_B_SDV_01_MJTF_Des,B_SDV_01_F)
	REMOVE_ZEUS(EF_B_SDV_01_MJTF_Wdl,B_SDV_01_F)
	REMOVE_ZEUS(EF_B_CommandoMortar_MJTF_Des,B_CommandoMortar_RF)
	REMOVE_ZEUS(EF_B_CommandoMortar_weapon_MJTF_Des,B_CommandoMortar_weapon_RF)
	REMOVE_ZEUS(EF_B_Marine_CMort_Des,EF_B_Marine_R_Des)
	REMOVE_ZEUS(EF_B_CommandoMortar_MJTF_Wdl,B_CommandoMortar_RF)
	REMOVE_ZEUS(EF_B_CommandoMortar_weapon_MJTF_Wdl,B_CommandoMortar_weapon_RF)
	REMOVE_ZEUS(EF_B_Marine_CMort_Wdl,EF_B_Marine_R_Wdl)
	REMOVE_ZEUS(EF_B_Pickup_MJTF_Des,Pickup_01_base_rf)
	REMOVE_ZEUS(EF_B_Pickup_Comms_MJTF_Des,Pickup_comms_base_rf)
	REMOVE_ZEUS(EF_B_Pickup_mmg_MJTF_Des,Pickup_01_mmg_base_rf)
	REMOVE_ZEUS(EF_B_Pickup_MJTF_Wdl,Pickup_01_base_rf)
	REMOVE_ZEUS(EF_B_Pickup_Comms_MJTF_Wdl,Pickup_comms_base_rf)
	REMOVE_ZEUS(EF_B_Pickup_mmg_MJTF_Wdl,Pickup_01_mmg_base_rf)
	REMOVE_ZEUS(EF_B_AH99J_NATO_Des,EF_AH99J_dynamicLoadout_base)
	REMOVE_ZEUS(EF_B_MRAP_01_FSV_NATO_Des,EF_MRAP_01_FSV_base)
	REMOVE_ZEUS(EF_B_MRAP_01_LAAD_NATO_Des,EF_MRAP_01_LAAD_base)
	REMOVE_ZEUS(EF_B_MRAP_01_AT_NATO_Des,EF_MRAP_01_AT_base)
	REMOVE_ZEUS(EF_B_CombatBoat_Unarmed_NATO_Des,EF_CombatBoat_Unarmed_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_HMG_NATO_Des,EF_CombatBoat_HMG_West_Base)
	REMOVE_ZEUS(EF_B_CombatBoat_AT_NATO_Des,EF_CombatBoat_AT_West_Base)
	REMOVE_ZEUS(EF_B_AAV9_MJTF_Des,EF_AAV9_Base)
	REMOVE_ZEUS(EF_B_AAV9_MJTF_Wdl,EF_AAV9_Base)
	REMOVE_ZEUS(EF_B_AAV9_50mm_MJTF_Des,EF_AAV9_50mm_Base)
	REMOVE_ZEUS(EF_B_AAV9_50mm_MJTF_Wdl,EF_AAV9_50mm_Base)
	REMOVE_ZEUS(EF_B_Marine_UAV_Wdl,EF_B_Marine_Wdl_Base_5)
	REMOVE_ZEUS(EF_LPD_Turret_1_MJTF_Wdl,EF_LPD_Turret_1_Base)
	REMOVE_ZEUS(B_Heli_Attack_01_pylons_dynamicLoadout_F,Heli_Attack_01_pylons_dynamicLoadout_base_F)
	REMOVE_ZEUS(B_Heli_Transport_01_pylons_F,Heli_Transport_01_pylons_base_F)
};
