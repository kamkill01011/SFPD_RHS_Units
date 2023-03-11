
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbData (lbCurSel _ctrl);

_part = _valueCB;
[_unit, _part] call ace_medical_treatment_fnc_tourniquetLocal;
