if (!isServer) exitwith {};

[] spawn {
	while {true} do {
		sleep 1;
		{
			_shower = _x;
			{
				if ((_shower animationSourcePhase "valve_source" == 1) && ((_x distance2D _shower) < 0.5) && ((abs ((getPosATL _x) # 2 - (getPosATL _shower) # 2)) < 0.5)) then {
					_owner = owner _x;
					[[_x], {
						_unit = _this # 0;
						_exposure = (((_unit getVariable ["CBRN_exposure", 0]) - 1) max 0);
						_unit setVariable ["CBRN_exposure", _exposure];
						["CBRN_unitExposureLevelChanged", [_unit, _exposure]] call CBA_fnc_localEvent;
					}] remoteExecCall ["bis_fnc_call", _owner]; 
				};
			} forEach allUnits;
		} forEach entities "DeconShower_01_F";
	};
};
