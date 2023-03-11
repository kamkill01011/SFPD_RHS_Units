
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbValue (lbCurSel _ctrl);

_ctrl = _dialog displayCtrl 103;
_valueEdit = ctrlText _ctrl;

_radius = parseNumber _valueEdit;
_type = _valueCB;
[_pos, _radius, _type] remoteExecCall ["CBRN_fnc_spawnPermanentArea", 0, true];
