//[_this # 1] call KAM_fnc_skyhook;

[_this # 0] spawn {
	_vehicle = (_this # 0);
	_dmg = isDamageAllowed _vehicle;
	_vehicle allowDamage false;
	
	_origin = getPos _vehicle;
	_offset = (((boundingBox _vehicle) # 0) # 2);
	_dummyRoot = createVehicle ["ace_fastroping_helper", _origin vectorAdd [0, 0, _offset], [], 0, "CAN_COLLIDE"];
	_dummyRoot allowDamage false;
	_dummyRoot disableCollisionWith _vehicle;
	_dummyRoot attachTo [_vehicle, [0,0,_offset]];
	_vehicle setVariable ['Skyhook',_dummyRoot, true];
	
	createRope = {
		params ["_from", "_origin", "_offset", "_vehicle", "_length"];
		_to = createVehicle ["KAM_Skyhook", _origin vectorAdd [0, 0, _offset], [], 0, "CAN_COLLIDE"];
		_to allowDamage false;
		_to disableCollisionWith _vehicle;
		//_rope = ropeCreate [_from, [0.1,0,-0.15],  _to, [0.1,0,0.15],  _length];
		//_rope = ropeCreate [_from, [-0.1,0,-0.15], _to, [-0.1,0,0.15], _length];
		//_rope = ropeCreate [_from, [0,0.1,-0.15],  _to, [0,0.1,0.15],  _length];
		//_rope = ropeCreate [_from, [0,-0.1,-0.15], _to, [0,-0.1,0.15], _length];
		_rope = ropeCreate [_from, [0,0,-0.1], _to, [0,0,0.1], _length];
		
		_to setVariable ['Skyhook_vehicle', _vehicle, true];
		
		_to;
	};
	_dummy0 = [_dummyRoot, _origin, _offset - 1, _vehicle, 40] call createRope;
	_dummy1 = [_dummy0, _origin, _offset - 2, _vehicle, 2] call createRope;
	_dummy2 = [_dummy1, _origin, _offset - 3, _vehicle, 2] call createRope;
	_dummy3 = [_dummy2, _origin, _offset - 4, _vehicle, 2] call createRope;
	
	_dummy3 setVariable ['sykhook_a', [0,0,-1], true];
	_dummy3 setVariable ['sykhook_u', [0,0,1], true];
	
	_vehicle setVariable ['SkyhookAll',[_dummyRoot, _dummy0, _dummy1, _dummy2, _dummy3], true];
	
	sleep 2;
	_vehicle allowDamage _dmg;
	
	/*[_vehicle, [_dummy0, _dummy1, _dummy2, _dummy3]] spawn {
		params ["_vehicle", "_dummies"];
		_lastTime = time;
		waitUntil {
			//if ((time - _lastTime) > 0.05) then {
				{
					_unit = _x getVariable ['unit', objNull];
					if ((alive _unit)) then {
						if (animationState _unit != "ACE_FastRoping") then {
							_unit disableCollisionWith _x;
							[_unit, "ACE_FastRoping", 2] call ace_common_fnc_doAnimation;
						};
						_unit setDir (getDir _vehicle);
						_pos = (getPosWorld _x) vectorAdd [0, 0, -0.5];
						_unit setPosWorld _pos;
						_unit setVelocity [0,0,0];
					};
				} forEach _dummies;
				_lastTime = time;
			//};
			
			(!(alive(_vehicle getVariable ['Skyhook', objNull])));
		};
	};*/
};
