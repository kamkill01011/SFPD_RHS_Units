//[_pontoon] call KAM_fnc_pontoon...;

params ["_pontoon"];


_start = _pontoon getVariable ['KAM_pontoon_start', objNull];

_start setVariable ["KAM_pontoon_end", objNull, true];

_pontoon setVariable ["KAM_pontoon_start", objNull, true];

[_pontoon, true] remoteExec ["enableSimulationGlobal", 2];
