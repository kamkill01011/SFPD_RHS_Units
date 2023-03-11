if (!hasInterface) exitwith {};

[] spawn {
	_lastAntenna = "";
	waitUntil {
		_antenna = (handgunItems ace_player) # 0;
		if (_lastAntenna != _antenna) then {
			switch (_antenna) do {
				case "muzzle_antenna_02_f": {
					missionNamespace setVariable ["#EM_FMin", 390];
					missionNamespace setVariable ["#EM_FMax", 500];
					missionNamespace setVariable ["#EM_SMin", -60];
					missionNamespace setVariable ["#EM_SMax", -10];
				};
				case "muzzle_antenna_03_f": {
					missionNamespace setVariable ["#EM_FMin", 432];
					missionNamespace setVariable ["#EM_FMax", 434];
					missionNamespace setVariable ["#EM_SMin", -60];
					missionNamespace setVariable ["#EM_SMax", -10];
				};
				case "muzzle_antenna_01_f": {
					missionNamespace setVariable ["#EM_FMin", 78];
					missionNamespace setVariable ["#EM_FMax", 89];
					missionNamespace setVariable ["#EM_SMin", -60];
					missionNamespace setVariable ["#EM_SMax", -10];
				};
				default {
					missionNamespace setVariable ["#EM_FMin", 0];
					missionNamespace setVariable ["#EM_FMax", 0];
					missionNamespace setVariable ["#EM_SMin", 0];
					missionNamespace setVariable ["#EM_SMax", 0];
				};
			};
			_EM_FMin = missionNamespace getVariable ["#EM_FMin", 0];
			_EM_FMax = missionNamespace getVariable ["#EM_FMax", 0];
			_EM_FMin + ((_EM_FMax - _EM_FMin) / 10);
			missionNamespace setVariable ["#EM_SelMin", _EM_FMin];
			missionNamespace setVariable ["#EM_SelMax", _EM_FMin + ((_EM_FMax - _EM_FMin) / 10)];
			_lastAntenna = _antenna;
		};
		false;
	};
};

[] spawn {
	_SelObj = [];
	_lastTime = time;
	waitUntil {
		if (inputAction "defaultAction" > 0 and {("hgun_esd_01_F" in ([configFile >> "CfgWeapons" >> (currentWeapon ace_player), true] call BIS_fnc_returnParents))}) then {
			_currProgress = missionNamespace getVariable ["#EM_Progress", 0];
			if (_currProgress == 0) then {
				_SelObj = missionNamespace getVariable ["#EM_SelObj", []];
			} else {
				_SelObj = (_SelObj select {_x in (missionNamespace getVariable ["#EM_SelObj", []])});
			};
			_nextProgress = _currProgress + (0.2 * (time - _lastTime));
			missionNamespace setVariable ["#EM_Progress", _nextProgress];
			missionNamespace setVariable ["#EM_Transmit", true];
			if (_currProgress >= 1) then {
				
			};
		} else {
			missionNamespace setVariable ["#EM_Progress", 0];
			missionNamespace setVariable ["#EM_Transmit", false];
		};
		_lastTime = time;
		false;
	};
};

[] spawn {
	waitUntil {
		_SelObj = [];
		_EM_Values = [];
		_playerPos = getPosASL ace_player;
		//_weapVec = eyeDirection ace_player;
		_weapVec = ace_player weaponDirection (currentWeapon ace_player);
		_EM_SMin = missionNamespace getVariable ["#EM_SMin", -60];
		{
			_objVec = (getPosASL _x) vectorDiff _playerPos;
			_weapVec set [2, 0];
			_objVec set [2, 0];
			_cos = _weapVec vectorCos _objVec;
			_cos = (_cos * 100) - 99;
			if (_cos > 0) then {
				_ObjectFreq = _x getVariable ["#EM_ObjectsFreq", 0];
				_ObjectStre = _x getVariable ["#EM_ObjectsStre", 0];
				_ObjectRange = _x getVariable ["#EM_ObjectsRange", 1];
				_dist = ace_player distance _x;
				_stre = ([_EM_SMin, _ObjectStre, 1 - (_dist / _ObjectRange)] call BIS_fnc_lerp);
				_stre = ([_EM_SMin, _stre, _cos] call BIS_fnc_lerp);
				if (_stre > _EM_SMin) then {
					_EM_Values pushBack _ObjectFreq;
					_EM_Values pushBack _stre;
					if (_cos > 0.5) then {
						_EM_SelMin = missionNamespace getVariable ["#EM_SelMin", 0];
						_EM_SelMax = missionNamespace getVariable ["#EM_SelMax", 0];
						if (_ObjectFreq > _EM_SelMin and _ObjectFreq < _EM_SelMax) then {
							if (_stre > ((_EM_SMin + _ObjectStre) / 2)) then {
								_SelObj pushBack _x;
							};
						};
					};
				};
			};
		} forEach (missionNamespace getVariable ["#EM_Objects", []]);
		missionNamespace setVariable ["#EM_Values", _EM_Values];
		missionNamespace setVariable ["#EM_SelObj", _SelObj];
		false;
	};
};
