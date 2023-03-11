
params ["_player", "_target"];

if (((items _player) findIf {_x in ['G_Blindfold_01_black_F', 'G_Blindfold_01_white_F']}) > -1) then {
	_blindfolds = (items _player) arrayIntersect (['G_Blindfold_01_black_F', 'G_Blindfold_01_white_F']);
	_blindfold = _blindfolds # 0;
	_player removeItem _blindfold;
	[_target, goggles _target, true] call CBA_fnc_addItem;
	_target linkItem _blindfold;
};
