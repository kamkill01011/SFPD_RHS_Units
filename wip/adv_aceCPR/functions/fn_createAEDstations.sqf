/*
ADV-aceCPR - by Belbo
*/

waitUntil {time > 1};

//create action for adv_aceCPR_AED_stationType
adv_aceCPR_aed_stationAction = [
	"adv_aceCPR_AED_stationary",
	"Activate Defibrillator",
	"\adv_aceCPR\ui\defib_action.paa",
	{
		params ["_target","_caller","_arguments"];
		[_caller,_target] call adv_aceCPR_fnc_useAEDStation
	},
	{
		params ["_target","_caller"];
		!(_caller getVariable ['adv_aceCPR_usedAEDStation',false])
	},
	nil,[],[0,0,0]
] call ace_interact_menu_fnc_createAction;

//adding the action
["Land_Defibrillator_F" , 0, ["ACE_MainActions"], adv_aceCPR_aed_stationAction, false] call ace_interact_menu_fnc_addActionToClass;


nil
