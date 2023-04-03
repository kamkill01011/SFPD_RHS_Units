
params ["_input", "_player"];

_diskC = _player getVariable ["current_KAM_ArmaOS_fs", []];
if (count _diskC == 0) exitWith {
	hint "Arma OS not responding";
};

_state = _player getVariable ["current_KAM_ArmaOS_state", 0];// state: 0=root, 1=folder
_dirName = _player getVariable ["current_KAM_ArmaOS_dir", ""];
_cwd = [];
if (_state == 0) then {
	_cwd = _diskC;
} else {
	_cwd = _diskC get _dirName;
};

_cmd = _input;// select [0, 2];
if (_cmd == "ls") exitWith {
	_result = (keys _cwd) joinString "\n";
	_result;
};

_cmd = _input select [0, 3];
if (_cmd == "cd ") exitWith {
	_arg = _input select [3];
	if (_state == 0) then {
		if (_arg select [(count _arg) - 1] != "/") then {
			_arg = _arg + "/";
		};
		if (_arg in _cwd) then {
			_player setVariable ["current_KAM_ArmaOS_state", 1];
			_player setVariable ["current_KAM_ArmaOS_dir", _arg];
			"";
		} else {
			format ["ERROR: directory does not exist: '%1'", _arg];
		};
	} else {
		if (_arg == "..") then {
			_player setVariable ["current_KAM_ArmaOS_state", 0];
			_player setVariable ["current_KAM_ArmaOS_dir", ""];
			"";
		} else {
			"ERROR: cannot change directory";
		};
	};
};

_cmd = _input select [0, 4];
if (_cmd == "cat ") exitWith {
	_arg = _input select [4];
	if (_state == 0) then {
		"ERROR: cannot display file";
	} else {
		if (_arg in _cwd) then {
			_result = _cwd get _arg;
			_result;
		} else {
			format ["ERROR: file does not exist: '%1'", _arg];
		};
	};
};

format ["ERROR: unknown command: '%1'", _input];

