
class CfgPatches {
    class SFPD_RHS_FR_VEH_MAG  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Functions_F",
			"OFrP_A3_Vehicles_Weapons",
			"rhs_c_weapons"
		};
    };
};

class CfgVehicles {
	class LandVehicle;
	class Car: LandVehicle {
		class NewTurret;
	};
	class Car_F: Car {
		class Turrets {
			class MainTurret: NewTurret {
				//
			};
		};
	};
	
    class OFrP_P4_Base: Car_F {
		class Turrets: Turrets {
			//
		};
    };
    class OFrP_P4_AANF1_base: OFrP_P4_Base {
		class Turrets: Turrets {
			class AANF1_Main_Turret: MainTurret {
				magazines[] = { "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer" };
			};
		};
    };
    class OFrP_P4_PATSAS_M2_AANF1_base: OFrP_P4_Base {
		class Turrets: Turrets {
			class AANF1_1_Turret: MainTurret {
				magazines[] = { "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer" };
			};
			class M2_Turret: MainTurret {
				magazines[] = { "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red" };
			};
		};
    };
	
    class OFrP_VPS2_Base: Car_F {
		class Turrets: Turrets {
			//
		};
    };
    class OFrP_VPS2_MAG58_base: OFrP_VPS2_Base {
		class Turrets: Turrets {
			class MAG58_Turret: MainTurret {
				magazines[] = { "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer", "OFrP_AmmoBox_762x51_200Rnd_Tracer" };
			};
		};
    };
    class OFrP_VPS2_MAG58_M2_Base: OFrP_VPS2_MAG58_base {
		class Turrets: Turrets {
			class M2_Turret: MainTurret {
				magazines[] = { "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red" };
			};
		};
    };
};
