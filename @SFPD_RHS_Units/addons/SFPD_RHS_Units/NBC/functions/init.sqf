//

_null = [] spawn {
	if (!(hasInterface)) exitWith {};
	waitUntil {(time > 2) || !(isNull player)};
	
	KAM_NBC_CC = ppEffectCreate ["colorCorrections", 1509];
	KAM_NBC_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
	KAM_NBC_CC ppEffectCommit 0;
	KAM_NBC_CC ppEffectEnable true;
	
	KAM_NBC_WD = ppEffectCreate ["WetDistortion", 339];
	KAM_NBC_WD ppEffectAdjust [
		0,
		0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 
		0, 0
	];
	KAM_NBC_WD ppEffectCommit 0;
	KAM_NBC_WD ppEffectEnable true;
	
	
	_counter = 0;
	waitUntil {
		
		_exposure = (player getVariable ["CBRN_exposure", 0]);
		
		_rnd = 0.4;
		
		_sleep = (abs(CBRN_exposureKnockoutThreshold - _exposure)) + (random 5) + 5;
		if ((_counter > _sleep) && (_exposure > 0)) then {
			_rnd = (random 1);
			_counter = 0;
		};
		_counter = _counter + 1;
		
		if (_rnd < 0.3) then {
			_blackout = (random 0.3) + 0.2;
			KAM_NBC_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,_blackout],[1,1,1,0]];
			KAM_NBC_CC ppEffectCommit 2;
			sleep 2;
			KAM_NBC_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,1],[1,1,1,0]];
			KAM_NBC_CC ppEffectCommit 2;
		};
		
		if (_rnd > 0.5) then {
			KAM_NBC_WD ppEffectAdjust [
				0,
				1, 1,
				3, 3, 2.8, 2.8,
				0.001, 0.001, 0.001, 0.001,
				0, 0,
				50, 50
			];
			KAM_NBC_WD ppEffectCommit 1;
			sleep 10;
		};
		
		_WD = (_exposure / CBRN_exposureKnockoutThreshold) * 1.5;
		KAM_NBC_WD ppEffectAdjust [
			0,
			_WD, _WD,
			3, 3, 2.8, 2.8,
			0.001, 0.001, 0.001, 0.001,
			0, 0,
			50, 50
		];
		KAM_NBC_WD ppEffectCommit 1;
		
		sleep 1;
		
		false;
	};
};
