//

_null = [] spawn {
	if (!isServer) exitWith {};
	
	["AllVehicles", "initPost", {
		params ["_entity"];
		if (local _entity) exitWith {};
		if (isPlayer _entity) exitWith {};
		if (!(_entity in allUnits)) exitWith {};
		_g = group (_entity);
		{
			_x setVariable ["KAM_tmpLoadout", getUnitLoadout _x, true];
		} forEach units _g;
		{
			if (!(local _x)) then { _x setOwner 2; };
		} forEach units _g;
		[_g] spawn {
			params ["_g"];
			_g setGroupOwner 2;
			waitUntil {sleep 1; ((local _g) or {(isNull _g) or {({alive _x} count units _g) == 0}});};
			{
				private _loadout = _x getVariable ["KAM_tmpLoadout", []];
				if !(_loadout isEqualTo []) then { _x setUnitLoadout _loadout; };
				_x setVariable ["KAM_tmpLoadout", nil, true];
			} forEach units _g;
		};
	}, nil, nil, false] call CBA_fnc_addClassEventHandler;
};
