
class CfgPatches {
    class SFPD_RHS_Units_sleep  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"a3_characters_F"};
    };
};

class CfgFunctions {
	class sleep_Init {
		class sleep_Init {
			class Init {
				file = "SFPD_RHS_Units\sleep\functions\init.sqf";
				postInit = 1;
			};
		};
	};
};

