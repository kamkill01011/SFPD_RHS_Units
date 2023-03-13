
class CfgPatches {
    class SFPD_RHS_Units_AK  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"A3_Weapons_F_Exp_Rifles_AK12",
			"cba_jam",
			"a3_characters_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Functions_F",
			"rhs_c_weapons"
		};
    };
};



class CfgMagazineWells {
	class CBA_762x39_AK {
		SFPD_RHS_Magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_Tracer_F", "30Rnd_762x39_AK12_Lush_Mag_F", "30Rnd_762x39_AK12_Lush_Mag_Tracer_F", "30Rnd_762x39_AK12_Arid_Mag_F", "30Rnd_762x39_AK12_Arid_Mag_Tracer_F"};
	};
	class CBA_762x39_RPK {
		SFPD_RHS_Magazines[] = {"75Rnd_762x39_Mag_F", "75Rnd_762x39_Mag_Tracer_F", "75rnd_762x39_AK12_Mag_F", "75rnd_762x39_AK12_Mag_Tracer_F", "75rnd_762x39_AK12_Lush_Mag_F", "75rnd_762x39_AK12_Lush_Mag_Tracer_F", "75rnd_762x39_AK12_Arid_Mag_F", "75rnd_762x39_AK12_Arid_Mag_Tracer_F"};
	};
};


class Mode_Burst;
class CfgWeapons {
	class Rifle_Base_F;
	class arifle_AK12_base_F: Rifle_Base_F {
		modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_medium_optics2","Burst_medium"};
		magazineWell[] = {"CBA_762x39_AK"};
		class Burst: Mode_Burst {
			burst = 3;
			textureType = "burst";
		};
    };
	class arifle_RPK12_base_F: arifle_AK12_base_F {
		modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
		magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
    };
};
