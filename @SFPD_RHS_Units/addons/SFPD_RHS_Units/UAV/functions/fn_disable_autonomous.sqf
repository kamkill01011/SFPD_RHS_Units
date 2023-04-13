//[(_this # 1)] call UAV_fnc_disable_autonomous;


private _uav = _this # 0;
[_uav] spawn {
	private _uav = _this # 0;
	waitUntil {
		[[_uav], {
			params ["_uav"];
			if (isAutonomous _uav) then {
				_uav setAutonomous false;
			};
		}] remoteExec ["call", _uav];
		/*if (isAutonomous _uav) then {
			_uav setAutonomous false;
		};*/
		sleep 2;
		!alive _uav;
	};
};
