//[_this # 1, -20, 433.0, 1000] remoteExecCall ["KAM_fnc_addDevice", 0, true];

_this spawn {
	_o = _this # 0;
	_o setVariable ["#EM_ObjectsStre", _this # 1];
	_o setVariable ["#EM_ObjectsFreq", _this # 2];
	_o setVariable ["#EM_ObjectsRange", _this # 3];
	_EM_Objects = missionNamespace getVariable ["#EM_Objects", []];
	_EM_Objects pushBack _o;
	missionNamespace setVariable ["#EM_Objects", _EM_Objects];
};
