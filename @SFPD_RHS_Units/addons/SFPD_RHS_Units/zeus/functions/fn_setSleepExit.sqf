
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_sleep = _valueSlider;
_unit setVariable ["KAM_SLEEP_DAYS", _sleep, true];
