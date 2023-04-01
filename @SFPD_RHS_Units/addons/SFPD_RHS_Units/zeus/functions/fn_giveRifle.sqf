

_logic = _this # 0;
_pos = position _logic;
_unit = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if (!local _logic) exitWith {};

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

for "_i" from 1 to 10 do {_unit addMagazine "rhsgref_5Rnd_762x54_m38";};
_unit addWeapon "rhs_weap_m38";

deleteVehicle _logic;
