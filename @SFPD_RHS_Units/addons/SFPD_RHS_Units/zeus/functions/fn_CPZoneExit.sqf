
#include "\SFPD_RHS_Units\zeus\functions\moduleExit_header.sqf"

_ctrl = _dialog displayCtrl 101;
_valueSlider = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 102;
_valueSlider2 = sliderPosition _ctrl;

_ctrl = _dialog displayCtrl 103;
_valueCB = _ctrl lbData (lbCurSel _ctrl);

_radius = _valueSlider;
_civCount = _valueSlider2;
_civType = _valueCB;

/*private _m = objNull;
_m = (group (missionNamespace getvariable ["BIS_functions_mainscope",objnull])) createUnit ["ModuleCivilianPresence_F",_pos,[],0,"CAN_COLLIDE"];
_m setPos _pos;
_m setVectorDirAndUp [[0,1,0],[0,0,1]];
_m setVariable ["objectArea",[_radius,_radius,0,false,-1]];
_m setVariable ["#onCreated",compile _civType];
_m setVariable ["#onDeleted",compile "true"];
_m setVariable ["#unitCount",_civCount];
_m setVariable ["#usePanicMode",true];
_m setVariable ["#useAgents",true];
_m setVariable ["#debug",false];
_m setvariable ["BIS_fnc_initModules_disableAutoActivation",true];
{_x addCuratorEditableObjects [[_m],true ];} forEach allCurators;
if !(isNull _m) then {_m setvariable ["BIS_fnc_initModules_activate",true];};*/

[[_pos, _radius, _civCount, _civType], {
	params ["_pos", "_radius", "_civCount", "_civType"];
	private _m = objNull;
	_m = (group (missionNamespace getvariable ["BIS_functions_mainscope",objnull])) createUnit ["ModuleCivilianPresence_F",_pos,[],0,"CAN_COLLIDE"];
	_m setPos _pos;
	_m setVectorDirAndUp [[0,1,0],[0,0,1]];
	_m setVariable ["objectArea",[_radius,_radius,0,false,-1]];
	_m setVariable ["#onCreated",compile _civType];
	_m setVariable ["#onDeleted",compile "true"];
	_m setVariable ["#unitCount",_civCount];
	_m setVariable ["#usePanicMode",true];
	_m setVariable ["#useAgents",true];
	_m setVariable ["#debug",false];
	_m setvariable ["BIS_fnc_initModules_disableAutoActivation",true];
	{_x addCuratorEditableObjects [[_m],true ];} forEach allCurators;
	if !(isNull _m) then {_m setvariable ["BIS_fnc_initModules_activate",true];};
}] remoteExec ["call", 2];
