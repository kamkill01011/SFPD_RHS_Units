
class CfgPatches {
    class SFPD_RHS_Units_NBC  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"a3_characters_F"};
    };
};

class CfgFunctions {
	class NBC_Init {
		class NBC_Init {
			class Init {
				file = "SFPD_RHS_Units\NBC\functions\init.sqf";
				postInit = 1;
			};
		};
	};
};

