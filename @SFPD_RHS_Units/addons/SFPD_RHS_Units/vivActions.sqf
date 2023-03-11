
_viv_load = ["viv_load","ViV load","",{
	params ["_target", "_player", "_parameters"];
},{
	params ["_target", "", ""];
	if ((_target isKindOf "ace_intelitems_base")) exitWith {false};
	((nearestObjects [_target, ["AllVehicles"], 25]) findIf {
		((_x canVehicleCargo _target) # 1) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < 15}
	}) > -1;
},{
	params ["_target", "", ""];
	private _statement = {
		params ["_target", "_player", "_vehicle"];
		_canLoad = (_vehicle canVehicleCargo _target) # 0;
		if (_canLoad) then {
			_vehicle setVehicleCargo _target;
		} else {
			private _targetName = getText ((configOf _target) >> "displayName");
			private _vehicleName = getText ((configOf _vehicle) >> "displayName");
			(format ["Can't load '%1' in '%2", _targetName, _vehicleName]) remoteExec ["hint", _player];
		};
	};
	private _vehicles = (nearestObjects [_target, ["AllVehicles"], 25]) select {
		((_x canVehicleCargo _target) # 1) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < 15}
	};
	[_vehicles, _statement, _target] call ace_interact_menu_fnc_createVehiclesActions
},[], [0,0,0], 10] call ace_interact_menu_fnc_createAction;

["AllVehicles", 0, ["ACE_MainActions"], _viv_load, true] call ace_interact_menu_fnc_addActionToClass;
["ThingX", 0, ["ACE_MainActions"], _viv_load, true] call ace_interact_menu_fnc_addActionToClass;
["Land_Device_slingloadable_F", 0, ["ACE_MainActions"], _viv_load, true] call ace_interact_menu_fnc_addActionToClass;


_viv_unload = ["viv_unload","ViV unload","",{
	params ["_target", "", ""];
	objNull setVehicleCargo _target;
},{
	params ["_target", "_player", ""];
	if ((_target isKindOf "ace_intelitems_base")) exitWith {false};
	(!(isNull (isVehicleCargo _target))) && {([_target, _player] call ace_interaction_fnc_getInteractionDistance) < 15};
},{},[], [0,0,0], 10] call ace_interact_menu_fnc_createAction;

["AllVehicles", 0, ["ACE_MainActions"], _viv_unload, true] call ace_interact_menu_fnc_addActionToClass;
["ThingX", 0, ["ACE_MainActions"], _viv_unload, true] call ace_interact_menu_fnc_addActionToClass;
["Land_Device_slingloadable_F", 0, ["ACE_MainActions"], _viv_unload, true] call ace_interact_menu_fnc_addActionToClass;
