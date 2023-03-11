
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbValue (lbCurSel _ctrl);

_side = resistance;
if (_valueCB == 0) then { _side = west; };
if (_valueCB == 1) then { _side = east; };
if (_valueCB == 2) then { _side = resistance; };
{
	[[_x], {
		_u = _this # 0;
		_bm = ["30Rnd_65x39_caseless_mag","30Rnd_556x45_Stanag_red","30Rnd_65x39_caseless_khaki_mag","30Rnd_762x39_Mag_F","30Rnd_65x39_caseless_green","30Rnd_580x42_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30Rnd_556x45_Stanag","30Rnd_65x39_caseless_msbs_mag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_762x39mm","rhssaf_30Rnd_762x39mm_M67","30Rnd_762x39_AK12_Mag_F","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhssaf_30rnd_556x45_EPR_G36"];
		_tm = ["30Rnd_65x39_caseless_mag_Tracer","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_762x39_Mag_Tracer_F","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_580x42_Mag_Tracer_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_65x39_caseless_msbs_mag_Tracer","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","30Rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhssaf_30rnd_556x45_Tracers_G36"];
		_om = (magazinesAmmo _u) select {(_x # 0) in _bm};
		_nm = _om apply {_tm # (_bm find (_x # 0))};
		{ _u removeMagazines (_x # 0); } forEach _om;
		{ _u addMagazine [_x, (_om # _forEachIndex) # 1]; } forEach _nm;
		_opm = (primaryWeaponMagazine _u) # 0;
		if(_opm in _bm) then {
			_u removePrimaryWeaponItem _opm;
			_u addPrimaryWeaponItem (_tm # (_bm find _opm));
		};
	}] remoteExecCall ["bis_fnc_call", _x];
} forEach (allUnits select {side _x == _side});
