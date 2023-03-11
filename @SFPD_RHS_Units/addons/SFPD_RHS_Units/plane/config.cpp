
class CfgPatches {
    class SFPD_RHS_Units_plane  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Functions_F",
			"rhs_c_weapons"
		};
    };
};

class CfgMagazines {
    class VehicleMagazine;
    class magazine_Fighter01_Gun20mm_AA_x450 : VehicleMagazine {
		count = 2000;
    };
    class magazine_Fighter02_Gun30mm_AA_x180 : VehicleMagazine {
		count = 2000;
    };
    class magazine_Fighter04_Gun20mm_AA_x250 : VehicleMagazine {
		count = 2000;
    };
    class 1000Rnd_Gatling_30mm_Plane_CAS_01_F : VehicleMagazine {
		count = 2000;
    };
    class 500Rnd_Cannon_30mm_Plane_CAS_02_F : 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
		count = 2000;
    };
};
