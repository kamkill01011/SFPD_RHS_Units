
class CfgPatches {
    class SFPD_RHS_Units_SkyHook  {
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

class Extended_Respawn_EventHandlers {
    class CAManBase {
        class SFPD_RHS_Units_SkyHook_respawn {
            respawn = "(_this # 0) setVariable ['Skyhook', objNull, true];";
        };
    };
};

class CfgFunctions {
	class SkyHook {
		tag = "SkyHook";
		class functions {
			file = "SFPD_RHS_Units\SkyHook\functions";
			class skyhook {};
			class stabilization {};
		};
	};
};

class CfgVehicles {
	class ace_fastroping_helper;
	class KAM_Skyhook: ace_fastroping_helper {
		class ACE_Actions {
			class AttachSkyhook {
				displayName = "Attach";
				condition = "(!(alive(_target getVariable ['unit', objNull])))";
				//statement = "_target setVariable ['unit', _player, true];_player setVariable ['Skyhook', _target, true];_player attachTo [_target, (_target getVariable ['sykhook_a', [0,0,-1]])];_player setVectorUp (_target getVariable ['sykhook_u', [0,0,1]]);";
				statement = "_target setVariable ['unit', _player, true];_player setVariable ['Skyhook', _target, true];[_player, _target] call SkyHook_fnc_stabilization";
				distance = 7;
				position = [0,0,0];
			};
		};
	};
	
	class Air;
	class Helicopter: Air {
		class ACE_SelfActions {
			class DeploySkyhook {
				displayName = "Deploy skyhook";
				condition = "(!(alive((vehicle _target) getVariable ['Skyhook', objNull])))";
				statement = "[(vehicle _target)] call SkyHook_fnc_skyhook";
			};
			class CutSkyhook {
				displayName = "Cut skyhook";
				condition = "(alive((vehicle _target) getVariable ['Skyhook', objNull]))";
				statement = "{deleteVehicle _x} forEach ((vehicle _target) getVariable ['SkyhookAll', []])";
			};
		};
	};
	
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class DetachSkyhook {
				displayName = "Detach";
				condition = "(alive(_target getVariable ['Skyhook', objNull]))";
				//statement = "(_target getVariable ['Skyhook', objNull]) setVariable ['unit', objNull, true];_player setVariable ['Skyhook', objNull, true];detach _player;";
				statement = "(_target getVariable ['Skyhook', objNull]) setVariable ['unit', objNull, true];_player setVariable ['Skyhook', objNull, true];";
			};
		};
	};
};

