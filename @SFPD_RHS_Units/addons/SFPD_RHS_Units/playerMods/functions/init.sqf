//

_null = [] spawn {
	if(!isServer) exitWith {};
	addMissionEventHandler ["PlayerConnected", {
		params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];
		
		_serverMods = allAddonsInfo apply {_x # 0};
		
		[[_serverMods, _name, _owner], {
			_playerName = _this # 1;
			_playerId = _this # 2;
			_serverMods = (_this # 0) - ["AACC\"];
			_playerMods = (allAddonsInfo apply {_x # 0});
			_lessMods = (_serverMods select {!(_x in _playerMods)});
			_moreMods = (_playerMods select {!(_x in _serverMods)});
			
			{
				_msg = format ["%1 is missing: %2", _playerName, _x];
				[_msg] remoteExec ["systemChat", 0];
				[_msg] remoteExec ["diag_log", 0];
			} forEach _lessMods;
			{
				_msg = format ["%1 must remove: %2", _playerName, _x];
				[_msg] remoteExec ["systemChat", 0];
				[_msg] remoteExec ["diag_log", 0];
			} forEach _moreMods;
		}] remoteExecCall ["call", _playerId];
		
	}];
};
