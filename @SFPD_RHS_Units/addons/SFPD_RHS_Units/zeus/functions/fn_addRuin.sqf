
_logic = _this # 0;
_pos = position _logic;
_unit = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if (!local _logic) exitWith {};

[_pos] spawn {
	private _pos = _this # 0;
	
	_buildings = nearestObjects [_pos, ["HouseBase"], 10, true];
	if ((count _buildings) == 0) exitWith {hint "no building found"};
	hint "";
	_building = (_buildings # 0);
	
	_new = _building getVariable ["KAM_Ruin_new", _building];
	_original = _building getVariable ["KAM_Ruin_original", _building];
	_objPos = getPosATL _new;
	_objDir = getDir _new;
	
	_original hideObjectGlobal true;
	deleteVehicle _new;
	
	//"Land_ChurchRuin_01_F"
	_newObjListLiv = [
		"Land_HouseRuin_Big_01_half_F","Land_HouseRuin_Big_01_F","Land_HouseRuin_Big_02_half_F","Land_HouseRuin_Big_02_F",
		"Land_HouseRuin_Big_03_half_F","Land_HouseRuin_Big_03_F","Land_HouseRuin_Small_01_F","Land_HouseRuin_Small_02_F"
	];
	_newObjListCup = [
		"Land_HouseBlock_D1_ruins","Land_HouseBlock_C5_ruins","Land_HouseBlock_C1_ruins","Land_HouseBlock_B6_ruins","Land_HouseBlock_B5_ruins",
		"Land_HouseBlock_B3_ruins","Land_HouseBlock_A3_ruins","Land_HouseBlock_A2_ruins","Land_HouseBlock_A1_ruins","Land_HouseRuin_Small_04_F"
	];
	_newObjListTan = ["Land_Shop_Town_01_ruins_F","Land_Shop_Town_03_ruins_F","Land_Addon_04_ruins_F","Land_House_Small_04_ruins_F"];
	_newObjListAlt = ["Land_Barn_01_grey_ruins_F","Land_House_Big_01_V1_ruins_F","Land_Shop_02_V1_ruins_F","Land_House_Small_01_V1_ruins_F"];
	
	_newObjList = [];
	_newObjList append _newObjListLiv;
	_newObjList append _newObjListCup;
	_newObjList append _newObjListTan;
	_newObjList append _newObjListAlt;
	
	_newObj = selectRandom _newObjList;
	
	_newVeh = createVehicle [_newObj, _objPos, [], 0, "CAN_COLLIDE"];
	_newVeh setVariable ["KAM_Ruin_original", _original, true];
	_newVeh setDir _objDir;
	
	_original setVariable ["KAM_Ruin_new", _newVeh, true];
	
	[[_newVeh], true] call Ares_fnc_AddUnitsToCurator;
};

deleteVehicle _logic;
