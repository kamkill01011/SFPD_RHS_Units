
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueSlider = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 102;
_valueSlider2 = sliderPosition _ctrl;

_radius = _valueSlider;
_civCapacity = _valueSlider2;

private _m = objNull;
_m = (group (missionNamespace getvariable ["BIS_functions_mainscope",objnull])) createUnit ["ModuleCivilianPresenceSafeSpot_F",_pos,[],0,"CAN_COLLIDE"];
_m setPos _pos;
_m setVectorDirAndUp [[0,1,0],[0,0,1]];
_m setVariable ["objectArea",[_radius,_radius,0,false,-1]];
_m setVariable ["#type",2];
_m setVariable ["#capacity",_civCapacity];
_m setVariable ["#useBuilding",false];
_m setVariable ["#terminal",false];
_m setvariable ["BIS_fnc_initModules_disableAutoActivation",true];
[[_m], {
	{_x addCuratorEditableObjects [[_this # 0],true ];} forEach allCurators;
}] remoteExec ["call", 2];
if !(isNull _m) then {_m setvariable ["BIS_fnc_initModules_activate",true];};
