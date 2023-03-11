
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbData (lbCurSel _ctrl);

_unit addItem _valueCB;
