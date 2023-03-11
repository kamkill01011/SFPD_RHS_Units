//

_null = [] spawn {
	if(!hasInterface) exitWith {};
	if(hasInterface) exitWith {};// temp safety
	
	_lastTime = time;
	waitUntil {
		_player = ace_player;
		_dummy = _player getVariable ['Skyhook', objNull];
		if (alive _dummy) then {
			//if ((time - _lastTime) > 0.05) then {
				if ((alive _player)) then {
					_vel = velocity _player;
					//_player setVectorDir (vectorDir (_dummy getVariable ['Skyhook_vehicle', objNull]));
					_player setDir (getDir (_dummy getVariable ['Skyhook_vehicle', objNull]));
					_player setVelocity _vel;
				};
				_lastTime = time;
			//};
		} else {
			_lastTime = time;
			sleep 3;
		};
		false;
	};
};
