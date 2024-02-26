
params ["_logic"];
if (!local _logic) exitWith {};
_unit = attachedTo _logic;
_pos = position _logic;
deleteVehicle _logic;
