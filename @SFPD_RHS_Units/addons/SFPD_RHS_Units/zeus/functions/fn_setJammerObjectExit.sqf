
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 103;
_valueEdit1 = ctrlText _ctrl;

_ctrl = _dialog displayCtrl 104;
_valueEdit2 = ctrlText _ctrl;

_strength = _valueSlider;
_frequency = parseNumber _valueEdit1;
_range = parseNumber _valueEdit2;
[_unit, _strength, _frequency, _range] remoteExecCall ["KAM_fnc_addDevice", 0, true];
