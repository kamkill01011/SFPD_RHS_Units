
private _uav = _this # 0;
[_uav] spawn {
	private _uav = _this # 0;
	waitUntil {
		_uav setAutonomous false;
		sleep 1;
		!alive _uav;
	};
};
