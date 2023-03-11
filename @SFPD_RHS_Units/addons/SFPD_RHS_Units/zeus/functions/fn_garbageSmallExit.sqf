
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 103;
_valueEdit = ctrlText _ctrl;

_radius = parseNumber _valueEdit;
///////////////////////
_roads = _pos nearRoads _radius;

placeGarbage = {
	params ["_roads", "_separation", "_spaces", "_items"];
	{
		_object = selectRandom _items;
		_space = _spaces;
		
		_connectedRoads = roadsConnectedTo _x;
		_connectedRoadsCount = count _connectedRoads;
		if (_connectedRoadsCount == 1) then {
			_diff = (getPos (_connectedRoads # 0)) vectorDiff (getPos _x);
			_norm = vectorNormalized _diff;
			_pos = getPos _x;
			_normal = (vectorNormalized [_norm # 1, -(_norm # 0)]) vectorMultiply ((random (_space * 2)) - _space);
			_pos = _pos vectorAdd _normal;
			[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
		} else {
			if (_connectedRoadsCount == 2) then {
				_diff = (getPos (_connectedRoads # 0)) vectorDiff (getPos (_connectedRoads # 1));
				_norm = vectorNormalized _diff;
				_pos = getPos _x;
				_normal = (vectorNormalized [_norm # 1, -(_norm # 0)]) vectorMultiply ((random (_space * 2)) - _space);
				_pos = _pos vectorAdd _normal;
				[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
			} else {
				_pos = (_x getRelPos [(random _separation) - (_separation / 2), random 360]);
				[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
			};
		};
		
		_road = _x;
		{
			_diff = (getPos _x) vectorDiff (getPos _road);
			_norm = vectorNormalized _diff;
			_magn = (vectorMagnitude _diff) / 2;
			_step = _magn / _separation;
			for "_i" from 1 to _step do {
				_object = selectRandom _items;
				_space = _spaces;
				
				_pos = getPos _road;
				_normal = (vectorNormalized [_norm # 1, -(_norm # 0)]) vectorMultiply ((random (_space * 2)) - _space);
				_pos = (_pos vectorAdd _normal) vectorAdd (_norm vectorMultiply (_i * _separation));
				[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
			};
		} forEach (roadsConnectedTo _road);
	} forEach _roads;
};

[_roads, 2, 4, [
"Land_Garbage_square5_F",
"Land_Garbage_square3_F",
"Land_Garbage_line_F",
"BloodPool_01_Large_New_F",
"BloodSplatter_01_Large_New_F",
"BloodTrail_01_New_F",
"BloodSplatter_01_Medium_New_F",
"BloodPool_01_Medium_New_F",
"MedicalGarbage_01_1x1_v1_F",
"MedicalGarbage_01_1x1_v2_F",
"MedicalGarbage_01_1x1_v3_F",
"BloodSplatter_01_Small_New_F",
"BloodSpray_01_New_F",
"MedicalGarbage_01_3x3_v1_F",
"MedicalGarbage_01_3x3_v2_F"
]] call placeGarbage;
///////////////////////
