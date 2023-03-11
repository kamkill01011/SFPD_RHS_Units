

_logic = _this # 0;
_pos = position _logic;
_unit = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if (!local _logic) exitWith {};

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

[[_unit], {
	_u = _this # 0;
	_u action ['SwitchWeapon', _u, _u, 100];
}] remoteExec ["call", _unit];

deleteVehicle _logic;
