
params ["_dialog", ["_config", configNull]];

_zeus_last_add_weapon = localNamespace getVariable ["KAM_zeus_last_add_weapon", 0];

_ctrl = _dialog displayCtrl 101;
_ctrl lbSetCurSel _zeus_last_add_weapon;
