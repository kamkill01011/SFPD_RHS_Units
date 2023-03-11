
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbValue (lbCurSel _ctrl);

_ctrl = _dialog displayCtrl 103;
_valueEdit = ctrlText _ctrl;

_IA = if (_valueCB == 0) then { false; } else { true; };
_life = parseNumber _valueEdit;
[_unit, _IA, _life, 2.5] remoteExecCall ["KAM_fnc_K9", 2, false];
