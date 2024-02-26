
params ["_logic"];
if (!local _logic) exitWith {};
_unit = attachedTo _logic;
_pos = position _logic;

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

[_unit, true] remoteExecCall ["allowCrewInImmobile", _unit];

[[_unit], {
	_u = _this # 0;
	_u allowCrewInImmobile true;
	{
		_x allowCrewInImmobile true;
	} forEach (crew _u);
}] remoteExec ["call", _unit];

deleteVehicle _logic;
