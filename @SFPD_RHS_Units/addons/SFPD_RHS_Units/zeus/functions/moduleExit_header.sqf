
params ["_dialog", "_exitCode"];

_pos = localNamespace getVariable ["KAM_ZEUS_POS", [0,0,0]];
_unit = localNamespace getVariable ["KAM_ZEUS_UNIT", objNull];

if (_exitCode != 1) exitWith {};
