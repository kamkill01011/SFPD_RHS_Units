//params ["_projectile", "_timeToLive", "_chemicalType", "_heightOfBurst", "_sprayWidth", "_lifetime"];

//["ace_flashbangExploded", _this] call CBA_fnc_globalEvent;

//[_projectile, _timeToLive, _chemicalType, _heightOfBurst, _sprayWidth, _lifetime]
_this spawn {
	params ["_projectile", "_timeToLive", "_chemicalType", "_heightOfBurst", "_sprayWidth", "_lifetime"];
	private _endTime = time + _timeToLive;
	waitUntil {
		[getPos _projectile, _sprayWidth, _lifetime, _chemicalType, _heightOfBurst, 0.2] call CBRN_fnc_spawnMist;
		sleep 1;
		time > _endTime;
	};
};
