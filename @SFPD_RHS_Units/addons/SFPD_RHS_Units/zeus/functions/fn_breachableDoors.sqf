

_logic = _this # 0;
_pos = position _logic;
_unit = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if (!local _logic) exitWith {};

[_pos] spawn {
	private _group_logic = createGroup sideLogic;
	_group_logic deleteGroupWhenEmpty true;
	private _buildings = nearestObjects [_this # 0, ["Building"], 100, true];
	private _building = (_buildings # 0);
	private _source_cfg = [(configFile >> "cfgVehicles" >> typeOf _building  >> "AnimationSources"), 0] call BIS_fnc_subClasses;
	{
		_building animateSource [(configName _x), 0, true];
	} forEach _source_cfg;
	private _logic_list = [];
	private _sourceObject_list = [];
	private _door_names = (((selectionNames _building) select {"door" in _x}));
	private _door_axis_names = (((_building selectionNames "Memory") select {"door" in _x}));
	private _use_axis = (count _door_names) >= (count _door_axis_names);
	private _list = [];
	if (_use_axis) then {
		_list = _door_axis_names;
	} else {
		_list = _door_names;
	};
	
	if ((count _list) == 0) then {
		playSound "FD_Start_F";
	} else {
		playSound "FD_Finish_F";
	};
	
	{
		private _door_name = _x;
		if (_use_axis) then {
			_door_axi_name = _x;
			_content = _door_axi_name splitString "_";
			_door_name = (_content select [0,2]) joinString "_";
		};
		private _source = _door_name + "_sound_source";
		private _trigger_test_pos = (_building selectionPosition (_door_name + "_trigger"));
		private _trigger_pos = [0,0,0];
		if (_trigger_test_pos isEqualTo [0,0,0]) then {
			private _door_test_pos = (_building selectionPosition _door_name);
			if (_door_test_pos isEqualTo [0,0,0]) exitWith {};
			_trigger_pos = _building modelToWorld _door_test_pos;
		} else {
			_trigger_pos = _building modelToWorld _trigger_test_pos;
		};
		private _axis_pos = _building modelToWorld (_building selectionPosition (_door_name + "_axis"));
		private _close_logics = _trigger_pos nearObjects ["module_f", 1];
		if(count _close_logics > 0) then {
			private _logic = _close_logics select 0;
			{deleteVehicle _x} forEach (attachedObjects _logic);
			deleteVehicle _logic;
		};
		private _lock_var = "bis_disabled_" + _door_name;
		_building animateSource [_source, 0, true];
		_building setVariable [_lock_var, 1, true];
		private _logic = _group_logic createUnit ["module_f", _trigger_pos, [], 0, "CAN_COLLIDE"];
		_logic setVariable ["lock_params", [_building, _lock_var, _trigger_pos, _source], true];
		_logic_list pushBack _logic;
		_axis_pos set [2, _trigger_pos # 2];
		private _vectorDiff = (_trigger_pos vectorDiff _axis_pos);
		private _handlePos = (_trigger_pos vectorAdd _vectorDiff);
		private _vectorDiffx = _vectorDiff # 0;
		private _vectorDiffy = _vectorDiff # 1;
		_vectorDiff set [2, 0];
		_vectorDiff set [1, _vectorDiffx];
		_vectorDiff set [0, _vectorDiffy * -1];
		_padlock = "Land_BatteryPack_01_battery_black_F" createVehicle _handlePos;
		_padlock enableSimulationGlobal false;
		_padlock setVectorDir _vectorDiff;
		_padlock setPos _handlePos;
		private _distanceSqr = _padlock distanceSqr _logic;
		if (_distanceSqr >= (1 * 1)) then {
			_padlock setPosASL (getPosASL _logic);
		};
		_padlock setVectorUp [0, 0, 1];
		_padlock setVariable ["lock_module", _logic, true];
		_padlock setVariable ["_lock_var", _lock_var, true];
		_padlock setVariable ["lock_HP", 25, true];
		
		[[_padlock, _building], {
			params ["_padlock", "_building"];
			_padlock addEventHandler ["HitPart", {
				(_this # 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
				private _lock_HP = (_target getVariable ["lock_HP", 25]);
				private _damage = (((_ammo # 0) - 7) max 0.5);
				_lock_HP = _lock_HP - _damage;
				if (_lock_HP <= 0) exitWith {
					private _lock_module = (_target getVariable "lock_module");
					(_lock_module getVariable "lock_params") params ["_building", "_lock_var", "_trigger_pos", "_source"];
					_building setVariable [_lock_var, 0, true];
					{deleteVehicle _x} forEach (attachedObjects _lock_module);
					deleteVehicle _lock_module;
					deleteVehicle _target;
					_building animateSource [_source, 1, true];
				};
				_target setVariable ["lock_HP", _lock_HP, true];
			}];
		}] remoteExecCall ["call", 0, _padlock];
		
		_sourceObject_list pushBack _padlock;
	} forEach _list;
	waitUntil {sleep 0.5; {name _x != "" and {not isNull _x}} count _logic_list == 0};
	{
		if (!isNull _x) then {
			[_x, "Hodor"] remoteExecCall ["setName", 0, _x];
		} else {
			_building setVariable [((_sourceObject_list # _forEachIndex) getVariable "_lock_var"), 0, true];
			deleteVehicle (_sourceObject_list # _forEachIndex);
		};
	} forEach _logic_list;
	[_logic_list + _sourceObject_list, true] call Ares_fnc_AddUnitsToCurator;
};

deleteVehicle _logic;
