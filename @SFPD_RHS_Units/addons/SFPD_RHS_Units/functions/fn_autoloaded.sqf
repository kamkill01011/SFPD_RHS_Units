//[player] call KAM_fnc_autoloaded;

params ["_p"];

_index = rhs_loadType;
switch(rhs_loadType) do {
	//HE
	case 0: {_index = 2};
	//AP
	case 1: {_index = 0};
	//HEAT
	case 2: {_index = 1};
	//ATGM
	case 3: {_index = 3};
	case default {};
};
_v = vehicle _p;
_turret = (_v weaponsTurret [0]) # 0;
_mags = _v magazinesTurret [0];
_v loadMagazine [[0], _turret, _mags # _index];
