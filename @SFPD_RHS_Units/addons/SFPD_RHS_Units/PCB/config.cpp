
class CfgPatches {
    class SFPD_RHS_Units_PCB  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhsusf_c_troops",
			"rhsusf_c_m1117",
			"rhsusf_c_statics",
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

class CfgFunctions {
	class PCB {
		tag = "PCB";
		class functions {
			file = "SFPD_RHS_Units\PCB\functions";
			class cutWire {};
			class digUp {};
			class displayPCB {};
			class isIED {};
		};
	};
	class PCB_Init {
		class PCB_Init {
			class Init {
				file = "SFPD_RHS_Units\PCB\functions\init.sqf";
				postInit = 1;
			};
		};
	};
};

class CfgSounds {
	sounds[] = {}; 
	class wire_cut {
		name = "";
		sound[] = {"sounds\cutting.ogg", 1, 1};
		titles[] = {};
	};
};

class CBA_Extended_EventHandlers;

class CfgVehicles {
	
	class Items_base_F;
	class ACE_DefuseObject: Items_base_F {
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
		};
	
		_generalMacro = "ACE_DefuseObject";
		displayName = "ACE Defuse Helper";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		scope = 1;
	
		class ACE_Actions {
			// use ACE_Defuse if not IED
			class ACE_Defuse {
				distance = 1;
				displayName = "Defuse";
				condition = "([_player,_target] call ace_explosives_fnc_canDefuse) && (!([_target] call PCB_fnc_isIED))";
				statement = "[_player,_target] call ace_explosives_fnc_startDefuse;";
				exceptions[] = {"isNotSwimming"};
				icon = "z\ace\addons\explosives\UI\Defuse_ca.paa";
			};
			// limit ACE_MainActions to IED
			class ACE_MainActions {
				distance = 1;
				condition = "(vehicle _player == _player) && ([_target] call PCB_fnc_isIED)";
				class ACE_Defuse {
					distance = 1;
					displayName = "Defuse";
					condition = "([_player,_target] call ace_explosives_fnc_canDefuse) && ([_target] call PCB_fnc_isIED)";
					statement = "[_player, _target] spawn PCB_fnc_displayPCB";
					icon = "z\ace\addons\explosives\UI\Defuse_ca.paa";
				};
				class ACE_Dig_up {
					distance = 1;
					displayName = "Dig up";
					condition = "(vehicle _player == _player) && ([_target] call PCB_fnc_isIED)";
					statement = "[_player, _target] spawn PCB_fnc_digUp";
					icon = "";
				};
			};
		};
	};
	class ACE_DefuseObject_Large: ACE_DefuseObject {
		class ACE_Actions: ACE_Actions {
			/*class ACE_Defuse: ACE_Defuse {
				distance = 2;
			};*/
			class ACE_MainActions: ACE_MainActions {
				distance = 2;
				class ACE_Defuse: ACE_Defuse {
					distance = 2;
				};
				class ACE_Dig_up: ACE_Dig_up {
					distance = 2;
				};
			};
		};
	};
};


#include "dialog\MyDialog.h"

