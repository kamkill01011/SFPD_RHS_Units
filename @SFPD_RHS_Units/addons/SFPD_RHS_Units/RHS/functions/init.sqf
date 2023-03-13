//

_null = [] spawn {
	if(!isServer) exitWith {};
	waitUntil {
		missionNamespace setVariable ["rhs_aps_vehicles", [], true];
		sleep 10;
		false;
	};
};
