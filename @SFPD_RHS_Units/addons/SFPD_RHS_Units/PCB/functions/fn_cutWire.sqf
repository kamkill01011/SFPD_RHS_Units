
params ["_cutWire"];

_IED = ace_player getVariable ["usingIED",nil];
_id = ace_player getVariable ["usingIED_ID",-1];

_PCB = PCB_GlobalNamespace getVariable [format ["%1_PCB", _id], ["null","null","null","null","null","null"]];
_cutWires = PCB_GlobalNamespace getVariable [format ["%1_cutWires", _id], []];

_batteryID = if (_cutWire < 3) then {0;} else {1;};
_offset = _batteryID * 3;

if (!(_cutWire in _cutWires)) then {
	_type = _PCB # _cutWire;
	
	_dialog = findDisplay 1337;
	(_dialog displayCtrl (_cutWire + 10)) ctrlEnable false;
	
	switch _type do {
		case "fake": {
			systemChat "boom";
			_IED setDamage 1;
		};
		case "secu": {};
		case "null": {};
		case "batt": {
			_hasSecurity = false;
			for "_i" from 0 to 2 do {
				_realI = _i + _offset;
				if (!(_realI in _cutWires)) then {
					_t = _PCB # _realI;
					if (_t isEqualTo "secu") exitWith {
						_hasSecurity = true;
					};
				};
			};
			if (_hasSecurity) then {
				systemChat "boom";
				_IED setDamage 1;
			};
		};
	};
	
	_cutWires pushBack _cutWire;
	PCB_GlobalNamespace setvariable [format ["%1_cutWires", _id], _cutWires, true];
	
	_dialog = findDisplay 1337;
	(_dialog displayCtrl (_cutWire + 10)) ctrlEnable false;
};


/*{
	(_dialog displayCtrl (_cutWire + 10)) ctrlEnable false;
} forEach _cutWires;*/

