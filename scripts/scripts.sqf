////////// one line //////////
[[7500,8500], 100] execVM "Furnish.sqf";
this disableAI "LIGHTS";this setPilotLight true;this setCollisionLight true;
this addeventhandler ["fired", {(_this # 0) setvehicleammo 1}];
this removeMagazinesTurret ["4Rnd_Titan_long_missiles",[0]];//4Rnd_Titan_long_missiles_O
this removeMagazinesTurret ["SmokeLauncherMag",[0,0]];
this removeWeaponTurret ["Laserdesignator_pilotCamera",[-1]];
{if (side _x == east) then {_x removeWeapon "Binocular"}} forEach allUnits;
(_this # 1) removeWeaponGlobal "GMG_40mm";
_u = (_this # 1);_u setUnitTrait ["camouflageCoef", 0];_u setUnitTrait ["audibleCoef", 0];
[(_this # 1)] call UAV_fnc_disable_autonomous;
[(_this # 1),3] call BIS_fnc_dataTerminalAnimate;
this switchMove "Acts_Dance_01";//Acts_Dance_02
(group this) setVariable ["KAM_AI_GetInCombat", true, true];
waitUntil {hintSilent str ((_this # 1) getVariable ["CBRN_isCurrentlyExposed", false]);!alive (_this # 1);};
(str CBRN_contaminatedAreas) remoteExec ["systemChat", 0, false];
waitUntil {hintSilent str (screenToWorld [0.5,0.5]);!alive(_this # 1)};
_u = (_this # 1);_u setUnitTrait ["camouflageCoef", 0];_u setUnitTrait ["audibleCoef", 0];
[1, [0.3, 0, 0]] remoteExec ["setFog", 0];
[player] spawn BIS_fnc_traceBullets;
KAM_transfer_enabled = false;
/////////////// set loadout
_u = (_this # 1);copyToClipboard (typeOf _u);
_u = (_this # 1);[[_u], {params ["_u"];_u setUnitLoadout "SFPD_OPFOR_Diver";}] remoteExec ["call", _u];
/////////////// set faction
_u = (_this # 1);_type = (typeOf _u);_faction = getText (configFile >> "CfgVehicles" >> _type >> "faction");_prefix = _faction select [0, (count _faction) - 8];copyToClipboard _prefix;

_newFactionPrefix = "SFPD_RHS_FR_WOODLAND";
_unit = _this # 1;
_type = (typeOf _unit);
_faction = getText (configFile >> "CfgVehicles" >> _type >> "faction");
_prefix = _faction select [0, (count _faction) - 8];
_sufix = _type select [(count _prefix), (count _type)];
_newType = _newFactionPrefix + _sufix;
_exist = isClass (configFile >> "CfgVehicles" >> _newType);
if (!_exist) then {_newType = _newFactionPrefix + "_Rifleman";};
[[_unit, _newType], {params ["_unit", "_loadout"];_unit setUnitLoadout _loadout;}] remoteExec ["call", _unit];
////////// reveal //////////
_p = (_this # 0);
_r = 100;
_rs = _r * _r;
_l = allUnits select {(_x distanceSqr _p) < _rs};
{
	_u = _x;
	{
		_u reveal [_x, 4];
	} forEach allPlayers;
} forEach _l;
////////// remove artillery mags //////////
_mags = (magazines (_this # 1)) select {["_LG", _x, true] call BIS_fnc_inString || {["_guided", _x] call BIS_fnc_inString || {["_cluster", _x] call BIS_fnc_inString || {["_mine", _x] call BIS_fnc_inString}}}};
{ (_this # 1) removeMagazineGlobal _x } forEach _mags;
////////// transfer group //////////
_g = group (_this # 1);
{
	if (alive _x) then { _x setVariable ["KAM_tmpLoadout", getUnitLoadout _x, true]; };
} forEach units _g;
[[_g], {
	params ["_g"];
	_g setGroupOwner 2;
	waitUntil {sleep 1; ((local _g) or {(isNull _g) or {({alive _x} count units _g) == 0}});};
	{
		private _loadout = _x getVariable ["KAM_tmpLoadout", []];
		if !(_loadout isEqualTo []) then { _x setUnitLoadout _loadout; };
		_x setVariable ["KAM_tmpLoadout", nil, true];
	} forEach units _g;
}] remoteExec ["spawn", 2, false];
////////// trenches height //////////
_center = _this # 0;
_range = 1000;
_trenches = nearestObjects [_center, ["Land_fort_rampart","Land_fort_rampart_EP1","CUP_Winter_obj_fort_rampart_ep1"], _range, true];
{
	_posATL = getPosATL _x;
	_posATL set [2,-0.1];
	_x setPosATL _posATL;
} forEach _trenches;
////////// bomb //////////
[_this # 0,_timer,_infoDevices,_dummyDevices,_fakeDevices,_timeTofind,_chanceTofind] execVM "bomb.sqf";
[_this # 0,50,["Land_Laptop_unfolded_F"],["Land_Laptop_02_unfolded_F"],["Land_Laptop_device_F"],5,0.5] execVM "bomb.sqf";
_bomb = (_this # 1); hint str ([_bomb getVariable "CODE", _bomb getVariable "WIRE", _bomb getVariable "SERIAL"]);
////////// lock turrets //////////
_v = (_this # 1);
[[_v], {
	params ["_veh"];
	{
		_veh lockTurret [_x, true];
	} forEach (allTurrets [_veh, false]);
}] remoteExec ["call", _v];
////////// fuel stations //////////
_pos = (_this # 0);
_range = 2;
_fuel = 10;
_all = _pos nearObjects _range;
_pumps = _all select {getNumber (configOf _x >> "ace_refuel_fuelCargo") == -10};
{
	_x setVariable ["ace_refuel_currentFuelCargo", _fuel, true];
} forEach _pumps;
hint str [count _pumps, count _all];
////////// chained actions //////////

//_actions = [["action name", hold time, "message", delay], [...], ...];
_actions = [["connect", 2, "connecting", 5], ["upldoad", 2, "upldoading", 5], ["delete", 2, "deleting", 5]];

_target = (_this # 1);

add_action = {
	params ["_target", "_count", "_list"];
	(_list # _count) params ["_action", "_time", "_text", "_delay"];
	if (_count >= (count _list)) exitWith {};
	[
		_target,
		_action,
		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",
		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",
		"_this distance _target < 3",
		"_caller distance _target < 3",
		{},
		{},
		{
			params ["_object", "_finder", "_ID", "_arguments"];
			_arguments params ["_curator", "_target", "_count", "_list"];
			(_list # _count) params ["_action", "_time", "_text", "_delay"];
			["TaskUpdatedVRLong",["", _text]] call BIS_fnc_showNotification;
			[_curator, _target, _count, _list] spawn {
				params ["_curator", "_target", "_count", "_list"];
				(_list # _count) params ["_action", "_time", "_text", "_delay"];
				sleep _delay;
				[_target, _count + 1, _list] call add_action;
			};
		},
		{},
		[player, _target, _count, _list],
		_time,
		10,
		true,
		false
	] remoteExec ["BIS_fnc_holdActionAdd", 0, _target];
};

[_target, 0, _actions] call add_action;
////////// UAV //////////
{
	[] spawn {
		waitUntil {
			_pv = vehicle player;
			_inCPV = _pv isKindOf "rhsusf_m1152_sicps_usarmy_d";
			_inCPP = (count ((fullCrew [_pv, "cargo", true]) select {((_x # 2) == 0) AND((_x # 0) == player)})) == 1;
			_ok = _inCPV AND _inCPP;
			{
				if (_ok) then {
					player enableUAVConnectability [_x, true];
				} else {
					player disableUAVConnectability [_x, true];
				};
			} forEach (allUnitsUAV select {side _x == west});
			sleep 1;
			false;
		};
	};
} remoteExecCall ["call", 0, true];
////////// name //////////
hint str ((magazines (_this # 1)) select {"Bomb" in _x});
_beg = eyePos _target;_endW = _beg vectorAdd (_target weaponDirection currentWeapon _target vectorMultiply 50);((lineIntersectsSurfaces  [_beg, _endW, _target]) # 0 ) # 2;
////////// ACE //////////
hint str ((_this # 1) getVariable ["ace_medical_bloodVolume", -1]);
hint str ([(_this # 1)] call ace_medical_status_fnc_hasStableVitals);
waitUntil {hintSilent str ((_this # 1) getVariable ["ace_medical_bloodVolume", -1]);!alive(_this # 1)};
////////// transfer ownership //////////
[_this # 1] spawn {
	params ["_vehicle"];
	KAM_NEMMERA_VHC = [];
	_lastDriver = objNull;
	while {alive _vehicle} do {
		_driver = driver _vehicle;
		if ((!(isNull _driver)) and (_driver != _lastDriver)) then {
			_owner = owner _driver;
			_vehicle setOwner _owner;
			{
				_x setOwner _owner;
			} forEach KAM_NEMMERA_VHC;
			_lastDriver = _driver;
		};
		sleep 2;
	};
};

KAM_NEMMERA_VHC pushBackUnique (_this # 1);
////////// Contact hack //////////
StopHandler = false;
[] spawn {
	_SelObj = [];
	_lastTime = time;
	_canHacked = true;
	waitUntil {
		if (inputAction "defaultAction" > 0 and (currentWeapon ace_player) == "hgun_esd_01_F") then {
			_currProgress = missionNamespace getVariable ["#EM_Progress", 0];
			if (_currProgress < 0.1) then {
				_SelObj = missionNamespace getVariable ["#EM_SelObj", []];
			} else {
				_SelObj = (_SelObj select {_x in (missionNamespace getVariable ["#EM_SelObj", []])});
			};
			if (_currProgress >= 1) then {
				if (_canHacked) then {
					_count = 0;
					_side = side ace_player;
					{
						if ((side _x) != _side) then {
							_u = _x;
							_grp = createGroup _side;
							{[_x] joinSilent _grp;} forEach (crew _u);
							_count = _count + 1;
						};
					} forEach _SelObj; 
					hint format ["%1 units hacked", _count];
					_canHacked = false;
				};
			} else {
				_canHacked = true;
			};
		} else {
			missionNamespace setVariable ["#EM_Progress", 0];
			missionNamespace setVariable ["#EM_Transmit", false];
		};
		_lastTime = time;
		StopHandler;
	};
};

StopHandler = true;
////////// fuel //////////
[(_this # 1), 1] call ace_refuel_fnc_setFuel;

CAR = (_this # 1);
LAST_FUEL = fuel CAR;
LAST_TIME = time;
waitUntil {
	sleep 0.1;
	_cur_fuel = fuel CAR;
	_cur_time = time;
	_diff_fuel = abs (_cur_fuel - LAST_FUEL);
	_diff_time = _cur_time - LAST_TIME;
	_speed = ((velocityModelSpace CAR) # 1);
	_consumption = _diff_fuel / _diff_time;
	_speed = _speed max 0.000000001;
	_consumption = _consumption max 0.000000001;
	hintSilent str [(_consumption * 3600) toFixed 0, _speed toFixed 0, ((_speed/_consumption) / 1000) toFixed 0];
	LAST_FUEL = _cur_fuel;
	LAST_TIME = _cur_time;
	!alive CAR;
};
////////// name //////////

////////// name //////////

////////// ambush dismount //////////
_target = (_this # 1);
_vehicles = [];
{_vehicles pushBack vehicle _x}foreach units group driver _target;

[_target, _vehicles] spawn {
	_t = _this # 0;
	_vs = _this # 1;
	while {alive _t} do {sleep 1};
	{_v = _x;{_x leaveVehicle _v}forEach crew _v} forEach _vs;
};
////////// play video //////////
_tv = (_this # 1);
while{alive _tv}do{
[_tv, "video2", 30] execVM "playVideo.sqf";
sleep 9.85;
};
////////// missile to heli //////////
shooter = (_this # 1);

heli = (_this # 1);
heli allowDamage false;

[shooter, heli] call {
    if (!isNil "commy_missile") exitWith {};
    params [
        ["_origin", objNull, [objNull, []], 3], 
        ["_target", objNull, [objNull]]
    ];
    private _type = "M_Titan_AA";
    if (_origin isEqualType objNull) then {
        private _size = sizeOf typeOf _origin;
        _origin = eyePos _origin;
        _origin = _origin vectorAdd ((_origin vectorFromTo getPosWorld _target) vectorMultiply _size);
    };
	[_target] spawn {sleep 1;driver (_this # 0) forceWeaponFire ["CMFlareLauncher", "Burst"];};
    commy_missile = _type createVehicle ASLToAGL _origin;
    commy_target = _target;
    private _fnc_guide = {
        private _missile = commy_missile;
        private _target = commy_target;
        if (isNull _missile) exitWith {
            removeMissionEventHandler ["EachFrame", _thisEventHandler];
            commy_missile = nil;
			_target allowDamage true;
			_target setDamage 0.5;
			_target setHitPointDamage ["HitHRotor", 1];
			_target allowDamage false;
			{[_x, 0.8, selectRandom ["LeftArm","RightArm","LeftLeg","RightLeg"], "bullet"] remoteExecCall ["ace_medical_fnc_addDamageToUnit", _x, false]}forEach crew _target;
        };
        private _vdir = getPosWorld _missile vectorFromTo getPosWorld _target;
        private _vlat = vectorNormalized (_vdir vectorCrossProduct [0,0,1]);
        private _vup = _vlat vectorCrossProduct _vdir;
        private _speed = vectorMagnitude velocity _missile;
        private _vel = _vdir vectorMultiply _speed;
        _missile setVectorDirAndUp [_vdir, _vup];
        _missile setVelocity _vel;
    };
    call _fnc_guide;
    addMissionEventHandler ["EachFrame", _fnc_guide];
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////// one line //////////
removeHeadgear this;this addGoggles "G_CBRN_M50_Hood";
for "_i" from 1 to 6 do {this addItemToVest "CBRN_CS";};
[_this # 0, _radius, _type] remoteExecCall ["CBRN_fnc_spawnPermanentArea", 0, true];
[_this # 0, _radius, _time, _type, _height, _thickness] call CBRN_fnc_spawnMist;
[_this # 1, 10, 100] remoteExecCall ["CBRN_fnc_addContaminatedObject", 0, true];
[_this # 1, -20, 433.0, 1000] remoteExecCall ["KAM_fnc_addDevice", 0, true];
[_this # 1] call KAM_fnc_K9;
[_this # 1, player] remoteExecCall ["KAM_fnc_showMedicalStatus", _this # 1, false];
this addItemToVest "DemoCharge_Remote_Mag";
this addItemToVest "ACE_key_master";//ACE_key_west,ACE_key_east,ACE_key_indp,ACE_key_civ,ACE_key_lockpick
this action ['SwitchWeapon', this, this, 100];
this flyInHeightASL [1000,1000,1000];
////////// medical //////////
// 23 min ???
//"backb﻿last", "bite﻿", "bullet", "explosive", "falling", "grenade", "punch", "ropeburn", "s﻿hell", "stab", "unknown", "vehiclecrash﻿"
[(_this # 1), 0.4, selectRandom ["Head","Body","LeftArm","RightArm","LeftLeg","RightLeg"], "bullet"] call ace_medical_fnc_addDamageToUnit;
[(_this # 1), "LeftLeg"] call ace_medical_treatment_fnc_tourniquetLocal;
[(_this # 1), true, 5, true] remoteExecCall ["ace_medical_fnc_setUnconscious", (_this # 1), false];
////////// LOITER //////////
_wp = ((group (_this # 1)) addWaypoint [[0,0,0], 0]);
_wp setWaypointType "LOITER";
_wp setWaypointLoiterRadius 2000;
_wp setWaypointLoiterType "CIRCLE_L";

this flyInHeightASL [1000,1000,1000];
////////// wear NBC //////////
_s = 0;
_f = false;

_ss = [west,east,resistance,civilian];
_us = ["U_B_CBRN_Suit_01_MTP_F","U_C_CBRN_Suit_01_Blue_F","U_C_CBRN_Suit_01_White_F","U_C_CBRN_Suit_01_White_F"];
_ms = ["G_AirPurifyingRespirator_01_F","G_AirPurifyingRespirator_02_black_F","G_RegulatorMask_F","G_RegulatorMask_F"];
{
	if (side _x == (_ss # _s)) then {
		_x addGoggles (_ms # _s);
		if (_f) then {
			_u = _x;
			_is = uniformItems _u;
			_u forceAddUniform (_us # _s);
			{_u addItemToUniform _x} forEach _is;
		}
	}
} forEach (allUnits select {_x isKindOf "CAManBase"});
////////// replace tracer WIP //////////
{
_u = _x;
_bm = ["30Rnd_65x39_caseless_mag","30Rnd_556x45_Stanag_red","30Rnd_65x39_caseless_khaki_mag","30Rnd_762x39_Mag_F","30Rnd_65x39_caseless_green","30Rnd_580x42_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30Rnd_556x45_Stanag","30Rnd_65x39_caseless_msbs_mag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_762x39mm","rhssaf_30Rnd_762x39mm_M67"];
_tm = ["30Rnd_65x39_caseless_mag_Tracer","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_762x39_Mag_Tracer_F","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_580x42_Mag_Tracer_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_65x39_caseless_msbs_mag_Tracer","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer"];
_om = (magazinesAmmo _u) select {(_x # 0) in _bm};
_nm = _om apply {_tm # (_bm find (_x # 0))};
{_u removeMagazines (_x # 0)} forEach _om;
{_u addMagazine [_x, (_om # _forEachIndex) # 1]} forEach _nm;
_opm = (primaryWeaponMagazine _u) # 0;
if(_opm in _bm) then {
	_u removePrimaryWeaponItem _opm;
	_u addPrimaryWeaponItem (_tm # (_bm find _opm));
};
} forEach (allUnits select {side _x == west});//west;east;resistance









////////////////////////////////////////////







_u = (_this # 1);
_viv_load = ["viv_load","ViV load","",{
	params ["_target", "_player", "_parameters"];
},{
	params ["_target", "", ""];
	((nearestObjects [_target, ["AllVehicles"], 25]) findIf {
		((_x canVehicleCargo _target) # 1) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < 15}
	}) > -1;
},{
	params ["_target", "", ""];
	private _statement = {
		params ["_target", "_player", "_vehicle"];
		_canLoad = (_vehicle canVehicleCargo _target) # 0;
		if (_canLoad) then {
			_vehicle setVehicleCargo _target;
		} else {
			private _targetName = getText ((configOf _target) >> "displayName");
			private _vehicleName = getText ((configOf _vehicle) >> "displayName");
			(format ["Can't load '%1' in '%2", _targetName, _vehicleName]) remoteExec ["hint", _player];
		};
	};
	private _vehicles = (nearestObjects [_target, ["AllVehicles"], 25]) select {
		((_x canVehicleCargo _target) # 1) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < 15}
	};
	[_vehicles, _statement, _target] call ace_interact_menu_fnc_createVehiclesActions
},[], [0,0,0], 10] call ace_interact_menu_fnc_createAction;
[typeOf _u, 0, ["ACE_MainActions"], _viv_load, true] call ace_interact_menu_fnc_addActionToClass;

_viv_unload = ["viv_unload","ViV unload","",{
	params ["_target", "", ""];
	objNull setVehicleCargo _target;
},{
	params ["_target", "_player", ""];
	(!(isNull (isVehicleCargo _target))) && {([_target, _player] call ace_interaction_fnc_getInteractionDistance) < 15};
},{},[], [0,0,0], 10] call ace_interact_menu_fnc_createAction;
[typeOf _u, 0, ["ACE_MainActions"], _viv_unload, true] call ace_interact_menu_fnc_addActionToClass;






