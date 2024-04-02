
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueCB = _ctrl lbValue (lbCurSel _ctrl);


_weaponIndex = _valueCB;

_weapons = [
	[3, "Camera_lxWS", [], []],
	[0, "arifle_ARX_blk_F", ["muzzle_snds_65_TI_blk_F", "acc_pointer_IR", "optic_Arco_blk_F", "bipod_02_F_blk"], [["30Rnd_65x39_caseless_green", 8], ["10Rnd_50BW_Mag_F", 8]]],//Type 115
	[0, "sgun_HunterShotgun_01_sawedoff_F", [], [["2Rnd_12Gauge_Pellets", 20]]],//sawed-off
	[0, "arifle_ash12_urban_RF", ["rhsusf_acc_M952V", "optic_Aco", "bipod_02_F_blk"], [["20Rnd_127x55_Mag_RF", 8]]],//Veles
	[0, "arifle_ash12_GL_urban_RF", ["rhsusf_acc_M952V", "optic_Aco"], [["20Rnd_127x55_Mag_RF", 8], ["1Rnd_HE_Grenade_shell", 10], ["1Rnd_Smoke_Grenade_shell", 5]]],//Veles GL
	[0, "sgun_aa40_lxWS", ["rhsusf_acc_M952V", "optic_r1_low_lxWS"], [["20Rnd_12Gauge_AA40_Pellets_lxWS", 8], ["20Rnd_12Gauge_AA40_Slug_lxWS", 8]]],//auto shotgun AA12
	[0, "arifle_SLR_lxWS", ["acc_flashlight"], [["20Rnd_762x51_slr_lxWS", 8]]],//FAL
	[0, "arifle_SLR_GL_lxWS", ["acc_flashlight"], [["20Rnd_762x51_slr_lxWS", 8], ["1Rnd_40mm_HE_lxWS", 10], ["1Rnd_50mm_Smoke_lxWS", 5], ["1Rnd_58mm_AT_lxWS", 5]]],//FAL GL
	[0, "arifle_Galat_lxWS", ["rhsusf_acc_M952V", "optic_r1_low_lxWS"], [["30Rnd_762x39_Mag_F", 8]]],//Galil arm
	[0, "glaunch_GLX_lxWS", [], [["1Rnd_HE_Grenade_shell", 10]]],//GLX 160
	[0, "arifle_VelkoR5_lxWS", ["rhsusf_acc_M952V", "optic_r1_high_lxWS"], [["35Rnd_556x45_Velko_reload_tracer_red_lxWS", 8]]],//Velktor R5
	[0, "arifle_VelkoR5_GL_lxWS", ["rhsusf_acc_M952V", "optic_r1_high_lxWS"], [["35Rnd_556x45_Velko_reload_tracer_red_lxWS", 8], ["1Rnd_HE_Grenade_shell", 10], ["1Rnd_Smoke_Grenade_shell", 5]]],//Velktor R5 GL
	[0, "LMG_S77_lxWS", ["rhsusf_acc_M952V", "optic_r1_high_lxWS"], [["100Rnd_762x51_S77_Green_Tracer_lxWS", 8]]],//Vektor SS-77
	[0, "arifle_XMS_Base_lxWS", ["rhsusf_acc_M952V", "optic_r1_high_lxWS"], [["30Rnd_556x45_Stanag", 8]]],//XMS
	[0, "arifle_XMS_GL_lxWS", ["rhsusf_acc_M952V", "optic_r1_high_lxWS"], [["30Rnd_556x45_Stanag", 8], ["1Rnd_HE_Grenade_shell", 10], ["1Rnd_Smoke_Grenade_shell", 5]]],//XMS GL
	[0, "arifle_XMS_Shot_lxWS", ["rhsusf_acc_M952V", "optic_r1_high_lxWS"], [["30Rnd_556x45_Stanag", 8], ["6Rnd_12Gauge_Slug", 8], ["6Rnd_12Gauge_Pellets", 8]]],//XMS SG
	[0, "OFrP_FAMAS_F1", [], [["OFrP_25Rnd_556x45", 8]]],//FAMAS
	[0, "OFrP_FAMAS_F1_GLM203", [], [["OFrP_25Rnd_556x45", 8], ["1Rnd_HE_Grenade_shell", 10], ["1Rnd_Smoke_Grenade_shell", 5]]],//FAMAS GL
	[0, "rhs_weap_akm", ["rhs_acc_dtkakm", "rhs_acc_2dpZenit"], [["rhs_30Rnd_762x39mm_bakelite", 8]]],//AKM
	[0, "rhs_weap_m38", [], [["rhsgref_5Rnd_762x54_m38", 20]]],//bolt rifle
	[0, "rhs_weap_vhsd2_ct15x", ["rhsusf_acc_M952V"], [["rhsgref_30rnd_556x45_vhs2", 8]]],//VHS-D2
	[0, "rhs_weap_vhsd2_bg_ct15x", ["rhsusf_acc_M952V"], [["rhsgref_30rnd_556x45_vhs2", 8], ["1Rnd_HE_Grenade_shell", 10], ["1Rnd_Smoke_Grenade_shell", 5]]],//VHS-D2 GL
	[0, "rhs_weap_m32", [], [["rhsusf_mag_6Rnd_M441_HE", 4]]],//M32 MGL
	[0, "rhs_weap_M590_8RD", [], [["rhsusf_8Rnd_00Buck", 8], ["rhsusf_8Rnd_Slug", 8]]],//M590A1 shotgun
	[0, "rhs_weap_mk17_STD", ["rhsusf_acc_M952V", "rhsusf_acc_eotech_552_d"], [["rhs_mag_20Rnd_SCAR_762x51_m80_ball", 8]]],//SCAR-H
	[1, "hgun_Pistol_heavy_01_green_F", ["acc_flashlight_pistol"], [["11Rnd_45ACP_Mag", 4]]],//FNX
	[1, "hgun_Glock19_auto_RF", ["acc_flashlight_pistol"], [["33Rnd_9x19_Mag_RF", 4]]],//G19A
	[1, "hgun_Glock19_auto_RF", ["acc_flashlight_pistol"], [["65Rnd_9x19_Mag_RF", 4]]],//G19A drum
	[1, "hgun_DEagle_classic_RF", [], [["7Rnd_50AE_Mag_RF", 4]]],//Deagle
	[1, "hgun_DEagle_gold_RF", [], [["7Rnd_50AE_Mag_RF", 8]]],//Deagle gold
	[1, "rhs_weap_M320", [], [["rhs_mag_M441_HE", 10]]],//M320 GL
	[]
];
_weapon = _weapons # _weaponIndex;

[
	[_unit, _weapon], 
	{
		params ["_unit", "_weapon"];
		_weapon params ["_weaponType", "_weap", "_items", "_mags"];
		_currWeapon = [
			primaryWeapon _unit,
			handgunWeapon _unit,
			secondaryWeapon _unit,
			binocular _unit
		] # _weaponType;
		_currCompMags = compatibleMagazines _currWeapon;
		
		{_unit removeMagazines _x;} forEach _currCompMags;
		_unit removeWeapon _currWeapon;
		
		{
			_x params ["_mag", "_count"];
			for "_i" from 1 to _count do {_unit addMagazine _mag;};
		} forEach _mags;
		_unit addWeapon _weap;
		{
			_unit addPrimaryWeaponItem _x;
		} forEach _items;
		
	}
] remoteExec ["call", _unit];


localNamespace setVariable ["KAM_zeus_last_add_weapon", _weaponIndex];
