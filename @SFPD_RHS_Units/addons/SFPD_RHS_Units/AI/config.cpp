
class CfgPatches {
    class SFPD_RHS_Units_AI  {
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

class CfgBrains {
    class DefaultSoldierBrain {
        class Components {
            class AIBrainSuppressionComponent {
				maxSuppression = 2.0;
                worstDecreaseTime = 40.0;// in seconds for 0.0 skill
                bestDecreaseTime = 4.0;  // in seconds for 1.0 skill
            };
            class AIBrainAimingErrorComponent {
                maxAngularError = 0.25;       // half of the error cone in radians
                maxAngularErrorTurrets = 0.50;// half of the error cone in radians, used for turrets
                worstDecreaseTime = 5.0;// how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely 
                bestDecreaseTime = 1.0; // how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
                turningInfluence = 1.2; // importance of turning in algorithm, multiplier
            };
        };
    };
};

class Mode_SemiAuto;
class CfgWeapons {
    
	class MGun;
    class LMG_RCWS : MGun {
        aiDispersionCoefX = 10;
        aiDispersionCoefY = 6;
        class manual : MGun {};
        class close : manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 10.0;
            aiDispersionCoefY = 6.0;
        };
        class short : close {
            aiBurstTerminable = 0;
        };
        class medium : close {
            aiBurstTerminable = 0;
        };
        class far : close {
            aiBurstTerminable = 0;
        };
    };
    class HMG_127 : LMG_RCWS {
        class manual : MGun {};
        class close : manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 10.0;
            aiDispersionCoefY = 6.0;
        };
        class short : close {
            aiBurstTerminable = 0;
        };      
        class medium : close {
            aiBurstTerminable = 0;
        }; 
        class far : close {
            aiBurstTerminable = 0;
        };
    };
    class LMG_coax : LMG_RCWS {
        class manual : MGun {};
        class close : manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 10.0;
            aiDispersionCoefY = 6.0;
        };
        class short : close {
            aiBurstTerminable = 0;
        };     
        class medium : close {
            aiBurstTerminable = 0;
        }; 
        class far : close {
            aiBurstTerminable = 0;
        };
    };
	
	class cannonCore;
    class autocannon_Base_F: CannonCore {
        aiDispersionCoefX = 6;
        aiDispersionCoefY = 5;
        //cursor = "EmptyCursor";
        //cursorAim = "cannon";
    };
	
    class GrenadeLauncher;
    class UGL_F : GrenadeLauncher {
        aiDispersionCoefX = 6;
        aiDispersionCoefY = 10;
        aiRateOfFire = 100;
        aiRateOfFireDistance = 500;
		
	};
    
    class LauncherCore;
    class LauncherBase_F;
    class Launch_RPG7_F : LauncherBase_F {
        primary = 11;
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 3;
            aiDispersionCoefY = 5;
            maxRange = 400;
            maxRangeProbab = 0.4;
            midRange = 250;
            midRangeProbab = 0.9;
            minRange = 10;
            minRangeProbab = 0.3;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        }; 
    };
    class launch_RPG32_F : LauncherBase_F {
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 3;
            aiDispersionCoefY = 5;
            maxRange = 600;
            maxRangeProbab = 0.85;
            midRange = 40;
            midRangeProbab = 0.85;
            minRange = 10;
            minRangeProbab = 0.2;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
};

class CfgAmmo {
    class RocketCore;
    class RocketBase;
    class R_PG7_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 40;
        effectsMissile = "missile3";
    };
    class M_SPG9_HEAT : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
    };
    class R_PG32V_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 40;
    };
    class R_MRAAWS_HEAT_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 40;
    };
    class rhs_rpg26_rocket;
    class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1; 
        cost = 40;
    };
};
