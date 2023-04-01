//

_null = [] spawn {
	if (!(hasInterface)) exitWith {};
	waitUntil {(time > 2) || !(isNull player)};
	
	KAM_SLEEP_CC = ppEffectCreate ["colorCorrections", 1559];
	KAM_SLEEP_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
	KAM_SLEEP_CC ppEffectCommit 0;
	KAM_SLEEP_CC ppEffectEnable true;
	
	KAM_SLEEP_WD = ppEffectCreate ["WetDistortion", 389];
	KAM_SLEEP_WD ppEffectAdjust [
		0,
		0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 
		0, 0
	];
	KAM_SLEEP_WD ppEffectCommit 0;
	KAM_SLEEP_WD ppEffectEnable true;
	
	
	_delay = 120;
	_counter = 0;
	_next = random _delay;
	waitUntil {
		_sleep_days = (player getVariable ["KAM_SLEEP_DAYS", 0]);
		_sleep_days = 0 max _sleep_days;
		_rnd = 0.4;
		
		_sleep = (_delay + _next) / (_sleep_days + 1);
		if ((_counter > _sleep) && (_sleep_days > 0.9)) then {
			_rnd = random 1;
			_next = random _delay;
			_counter = 0;
		};
		_counter = _counter + 1;
		
		if (_rnd > 0.41) then {
			_blackout = 0.2 + (random 0.2);
			KAM_SLEEP_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,_blackout],[1,1,1,0]];
			KAM_SLEEP_CC ppEffectCommit 2;
			sleep 2;
			KAM_SLEEP_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,1],[1,1,1,0]];
			KAM_SLEEP_CC ppEffectCommit 2;
		};
		
		if (_rnd < 0.39) then {
			KAM_SLEEP_WD ppEffectAdjust [
				0,
				1, 1,
				3, 3, 2.8, 2.8,
				0.001, 0.001, 0.001, 0.001,
				0, 0,
				50, 50
			];
			KAM_SLEEP_WD ppEffectCommit 1;
			sleep 10;
		};
		
		_WD = 1.5 min (_sleep_days * 0.2);
		if (_WD < 0.18) then {
			_WD = 0;
		};
		KAM_SLEEP_WD ppEffectAdjust [
			0,
			_WD, _WD,
			3, 3, 2.8, 2.8,
			0.001, 0.001, 0.001, 0.001,
			0, 0,
			50, 50
		];
		KAM_SLEEP_WD ppEffectCommit 1;
		sleep 1;
		
		false;
	};
};
