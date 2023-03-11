
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 103;
_valueEdit = ctrlText _ctrl;

_radius = parseNumber _valueEdit;
_radiusSqr = _radius * _radius;
{deleteVehicle _x;} forEach ((allSimpleObjects []) select {(_x distanceSqr _pos) < _radiusSqr});
