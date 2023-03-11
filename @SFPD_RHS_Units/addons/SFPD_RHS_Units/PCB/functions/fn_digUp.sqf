
params ["_player", "_target"];

_bomb = _target getVariable ["ace_explosives_Explosive", objNull];

_nbPCB = PCB_GlobalNamespace getVariable ["nbPCB", -1];
_id = -1;
if (_nbPCB != -1) then {
	for "_i" from 0 to _nbPCB do {
		_iBomb = PCB_GlobalNamespace getVariable [format ["%1_bomb", _i], objNull];
		if (_iBomb == _bomb) exitWith {
			_id = _i;
		};
	};
};

if (_id == -1) then {
	_id = _nbPCB + 1;
	
	_batt0 = [4,5,6,7] call BIS_fnc_arrayShuffle;
	_batt1 = [1,6,7,8] call BIS_fnc_arrayShuffle;
	_res0 = _batt0 # 0;
	_res1 = _batt0 # 1;
	_res2 = _batt1 # 0;
	_res3 = _batt1 # 1;
	_IC0 = format ["IC%1%2%3%4%5", 18, 2, _res0, 3, _res1];
	_IC1 = format ["IC%1%2%3%4%5", 2, _res2, 3, _res3, 45];
	_PCB0 = if ((_res0 == 4) or (_res0 == 5)) then {"secu";} else {"fake";};
	_PCB1 = if ((_res1 == 4) or (_res1 == 5)) then {"secu";} else {"fake";};
	_PCB2 = if ((_res2 == 1) or (_res2 == 8)) then {"secu";} else {"fake";};
	_PCB3 = if ((_res3 == 1) or (_res3 == 8)) then {"secu";} else {"fake";};
	
	PCB_GlobalNamespace setvariable ["nbPCB", _id, true];
	
	PCB_GlobalNamespace setvariable [format ["%1_bomb", _id], _bomb, true];
	PCB_GlobalNamespace setvariable [format ["%1_cutWires", _id], [], true];
	PCB_GlobalNamespace setvariable [format ["%1_IC0", _id], _IC0, true];
	PCB_GlobalNamespace setvariable [format ["%1_IC1", _id], _IC1, true];
	PCB_GlobalNamespace setvariable [format ["%1_PCB", _id], ["batt",_PCB0,_PCB1,_PCB2,_PCB3,"batt"], true];
};

_cutWires = PCB_GlobalNamespace getVariable [format ["%1_cutWires", _id], []];
_PCB = PCB_GlobalNamespace getVariable [format ["%1_PCB", _id], ["null","null","null","null","null","null"]];

_PCBCopy = + _PCB;
{
	_PCBCopy set [_x, "cut"];
} forEach _cutWires;

if ("batt" in _PCBCopy) then {
	_bomb setDamage 1;
} else {
	[_player,_target] call ace_explosives_fnc_startDefuse;
};

