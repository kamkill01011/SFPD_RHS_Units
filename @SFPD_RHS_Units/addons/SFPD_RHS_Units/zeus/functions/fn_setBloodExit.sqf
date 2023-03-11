
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_blood = _valueSlider;
[_unit, ["ace_medical_bloodVolume", _blood, true]] remoteExecCall ["setVariable", _unit, false];
