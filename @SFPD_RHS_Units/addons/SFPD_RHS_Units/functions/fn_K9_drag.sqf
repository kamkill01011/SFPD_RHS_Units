//[dog, man] call KAM_fnc_K9_drag;


_this spawn {
	params ["_dog", "_target"];
	_dog playmove "Dog_Idle_Growl";
	_dog setVariable ["dog_dragging", true, true];
	[_dog, _target, true] call ace_common_fnc_claim;
	_target setDir (getDir _dog);
	_target setPosASL (getPosASL _dog vectorAdd (vectorDir _dog vectorMultiply 1.5));
	[_target, "AinjPpneMrunSnonWnonDb_grab", 2, true] call ace_common_fnc_doAnimation;
	_target attachTo [_dog,[0.25,0.2,0]];
	[_target, "AinjPpneMrunSnonWnonDb_still", 0, true] call ace_common_fnc_doAnimation;
	[{
		params ["_args", "_idPFH"];
		_args params ["_unit", "_target"];
		if (!alive _target || {_unit distance _target > 10 || {(!(_unit getVariable ["dog_dragging", false])) || !(_unit == vehicle _unit) || !(_target getVariable ["ACE_isUnconscious", false])}}) then {
			[_unit, _target] call ace_dragging_fnc_dropObject;
			_unit setVariable ["ace_dragging_isDragging", false, true];
			_unit setVariable ["dog_dragging", false, true];
			[_idPFH] call CBA_fnc_removePerFrameHandler;
		};
	}, 0.2, [_dog, _target]] call CBA_fnc_addPerFrameHandler;
};







