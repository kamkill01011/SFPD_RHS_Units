
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 103;
_valueEdit1 = ctrlText _ctrl;

[_unit, _valueEdit1] remoteExecCall ["ArmaOS_fnc_installArmaOs", 2];
