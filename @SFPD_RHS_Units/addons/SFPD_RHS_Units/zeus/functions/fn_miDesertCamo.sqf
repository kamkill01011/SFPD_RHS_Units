

_logic = _this # 0;
_pos = position _logic;
_unit = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if (!local _logic) exitWith {};

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

if (_unit isKindOf "RHS_Mi24_base") then {
	[[_unit], {(_this # 0) setObjectTexture [0, "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa"];}] remoteExecCall ['call', 0];
	[[_unit], {(_this # 0) setObjectTexture [1, "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa"];}] remoteExecCall ['call', 0];
	[[_unit], {(_this # 0) setObjectTexture [2, "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_co.paa"];}] remoteExecCall ['call', 0];
};
if (_unit isKindOf "RHS_Mi8_base") then {
	[[_unit], {(_this # 0) setObjectTexture [0, "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa"];}] remoteExecCall ['call', 0];
	[[_unit], {(_this # 0) setObjectTexture [1, "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"];}] remoteExecCall ['call', 0];
};

deleteVehicle _logic;
