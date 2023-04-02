

_logic = _this # 0;
_pos = position _logic;
_unit = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if (!local _logic) exitWith {};

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

for "_i" from 1 to 5 do {_unit addMagazine "rhs_30Rnd_545x39_7N6M_AK";};
_unit addWeapon "rhs_weap_aks74";

deleteVehicle _logic;
