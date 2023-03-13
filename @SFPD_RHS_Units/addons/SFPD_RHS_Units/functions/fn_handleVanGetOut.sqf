//[_this # 0] call KAM_fnc_handleVanGetOut;


(_this # 0) params ["_vehicle", "_role", "_unit", "_turret"];

if (!(local _vehicle)) exitWith {};

_dist = 1;

_wtm = _vehicle worldToModel (_unit modelToWorld [0,0,0]);
if (_role == "driver") exitWith {
	[[_vehicle,'Door_1_source', 1], {params ["_t", "_s", "_v"]; _t animateDoor [_s, _v];}] remoteExecCall ['call', 0];
	//_vehicle animateDoor ['Door_1_source', 1];
	[[_unit, _vehicle], {
		params ["_u", "_v"];
		_pos = _v modelToWorld [-1.2,1.3,-1.62];
		_u setDir ((getDir _u) + 90);
		_u setPosWorld _pos;
	}] remoteExec ["call", _unit];
};
_d2 = _wtm distance2D [1.75024,2.22746,-1.52174];
_d3 = _wtm distance2D [1.68408,1.22914,-1.56275];
_d4 = _wtm distance2D [0.460815,-3.84132,-1.56274];
_d5 = _wtm distance2D [-0.750854,-3.84132,-1.56274];
_d45 = _d4 min _d5;
_t1 = _d2 < _d3;
_t2 = _d2 < _d45;
_t3 = _d3 < _d45;
if (_t1 && _t2) exitWith {
	[[_vehicle,'Door_2_source', 1], {params ["_t", "_s", "_v"]; _t animateDoor [_s, _v];}] remoteExecCall ['call', 0];
	//_vehicle animateDoor ['Door_2_source', 1];
	[[_unit, _vehicle], {
		params ["_u", "_v"];
		_pos = _v modelToWorld [1.2,1.3,-1.62];
		_u setDir ((getDir _u) - 90);
		_u setPosWorld _pos;
	}] remoteExec ["call", _unit];
};
if (!_t1 && _t3) exitWith {
	[[_vehicle,'Door_3_source', 1], {params ["_t", "_s", "_v"]; _t animateDoor [_s, _v];}] remoteExecCall ['call', 0];
	//_vehicle animateDoor ['Door_3_source', 1];
};
if (!_t2 && !_t3) exitWith {
	[[_vehicle,'Door_4_source', 1], {params ["_t", "_s", "_v"]; _t animateDoor [_s, _v];}] remoteExecCall ['call', 0];
	//_vehicle animateDoor ['Door_4_source', 1];
};
