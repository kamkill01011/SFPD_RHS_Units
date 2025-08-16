
#define REMOVE_ZEUS(CLASS,PARENT) \
	class CLASS : PARENT { \
		scopeCurator = 0; \
	};



class CfgPatches {
    class SFPD_RHS_remove_ws  {
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
	class B_APC_Tracked_01_AA_F;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_rcws_F;
	class APC_Wheeled_01_atgm_base_lxWS;
	class B_APC_Wheeled_01_cannon_F;
	class APC_Wheeled_01_command_base_lxWS;
	class APC_Wheeled_01_mortar_base_lxWS;
	class B_crew_F;
	class B_CommandoMortar_RF;
	class B_CommandoMortar_weapon_RF;
	class B_CTRG_Soldier_Exp_tna_F;
	class B_CTRG_Soldier_AR_tna_F;
	class B_CTRG_Soldier_JTAC_tna_F;
	class B_CTRG_Soldier_LAT2_tna_F;
	class B_CTRG_Soldier_tna_F;
	class B_CTRG_Soldier_M_tna_F;
	class B_CTRG_Soldier_Medic_tna_F;
	class B_CTRG_Soldier_TL_tna_F;
	class B_soldier_UAV_F;
	class B_engineer_F;
	class B_Fighter_Pilot_F;
	class B_Heli_Attack_01_dynamicLoadout_F;
	class B_Heli_Light_01_dynamicLoadout_F;
	class B_Heli_Light_01_F;
	class B_Heli_Transport_01_F;
	class B_Helipilot_F;
	class B_MBT_01_arty_F;
	class B_MBT_01_cannon_F;
	class B_MBT_01_mlrs_F;
	class B_MBT_01_TUSK_F;
	class B_medic_F;
	class B_Mortar_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class B_MRAP_01_F;
	class B_officer_F;
	class B_T_Pilot_F;
	class B_Plane_CAS_01_dynamicLoadout_F;
	class B_Quadbike_01_F;
	class B_recon_exp_F;
	class B_recon_JTAC_F;
	class B_recon_LAT_F;
	class B_recon_F;
	class B_recon_M_F;
	class B_recon_medic_F;
	class B_recon_TL_F;
	class B_Soldier_A_F;
	class B_soldier_AA_F;
	class B_soldier_AAA_F;
	class B_soldier_AAR_F;
	class B_soldier_AAT_F;
	class B_soldier_AR_F;
	class B_soldier_AT_F;
	class B_soldier_exp_F;
	class B_Soldier_GL_F;
	class B_soldier_LAT_F;
	class B_soldier_LAT2_F;
	class B_Soldier_lite_F;
	class B_Soldier_F;
	class B_soldier_M_F;
	class B_soldier_mine_F;
	class B_soldier_PG_F;
	class B_soldier_repair_F;
	class B_Soldier_SL_F;
	class B_Soldier_TL_F;
	class B_soldier_UAV_lxWS;
	class B_Soldier_unarmed_F;
	class B_static_AA_F;
	class B_static_AT_F;
	class B_support_AMG_F;
	class B_support_AMort_F;
	class B_support_GMG_F;
	class B_support_MG_F;
	class B_support_Mort_F;
	class B_Survivor_F;
	class B_Truck_01_ammo_F;
	class B_Truck_01_box_F;
	class B_Truck_01_cargo_F;
	class B_Truck_01_covered_F;
	class B_Truck_01_flatbed_F;
	class B_Truck_01_fuel_F;
	class B_Truck_01_medical_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_Repair_F;
	class B_Truck_01_transport_F;
	class B_UGV_01_F;
	class B_UGV_01_rcws_F;
	class APC_Wheeled_02_hmg_base_lxws;
	class Heli_EC_01_base_RF;
	class O_Heli_Light_02_dynamicLoadout_F;
	class O_Heli_Light_02_unarmed_F;
	class Offroad_01_armed_lxWS;
	class Offroad_01_base_lxWS;
	class Pickup_01_aat_base_rf;
	class Pickup_01_mmg_base_rf;
	class Pickup_01_base_rf;
	class O_Truck_02_covered_F;
	class I_MBT_03_cannon_F;
	class I_SFIA_defector_lxWS;
	class I_SFIA_deserter_lxWS;
	class I_SFIA_enforcer_lxWS;
	class I_Tura_HeavyGunner_lxWS;
	class I_SFIA_hireling_lxWS;
	class I_Tura_HMG_02_high_lxWS;
	class I_Tura_HMG_02_lxWS;
	class I_SFIA_medic2_lxWS;
	class I_Tura_Mortar_lxWS;
	class I_Tura_Offroad_armor_armed_lxWS;
	class I_Tura_Offroad_armor_AT_lxWS;
	class I_Tura_Offroad_armor_lxWS;
	class I_Tura_Pickup_fuel_rf;
	class I_Tura_Pickup_01_mmg_rf;
	class I_Tura_Pickup_01_RF;
	class I_SFIA_scout_lxWS;
	class I_SFIA_thug_lxWS;
	class Weapon_Bag_Base;
	class UAV_02_IED_Base_lxWS;
	class I_SFIA_watcher_lxWS;
	class Heli_EC_01A_military_base_RF;
	class Heli_Transport_02_base_F;
	class Offroad_01_armor_base_lxWS;
	class APC_Wheeled_02_unarmed_base_lxws;
	class UAV_01_base_F;
	class UAV_02_Base_lxWS;
	class I_SFIA_APC_Tracked_02_30mm_lxWS;
	class I_SFIA_APC_Tracked_02_AA_lxWS;
	class I_SFIA_APC_Tracked_02_cannon_lxWS;
	class I_SFIA_APC_Wheeled_02_hmg_lxWS;
	class I_SFIA_APC_Wheeled_02_unarmed_lxWS;
	class I_SFIA_crew_lxWS;
	class I_SFIA_exp_lxWS;
	class I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS;
	class I_SFIA_Heli_EC_02_RF;
	class I_SFIA_HMG_02_high_lxWS;
	class I_SFIA_HMG_02_lxWS;
	class I_SFIA_MBT_02_cannon_lxWS;
	class I_SFIA_medic_lxWS;
	class I_SFIA_Mortar_lxWS;
	class I_SFIA_officer_lxWS;
	class I_SFIA_Offroad_armed_lxWS;
	class I_SFIA_Offroad_AT_lxWS;
	class I_SFIA_Offroad_lxWS;
	class I_SFIA_pilot_lxWS;
	class I_SFIA_repair_lxWS;
	class I_SFIA_sharpshooter_lxWS;
	class I_SFIA_soldier_aa_lxWS;
	class I_SFIA_Soldier_AAA_lxWS;
	class I_SFIA_Soldier_AAT_lxWS;
	class I_SFIA_Soldier_AR_lxWS;
	class I_SFIA_soldier_at_lxWS;
	class I_SFIA_Soldier_GL_lxWS;
	class I_SFIA_soldier_lxWS;
	class I_SFIA_Soldier_TL_lxWS;
	class I_SFIA_soldier_unarmed_lxWS;
	class I_SFIA_Soldier_universal_lxWS;
	class I_SFIA_survivor_lxWS;
	class I_SFIA_Truck_02_aa_lxWS;
	class I_SFIA_Truck_02_Ammo_lxWS;
	class I_SFIA_Truck_02_box_lxWS;
	class I_SFIA_Truck_02_cargo_lxWS;
	class I_SFIA_Truck_02_covered_lxWS;
	class I_SFIA_Truck_02_flatbed_lxWS;
	class I_SFIA_Truck_02_fuel_lxWS;
	class I_SFIA_Truck_02_MRL_lxWS;
	class I_SFIA_Truck_02_transport_lxWS;
	class I_SFIA_ZU23_lxWS;
	class O_crew_F;
	REMOVE_ZEUS(ION_UAV_02_backpack_lxWS,Weapon_Bag_Base)
	REMOVE_ZEUS(ION_UAV_01_backpack_lxWS,Weapon_Bag_Base)
	REMOVE_ZEUS(B_Tura_UAV_02_IED_backpack_lxWS,Weapon_Bag_Base)
	REMOVE_ZEUS(B_D_CTRG_CommandoMortar_weapon_RF,B_CommandoMortar_weapon_RF)
	REMOVE_ZEUS(B_D_soldier_UAV02_lxWS,B_soldier_UAV_lxWS)
	REMOVE_ZEUS(B_ION_soldier_UAV_01_lxWS,B_soldier_UAV_F)
	REMOVE_ZEUS(B_ION_soldier_UAV_02_lxWS,B_ION_soldier_UAV_01_lxWS)
	REMOVE_ZEUS(B_D_soldier_UAV01_lxWS,B_soldier_UAV_F)
	REMOVE_ZEUS(B_D_CTRG_soldier_UAV_lxWS,B_soldier_UAV_F)
	REMOVE_ZEUS(B_D_support_Mort_lxWS,B_support_Mort_F)
	REMOVE_ZEUS(B_D_support_MG_lxWS,B_support_MG_F)
	REMOVE_ZEUS(B_D_support_GMG_lxWS,B_support_GMG_F)
	REMOVE_ZEUS(B_D_support_AMort_lxWS,B_support_AMort_F)
	REMOVE_ZEUS(B_D_support_AMG_lxWS,B_support_AMG_F)
	REMOVE_ZEUS(B_D_soldier_AAA_lxWS,B_soldier_AAA_F)
	REMOVE_ZEUS(B_D_soldier_AAT_lxWS,B_soldier_AAT_F)
	REMOVE_ZEUS(B_D_soldier_AAR_lxWS,B_soldier_AAR_F)
	REMOVE_ZEUS(B_UN_soldier_repair_lxWS,B_soldier_repair_F)
	REMOVE_ZEUS(B_D_soldier_repair_lxWS,B_soldier_repair_F)
	REMOVE_ZEUS(B_D_recon_TL_lxWS,B_recon_TL_F)
	REMOVE_ZEUS(B_D_recon_medic_lxWS,B_recon_medic_F)
	REMOVE_ZEUS(B_D_recon_M_lxWS,B_recon_M_F)
	REMOVE_ZEUS(B_D_recon_LAT_lxWS,B_recon_LAT_F)
	REMOVE_ZEUS(B_D_recon_JTAC_lxWS,B_recon_JTAC_F)
	REMOVE_ZEUS(B_D_recon_lxWS,B_recon_F)
	REMOVE_ZEUS(B_D_recon_exp_lxWS,B_recon_exp_F)
	REMOVE_ZEUS(B_D_soldier_PG_lxWS,B_soldier_PG_F)
	REMOVE_ZEUS(B_ION_marksman_lxWS,B_soldier_M_F)
	REMOVE_ZEUS(B_D_soldier_M_lxWS,B_soldier_M_F)
	REMOVE_ZEUS(B_D_soldier_LAT2_lxWS,B_soldier_LAT2_F)
	REMOVE_ZEUS(B_D_soldier_LAT_lxWS,B_soldier_LAT_F)
	REMOVE_ZEUS(B_UN_Soldier_GL_lxWS,B_Soldier_GL_F)
	REMOVE_ZEUS(B_ION_Soldier_GL_lxWS,B_Soldier_GL_F)
	REMOVE_ZEUS(B_D_Soldier_GL_lxWS,B_Soldier_GL_F)
	REMOVE_ZEUS(B_UN_Soldier_lxWS,B_Soldier_F)
	REMOVE_ZEUS(B_UN_survivor_lxWS,B_UN_Soldier_lxWS)
	REMOVE_ZEUS(B_UN_Soldier_unarmed_lxWS,B_UN_Soldier_lxWS)
	REMOVE_ZEUS(B_D_Survivor_lxWS,B_Survivor_F)
	REMOVE_ZEUS(B_D_Soldier_unarmed_lxWS,B_Soldier_unarmed_F)
	REMOVE_ZEUS(B_ION_Soldier_lxWS,B_Soldier_F)
	REMOVE_ZEUS(B_ION_Survivor_lxWS,B_ION_Soldier_lxWS)
	REMOVE_ZEUS(B_ION_Soldier_SG_lxWS,B_ION_Soldier_lxWS)
	REMOVE_ZEUS(B_D_CTRG_Soldier_SG_lxWS,B_ION_Soldier_SG_lxWS)
	REMOVE_ZEUS(B_ION_shot_lxWS,B_ION_Soldier_lxWS)
	REMOVE_ZEUS(B_D_Soldier_lxWS,B_Soldier_F)
	REMOVE_ZEUS(B_D_soldier_mine_lxWS,B_soldier_mine_F)
	REMOVE_ZEUS(B_D_soldier_exp_lxWS,B_soldier_exp_F)
	REMOVE_ZEUS(B_D_soldier_AT_lxWS,B_soldier_AT_F)
	REMOVE_ZEUS(B_D_soldier_AA_lxWS,B_soldier_AA_F)
	REMOVE_ZEUS(B_D_Soldier_A_lxWS,B_Soldier_A_F)
	REMOVE_ZEUS(B_D_Pilot_lxWS,B_T_Pilot_F)
	REMOVE_ZEUS(B_D_Fighter_Pilot_F,B_Fighter_Pilot_F)
	REMOVE_ZEUS(B_UN_Helipilot_lxWS,B_Helipilot_F)
	REMOVE_ZEUS(B_ION_Helipilot_lxWS,B_Helipilot_F)
	REMOVE_ZEUS(B_ION_Helipilot_RF,B_ION_Helipilot_lxWS)
	REMOVE_ZEUS(B_D_HeliPilot_lxWS,B_Helipilot_F)
	REMOVE_ZEUS(B_UN_Soldier_TL_lxWS,B_Soldier_TL_F)
	REMOVE_ZEUS(B_ION_TL_lxWS,B_Soldier_TL_F)
	REMOVE_ZEUS(B_D_Soldier_TL_lxWS,B_Soldier_TL_F)
	REMOVE_ZEUS(B_D_Soldier_SL_lxWS,B_Soldier_SL_F)
	REMOVE_ZEUS(B_UN_Soldier_lite_lxWS,B_Soldier_lite_F)
	REMOVE_ZEUS(B_D_Soldier_lite_lxWS,B_Soldier_lite_F)
	REMOVE_ZEUS(B_UN_engineer_lxWS,B_engineer_F)
	REMOVE_ZEUS(B_D_engineer_lxWS,B_engineer_F)
	REMOVE_ZEUS(B_UN_crew_lxWS,B_crew_F)
	REMOVE_ZEUS(B_ION_crew_lxWS,B_crew_F)
	REMOVE_ZEUS(B_D_crew_lxWS,B_crew_F)
	REMOVE_ZEUS(B_UN_soldier_AR_lxWS,B_soldier_AR_F)
	REMOVE_ZEUS(B_UN_HeavyGunner_lxWS,B_UN_soldier_AR_lxWS)
	REMOVE_ZEUS(B_ION_soldier_AR_lxWS,B_soldier_AR_F)
	REMOVE_ZEUS(B_D_soldier_AR_lxWS,B_soldier_AR_F)
	REMOVE_ZEUS(B_UN_medic_lxWS,B_medic_F)
	REMOVE_ZEUS(B_ION_medic_lxWS,B_medic_F)
	REMOVE_ZEUS(B_D_medic_lxWS,B_medic_F)
	REMOVE_ZEUS(B_UN_officer_lxWS,B_officer_F)
	REMOVE_ZEUS(B_D_officer_lxWS,B_officer_F)
	REMOVE_ZEUS(B_D_CTRG_Soldier_lxWS,B_CTRG_Soldier_tna_F)
	REMOVE_ZEUS(B_D_CTRG_Soldier_TL_lxWS,B_CTRG_Soldier_TL_tna_F)
	REMOVE_ZEUS(B_D_CTRG_Soldier_Medic_lxWS,B_CTRG_Soldier_Medic_tna_F)
	REMOVE_ZEUS(B_D_CTRG_Soldier_M_lxWS,B_CTRG_Soldier_M_tna_F)
	REMOVE_ZEUS(B_D_CTRG_Sharpshooter_lxWS,B_D_CTRG_Soldier_M_lxWS)
	REMOVE_ZEUS(B_D_CTRG_Soldier_LAT2_lxWS,B_CTRG_Soldier_LAT2_tna_F)
	REMOVE_ZEUS(B_D_CTRG_Soldier_JTAC_lxWS,B_CTRG_Soldier_JTAC_tna_F)
	REMOVE_ZEUS(B_D_CTRG_Soldier_Exp_lxWS,B_CTRG_Soldier_Exp_tna_F)
	REMOVE_ZEUS(B_D_CTRG_support_CMort_RF,B_D_CTRG_Soldier_Exp_lxWS)
	REMOVE_ZEUS(B_D_CTRG_Soldier_HG_lxWS,B_CTRG_Soldier_AR_tna_F)
	REMOVE_ZEUS(O_SFIA_Soldier_TL_lxWS,I_SFIA_Soldier_TL_lxWS)
	REMOVE_ZEUS(O_SFIA_Soldier_AAA_lxWS,I_SFIA_Soldier_AAA_lxWS)
	REMOVE_ZEUS(O_SFIA_Soldier_AAT_lxWS,I_SFIA_Soldier_AAT_lxWS)
	REMOVE_ZEUS(O_SFIA_Soldier_GL_lxWS,I_SFIA_Soldier_GL_lxWS)
	REMOVE_ZEUS(O_SFIA_soldier_lxWS,I_SFIA_soldier_lxWS)
	REMOVE_ZEUS(O_SFIA_soldier_lite_lxWS,O_SFIA_soldier_lxWS)
	REMOVE_ZEUS(O_SFIA_survivor_lxWS,I_SFIA_survivor_lxWS)
	REMOVE_ZEUS(O_SFIA_Soldier_universal_lxWS,I_SFIA_Soldier_universal_lxWS)
	REMOVE_ZEUS(O_SFIA_soldier_unarmed_lxWS,I_SFIA_soldier_unarmed_lxWS)
	REMOVE_ZEUS(O_Tura_deserter_lxWS,I_SFIA_deserter_lxWS)
	REMOVE_ZEUS(O_Tura_soldier_UAV_lxWS,O_Tura_deserter_lxWS)
	REMOVE_ZEUS(O_Tura_HeavyGunner_lxWS,I_Tura_HeavyGunner_lxWS)
	REMOVE_ZEUS(B_Tura_HeavyGunner_lxWS,I_Tura_HeavyGunner_lxWS)
	REMOVE_ZEUS(B_Tura_deserter_lxWS,I_SFIA_deserter_lxWS)
	REMOVE_ZEUS(B_Tura_soldier_UAV_lxWS,B_Tura_deserter_lxWS)
	REMOVE_ZEUS(O_Tura_defector_lxWS,I_SFIA_defector_lxWS)
	REMOVE_ZEUS(B_Tura_defector_lxWS,I_SFIA_defector_lxWS)
	REMOVE_ZEUS(O_SFIA_soldier_at_lxWS,I_SFIA_soldier_at_lxWS)
	REMOVE_ZEUS(O_SFIA_pilot_lxWS,I_SFIA_pilot_lxWS)
	REMOVE_ZEUS(O_SFIA_repair_lxWS,I_SFIA_repair_lxWS)
	REMOVE_ZEUS(O_SFIA_Soldier_AR_lxWS,I_SFIA_Soldier_AR_lxWS)
	REMOVE_ZEUS(O_SFIA_HeavyGunner_lxWS,O_SFIA_Soldier_AR_lxWS)
	REMOVE_ZEUS(O_SFIA_soldier_aa_lxWS,I_SFIA_soldier_aa_lxWS)
	REMOVE_ZEUS(O_SFIA_officer_lxWS,I_SFIA_officer_lxWS)
	REMOVE_ZEUS(O_SFIA_crew_lxWS,I_SFIA_crew_lxWS)
	REMOVE_ZEUS(O_SFIA_exp_lxWS,I_SFIA_exp_lxWS)
	REMOVE_ZEUS(O_SFIA_sharpshooter_lxWS,I_SFIA_sharpshooter_lxWS)
	REMOVE_ZEUS(O_SFIA_medic_lxWS,I_SFIA_medic_lxWS)
	REMOVE_ZEUS(O_Tura_enforcer_lxWS,I_SFIA_enforcer_lxWS)
	REMOVE_ZEUS(B_Tura_enforcer_lxWS,I_SFIA_enforcer_lxWS)
	REMOVE_ZEUS(O_Tura_scout_lxWS,I_SFIA_scout_lxWS)
	REMOVE_ZEUS(O_Tura_thug_lxWS,I_SFIA_thug_lxWS)
	REMOVE_ZEUS(B_Tura_thug_lxWS,I_SFIA_thug_lxWS)
	REMOVE_ZEUS(B_Tura_scout_lxWS,I_SFIA_scout_lxWS)
	REMOVE_ZEUS(O_Tura_watcher_lxWS,I_SFIA_watcher_lxWS)
	REMOVE_ZEUS(B_Tura_watcher_lxWS,I_SFIA_watcher_lxWS)
	REMOVE_ZEUS(O_Tura_hireling_lxWS,I_SFIA_hireling_lxWS)
	REMOVE_ZEUS(B_Tura_hireling_lxWS,I_SFIA_hireling_lxWS)
	REMOVE_ZEUS(O_Tura_medic2_lxWS,I_SFIA_medic2_lxWS)
	REMOVE_ZEUS(B_Tura_medic2_lxWS,I_SFIA_medic2_lxWS)
	REMOVE_ZEUS(B_MBT_03_cannon_lxWS,I_MBT_03_cannon_F)
	REMOVE_ZEUS(O_SFIA_MBT_02_cannon_lxWS,I_SFIA_MBT_02_cannon_lxWS)
	REMOVE_ZEUS(B_D_MBT_01_mlrs_lxWS,B_MBT_01_mlrs_F)
	REMOVE_ZEUS(B_D_MBT_01_arty_lxWS,B_MBT_01_arty_F)
	REMOVE_ZEUS(B_D_MBT_01_TUSK_lxWS,B_MBT_01_TUSK_F)
	REMOVE_ZEUS(B_D_MBT_01_cannon_lxWS,B_MBT_01_cannon_F)
	REMOVE_ZEUS(O_SFIA_APC_Tracked_02_30mm_lxWS,I_SFIA_APC_Tracked_02_30mm_lxWS)
	REMOVE_ZEUS(O_SFIA_APC_Tracked_02_cannon_lxWS,I_SFIA_APC_Tracked_02_cannon_lxWS)
	REMOVE_ZEUS(O_SFIA_APC_Tracked_02_AA_lxWS,I_SFIA_APC_Tracked_02_AA_lxWS)
	REMOVE_ZEUS(B_D_APC_Tracked_01_rcws_lxWS,B_APC_Tracked_01_rcws_F)
	REMOVE_ZEUS(B_D_APC_Tracked_01_CRV_lxWS,B_APC_Tracked_01_CRV_F)
	REMOVE_ZEUS(B_D_APC_Tracked_01_aa_lxWS,B_APC_Tracked_01_AA_F)
	REMOVE_ZEUS(O_SFIA_Mortar_lxWS,I_SFIA_Mortar_lxWS)
	REMOVE_ZEUS(O_Tura_Mortar_lxWS,I_Tura_Mortar_lxWS)
	REMOVE_ZEUS(B_Tura_Mortar_lxWS,I_Tura_Mortar_lxWS)
	REMOVE_ZEUS(B_D_Mortar_01_lxWS,B_Mortar_01_F)
	REMOVE_ZEUS(B_D_CTRG_CommandoMortar_RF,B_CommandoMortar_RF)
	REMOVE_ZEUS(O_SFIA_ZU23_lxWS,I_SFIA_ZU23_lxWS)
	REMOVE_ZEUS(O_Tura_ZU23_lxWS,O_SFIA_ZU23_lxWS)
	REMOVE_ZEUS(B_Tura_ZU23_lxWS,O_SFIA_ZU23_lxWS)
	REMOVE_ZEUS(O_SFIA_HMG_02_lxWS,I_SFIA_HMG_02_lxWS)
	REMOVE_ZEUS(O_Tura_HMG_02_lxWS,I_Tura_HMG_02_lxWS)
	REMOVE_ZEUS(B_Tura_HMG_02_lxWS,I_Tura_HMG_02_lxWS)
	REMOVE_ZEUS(O_SFIA_HMG_02_high_lxWS,I_SFIA_HMG_02_high_lxWS)
	REMOVE_ZEUS(O_Tura_HMG_02_high_lxWS,I_Tura_HMG_02_high_lxWS)
	REMOVE_ZEUS(B_Tura_HMG_02_high_lxWS,I_Tura_HMG_02_high_lxWS)
	REMOVE_ZEUS(B_D_static_AT_lxWS,B_static_AT_F)
	REMOVE_ZEUS(B_D_static_AA_lxWS,B_static_AA_F)
	REMOVE_ZEUS(O_SFIA_APC_Wheeled_02_unarmed_lxWS,I_SFIA_APC_Wheeled_02_unarmed_lxWS)
	REMOVE_ZEUS(B_UNA_APC_Wheeled_02_unarmed_lxWS,APC_Wheeled_02_unarmed_base_lxws)
	REMOVE_ZEUS(O_SFIA_APC_Wheeled_02_hmg_lxWS,I_SFIA_APC_Wheeled_02_hmg_lxWS)
	REMOVE_ZEUS(B_UNA_APC_Wheeled_02_hmg_lxWS,APC_Wheeled_02_hmg_base_lxws)
	REMOVE_ZEUS(B_ION_APC_Wheeled_02_hmg_lxWS,APC_Wheeled_02_hmg_base_lxws)
	REMOVE_ZEUS(B_D_APC_Wheeled_01_cannon_lxWS,B_APC_Wheeled_01_cannon_F)
	REMOVE_ZEUS(B_D_APC_Wheeled_01_mortar_lxWS,APC_Wheeled_01_mortar_base_lxWS)
	REMOVE_ZEUS(B_UN_APC_Wheeled_01_command_lxWS,APC_Wheeled_01_command_base_lxWS)
	REMOVE_ZEUS(B_ION_APC_Wheeled_01_command_lxWS,APC_Wheeled_01_command_base_lxWS)
	REMOVE_ZEUS(B_D_APC_Wheeled_01_command_lxWS,APC_Wheeled_01_command_base_lxWS)
	REMOVE_ZEUS(B_D_APC_Wheeled_01_atgm_lxWS,APC_Wheeled_01_atgm_base_lxWS)
	REMOVE_ZEUS(B_D_UGV_01_rcws_lxWS,B_UGV_01_rcws_F)
	REMOVE_ZEUS(B_D_UGV_01_lxWS,B_UGV_01_F)
	REMOVE_ZEUS(O_SFIA_Truck_02_transport_lxWS,I_SFIA_Truck_02_transport_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_MRL_lxWS,I_SFIA_Truck_02_MRL_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_fuel_lxWS,I_SFIA_Truck_02_fuel_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_flatbed_lxWS,I_SFIA_Truck_02_flatbed_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_cargo_lxWS,I_SFIA_Truck_02_cargo_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_box_lxWS,I_SFIA_Truck_02_box_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_Ammo_lxWS,I_SFIA_Truck_02_Ammo_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_aa_lxWS,I_SFIA_Truck_02_aa_lxWS)
	REMOVE_ZEUS(O_Tura_Truck_02_aa_lxWS,O_SFIA_Truck_02_aa_lxWS)
	REMOVE_ZEUS(B_Tura_Truck_02_aa_lxWS,O_SFIA_Truck_02_aa_lxWS)
	REMOVE_ZEUS(O_SFIA_Truck_02_covered_lxWS,I_SFIA_Truck_02_covered_lxWS)
	REMOVE_ZEUS(B_ION_Truck_02_covered_lxWS,O_Truck_02_covered_F)
	REMOVE_ZEUS(B_D_Truck_01_flatbed_lxWS,B_Truck_01_flatbed_F)
	REMOVE_ZEUS(B_D_Truck_01_cargo_lxWS,B_Truck_01_cargo_F)
	REMOVE_ZEUS(B_UN_Truck_01_transport_lxWS,B_Truck_01_transport_F)
	REMOVE_ZEUS(B_UN_Truck_01_mover_lxWS,B_Truck_01_mover_F)
	REMOVE_ZEUS(B_UN_Truck_01_Repair_lxWS,B_Truck_01_Repair_F)
	REMOVE_ZEUS(B_D_Truck_01_Repair_lxWS,B_Truck_01_Repair_F)
	REMOVE_ZEUS(B_UN_Truck_01_fuel_lxWS,B_Truck_01_fuel_F)
	REMOVE_ZEUS(B_D_Truck_01_fuel_lxWS,B_Truck_01_fuel_F)
	REMOVE_ZEUS(B_UN_Truck_01_box_lxWS,B_Truck_01_box_F)
	REMOVE_ZEUS(B_D_Truck_01_box_lxWS,B_Truck_01_box_F)
	REMOVE_ZEUS(B_UN_Truck_01_ammo_lxWS,B_Truck_01_ammo_F)
	REMOVE_ZEUS(B_D_Truck_01_ammo_lxWS,B_Truck_01_ammo_F)
	REMOVE_ZEUS(B_D_Truck_01_mover_lxWS,B_Truck_01_mover_F)
	REMOVE_ZEUS(B_UN_Truck_01_medical_lxWS,B_Truck_01_medical_F)
	REMOVE_ZEUS(B_D_Truck_01_medical_lxWS,B_Truck_01_medical_F)
	REMOVE_ZEUS(B_UN_Truck_01_covered_lxWS,B_Truck_01_covered_F)
	REMOVE_ZEUS(B_D_Truck_01_covered_lxWS,B_Truck_01_covered_F)
	REMOVE_ZEUS(B_D_Truck_01_transport_lxWS,B_Truck_01_transport_F)
	REMOVE_ZEUS(B_ION_Quadbike_01_lxWS,B_Quadbike_01_F)
	REMOVE_ZEUS(B_D_Quadbike_01_lxWS,B_Quadbike_01_F)
	REMOVE_ZEUS(O_Tura_Pickup_01_fuel_RF,I_Tura_Pickup_fuel_rf)
	REMOVE_ZEUS(B_Tura_Pickup_01_fuel_RF,I_Tura_Pickup_fuel_rf)
	REMOVE_ZEUS(O_Tura_Pickup_01_mmg_RF,I_Tura_Pickup_01_mmg_rf)
	REMOVE_ZEUS(B_Tura_Pickup_01_mmg_RF,I_Tura_Pickup_01_mmg_rf)
	REMOVE_ZEUS(B_UN_Pickup_mmg_rf,Pickup_01_mmg_base_rf)
	REMOVE_ZEUS(B_ION_Pickup_mmg_rf,Pickup_01_mmg_base_rf)
	REMOVE_ZEUS(B_ION_Pickup_aat_rf,Pickup_01_aat_base_rf)
	REMOVE_ZEUS(O_Tura_Pickup_01_RF,I_Tura_Pickup_01_RF)
	REMOVE_ZEUS(B_Tura_Pickup_01_RF,I_Tura_Pickup_01_RF)
	REMOVE_ZEUS(B_UN_Pickup_rf,Pickup_01_base_rf)
	REMOVE_ZEUS(B_ION_Pickup_rf,Pickup_01_base_rf)
	REMOVE_ZEUS(O_Tura_Offroad_armor_AT_lxWS,I_Tura_Offroad_armor_AT_lxWS)
	REMOVE_ZEUS(B_Tura_Offroad_armor_AT_lxWS,I_Tura_Offroad_armor_AT_lxWS)
	REMOVE_ZEUS(O_SFIA_Offroad_AT_lxWS,I_SFIA_Offroad_AT_lxWS)
	REMOVE_ZEUS(O_Tura_Offroad_armor_armed_lxWS,I_Tura_Offroad_armor_armed_lxWS)
	REMOVE_ZEUS(B_Tura_Offroad_armor_armed_lxWS,I_Tura_Offroad_armor_armed_lxWS)
	REMOVE_ZEUS(O_SFIA_Offroad_armed_lxWS,I_SFIA_Offroad_armed_lxWS)
	REMOVE_ZEUS(B_ION_Offroad_armed_lxWS,Offroad_01_armed_lxWS)
	REMOVE_ZEUS(O_Tura_Offroad_armor_lxWS,I_Tura_Offroad_armor_lxWS)
	REMOVE_ZEUS(B_Tura_Offroad_armor_lxWS,I_Tura_Offroad_armor_lxWS)
	REMOVE_ZEUS(B_UN_Offroad_Armor_lxWS,Offroad_01_armor_base_lxWS)
	REMOVE_ZEUS(O_SFIA_Offroad_lxWS,I_SFIA_Offroad_lxWS)
	REMOVE_ZEUS(B_UN_Offroad_lxWS,Offroad_01_base_lxWS)
	REMOVE_ZEUS(B_ION_Offroad_lxWS,Offroad_01_base_lxWS)
	REMOVE_ZEUS(B_D_MRAP_01_hmg_lxWS,B_MRAP_01_hmg_F)
	REMOVE_ZEUS(B_D_MRAP_01_gmg_lxWS,B_MRAP_01_gmg_F)
	REMOVE_ZEUS(B_UN_MRAP_01_lxWS,B_MRAP_01_F)
	REMOVE_ZEUS(B_D_MRAP_01_lxWS,B_MRAP_01_F)
	REMOVE_ZEUS(B_D_Plane_CAS_01_dynamicLoadout_lxWS,B_Plane_CAS_01_dynamicLoadout_F)
	REMOVE_ZEUS(O_Tura_UAV_02_IED_lxWS,UAV_02_IED_Base_lxWS)
	REMOVE_ZEUS(B_Tura_UAV_02_IED_lxWS,UAV_02_IED_Base_lxWS)
	REMOVE_ZEUS(ION_UAV_02_lxWS,UAV_02_Base_lxWS)
	REMOVE_ZEUS(ION_UAV_01_lxWS,UAV_01_base_F)
	REMOVE_ZEUS(B_UN_Heli_Transport_02_lxWS,Heli_Transport_02_base_F)
	REMOVE_ZEUS(B_D_Heli_Transport_01_lxWS,B_Heli_Transport_01_F)
	REMOVE_ZEUS(B_ION_Heli_Light_02_unarmed_lxWS,O_Heli_Light_02_unarmed_F)
	REMOVE_ZEUS(B_ION_Heli_Light_02_dynamicLoadout_lxWS,O_Heli_Light_02_dynamicLoadout_F)
	REMOVE_ZEUS(B_D_Heli_Light_01_lxWS,B_Heli_Light_01_F)
	REMOVE_ZEUS(B_D_Heli_Light_01_dynamicLoadout_lxWS,B_Heli_Light_01_dynamicLoadout_F)
	REMOVE_ZEUS(O_SFIA_Heli_EC_02_RF,I_SFIA_Heli_EC_02_RF)
	REMOVE_ZEUS(B_UN_Heli_EC_01A_military_RF,Heli_EC_01A_military_base_RF)
	REMOVE_ZEUS(B_ION_Heli_EC_01_RF,Heli_EC_01_base_RF)
	REMOVE_ZEUS(O_SFIA_Heli_Attack_02_dynamicLoadout_lxWS,I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS)
	REMOVE_ZEUS(B_D_Heli_Attack_01_dynamicLoadout_lxWS,B_Heli_Attack_01_dynamicLoadout_F)
	REMOVE_ZEUS(O_GEN_APC_Wheeled_02_hmg_lxWS,O_SFIA_APC_Wheeled_02_hmg_lxWS)
	REMOVE_ZEUS(O_GEN_crew_lxWS,O_crew_F)
	REMOVE_ZEUS(B_ION_soldier_LAT2_lxWS,B_soldier_LAT2_F)
	REMOVE_ZEUS(B_UN_soldier_LAT2_lxWS,B_soldier_LAT2_F)
	REMOVE_ZEUS(B_APC_Wheeled_01_atgm_lxWS,APC_Wheeled_01_atgm_base_lxWS)
	REMOVE_ZEUS(B_APC_Wheeled_01_command_lxWS,APC_Wheeled_01_command_base_lxWS)
	REMOVE_ZEUS(B_APC_Wheeled_01_mortar_lxWS,APC_Wheeled_01_mortar_base_lxWS)
	REMOVE_ZEUS(B_D_CTRG_Soldier_sniper_lxWS,B_D_CTRG_Soldier_M_lxWS)
};
