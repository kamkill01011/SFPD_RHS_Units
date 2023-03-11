if (!isServer) exitWith {};

// Register fired event handlers
["ace_firedPlayer", CBRN_fnc_throwGrenade] call CBA_fnc_addEventHandler;
["ace_firedPlayerNonLocal", CBRN_fnc_throwGrenade] call CBA_fnc_addEventHandler;
["ace_firedNonPlayer", CBRN_fnc_throwGrenade] call CBA_fnc_addEventHandler;
