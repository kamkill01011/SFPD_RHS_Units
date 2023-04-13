//

_null = [] spawn {
	if(!hasInterface) exitWith {};
	["ACE_controlledUAV", {
		params ["_UAV", "_seatAI", "_turret", "_position"];
		[_seatAI, _turret] call ace_artillerytables_fnc_turretChanged;
	}] call CBA_fnc_addEventHandler;
};
