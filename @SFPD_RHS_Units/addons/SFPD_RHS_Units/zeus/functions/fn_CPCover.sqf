
_logic = _this # 0;
_pos = position _logic;

if (!local _logic) exitWith {};

private _m = objNull;
_m = (group (missionNamespace getvariable ["BIS_functions_mainscope",objnull])) createUnit ["ModuleCivilianPresenceSafeSpot_F",_pos,[],0,"CAN_COLLIDE"];
_m setPos _pos;
_m setVectorDirAndUp [[0,1,0],[0,0,1]];
_m setVariable ["objectArea",[5,5,0,false,-1]];
_m setVariable ["#type",0];
_m setVariable ["#capacity",10];
_m setVariable ["#useBuilding",false];
_m setVariable ["#terminal",true];
_m setvariable ["BIS_fnc_initModules_disableAutoActivation",true];
[[_m], {
	{_x addCuratorEditableObjects [[_this # 0],true ];} forEach allCurators;
}] remoteExec ["call", 2];
if !(isNull _m) then {_m setvariable ["BIS_fnc_initModules_activate",true];};

deleteVehicle _logic;
