//[_this # 1, player] remoteExecCall ["KAM_fnc_showMedicalStatus", _this # 1, false];

_this spawn {
	_u = _this # 0;
	_zeus = _this # 1;
	_name = name _u;
	_bloodVol = _u getVariable ["ace_medical_bloodVolume", "???"];
	_heartRate = _u getVariable ["ace_medical_heartRate", "???"];
	_bloodPress = _u getVariable ["ace_medical_bloodPressure", "???"];
	_pain = _u getVariable ["ace_medical_pain", "???"];
	_bloodLoss = ([_u] call ace_medical_status_fnc_getBloodLoss);
	_stateMachine = ([_u, ace_medical_STATE_MACHINE] call CBA_statemachine_fnc_getCurrentState);
	_hasStableVitals = [_u] call ace_medical_status_fnc_hasStableVitals;
	_str = format ["%1\nBlood volume: %2\nHeart rate: %3\nBlood press: %4\nBleeding: %5\nPain: %6\nState: %7\nStable: %8\n",
	_name,(round (_bloodVol * 100)) / 100,round _heartRate,_bloodPress apply {round _x},_bloodLoss,_pain,_stateMachine,_hasStableVitals];
	_str remoteExec ["hintSilent", _zeus];
};
