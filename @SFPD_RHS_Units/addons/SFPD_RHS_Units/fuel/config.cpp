
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
	
	class All;
	class AllVehicles: All {
		KAM_fuel_consumption = 1;
	};
	
	class Helicopter_Base_F;
	class Heli_Attack_01_base_F: Helicopter_Base_F {
		KAM_fuel_consumption = 3;
	};
	class RHS_AH64_base: Heli_Attack_01_base_F {
		KAM_fuel_consumption = 1;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F {
		KAM_fuel_consumption = 6;
	};
	class RHS_Ka52_base: Heli_Attack_02_base_F {
		KAM_fuel_consumption = 5;
	};
	class RHS_Mi24_base: Heli_Attack_02_base_F {
		KAM_fuel_consumption = 1.5;
	};
	class rhs_mi28_base: Heli_Attack_02_base_F {
		KAM_fuel_consumption = 1.5;
	};
	class Helicopter_Base_H: Helicopter_Base_F {
		KAM_fuel_consumption = 2.5;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 4;
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 6;
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 4;
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H {
		KAM_fuel_consumption = 4;
	};
	class RHS_MELB_base: Helicopter_Base_H {
		KAM_fuel_consumption = 2;
	};
	
	class Plane;
	class Plane_Base_F: Plane {
		KAM_fuel_consumption = 1;
	};
	class Plane_Fighter_01_Base_F: Plane_Base_F {
		KAM_fuel_consumption = 1.5;
	};
	class Plane_Fighter_02_Base_F: Plane_Base_F {
		KAM_fuel_consumption = 2.5;
	};
	class Plane_Fighter_04_Base_F: Plane_Base_F {
		KAM_fuel_consumption = 1.5;
	};
	
	class Car;
	class Car_F: Car {
		KAM_fuel_consumption = 1;
	};
	class Hatchback_01_base_F: Car_F {
		KAM_fuel_consumption = 20;
	};
	class LSV_01_base_F: Car_F {
		KAM_fuel_consumption = 30;
	};
	class LSV_02_base_F: Car_F {
		KAM_fuel_consumption = 20;
	};
	class MRAP_01_base_F: Car_F {
		KAM_fuel_consumption = 70;
	};
	class rhsusf_hmmwe_base: MRAP_01_base_F {
		KAM_fuel_consumption = 22;
	};
	class rhsusf_m1151_base: MRAP_01_base_F {
		KAM_fuel_consumption = 22;
	};
	class rhsusf_MATV_base: MRAP_01_base_F {
		KAM_fuel_consumption = 25;
	};
	class rhsusf_mrzr_base: MRAP_01_base_F {
		KAM_fuel_consumption = 12;
	};
	class rhsusf_RG33_base: MRAP_01_base_F {
		KAM_fuel_consumption = 30;
	};
	class MRAP_02_base_F: Car_F {
		KAM_fuel_consumption = 100;
	};
	class rhs_tigr_base: MRAP_02_base_F {
		KAM_fuel_consumption = 20;
	};
	class MRAP_03_base_F: Car_F {
		KAM_fuel_consumption = 200;
	};
	class Offroad_01_base_F: Car_F {
		KAM_fuel_consumption = 60;
	};
	class Offroad_02_base_F: Car_F {
		KAM_fuel_consumption = 40;
	};
	class Quadbike_01_base_F: Car_F {
		KAM_fuel_consumption = 40;
	};
	class SUV_01_base_F: Car_F {
		KAM_fuel_consumption = 50;
	};
	
	class OFrP_P4_Base: Car_F {
		KAM_fuel_consumption = 15;
	};
	
	class Truck_F: Car_F {
		KAM_fuel_consumption = 35;
	};
	class OTR21_Base: Truck_F {
		KAM_fuel_consumption = 10;
	};
	class rhs_zil131_base: Truck_F {
		KAM_fuel_consumption = 20;
	};
	class Truck_01_base_F: Truck_F {
		KAM_fuel_consumption = 85;
	};
	class rhsusf_caiman_base: Truck_01_base_F {
		KAM_fuel_consumption = 25;
	};
	class rhsusf_fmtv_base: Truck_01_base_F {
		KAM_fuel_consumption = 25;
	};
	class rhsusf_HEMTT_A4_base: Truck_01_base_F {
		KAM_fuel_consumption = 30;
	};
	class rhsusf_himars_base: Truck_01_base_F {
		KAM_fuel_consumption = 22;
	};
	class Truck_02_base_F: Truck_F {
		KAM_fuel_consumption = 35;
	};
	class Truck_02_transport_base_F: Truck_02_base_F {
		KAM_fuel_consumption = 150;
	};
	class Truck_03_base_F: Truck_F {
		KAM_fuel_consumption = 180;
	};
	class Van_01_base_F: Truck_F {
		KAM_fuel_consumption = 40;
	};
	class Van_02_base_F: Truck_F {
		KAM_fuel_consumption = 20;
	};
	
	class Wheeled_Apc_F: Car_F {
		KAM_fuel_consumption = 25;
	};
	class APC_Wheeled_01_base_F: Wheeled_Apc_F {
		KAM_fuel_consumption = 112;
	};
	class APC_Wheeled_02_base_F: Wheeled_Apc_F {
		KAM_fuel_consumption = 90;
	};
	class APC_Wheeled_03_base_F: Wheeled_Apc_F {
		KAM_fuel_consumption = 90;
	};
	class rhs_btr_base: Wheeled_Apc_F {
		KAM_fuel_consumption = 8;
	};
	class rhsgref_BRDM2: Wheeled_Apc_F {
		KAM_fuel_consumption = 60;
	};
	class rhsusf_M1117_base: Wheeled_Apc_F {
		KAM_fuel_consumption = 30;
	};
	class rhsusf_stryker_base: Wheeled_Apc_F {
		KAM_fuel_consumption = 22;
	};
	
	class xs_Snowmobile_base: Car_F {
		KAM_fuel_consumption = 35;
	};
	
	class Tank;
	class Tank_F: Tank {
		KAM_fuel_consumption = 1;
	};
	class APC_Tracked_01_base_F: Tank_F {
		KAM_fuel_consumption = 60;
	};
	class APC_Tracked_02_base_F: Tank_F {
		KAM_fuel_consumption = 110;
	};
	class rhs_zsutank_base: APC_Tracked_02_base_F {
		KAM_fuel_consumption = 20;
	};
	class rhsusf_m113tank_base: APC_Tracked_02_base_F {
		KAM_fuel_consumption = 20;
	};
	class APC_Tracked_03_base_F: Tank_F {
		KAM_fuel_consumption = 65;
	};
	class RHS_M2A2_Base: APC_Tracked_03_base_F {
		KAM_fuel_consumption = 12;
	};
	class LT_01_base_F: Tank_F {
		KAM_fuel_consumption = 20;
	};
	class MBT_01_base_F: Tank_F {
		KAM_fuel_consumption = 45;
	};
	class MBT_01_arty_base_F: MBT_01_base_F {
		KAM_fuel_consumption = 45;
	};
	class rhsusf_m109tank_base: MBT_01_arty_base_F {
		KAM_fuel_consumption = 12;
	};
	class MBT_01_mlrs_base_F: MBT_01_base_F {
		KAM_fuel_consumption = 45;
	};
	class rhsusf_m1a1tank_base: MBT_01_base_F {
		KAM_fuel_consumption = 10;
	};
	class MBT_02_base_F: Tank_F {
		KAM_fuel_consumption = 65;
	};
	class MBT_03_base_F: Tank_F {
		KAM_fuel_consumption = 60;
	};
	class MBT_04_base_F: Tank_F {
		KAM_fuel_consumption = 20;
	};
	class rhs_2s1tank_base: Tank_F {
		KAM_fuel_consumption = 20;
	};
	class rhs_2s3tank_base: Tank_F {
		KAM_fuel_consumption = 20;
	};
	class rhs_a3spruttank_base: Tank_F {
		KAM_fuel_consumption = 400;
	};
	class rhs_a3t72tank_base: Tank_F {
		KAM_fuel_consumption = 22;
	};
    class rhs_bmd_base: Tank_F {
		KAM_fuel_consumption = 15;
	};
    class rhs_bmp1tank_base: Tank_F {
		KAM_fuel_consumption = 15;
	};
    class rhs_bmp3tank_base: Tank_F {
		KAM_fuel_consumption = 20;
	};
    class rhs_t14_base: Tank_F {
		KAM_fuel_consumption = 400;
	};
    class rhs_t15_base: Tank_F {
		KAM_fuel_consumption = 400;
	};
	
	class Ship;
	class Ship_F: Ship {
		KAM_fuel_consumption = 1;
	};
	class Boat_Civil_01_base_F: Ship_F {
		KAM_fuel_consumption = 8;
	};
	class Boat_F: Ship_F {
		KAM_fuel_consumption = 8;
	};
	class Boat_Transport_02_base_F: Boat_F {
		KAM_fuel_consumption = 10;
	};
	class Rubber_duck_base_F: Boat_F {
		KAM_fuel_consumption = 3;
	};
	class rhsgref_canoe_base: Rubber_duck_base_F {
		KAM_fuel_consumption = 0.1;
	};
	class Scooter_Transport_01_base_F: Rubber_duck_base_F {
		KAM_fuel_consumption = 35;
	};
	class SDV_01_base_F: Boat_F {
		KAM_fuel_consumption = 1.5;
	};
	class rhs_bmk_t_base: Boat_F {
		KAM_fuel_consumption = 2;
	};
	class RHS_Ship: Boat_F {
		KAM_fuel_consumption = 30;
	};
};
