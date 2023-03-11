
params ["_player", "_target"];

_blindfold = goggles _target;
removeGoggles _target;
[_player, _blindfold, true] call CBA_fnc_addItem;
