if (!hasInterface) exitwith {};

// hadle stamina
[] spawn {
	while {true} do {
		//Get our config values
		private _maskLevel = getNumber (configFile >> "cfgGlasses" >> goggles player >> "CBRN_protectionLevel");
		private _suitLevel = getNumber (configFile >> "cfgWeapons" >> uniform player >> "CBRN_protectionLevel");
		//Combine our flags
		private _flags = ([_maskLevel, _suitLevel] call BIS_fnc_bitwiseOR) call BIS_fnc_bitFlagsToArray;
		private _faceCovered = 1 in _flags;
		private _hasFilter = 2 in _flags;
		private _hasHood = 4 in _flags;
		private _bodyCovered = 8 in _flags;

		if (_faceCovered) then {
			if (_hasFilter) then {
				ace_advanced_fatigue_recoveryFactor = 0.5;
			} else {
				ace_advanced_fatigue_recoveryFactor = 0.8;
			};
		} else {
			ace_advanced_fatigue_recoveryFactor = 1;
		};

		if (_bodyCovered) then {
			ace_advanced_fatigue_loadFactor = 2;
		} else {
			ace_advanced_fatigue_loadFactor = 1;
		};

		sleep 1;
	};
};
