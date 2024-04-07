//[_this # 0] call KAM_fnc_fuelConsumption;

if (!isServer) exitWith {};

private _allSoundCtrl = (getAllSoundControllers ((_this # 0) # 0)) apply {_x # 0};

private _isOk = "rpm" in _allSoundCtrl;

if (!_isOk) exitWith {};

[((_this # 0) # 0)] spawn {
	_v = (_this # 0);
	_config = configOf _v;
	_MAX_FUEL = getNumber (_config >> "ace_refuel_fuelCapacity");
	if (_MAX_FUEL == 0) then {
		_MAX_FUEL = getNumber (_config >> "fuelCapacity");
	};
	if (_MAX_FUEL <= 0) exitWith {};
	
	_FUEL_CONSUMPTION = getNumber (_config >> "KAM_fuel_consumption");
	if (_MAX_FUEL == 0) then {
		_FUEL_CONSUMPTION = 1;
	};
	
	_lastDriver = driver _v;
	_wasAi = true;
	_lastModifier = missionNamespace getVariable ["KAM_fuel_consumption_modifier", 1];
	waitUntil {
		sleep 1;
		
		_currDriver = driver _v;
		if (!(isNull _currDriver)) then {
			_lastDriver = _currDriver;
		};
		_ai = (isNull _lastDriver) || {!(isPlayer _lastDriver)};
		_modifier = missionNamespace getVariable ["KAM_fuel_consumption_modifier", 1];
		if ((_ai != _wasAi) || (_modifier != _lastModifier)) then {
			_newFuelConsumtion = _FUEL_CONSUMPTION * _modifier;
			if (_ai) then {
				_newFuelConsumtion = 1;
			};
			[[_v, _newFuelConsumtion], {
				params ["_veh", "_newFuelConsumtion"];
				_veh setFuelConsumptionCoef _newFuelConsumtion;
			}] remoteExec ["call", _v];
		};
		_wasAi = _ai;
		_lastModifier = _modifier;
		
		!alive _v;
	};
};
