
class CfgPatches {
    class SFPD_RHS_Units_fuel  {
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
	
	class Helicopter_Base_H;
	class Heli_light_03_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 2;
	};
	class RHS_UH1_Base: Heli_light_03_base_F {
		KAM_fuel_consumption = 1;
	};
	
	class Heli_Transport_02_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 4;
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 2;
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 2;
	};
	
	class Heli_Attack_01_base_F;
	class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F {
		KAM_fuel_consumption = 2;
	};
	
	class Heli_Attack_02_base_F;
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F {
		KAM_fuel_consumption = 4;
	};
	class RHS_Ka52_base: Heli_Attack_02_base_F {
		KAM_fuel_consumption = 2;
	};
	
	class Heli_Light_02_base_F;
	class RHS_Mi8_base: Heli_Light_02_base_F {
		KAM_fuel_consumption = 2;
	};
	
	class Plane_Base_F;
	class Plane_Fighter_01_Base_F: Plane_Base_F {
		KAM_fuel_consumption = 20;
	};
	class Plane_Fighter_02_Base_F: Plane_Base_F {
		KAM_fuel_consumption = 20;
	};
	class Plane_Fighter_04_Base_F: Plane_Base_F {
		KAM_fuel_consumption = 20;
	};
	
	class Car_F;
	class LSV_01_base_F: Car_F {
		KAM_fuel_consumption = 2;
	};
	class LSV_02_base_F: Car_F {
		KAM_fuel_consumption = 2;
	};
	class MRAP_01_base_F: Car_F {
		KAM_fuel_consumption = 4;
	};
	class rhsusf_hmmwe_base: MRAP_01_base_F {
		KAM_fuel_consumption = 2;
	};
	class rhsusf_mrzr_base: MRAP_01_base_F {
		KAM_fuel_consumption = 1;
	};
	class MRAP_02_base_F: Car_F {
		KAM_fuel_consumption = 4;
	};
	class rhs_tigr_base: MRAP_02_base_F {
		KAM_fuel_consumption = 2;
	};
	class MRAP_03_base_F: Car_F {
		KAM_fuel_consumption = 4;
	};
	
	class Truck_F: Car_F {
		KAM_fuel_consumption = 4;
	};
	class rhs_truck: Truck_F {
		KAM_fuel_consumption = 2;
	};
	class Truck_01_base_F;
	class rhsusf_fmtv_base: Truck_01_base_F {
		KAM_fuel_consumption = 2;
	};
	class Truck_02_base_F;
	class Truck_02_transport_base_F: Truck_02_base_F {
		KAM_fuel_consumption = 8;
	};
	class Truck_03_base_F: Truck_F {
		KAM_fuel_consumption = 8;
	};
	
	class Wheeled_Apc_F: Car_F {
		KAM_fuel_consumption = 4;
	};
	
	class AFV_Wheeled_01_base_F: Wheeled_Apc_F {
		KAM_fuel_consumption = 2;
	};
	class rhs_btr_base: Wheeled_Apc_F {
		KAM_fuel_consumption = 2;
	};
	class rhsusf_stryker_base: Wheeled_Apc_F {
		KAM_fuel_consumption = 2;
	};
	
	class xs_Snowmobile_base: Car_F {
		KAM_fuel_consumption = 2;
	};
	
	class All;
	class AllVehicles: All {
		KAM_fuel_consumption = 1;
	};
	
	class Tank;
	class Tank_F: Tank {
		KAM_fuel_consumption = 2;
	};
	
	class APC_Tracked_01_base_F: Tank_F {
		KAM_fuel_consumption = 8;
	};
	class APC_Tracked_02_base_F: Tank_F {
		KAM_fuel_consumption = 8;
	};
	
	class rhs_zsutank_base: APC_Tracked_02_base_F {
		KAM_fuel_consumption = 4;
	};
	
	class APC_Tracked_03_base_F;
	class I_APC_tracked_03_base_F: APC_Tracked_03_base_F {
		KAM_fuel_consumption = 2;
	};
	
	class LT_01_base_F: Tank_F {
		KAM_fuel_consumption = 2;
	};
	
	class MBT_01_base_F: Tank_F {
		KAM_fuel_consumption = 4;
	};
	
	class MBT_01_arty_base_F;
	class rhsusf_m109tank_base: MBT_01_arty_base_F {
		KAM_fuel_consumption = 2;
	};
	
	class rhsusf_m1a1tank_base: MBT_01_base_F {
		KAM_fuel_consumption = 2;
	};
	
	class MBT_02_base_F: Tank_F {
		KAM_fuel_consumption = 4;
	};
	class MBT_03_base_F: Tank_F {
		KAM_fuel_consumption = 4;
	};
	class rhs_2s1tank_base: Tank_F {
		KAM_fuel_consumption = 4;
	};
	class rhs_2s3tank_base: Tank_F {
		KAM_fuel_consumption = 4;
	};
	class rhs_a3spruttank_base: Tank_F {
		KAM_fuel_consumption = 4;
	};
	class rhs_t14_base: Tank_F {
		KAM_fuel_consumption = 8;
	};
	class rhs_t15_base: Tank_F {
		KAM_fuel_consumption = 8;
	};
	class UGV_02_Base_F: Tank_F {
		KAM_fuel_consumption = 1;
	};
	
	class Boat_Civil_01_base_F;
	class C_Boat_Civil_01_F: Boat_Civil_01_base_F {
		KAM_fuel_consumption = 2;
	};
	
	class Boat_F;
	class Boat_Armed_01_base_F: Boat_F {
		KAM_fuel_consumption = 2;
	};
	
	class RHS_Ship;
	class rhsusf_mkvsoc: RHS_Ship {
		KAM_fuel_consumption = 4;
	};
};
