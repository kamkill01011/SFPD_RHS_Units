
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"
_ctrl = _dialog displayCtrl 103;
_valueEdit = ctrlText _ctrl;

_radius = parseNumber _valueEdit;
///////////////////////
_roads = _pos nearRoads _radius;

inCity = {
	_pos = _this # 0;
	_raduis = 50;
	_buildings = (nearestObjects [_pos, ["house"], _raduis]) select {(count (_x buildingPos -1)) > 0};
	(count _buildings) > 2
};


placeJunk = {
	params ["_roads", "_separation", "_spaces", "_items"];
	{
		_sel = 1;
		_object = selectRandom (_items # _sel);
		_space = _spaces # _sel;
		
		_connectedRoads = roadsConnectedTo _x;
		_connectedRoadsCount = count _connectedRoads;
		if (_connectedRoadsCount == 1) then {
			_diff = (getPos (_connectedRoads # 0)) vectorDiff (getPos _x);
			_norm = vectorNormalized _diff;
			_pos = getPos _x;
			_normal = (vectorNormalized [_norm # 1, -(_norm # 0)]) vectorMultiply ((random (_space * 2)) - _space);
			_pos = _pos vectorAdd _normal;
			_inCity = [_pos] call inCity;
			if (_inCity) then {
				[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
			};
		} else {
			if (_connectedRoadsCount == 2) then {
				_diff = (getPos (_connectedRoads # 0)) vectorDiff (getPos (_connectedRoads # 1));
				_norm = vectorNormalized _diff;
				_pos = getPos _x;
				_normal = (vectorNormalized [_norm # 1, -(_norm # 0)]) vectorMultiply ((random (_space * 2)) - _space);
				_pos = _pos vectorAdd _normal;
				_inCity = [_pos] call inCity;
				if (_inCity) then {
					[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
				};
			} else {
				_pos = (_x getRelPos [(random _space) - (_space / 2), random 360]);
				_inCity = [_pos] call inCity;
				if (_inCity) then {
					[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
				};
			};
		};
		
		_road = _x;
		{
			_diff = (getPos _x) vectorDiff (getPos _road);
			_norm = vectorNormalized _diff;
			_magn = (vectorMagnitude _diff) / 2;
			_step = _magn / _separation;
			for "_i" from 1 to _step do {
				_sel = (_sel + 1) % 2;
				_object = selectRandom (_items # _sel);
				_space = _spaces # _sel;
				
				_pos = getPos _road;
				_normal = (vectorNormalized [_norm # 1, -(_norm # 0)]) vectorMultiply ((random (_space * 2)) - _space);
				_pos = (_pos vectorAdd _normal) vectorAdd (_norm vectorMultiply (_i * _separation));
				_inCity = [_pos] call inCity;
				if (_inCity) then {
					[_object, [_pos # 0, _pos # 1, getTerrainHeightASL _pos], random 360] call BIS_fnc_createSimpleObject;
				};
			};
		} forEach (roadsConnectedTo _road);
	} forEach _roads;
};

[_roads, 10, [3, 2], [[
"Land_Barricade_01_4m_F",
"Land_CinderBlocks_F",
"Land_WoodenCrate_01_stack_x3_F",
"Land_CinderBlocks_01_F",
"Land_GarbageContainer_open_F",
"Land_Bricks_V2_F",
"Land_GarbageHeap_01_F",
"Land_GarbageHeap_02_F",
"Land_GarbageBags_F",
"Land_GarbagePallet_F",
"Land_GarbageWashingMachine_F",
"Land_JunkPile_F",
"Land_GarbageHeap_03_F",
"Land_GarbageHeap_04_F",
"Land_Microwave_01_F",
"Land_CarBattery_01_F",
"Land_Portable_generator_F",
"Land_PaperBox_01_small_destroyed_brown_F",
"Land_PaperBox_01_small_ransacked_brown_F",
"Land_Tyre_F",
"Land_FlowerPot_01_F",
"Land_Photoframe_01_broken_F",
"Land_GarbageBarrel_01_english_F",
"Land_Tyres_F",
"Land_GarbageContainer_closed_F"
], [
"Land_Barricade_01_4m_F",
"Land_CinderBlocks_F",
"Land_WoodenCrate_01_stack_x3_F",
"Land_CinderBlocks_01_F",
"Land_GarbageContainer_open_F",
"Land_Bricks_V2_F",
"Land_GarbageHeap_01_F",
"Land_GarbageHeap_02_F",
"Land_GarbageBags_F",
"Land_GarbagePallet_F",
"Land_GarbageWashingMachine_F",
"Land_JunkPile_F",
"Land_GarbageHeap_03_F",
"Land_GarbageHeap_04_F",
"Land_Microwave_01_F",
"Land_CarBattery_01_F",
"Land_Portable_generator_F",
"Land_PaperBox_01_small_destroyed_brown_F",
"Land_PaperBox_01_small_ransacked_brown_F",
"Land_Tyre_F",
"Land_FlowerPot_01_F",
"Land_Photoframe_01_broken_F",
"Land_GarbageBarrel_01_english_F",
"Land_Tyres_F",
"Land_GarbageContainer_closed_F",
"Land_Wreck_UAZ_F",
"Land_Wreck_CarDismantled_F",
"Land_Wreck_Offroad_F",
"Land_Wreck_Skodovka_F",
"Land_ConcretePipe_F",
"Land_Wreck_Truck_dropside_F",
"Land_Wreck_BRDM2_F",
"Land_Wreck_Car2_F",
"Land_Wreck_HMMWV_F",
"Land_Wreck_Truck_F",
"Land_Wreck_Car_F",
"Land_Wreck_Van_F",
"Land_Coil_F",
"Land_Barricade_01_4m_F",
"Land_CinderBlocks_F",
"Land_WoodenCrate_01_stack_x3_F",
"Land_CinderBlocks_01_F",
"Land_GarbageContainer_open_F",
"Land_Bricks_V2_F",
"Land_GarbageHeap_01_F",
"Land_GarbageHeap_02_F",
"Land_GarbageBags_F",
"Land_GarbagePallet_F",
"Land_GarbageWashingMachine_F",
"Land_JunkPile_F",
"Land_GarbageHeap_03_F",
"Land_GarbageHeap_04_F",
"Land_Microwave_01_F",
"Land_CarBattery_01_F",
"Land_Portable_generator_F",
"Land_PaperBox_01_small_destroyed_brown_F",
"Land_PaperBox_01_small_ransacked_brown_F",
"Land_Tyre_F",
"Land_FlowerPot_01_F",
"Land_Photoframe_01_broken_F",
"Land_GarbageBarrel_01_english_F",
"Land_Tyres_F",
"Land_GarbageContainer_closed_F"
]]] call placeJunk;
///////////////////////
