/*
	DESCRIPTION:
		This function will create a contaminated area at the given location
		
	PARAMETERS:
		Position
			ATL location to spawn the mist
			
		Radius
			The radius to spawn the mist in
			
		Lifetime
			How long the mist should linger in seconds
			
		Type
			The type of contamination to spawn
			
		Vertical Spread (OPTIONAL)
			The total amount of vertical spread of the mist downwards in meters (Defaults to 2)
			
		Thickness (OPTIONAL)
			The thickness of the mist (Default is 1)
			
	RETURNS
		Nothing
		
	EXAMPLE
		[getPosASL player, 25, 60, 1] call CBRN_fnc_spawnMist
*/

params ["_position", "_radius", "_lifetime", "_contaminationType",
	["_verticleSpread", 2],
	["_thickness", 1]
];
private _endTime = time + _lifetime;
[_position, _radius, _endTime, _contaminationType, _verticleSpread, _thickness] remoteExecCall ["CBRN_fnc_spawnMistLocal", 0, _lifetime > 600];
