if (!hasInterface) exitwith {};

"RscWeaponChemicalDetectorLayer" cutRsc ["RscWeaponChemicalDetector", "PLAIN", 1, false];
_obj = (uiNamespace getVariable "RscWeaponChemicalDetector") displayCtrl 101;
[_obj] spawn {
	_obj = _this # 0;
	_last = 0;
	while {true} do {
		if ("ChemicalDetector_01_watch_F" in (assignedItems player)) then {
			_new = (((random 0.4) - 0.2 + _last) min 1) max 0;
			_level = 0;
			_scanMod = player getVariable ['ScanMod', 0];
			if (_scanMod == 0) then {
				_pos = getPos player;
				_ac = _pos call CBRN_fnc_isAreaContaminated;
				_acc = [_pos, 20] call CBRN_fnc_isAreaContaminatedClose;
				if (_acc # 0) then {_level = 1};
				if (_ac # 0) then {_level = 2};
				if (_acc # 1) then {_level = 4};
				if (_ac # 1) then {_level = 5};
				if (_acc # 2) then {_level = 7};
				if (_ac # 2) then {_level = 8};
				_obj ctrlAnimateModel ["Threat_Level_Source", (_level + _new) min 9.9, true];
			};
			if (_scanMod == 1) then {
				_pos = getPos player;
				{
					_range = ((_x getVariable ["CBRN_radius", 1]) max 1);
					_level = _level max (((_range - (_pos distance _x)) / _range) * (_x getVariable ["CBRN_max", 0]));
				} forEach (CBRN_contaminatedObject select {alive _x});
				_u = cursorObject;
				if ((_u isKindOf "Man") && (_u distance player < 2)) then {
					_u remoteExecCall ["CBRN_fnc_broadcastExposure", _u, false];
					sleep 0.1;
					_level = _u getVariable ["CBRN_public_exposure", 0];
					_obj ctrlAnimateModel ["Threat_Level_Source", ((_level + _new) / 10) min 9.9, true];
				} else {
					_obj ctrlAnimateModel ["Threat_Level_Source", (_level + _new) min 9.9, true];
				};
			};
			if (_scanMod == 2) then {
				_level = player getVariable ["CBRN_exposure", 0];
				_obj ctrlAnimateModel ["Threat_Level_Source", ((_level + _new) / 10) min 9.9, true];
			};
			_last = _new;
		};
		sleep 1;
	};
};
