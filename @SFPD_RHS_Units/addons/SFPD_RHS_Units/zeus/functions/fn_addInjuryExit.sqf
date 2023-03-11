
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbData (lbCurSel _ctrl);

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_damage = _valueSlider;
_part = _valueCB;
[_unit, _damage, _part, "bullet"] remoteExecCall ["ace_medical_fnc_addDamageToUnit", _unit, false];
