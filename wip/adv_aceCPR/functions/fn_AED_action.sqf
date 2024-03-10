/*
ADV-aceCPR - by Belbo
*/

params [
	"_caller"
	,"_target"
	,"_selectionName"
	,"_className"
	,"_items"
];

private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];
private _inRevive = _target call adv_aceCPR_fnc_inReviveState;

//pain will be added to all units standing too close to caller or target.
if (vehicle _target isEqualTo _target) then {
	private _bystanders = ( allUnits select {_x distance _target < 1.7} ) - [_caller];
	{ [_x, 0.2] remoteExec ["ace_medical_fnc_adjustPainLevel",_x]; nil; } count _bystanders;
};

//get and reduce used variable:
/*
private _uses = _caller getVariable ["adv_aceCPR_aed_usedVar",10];
private _newUses = _uses-1;
if ( _newUses isEqualTo 0 ) then {
	["Your AED's battery is depleted.", 2] call ace_common_fnc_displayTextStructured;
	["%1 used the Defibrillator", 2] call ace_common_fnc_displayTextStructured;
	_caller removeItem "adv_acecpr_aed";
	_caller addItem "adv_acecpr_aed_used";
};
_caller setVariable ["adv_aceCPR_aed_usedVar",_newUses];
*/

//if necessary execute the custom cpr action:
if ( _inCardiac || _inRevive ) exitWith {
	//execute aed treatment local to the target:
	if (local _target) exitWith {
		//aed event:
		["adv_aceCPR_evh_AED_local", [_caller, _target]] call CBA_fnc_localEvent;
	};
	//aed event:
	["adv_aceCPR_evh_AED_local", [_caller, _target], _target] call CBA_fnc_targetEvent;
};

//log the AED usage to the treatment log:
[_target, "activity", "%1 used the Defibrillator", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
[_target, "activity_view", "%1 used the Defibrillator", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

//return:
false;
