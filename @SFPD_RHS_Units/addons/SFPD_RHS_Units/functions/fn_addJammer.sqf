//[_this # 1, 500, 10, 10000, true] remoteExecCall ["KAM_fnc_addJammer", 0, _this # 1];

_this spawn {
	_o = _this # 0;
	_o setVariable ["TFAR_jammer_range", _this # 1];
	_o setVariable ["TFAR_jammer_min", _this # 2];
	_o setVariable ["TFAR_jammer_max", _this # 3];
	_o setVariable ["TFAR_jammer_canDie", _this # 4];
	_TFAR_jammers = missionNamespace getVariable ["SFPD_RHS_Units_TFAR_jammers", []];
	_TFAR_jammers pushBackUnique _o;
	missionNamespace setVariable ["SFPD_RHS_Units_TFAR_jammers", _TFAR_jammers];
};
