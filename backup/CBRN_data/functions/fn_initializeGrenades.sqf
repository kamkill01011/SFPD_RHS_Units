
if (isServer && CBRN_set_useACECommon) then {
	['ace_firedPlayer', {_this call CBRN_fnc_handleGrenades}] call CBA_fnc_addEventHandler;
	['ace_firedPlayerNonLocal', {_this call CBRN_fnc_handleGrenades}] call CBA_fnc_addEventHandler;
	['ace_firedNonPlayer', {_this call CBRN_fnc_handleGrenades}] call CBA_fnc_addEventHandler;
};
