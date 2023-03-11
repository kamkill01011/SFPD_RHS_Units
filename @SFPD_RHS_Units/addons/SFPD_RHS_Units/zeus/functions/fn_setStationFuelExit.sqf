
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 102;
_valueSlider = sliderPosition _ctrl;

_fuel = _valueSlider;
_range = 2;
_all = _pos nearObjects _range;
_pumps = _all select {getNumber (configOf _x >> "ace_refuel_fuelCargo") == -10};
{
	_x setVariable ["ace_refuel_currentFuelCargo", _fuel, true];
} forEach _pumps;
hint str format ["%1 station affected", count _pumps];
