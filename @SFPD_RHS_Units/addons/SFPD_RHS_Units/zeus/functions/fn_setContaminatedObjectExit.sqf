
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 103;
_valueEdit = ctrlText _ctrl;

_strength = _valueSlider;
_range = parseNumber _valueEdit;
[_unit, _strength, _range] remoteExecCall ["CBRN_fnc_addContaminatedObject", 0, true];
