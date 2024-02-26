
params ["_logic"];
if (!local _logic) exitWith {};
_unit = attachedTo _logic;
_pos = position _logic;


if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

//hint str ace_medical_treatment_cprSuccessChance;//[player, _unit] call ace_medical_treatment_fnc_cprLocal;//["ace_medical_CPRSucceeded", _unit] call CBA_fnc_localEvent;
[[_unit], { ["ace_medical_CPRSucceeded", (_this # 0)] call CBA_fnc_localEvent; }] remoteExecCall ["call", _unit];

deleteVehicle _logic;
