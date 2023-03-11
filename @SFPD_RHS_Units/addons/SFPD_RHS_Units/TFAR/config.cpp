
class CfgPatches {
	class SFPD_RHS_Units_TFAR  {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"tfar_core"};
	};
};

class CfgFunctions {
	class SFPD_RHS_Units_TFAR {
		tag = "TFAR";
		class functions {
			file = "SFPD_RHS_Units\TFAR\functions";
			class preparePositionCoordinates {};
			class calcJamming {};
		};
	};
};
