//

_player = _this # 0;

_serverMods = allAddonsInfo apply {_x # 0};

[[_serverMods, _player], {
	_player = _this # 1;
	_serverMods = (_this # 0) - ["AACC\", "SFPD_Markers\"];
	_playerMods = (allAddonsInfo apply {_x # 0}) - ["zei\", "dedmen\ArmaZeusCache\"];
	_lessMods = (_serverMods select {!(_x in _playerMods)});
	_moreMods = (_playerMods select {!(_x in _serverMods)});
	
	{
		_msg = format ["%1 is missing: %2", name _player, _x];
		[_msg] remoteExec ["systemChat", 0];
		[_msg] remoteExec ["diag_log", 0];
	} forEach _lessMods;
	{
		_msg = format ["%1 must remove: %2", name _player, _x];
		[_msg] remoteExec ["systemChat", 0];
		[_msg] remoteExec ["diag_log", 0];
	} forEach _moreMods;
}] remoteExecCall ["call", _player];
