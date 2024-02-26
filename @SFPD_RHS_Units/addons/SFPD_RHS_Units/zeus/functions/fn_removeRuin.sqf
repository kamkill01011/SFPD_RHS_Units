
params ["_logic"];
if (!local _logic) exitWith {};
_unit = attachedTo _logic;
_pos = position _logic;

[_pos] spawn {
	private _pos = _this # 0;
	
	_buildings = nearestObjects [_pos, ["HouseBase"], 10, true];
	if ((count _buildings) == 0) exitWith {hint "no building found"};
	hint "";
	_building = (_buildings # 0);
	
	_new = _building getVariable ["KAM_Ruin_new", objNull];
	_original = _building getVariable ["KAM_Ruin_original", objNull];
	
	if (!(isNull _new)) exitWith {
		deleteVehicle _new;
		//_building hideObjectGlobal false;
		[_building, false] remoteExec ["hideObjectGlobal", 2];
		_building setVariable ["KAM_Ruin_new", nil, true];
	};
	
	if (!(isNull _original)) exitWith {
		deleteVehicle _building;
		//_original hideObjectGlobal false;
		[_original, false] remoteExec ["hideObjectGlobal", 2];
		_original setVariable ["KAM_Ruin_new", nil, true];
	};
	
	hint "no thing to do";
};

deleteVehicle _logic;
