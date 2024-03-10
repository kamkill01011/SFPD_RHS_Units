////////// one line //////////
for "_i" from 1 to 6 do {this addItemToVest "ACE_HandFlare_Yellow";};
removeHeadgear this;this addGoggles "G_RegulatorMask_F";
for "_i" from 1 to 6 do {this addItemToVest "CBRN_CS";};
[_this # 0, _radius, _type] remoteExecCall ["CBRN_fnc_spawnPermanentArea", 0, true];
[_this # 0, _radius, _time, _type, _height, _thickness] call CBRN_fnc_spawnMist;
[_this # 1, 10, 100] remoteExecCall ["CBRN_fnc_addContaminatedObject", 0, true];
[_this # 1, -20, 433.0, 1000] remoteExecCall ["KAM_fnc_addDevice", 0, true];
[_this # 1, false, 5, 2.5] call KAM_fnc_K9;
[_this # 1, true, 3, 2.5] call KAM_fnc_K9;

_dog = (_this # 1);
_dog setVariable ['newTarget', objNull, true];
_dog setVariable ['newPos', getPosATL _dog, true];
_dog setVariable ['newOrder', 3, true];

DOG setVariable ['newTarget', objNull, true];
DOG setVariable ['newPos', getPosATL (_this # 0), true];
DOG setVariable ['newOrder', 3, true];

(_this # 1) setVariable ['newOrder', 0, true];
(_this # 1) setVariable ['newOrder', 5, true];


[_this # 1, player] remoteExecCall ["KAM_fnc_showMedicalStatus", _this # 1, false];
this addItemToVest "DemoCharge_Remote_Mag";
[[7500,8500], 100] execVM "Furnish.sqf";
this disableAI "LIGHTS";this setPilotLight true;this setCollisionLight true;
this addeventhandler ["fired", {(_this # 0) setvehicleammo 1}];
this removeMagazinesTurret ["4Rnd_Titan_long_missiles",[0]];//4Rnd_Titan_long_missiles_O
this removeMagazinesTurret ["SmokeLauncherMag",[0,0]];
this removeWeaponTurret ["Laserdesignator_pilotCamera",[-1]];
this allowCrewInImmobile true;
this action ['SwitchWeapon', this, this, 100];
{if (side _x == east) then {_x removeWeapon "Binocular"}} forEach allUnits;
[(_this # 1),1] call BIS_fnc_dataTerminalAnimate;
this switchMove "Acts_Dance_01";//Acts_Dance_02
(group this) setVariable ["KAM_AI_GetInCombat", true, true];
waitUntil {hintSilent str ((_this # 1) getVariable ["CBRN_isCurrentlyExposed", false]);!alive (_this # 1);};
(str CBRN_contaminatedAreas) remoteExec ["systemChat", 0, false];
waitUntil {hintSilent str (screenToWorld [0.5,0.5]);!alive(_this # 1)};
[player] spawn BIS_fnc_traceBullets;

////////// bomb //////////
[_this # 0,_timer,_infoDevices,_dummyDevices,_fakeDevices,_timeTofind,_chanceTofind] execVM "bomb.sqf";
[_this # 0,50,["Land_Laptop_unfolded_F"],["Land_Laptop_02_unfolded_F"],["Land_Laptop_device_F"],5,0.5] execVM "bomb.sqf";
_bomb = (_this # 1); hint str ([_bomb getVariable "CODE", _bomb getVariable "WIRE", _bomb getVariable "SERIAL"]);
////////// medical //////////
[_this # 1, player] remoteExecCall ["KAM_fnc_showMedicalStatus", _this # 1, false];
// 23 min ???
//"backb﻿last", "bite﻿", "bullet", "explosive", "falling", "grenade", "punch", "ropeburn", "s﻿hell", "stab", "unknown", "vehiclecrash﻿"
[(_this # 1), 0.4, selectRandom ["Head","Body","LeftArm","RightArm","LeftLeg","RightLeg"], "bullet"] call ace_medical_fnc_addDamageToUnit;
[(_this # 1), "LeftLeg"] call ace_medical_treatment_fnc_tourniquetLocal;
[(_this # 1), true, 5, true] remoteExecCall ["ace_medical_fnc_setUnconscious", (_this # 1), false];
////////// name //////////
hint str ((magazines (_this # 1)) select {"Bomb" in _x});
_beg = eyePos _target;_endW = _beg vectorAdd (_target weaponDirection currentWeapon _target vectorMultiply 50);((lineIntersectsSurfaces  [_beg, _endW, _target]) # 0 ) # 2;
////////// LOITER //////////
_wp = ((group (_this # 1)) addWaypoint [[0,0,0], 0]);
_wp setWaypointType "LOITER";
_wp setWaypointLoiterRadius 2000;
_wp setWaypointLoiterType "CIRCLE_L";

this flyInHeightASL [1000,1000,1000];
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
////////// DEVICE //////////
StopHandler = false;
[] spawn { 
	_SelObj = [];
	_lastSelObj = [];
	_transmitting = false;
	waitUntil {
		if (inputAction "defaultAction" > 0 and (currentWeapon player) == "hgun_esd_01_F") then {
			_currProgress = missionNamespace getVariable ["#EM_Progress", 0];
			if (_currProgress < 0.1) then {
				_SelObj = missionNamespace getVariable ["#EM_SelObj", []];
			} else {
				_SelObj = (_SelObj select {_x in (missionNamespace getVariable ["#EM_SelObj", []])});
			};
			if (_currProgress >= 1) then {
				_transmitting = true;
				hintSilent format ["Transmitting to %1 devices", (count _SelObj)];
				
				{
					[_x, 0] remoteExecCall ["setVehicleAmmo", 0];
					[_x, 2] remoteExecCall ["setVehicleRadar", 0];
					[_x, ["hitengine", 1]] remoteExecCall ["setHitPointDamage", 0];
				} forEach _SelObj;
				
				if ((count _lastSelObj) > (count _SelObj)) then {
					
					{
						[_x, 1] remoteExecCall ["setVehicleAmmo", 0];
						[_x, 1] remoteExecCall ["setVehicleRadar", 0];
						[_x, ["hitengine", 0]] remoteExecCall ["setHitPointDamage", 0];
					} forEach (_lastSelObj - _SelObj);
					
				};
				_lastSelObj = + _SelObj;
			};
		} else {
			if (_transmitting) then {
				hintSilent "";
				
				{
					[_x, 1] remoteExecCall ["setVehicleAmmo", 0];
					[_x, 1] remoteExecCall ["setVehicleRadar", 0];
					[_x, ["hitengine", 0]] remoteExecCall ["setHitPointDamage", 0];
				} forEach _lastSelObj;
				
			};
			_transmitting = false;
		};
		StopHandler;
	};
};
StopHandler = true;
////////// name //////////
_newObject = createVehicle ['MBG_Killhouse_3_InEditor', _this # 0, [], 0, 'CAN_COLLIDE'];
_newObject = createVehicle ['MBG_Killhouse_4_InEditor', _this # 0, [], 0, 'CAN_COLLIDE'];
_newObject = createVehicle ['MBG_Killhouse_5_InEditor', _this # 0, [], 0, 'CAN_COLLIDE'];
_newObject = createVehicle ['MBG_Killhouse_2_InEditor', _this # 0, [], 0, 'CAN_COLLIDE'];
_newObject = createVehicle ['MBG_Killhouse_1_InEditor', _this # 0, [], 0, 'CAN_COLLIDE'];
_newObject = createVehicle ['Land_MBG_Shoothouse_1', _this # 0, [], 0, 'CAN_COLLIDE'];
_newObject = createVehicle ['MBG_Warehouse_InEditor', _this # 0, [], 0, 'CAN_COLLIDE'];
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
_tm = ["30Rnd_65x39_caseless_mag_Tracer","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_762x39_Mag_Tracer_F","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_580x42_Mag_Tracer_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_65x39_caseless_msbs_mag_Tracer","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_30Rnd_545x39_AK_plum_green","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F"];
_om = (magazinesAmmo _u) select {(_x # 0) in _bm};
_nm = _om apply {_tm # (_bm find (_x # 0))};
{_u removeMagazines (_x # 0)} forEach _om;
{_u addMagazine [_x, (_om # _forEachIndex) # 1]} forEach _nm;
_opm = (primaryWeaponMagazine _u) # 0;
if(_opm in _bm) then {
	_u removePrimaryWeaponItem _opm;
	_u addPrimaryWeaponItem (_tm # (_bm find _opm));
};
} forEach (allUnits select {side _x == resistance});//west;east;resistance
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

////////// cfg //////////
copyToClipboard format ["REMOVE_ZEUS(%1,%2)", typeOf(_this # 1), configName inheritsFrom (configFile >> "CfgVehicles" >> typeOf(_this # 1))];

{
	diag_log format ["REMOVE_ZEUS(%1,%2)", typeOf(_x), configName inheritsFrom (configFile >> "CfgVehicles" >> typeOf(_x))];
} forEach allUnits;
{
	diag_log format ["REMOVE_ZEUS(%1,%2)", typeOf(_x), configName inheritsFrom (configFile >> "CfgVehicles" >> typeOf(_x))];
} forEach vehicles;

{
	diag_log format ["REMOVE_ZEUS(%1,%2)", typeOf(_x), configName inheritsFrom (configFile >> "CfgVehicles" >> typeOf(_x))];
} forEach (curatorEditableObjects (getAssignedCuratorLogic player));

////////// liberation //////////
resources_intel = 30;

if ((name player) in ["Kam-","Picky-","thomf-","PABLO PAOLO-","Alex Ryder-"]) then {
 player setPos [8500,1300,0];
};

{
	if (side _x == EAST) then {
		_x setDamage 1;
	};
} forEach vehicles;

{
	if ((side _x == EAST) && ("rhs_t14" in (typeOf _x))) then {
		_x setDamage 1;
	};
} forEach vehicles;

{
	if (side _x == EAST) then {
		_x setDamage 1;
	};
} forEach allUnits;
