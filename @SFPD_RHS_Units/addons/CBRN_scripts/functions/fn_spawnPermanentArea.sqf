/*
	DESCRIPTION:
		This function will create a permanent contaminated area at the given location
		
	PARAMETERS:
		Position
			ATL location to spawn the mist
			
		Radius
			The radius to spawn the mist in
			
		Type
			The type of contamination to spawn
			
	RETURNS
		Nothing
		
	EXAMPLE
		[_position, _radius, _contaminationType] remoteExecCall ["CBRN_fnc_spawnPermanentArea", 0, true];
*/

params ["_position", "_radius", "_contaminationType"];

(CBRN_permanentContaminatedAreas # _contaminationType) pushBack [_position, _radius];