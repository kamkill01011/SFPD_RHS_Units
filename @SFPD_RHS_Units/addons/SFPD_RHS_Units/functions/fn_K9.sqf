//[_this # 1, false, 5, 2.5] call KAM_fnc_K9;
//this switchMove "";
//https://community.bistudio.com/wiki/getAttackTarget

if(!isServer)exitWith{};

//_own = _this # 0;
params ["_own",["_AI", false], ["_life", 5], ["_resistance", 2.5]];

_dog = (createGroup (side _own)) createUnit ["Alsatian_SandBlack_F", getPos _own, [], 5, "NONE"];
[_dog] joinSilent (createGroup (side _own));
_dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
_dog setBehaviour "CARELESS";
_dog setSpeaker "NoVoice";
_dog setVariable ["K9", true, true];
_dog setVariable ["own", _own, true];
_own setVariable ["dog", _dog, true];
_dog setVariable ["dogMaxLife", _life, true];
_dog setVariable ["dogLife", _life, true];
_dog setVariable ["dogRes", _resistance, true];

_dog addEventHandler ["HandleDamage", {
	params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];
	if (_damage > (_unit getVariable ["dogRes", 2.5])) then {
		_dogLife = (_unit getVariable ["dogLife", 5]) - 1;
		if (_dogLife <= 0) then {
			_unit setDamage 1;
		};
		_unit setVariable ["dogLife", _dogLife, true];
	};
	0;
}];

[_dog] spawn {
	params ["_dog"];
	_lastPos = getPos _dog;
	waitUntil {
		_dogDir = getDir _dog;
		_startPos = (getPosASL _dog) vectorAdd [0,0,0.5];
		_endPos = [_startPos, 5, _dogDir] call BIS_fnc_relPos;
		_inter = lineIntersectsSurfaces [_startPos, _endPos, _dog];
		if ((count _inter) > 0) then {
			_dist = ((_inter # 0) # 0) distance _startPos;
			if ((_dist < 1) and (isNull attachedTo _dog)) then {
				_dog setPos _lastPos;
				_interLeft = lineIntersectsSurfaces [_startPos, [_startPos, 5, _dogDir - 15] call BIS_fnc_relPos, _dog];
				_interRight = lineIntersectsSurfaces [_startPos, [_startPos, 5, _dogDir + 15] call BIS_fnc_relPos, _dog];
				_distLeft = 5000;
				_distRight = 5000;
				if ((count _interLeft) > 0) then {
					_distLeft = ((_interLeft # 0) # 0) distance _startPos;
				};
				if ((count _interRight) > 0) then {
					_distRight = ((_interRight # 0) # 0) distance _startPos;
				};
				if (_distLeft > _distRight) then {
					_dog setDir (_dogDir - 15);
				} else {
					_dog setDir (_dogDir + 15);
				};
			};
		};
		_lastPos = getPos _dog;
		!alive _dog;
	};
};

[_own,_dog,_AI] spawn {
	params ["_own","_dog","_AI"];
	_target = _own;
	_targetPos = getPosATL _target;
	_side = side _own;
	_follow = true;
	_stayClose = false;
	_drag = false;
	_dragging = false;
	_turnAngle = 0;
	_speed = 0;
	_lastVehicle = _own;
	_lastOrderPos = [0,0,0];
	_lastOrderTime = 0;
	_lastExploTime = 0;
	_lastBiteTime = 0;
	_lastFireTime = 0;
	_lastBarkTime = 0;
	_explosivClose = false;
	_ownBehaviour = "INIT";
	_ownDown = false;
	_ownDead = false;
	_ownDownTime = 0;
	_ownDeadTime = 0;
	_iteration = 0;
	_state = 0;
	while {alive _dog} do {
		_newOrder = _dog getVariable ["newOrder", -1];
		
		
		if (_AI) then {
			_newOwnBehaviour = behaviour _own;
			if (_newOwnBehaviour != _ownBehaviour) then {
				_ownBehaviour = _newOwnBehaviour;
				if (_ownBehaviour == "COMBAT") then {
					_newOrder = 3;
				};
			};
		};
		
		if (_AI && !_ownDead) then {
			_ownDead = !alive _own;
			if (_ownDead) then {
				_iteration = 0;
				_newOrder = 3;
				_ownDeadTime = time;
			};
		};
		if (_AI && !_ownDead && !_ownDown) then {
			_ownDown = _own getVariable ["ACE_isUnconscious", false];
			if (_ownDown) then {
				_iteration = 0;
				_newOrder = 3;
				_ownDownTime = time;
			};
		};
		if (_AI && !_ownDead && _ownDown) then {
			_ownDown = _own getVariable ["ACE_isUnconscious", false];
		};
		if (_AI && (_ownDead || _ownDown) && (alive _target)) then {
			_iteration = 0;
		};
		if (_AI && _ownDead && (!alive _target) && (time - _ownDeadTime) > 20) then {
			if (_iteration > 4) then {
				_allAlly = (allUnits select {(alive _x) && (!(_x getVariable ["ACE_isUnconscious", false])) && ((side _x) == _side) && (_x isKindOf "CAManBase")}) apply {[_dog distanceSqr _x, _x]};
				if (count _allAlly > 0) then {
					_allAlly sort true;
					_closest = _allAlly # 0;
					if ((_closest # 0) < (100 * 100)) then {
						_newOwn = _closest # 1;
						_newOwn setVariable ['dog',_dog, true];
						_dog setVariable ['own',_newOwn, true];
						_ownDead = false;
						_ownDown = false;
						_ownBehaviour == "COMBAT";
						_newOrder = 0;
					};
				};
			};
			_iteration = _iteration + 1;
		};
		if (_AI && !_ownDead && _ownDown && (!alive _target) && (time - _ownDownTime) > 20) then {
			if (_iteration > 4) then {
				_allAlly = (allUnits select {(alive _x) && (!(_x getVariable ["ACE_isUnconscious", false])) && ((side _x) == _side) && (_x isKindOf "CAManBase")}) apply {[_dog distanceSqr _x, _x]};
				if (count _allAlly > 0) then {
					_allAlly sort true;
					_closest = _allAlly # 0;
					if ((_closest # 0) < (100 * 100)) then {
						_newOwn = _closest # 1;
						_newOwn setVariable ['dog',_dog, true];
						_dog setVariable ['own',_newOwn, true];
						_ownDead = false;
						_ownDown = false;
						_ownBehaviour == "COMBAT";
						_newOrder = 5;
					};
				};
			};
			_iteration = _iteration + 1;
		};
		
		
		if (_newOrder != -1) then {
			_own = _dog getVariable ["own", objNull];
			switch (_newOrder) do {
				case 0: {//follow
					_state = 0;
					_follow = true;
					_stayClose = false;
					_drag = false;
					_target = _own;
					_targetPos = getPosATL _target;
				};
				case 1: {//hold
					_state = 1;
					_stayClose = false;
					_drag = false;
				};
				case 2: {//move
					_state = 0;
					_follow = false;
					_stayClose = false;
					_drag = false;
					_targetPos = _dog getVariable ["newPos", getPosATL _dog];
				};
				case 3: {//attack
					_state = 2;
					_follow = false;
					_stayClose = false;
					_drag = false;
					_dog setVariable ["dog_dragging", false, true];
					_target = objNull;
					_newTarget = _dog getVariable ["newTarget", objNull];
					if (alive _newTarget && _newTarget isKindOf "Man" && ((_side getFriend (side (group _newTarget))) < 0.6)) then {
						_target = _newTarget;
						_targetPos = getPosATL _newTarget;
						_follow = true;
					} else {
						_targetPos = _dog getVariable ["newPos", getPosATL _dog];
					};
					_dog setDir (_dog getDir _targetPos);
				};
				case 4: {//stay close
					_state = 0;
					_follow = true;
					_stayClose = true;
					_drag = false;
					_dog setVariable ["dog_dragging", false, true];
					_target = _own;
					_targetPos = getPosATL _target;
				};
				case 5: {//drag
					_state = 0;
					_follow = true;
					_stayClose = false;
					if (_dog getVariable ["dog_dragging", false]) then {
						_dog setVariable ["dog_dragging", false, true];
					} else {
						_drag = true;
					};
					_target = _own;
					_targetPos = getPosATL _target;
				};
				case 6: {//cam turn
					_state = 3;
					_follow = false;
					_stayClose = false;
					_drag = false;
					_targetPos = getPosATL _dog;
					_turnAngle = _dog getVariable ["turnAngle", 0];
					_dog setDir ((getDir _dog) + _turnAngle);
				};
				case 7: {//cam move
					_state = 4;
					_follow = false;
					_stayClose = false;
					_drag = false;
					_speed = _dog getVariable ["speed", 0];
					switch (_speed) do {
						case 0: {_dog playMoveNow "Dog_Stop";};
						case 1: {_dog playMoveNow "Dog_Walk";};
						case 2: {_dog playMoveNow "Dog_Run";};
						case 3: {_dog playMoveNow "Dog_Sprint";};
					};
					//_targetPos = (getPosATL _dog);//TODO
				};
			};
			if(!_stayClose && _own == attachedTo _dog) then {
				detach _dog;
			};
			_dog setVariable ["newOrder", -1];
		};
		
		if(vehicle _own != _lastVehicle && !isNull attachedTo _dog) then {
			detach _dog;
			if(vehicle _own != _own) then {
				_dog attachTo [vehicle _own,[0,0,-3000]];
			} else {
				_dog attachTo [_own, [0, 0.1, 0]];
			};
			_lastVehicle = vehicle _own;
		};
		
		if (time - _lastExploTime > 2) then {
			_explosivClose = false;
			{
				_o = _x;
				_isExplosiv = false;
				{
					if(_o isKindOf _x)exitWith{_isExplosiv = true};
				} forEach ["MineBase", "PipeBombBase", "DirectionalBombBase", "BoundingMineBase", "ModuleMine_F", "ModuleExplosive_F"];
				if(_isExplosiv)exitWith{_explosivClose = true};
			} forEach nearestObjects [_dog, [], 10];
			_lastExploTime = time;
		};
		if (_explosivClose) then {_state = 1};
		if (!_explosivClose && _follow && alive _target) then {_targetPos = getPosATL _target};
		if (_stayClose && (_dog distance _own) < 1.2 && (isNull attachedTo _dog)) then {_dog attachTo [_own, [0, 0.1, 0]];};
		
		//DRAG
		if (_drag && (_target == _own)) then {
			{
				if ((_side == (side (group _x))) && (_x getVariable ["ACE_isUnconscious", false]) && (_x != _own)) exitWith {
					_follow = true;
					_target = _x;
					_targetPos = getPosATL _target;
				};
			} forEach nearestObjects [_dog, ["Man"], 50];
		};
		if (_drag && (_target != _own) && ((_dog distance _target) < 2)) then {
			[_dog, _target] call KAM_fnc_K9_drag;
			_drag = false;
			_target = _own;
			_targetPos = getPosATL _target;
		};
		//
		
		switch (_state) do {
			case 0: {
				_speed = 0;
				_distance = _dog distance _targetPos;
				if(_distance > 2) then {_speed = 1};
				if(_distance > 5) then {_speed = 2};
				if(_distance > 10) then {_speed = 3};
				if(_distance > 500) then {_speed = 0};
				switch (_speed) do {
					case 0: {_dog playMoveNow "Dog_Stop";};
					case 1: {_dog playMoveNow "Dog_Walk";};
					case 2: {_dog playMoveNow "Dog_Run";};
					case 3: {_dog playMoveNow "Dog_Sprint";};
				};
				if(_speed != 0 && (_targetPos distance _lastOrderPos) > 1 && (time - _lastOrderTime) > 3) then {
					_dog doMove _targetPos;
					_lastOrderPos = _targetPos;
					_lastOrderTime = time;
				};
				_dirDiff = abs ((_dog getDir _lastOrderPos) - (getDir _dog));
				if(_dirDiff > 180) then {_dirDiff = 360 - _dirDiff};
				if(_speed != 0 && _dirDiff > 10 && _distance < 50) then {_dog setDir (_dog getDir _targetPos)};
			};
			case 1: {
				if (!_stayClose) then {
					_dog playMoveNow "Dog_Sit";
					doStop _dog;
				} else {
					_dog playMoveNow "Dog_Stop";
				};
				if(_explosivClose && (time - _lastBarkTime) > 10) then {
					playSound3d ["SFPD_RHS_Units\data\bark.ogg", _dog, false, getPosAsl _dog, 3, 1, 0];
					_lastBarkTime = time;
				};
			};
			case 2: {
				if (!alive _target || (_target getVariable ["ace_captives_issurrendering", false])) then {
					_follow = false;
					_target = objNull;
				};
				if (!_follow || isNull _target) then {
					_searchRadius = if (_AI) then {150;} else {50;};
					{
						if ((_side getFriend (side (group _x))) < 0.6 && (!(isAgent teamMember _x)) && (!(_x getVariable ["ace_captives_issurrendering", false]))) exitWith {
							_follow = true;
							_target = _x;
							_targetPos = getPosATL _target;
						};
					} forEach nearestObjects [_dog, ["Man"], _searchRadius];
				};
				if((time - _lastOrderTime) > 3) then {
					_dog playMoveNow "Dog_Sprint";
					_dog doMove _targetPos;
					_lastOrderTime = time;
				};
				_distance = _dog distance _target;
				if(alive _target && _distance < 50 && (time - _lastBiteTime) > 4) then {
					_dirDiff = abs ((_dog getDir _targetPos) - (getDir _dog));
					if(_dirDiff > 180) then {_dirDiff = 360 - _dirDiff};
					if(_dirDiff > 10) then {_dog setDir (_dog getDir _targetPos)};
				};
				if (alive _target && _distance < 4 && (time - _lastFireTime) > 4) then {
					[_target, "COMBAT"] remoteExec ["setBehaviour", _target, false];
					[_target, (currentWeapon _target)] remoteExec ["fire", _target, false];
				};
				if (alive _target && _distance < 2 && (time - _lastBiteTime) > 2) then {
					playSound3d ["SFPD_RHS_Units\data\growl.ogg", _dog, false, getPosAsl _dog, 0.5, 1, 0];
					[_target, 0.8, selectRandom ["LeftLeg","RightArm"], "bullet"] remoteExecCall ["ace_medical_fnc_addDamageToUnit", _target, false];
					[_target, true, 5, true] remoteExecCall ["ace_medical_fnc_setUnconscious", _target, false];
					
					_bite_time_diff = time - (_target getVariable ["KAM_bite_time", 0]);
					_bite_count = 0;
					if (_bite_time_diff < 60) then {
						_bite_count = _target getVariable ["KAM_bite_count", 0];
					};
					if (_bite_count > 1) then {//3rd bite
						[_target] spawn {
							params ["_bite_target"];
							sleep 1;
							waitUntil {
								(!alive _bite_target) || (!(_bite_target getVariable ["ACE_isUnconscious", false]));
							};
							[_bite_target, true] remoteExecCall ["ACE_captives_fnc_setSurrendered", _bite_target, false];
						};
					} else {
						_target setVariable ["KAM_bite_count", _bite_count + 1];
						_target setVariable ["KAM_bite_time", time];
					};
					
					_lastBiteTime = time;
				};
			};
			case 3: {
				_dog playMoveNow "Dog_Stop";
				_dog setDir ((getDir _dog) + _turnAngle);
			};
			case 4: {
				switch (_speed) do {
					case 0: {_dog playMoveNow "Dog_Stop";};
					case 1: {_dog playMoveNow "Dog_Walk";};
					case 2: {_dog playMoveNow "Dog_Run";};
					case 3: {_dog playMoveNow "Dog_Sprint";};
				};
			};
		};
		if (_state > 2) then {
			sleep 0.2;
		} else {
			sleep 0.5;
		};
	};
};
