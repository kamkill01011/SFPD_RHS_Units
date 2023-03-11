//[_pontoon] call KAM_fnc_pontoon...;

_this spawn {
	
	params ["_pontoon"];
	
	_pos = getPosATL _pontoon;
	_dir = getDir _pontoon;
	_vectorDir = vectorDir _pontoon;
	_start = (_pontoon getVariable ['KAM_pontoon_start', objNull]);
	_isPlaced = !(isNull _start);
	//_pos = _pos vectorAdd (_vectorDir vectorMultiply -3.5);
	_pos = _pos vectorAdd [0, -0.15, 0.25];
	deleteVehicle _pontoon;
	
	if (_isPlaced) then {
		_new = createVehicle ['KAM_rhs_pontoon_start_static', _pos, [], 0, 'CAN_COLLIDE'];
		[_new, false] remoteExec ["enableSimulation", 0];
		_new attachTo [_start, [0, -6.8, 0.75]];
		_new setDir 180;
		_new attachTo [_start, [0, -6.8, 0.75]];
		detach _new;
		_start setVariable ["KAM_pontoon_end", _new, true];
	} else {
		_new = createVehicle ['KAM_rhs_pontoon_end_static', _pos, [], 0, 'CAN_COLLIDE'];
		[_new, false] remoteExec ["enableSimulation", 0];
		_new setPos getPos _new;
		_new setVectorUp [0,0,1];
		_new setDir (_dir + 180);
		_new setPosATL _pos;
	};
	
};
