
["ace_interact_menu_newControllableObject", {
    params ["_type"];
    if (!(_type isKindOf "AllVehicles")) exitWith {};
	_cfg = configFile >> "CfgVehicles" >> _type;
	_MAX_FUEL = getNumber (_cfg >> 'ace_refuel_fuelCapacity');
	if (_MAX_FUEL == 0) then {
		_MAX_FUEL = getNumber (_cfg >> 'fuelCapacity');
	};
	if (_MAX_FUEL <= 0) exitWith {};
    
    private _checkFuel = ["check_fuel","Check Fuel","",{
		params ["_target", "_player", ""];_cfg = configOf _target;
		_cfg = configOf _target;
		_MAX_FUEL = getNumber (_cfg >> 'ace_refuel_fuelCapacity');
		if (_MAX_FUEL == 0) then {
			_MAX_FUEL = getNumber (_cfg >> 'fuelCapacity');
		};
		_CURR_FUEL = (fuel _target) * _MAX_FUEL;
		(format ['%1 / %2 [L]', (_CURR_FUEL toFixed 0), (_MAX_FUEL toFixed 0)]) remoteExec ['hint', _player];
	},{	
		params ["_target", "_player", ""];
		if (!((driver _target) isEqualTo _player)) exitWith {false};
		_cfg = configOf _target;
		_MAX_FUEL = getNumber (_cfg >> 'ace_refuel_fuelCapacity');
		if (_MAX_FUEL == 0) then {
			_MAX_FUEL = getNumber (_cfg >> 'fuelCapacity');
		};
		(_MAX_FUEL > 0) && {((getAllSoundControllers _target) findIf {(_x # 0) isEqualTo 'rpm'}) > -1};
	}] call ace_interact_menu_fnc_createAction;
    [_type, 1, ["ACE_SelfActions"], _checkFuel, true] call ace_interact_menu_fnc_addActionToClass;
}] call CBA_fnc_addEventHandler;
