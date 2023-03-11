
class CfgPatches {
    class SFPD_RHS_Units_Suppression  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"a3_characters_F"};
    };
};

class CfgFunctions {
	class Suppression_Init {
		class Suppression_Init {
			class Init {
				file = "SFPD_RHS_Units\Suppression\functions\init.sqf";
				postInit = 1;
			};
		};
	};
};

