/*
ADV_aceCPR_fnc_canCPR - by Belbo

Determines if CPR has the ability to be successful
*/


params [
	["_target", objNull, [objNull]]
];

//rewritten to make the use cases easily distinguishable
//Dead 
if (!alive _target) exitWith { false };

// Awake or unconscious with heartrate
true

