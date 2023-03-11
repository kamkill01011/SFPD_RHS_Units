
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_fuel = _valueSlider;
[_unit, _fuel] call ace_refuel_fnc_setFuel;
