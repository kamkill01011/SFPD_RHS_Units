//[_pontoon] call KAM_fnc_pontoon...;

params ["_pontoon"];

_pos = getPosATL _pontoon;
_dir = getDir _pontoon;
deleteVehicle _pontoon;
_new = createVehicle ['rhs_pontoon_float', _pos, [], 0, 'CAN_COLLIDE'];
_new setDir _dir;
_new setPosATL _pos;
