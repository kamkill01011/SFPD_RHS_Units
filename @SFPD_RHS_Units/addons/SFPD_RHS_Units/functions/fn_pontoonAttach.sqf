//[_pontoon] call KAM_fnc_pontoon...;

_this spawn {
	
	params ["_pontoon"];
	
	[_pontoon, false] remoteExec ["enableSimulationGlobal", 2];
	
	_close = nearestObjects [_pontoon, ["rhs_pontoon_float", "KAM_rhs_pontoon_end_static"], 20];
	_possible = _close select {(isNull (_x getVariable ['KAM_pontoon_end', objNull])) && ((!(isNull (_x getVariable ['KAM_pontoon_start', objNull]))) || ((typeOf _x) == "KAM_rhs_pontoon_end_static"))};
	if ((count _possible) == 0) exitWith{};
	_start = _possible # 0;
	
	_start setVariable ["KAM_pontoon_end", _pontoon, true];
	
	_pontoon setVariable ["KAM_pontoon_start", _start, true];
	
	if ((typeOf _start) == "KAM_rhs_pontoon_end_static") then {
		_pontoon attachTo [_start, [0, -6.8, -0.75]];
	} else {
		_pontoon attachTo [_start, [0, -6.6, 0]];
	};
	
	detach _pontoon;
	
};
