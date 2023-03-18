//#include "script_component.hpp"

/*
  Name: TFAR_fnc_calcJamming
  Author: Kam
    calculate jamming
  Arguments:
    0: unit sending <OBJECT>
    1: unit receiving <OBJECT>
  Return Value:
    jamming value to add to terrain interception <STRING>
  Example:
    [_unit, TFAR_currentUnit] call TFAR_fnc_calcJamming;
  Public: No
*/

params ["_sending", "_receiving"];

_result = 0;
_allJammers = (missionNamespace getVariable ["SFPD_RHS_Units_TFAR_jammers", []]);

try {
	{
		_jamming = 0;
		if (!(isNull _x)) then {
		_jammerRange = _x getVariable ["TFAR_jammer_range", -1];
		_jammerDist = (_receiving distance _x) min (_sending distance _x);
			if (_jammerDist < _jammerRange) then {
				_canDie = _x getVariable ["TFAR_jammer_canDie", false];
				if (!_canDie || {alive _x}) then {
					_min = _x getVariable ["TFAR_jammer_min", 0];
					_max = _x getVariable ["TFAR_jammer_max", 1];
					_jamming = ([_min, _max, 1 - (_jammerDist / _jammerRange)] call BIS_fnc_lerp);
					_result = _result max _jamming;
				};
			};
		};
	} forEach _allJammers;
} catch {
	//diag_log str [_exception];
	_result;
};

_result;
