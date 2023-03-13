
params ["_unit", "_range"];

_oldRange = _unit getVariable ['KAM_TFAR_range', -1];
if (_oldRange != _range) then {
	_unit setVariable ['KAM_TFAR_range', _range, true];
};
