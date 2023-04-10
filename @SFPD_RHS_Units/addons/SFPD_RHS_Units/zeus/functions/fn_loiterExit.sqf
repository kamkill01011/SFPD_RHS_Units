
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_asl = _valueSlider;
_wps = waypoints (group _unit);
_wpCount = count _wps;
if (_wpCount > 0) then {
	_wpLast = _wps # (_wpCount - 1);
	_wpLast setWaypointType "LOITER";
	_wpLast setWaypointLoiterRadius 1500;
	_wpLast setWaypointLoiterType "CIRCLE_L";
	[_unit, _asl] spawn {
		params ["_unit", "_asl"];
		sleep 1;
		_unit flyInHeightASL [_asl,_asl,_asl];
		sleep 4;
		_unit flyInHeightASL [_asl,_asl,_asl];
	};
};
