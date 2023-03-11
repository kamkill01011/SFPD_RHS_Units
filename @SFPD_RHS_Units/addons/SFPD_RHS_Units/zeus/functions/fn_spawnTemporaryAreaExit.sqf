
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbValue (lbCurSel _ctrl);

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 103;
_valueEdit1 = ctrlText _ctrl;

_ctrl = _dialog displayCtrl 104;
_valueEdit2 = ctrlText _ctrl;

_radius = parseNumber _valueEdit1;
_duration = parseNumber _valueEdit2;
_type = _valueCB;
_height = 10;
_thickness = _valueSlider / (_radius ^ 0.3);
[_pos, _radius, _duration, _type, _height, _thickness] call CBRN_fnc_spawnMist;
