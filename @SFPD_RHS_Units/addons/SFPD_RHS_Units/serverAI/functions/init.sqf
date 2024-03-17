//

_null = [] spawn {
	if (!isServer) exitWith {};
	
	waitUntil {
		{
			_g = _x;
			_units = (units _g);
			private _vehicles = [];
			private _transfer = ((units _g) isNotEqualTo []) && {(({(vehicle _x) != _x} count (units _g)) == 0) && {({!(_x getVariable ["KAM_transfered", local _x])} count (units _g)) > 0}};
			if (_transfer) then {
				{
					_u = _x;
					if (isPlayer _u) exitWith {
						_transfer = false;
					};
					
					_u setVariable ["KAM_tmpLoadout", getUnitLoadout _u, true];
					
					_v = vehicle _u;
					if (_v != _u) then {
						_ufc = (fullCrew _v) select {(_x # 0) == _u};
						if (count _ufc == 1) then {
							_vehicles pushBack [_v, (_ufc # 0)];
						};
					};
				} forEach (units _g);
			};
			
			private _transfering = _g getVariable ["KAM_transfering", false];
			if (_transfer && !_transfering) then {
				_g setVariable ["KAM_transfering", true, false];
				{_x setVariable ["KAM_transfered", true, false];} forEach (units _g);
				[_g, _vehicles] spawn {
					params ["_g", "_vehicles"];
					_g setGroupOwner 2;
					
					private _startTime = time;
					waitUntil {
						sleep 0.1;
						
						{
							_v = (_x # 0);
							(_x # 1) params ["_u", "_r", "_ci", "_tp"];
							if (_r == "driver") then {_u moveInDriver _v;};
							if (_r == "commander") then {_u moveInCommander _v;};
							if (_r == "gunner") then {_u moveInGunner _v;};
							if (_r == "turret") then {_u moveInTurret [_v, _tp];};
							if (_r == "cargo") then {_u moveInCargo [_v, _ci];};
						} forEach _vehicles;
						
						((local _g) or {(isNull _g) or {({alive _x} count units _g) == 0 or {time - _startTime > 10}}});
					};
					
					{
						private _loadout = _x getVariable ["KAM_tmpLoadout", [[]]];
						private _copy = +_loadout;
						_copy deleteAt 7;
						if (({count _x != 0} count _copy) > 1) then {_x setUnitLoadout _loadout;} 
						else {_x setUnitLoadout (typeOf _x);};
					} forEach units _g;
					
					{
						_v = (_x # 0);
						(_x # 1) params ["_u", "_r", "_ci", "_tp"];
						if (_r == "driver") then {_u moveInDriver _v;};
						if (_r == "commander") then {_u moveInCommander _v;};
						if (_r == "gunner") then {_u moveInGunner _v;};
						if (_r == "turret") then {_u moveInTurret [_v, _tp];};
						if (_r == "cargo") then {_u moveInCargo [_v, _ci];};
					} forEach _vehicles;
				};
				_g setVariable ["KAM_transfering", false, false];
			};
		} forEach allGroups;
		sleep 1;
		false;
	};
};
