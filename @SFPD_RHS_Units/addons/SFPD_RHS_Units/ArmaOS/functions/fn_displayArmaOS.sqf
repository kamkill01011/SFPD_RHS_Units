
params ["_player", "_target"];


_ArmaOS_fs = _target getVariable ["KAM_ArmaOS_fs", []];
if (count _ArmaOS_fs == 0) exitWith {
	hint "Failed to load Arma OS";
};

_player setvariable ["current_KAM_ArmaOS_fs", _ArmaOS_fs];
_player setVariable ["current_KAM_ArmaOS_state", 0];
_player setVariable ["current_KAM_ArmaOS_dir", ""];
createDialog "ArmaOSDialog";

private _dialog = findDisplay 1337;
private _ctrl = (_dialog displayCtrl 104);
private _input = ctrlText _ctrl;

_ctrl ctrlAddEventHandler ["KeyDown", {
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == 28) then {
		_input = ctrlText _displayOrControl;
		_dirName = ace_player getVariable ["current_KAM_ArmaOS_dir", ""];
		_resultText = format ["C:/%1>%2\n", _dirName, _input];
		_result = [_input, ace_player] call ArmaOS_fnc_processInput;
		_displayOrControl ctrlSetText "";
		_dialog = findDisplay 1337;
		_ctrlPath = (_dialog displayCtrl 205);
		_ctrlResult = (_dialog displayCtrl 206);
		_dirName = ace_player getVariable ["current_KAM_ArmaOS_dir", ""];
		_ctrlPath ctrlSetText (format ["C:/%1", _dirName]);
		_ctrlResult ctrlSetText (_resultText + _result);
	};
	false;
}];


