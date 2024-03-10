/*
ADV_aceCPR_fnc_AED_Local - by Belbo
*/

params ["_caller", "_target"];

//standard variables:
private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest", false];

//what's our probability?
private _probability = 85;

//let's roll the dice:
private _diceRoll = 1+floor(random 100);


//adds pain with each defib use:
[_target, 0.4] call ace_medical_fnc_adjustPainLevel;

if ( _probability >= _diceRoll ) exitWith {
	/*
	//resetting the values of the target:
	//_target setVariable ["ace_medical_inReviveState",false,true];
	//_target setVariable ["ace_medical_inCardiacArrest",false,true];
	 _target setVariable ["ace_medical_inReviveState",nil,true];
	_target setVariable ["ace_medical_inCardiacArrest",nil,true];
	
	//sets the heartrate higher than CPR:
	_target setVariable ["ace_medical_heartRate",40, true];
	
	//if the player's bloodVolume is below the minimal value, it will be reset to 30:
	private _threshold = if (isClass(configFile >> "CfgPatches" >> "diwako_ragdoll")) then {40} else {30};
	if (_target getVariable "ace_medical_bloodVolume" < _threshold) then {
		_target setVariable ["ace_medical_bloodVolume",_threshold, true];
	};
	*/

	[_target] call adv_aceCPR_fnc_giveHeartRate;
	
	//log the custom cpr success to the treatment log:
	[_target, "activity", "%1 used the Defibrillator and stabilized the patient", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	[_target, "activity_view", "%1 used the Defibrillator and stabilized the patient", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	
	//show pulse after AED:
	if (!local _caller) then {
		["adv_aceCPR_evh_showPulse", [_caller, _target], _caller] call CBA_fnc_targetEvent;
	};
	["adv_aceCPR_evh_showPulse", [_caller, _target]] call CBA_fnc_localEvent;

	//return:
	true;
};

//show pulse after AED:
if (!local _caller) then {
	["adv_aceCPR_evh_showPulse", [_caller, _target], _caller] call CBA_fnc_targetEvent;
};
["adv_aceCPR_evh_showPulse", [_caller, _target]] call CBA_fnc_localEvent;

//log the AED usage to the treatment log:
[_target, "activity", "%1 used the Defibrillator", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
[_target, "activity_view", "%1 used the Defibrillator", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

false;
