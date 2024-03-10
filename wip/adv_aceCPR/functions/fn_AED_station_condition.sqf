/*
ADV-aceCPR - by Belbo
*/

params [
	"_caller"
	,"_target"
];

private _return = !([_target] call ace_common_fnc_isAwake) && {count (_target nearEntities [["Land_Defibrillator_F"], 5]) > 0 && _caller getVariable ['adv_aceCPR_usedAEDStation',false]};

_return
