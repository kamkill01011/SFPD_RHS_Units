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
	
	_LAST_TIME = time;
	_lastDriver = driver _v;
	waitUntil {
		sleep 0.1;
		
		_currDriver = driver _v;
		if (!(isNull _currDriver)) then {
			_lastDriver = _currDriver;
		};
		_ai = (isNull _lastDriver) || {!(isPlayer _lastDriver)};
		
		_cur_time = time;
		_diff_time = _cur_time - _LAST_TIME;
		_LAST_TIME = _cur_time;
		
		if (!_ai) then {
			[[_v, _MAX_FUEL, _diff_time, _FUEL_CONSUMPTION], {
				params ["_veh", "_M_FUEL", "_d_time", "_FUEL_CONSUMPTION"];
				_rpm = _veh getSoundController "rpm";
				_r = (_rpm / 60) * _d_time;
				_liters = _r / 1000;// 1L per 1000 rotations
				_liters = _liters * _FUEL_CONSUMPTION;
				_fuelReduction = _liters / _M_FUEL;
				_veh setFuel ((fuel _veh) - _fuelReduction);
			}] remoteExec ["call", _v];
			
			/*_rpm = _v getSoundController "rpm";
			_r = (_rpm / 60) * _diff_time;
			_liters = _r / 1000;// 1L per 1000 rotations
			_fuelReduction = _liters / _MAX_FUEL;*/
			
			//[_v,((fuel _veh) - _fuelReduction))] remoteExec ['setfuel',_v];
		};
		
		!alive _v;
	};
};
