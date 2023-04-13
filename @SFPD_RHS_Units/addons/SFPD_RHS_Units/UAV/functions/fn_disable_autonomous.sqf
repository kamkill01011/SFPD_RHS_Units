//[(_this # 1)] call UAV_fnc_disable_autonomous;

if (!isServer) exitwith {};

private _uav = _this # 0;
[_uav] spawn {
	private _uav = _this # 0;
	[[_uav], {
		params ["_uav"];
		[_uav] call UAV_fnc_disable_autonomous_loop;
	}] remoteExec ["call", 0, _uav];
};
