
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
			class doSRTransmit {};
			class doLRTransmit {};
			class calcJamming {};
			class updateRange {};
		};
	};
};



/*class Extended_Init_EventHandlers {
	class Man {
		class KAM_TFAR_on_use_radio {
			init = "hint str _this;systemChat str _this;_this call TFAR_fnc_updateRange;";
		};
	};
};*/
