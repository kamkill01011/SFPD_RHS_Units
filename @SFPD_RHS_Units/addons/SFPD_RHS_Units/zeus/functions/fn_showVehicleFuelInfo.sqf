
params ["_logic"];
if (!local _logic) exitWith {};
_unit = attachedTo _logic;
_pos = position _logic;

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

// ...

deleteVehicle _logic;

private _allSoundCtrl = (getAllSoundControllers _unit) apply {_x # 0};

private _isOk = "rpm" in _allSoundCtrl;

if (!_isOk) exitWith { hint "vehicle must have RMP"; };

[_unit] spawn {
	_v = (_this # 0);
	_config = configOf _v;
	_MAX_FUEL = getNumber (_config >> "ace_refuel_fuelCapacity");
	if (_MAX_FUEL == 0) then {
		_MAX_FUEL = getNumber (_config >> "fuelCapacity");
	};
	if (_MAX_FUEL <= 0) exitWith { hint "vehicle must have MAX_FUEL > 0"; };
	_LAST_FUEL = fuel _v;
	_LAST_TIME = time;
	waitUntil {
		sleep 0.5;
		
		_cur_time = time;
		_diff_time = _cur_time - _LAST_TIME;
		_LAST_TIME = _cur_time;
		
		_cur_fuel = fuel _v;
		_diff_fuel = _LAST_FUEL - _cur_fuel;
		_LAST_FUEL = _cur_fuel;
		
		_fuelConsomation = _diff_fuel / (_diff_time max 0.00000001);
		_fuelDuration = 1 / (_fuelConsomation max 0.00000001);
		_speed = (velocityModelSpace _v) # 1;
		_fuelDistance = _fuelDuration * _speed;
		
		hintSilent format ["Max Dist: %1km\nMax Time: %2h\nMax Fuel: %3L", (_fuelDistance / 1000) toFixed 0, (_fuelDuration / 3600) toFixed 1, _MAX_FUEL toFixed 0];
		
		!alive _v;
	};
};
