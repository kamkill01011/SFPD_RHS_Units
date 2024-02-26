
params ["_logic"];
if (!local _logic) exitWith {};
_unit = attachedTo _logic;
_pos = position _logic;

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

for "_i" from 1 to 10 do {_unit addMagazine "rhs_mag_9x18_8_57N181S";};
_unit addWeapon "rhs_weap_makarov_pm";

deleteVehicle _logic;
