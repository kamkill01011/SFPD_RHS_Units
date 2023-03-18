
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider1 = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 103;
_valueSlider2 = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 104;
_valueSlider3 = sliderPosition _ctrl;

_range = _valueSlider1;
_min = _valueSlider2;
_max = _valueSlider3;
[_unit, _range, _min, _max, true] remoteExecCall ["KAM_fnc_addJammer", 0, _target];
