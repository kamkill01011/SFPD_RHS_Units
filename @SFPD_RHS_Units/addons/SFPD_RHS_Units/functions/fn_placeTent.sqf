//[_this # 1] call KAM_fnc_placeTent;

_this spawn {
	_unit = (_this # 0);
	
	_unit removeItem "Sleeping_bag_folded_01";
	
	_pos = _unit modelToWorld [0,2,0];
	_azimuth = getDir _unit;
	_obj = createVehicle ["KAM_rhs_Land_TentA_F", _pos, [], 0, 'CAN_COLLIDE'];
	_obj setDir _azimuth;
	
	_ATL = (getPosATL _unit) # 2;
	if (_ATL < 0.1) then {
		_obj setVectorUp (surfaceNormal _pos);
		_ATLpos = getPosATL _obj;
		_obj setPosATL [_ATLpos # 0, _ATLpos # 1, 0];
	};
};
