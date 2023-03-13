//

_null = _this spawn {
	params ["_unit", "_dummy"];
	_vehicle = _dummy getVariable ['Skyhook_vehicle', objNull];
	waitUntil {
		if (animationState _unit != "ACE_FastRoping") then {
			_unit disableCollisionWith _dummy;
			[_unit, "ACE_FastRoping", 2] call ace_common_fnc_doAnimation;
		};
		_unit setDir (getDir _vehicle);
		_pos = (getPosWorld _dummy) vectorAdd [0, 0, -0.5];
		_unit setPosWorld _pos;
		_unit setVelocity [0,0,0];
		
		(!(alive _unit)) || {(!(alive (_unit getVariable ['Skyhook', objNull]))) || {(!(alive(_vehicle getVariable ['Skyhook', objNull])))}};
	};
	[_unit, '', 2] call ace_common_fnc_doAnimation;
};
