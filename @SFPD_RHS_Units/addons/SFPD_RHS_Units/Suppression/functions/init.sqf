//

_null = [] spawn {
	if (!(hasInterface)) exitWith {};
	waitUntil {(time > 2) || !(isNull player)};
	
	KAM_CURRENT_UNIT = player;
	KAM_EH = 0;
	KAM_SUPPRESS_VALUE = 0;
	KAM_SUPPRESS_VALUE_MAX = 10;
	KAM_SUPPRESS_VALUES = [];
	KAM_SUPPRESS_TIME = time;
	
	KAM_SUPPRESS_CC = ppEffectCreate ["colorCorrections", 1501];
	KAM_SUPPRESS_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
	KAM_SUPPRESS_CC ppEffectCommit 0;
	KAM_SUPPRESS_CC ppEffectEnable true;
	
	KAM_SUPPRESS_DBLUR = ppEffectCreate ["DynamicBlur", 800];
	KAM_SUPPRESS_DBLUR ppEffectAdjust [0];
	KAM_SUPPRESS_DBLUR ppEffectCommit 0;
	KAM_SUPPRESS_DBLUR ppEffectEnable true;
	
	//KAM_SUPPRESS_RBLUR = ppEffectCreate ["RadialBlur", 1003];
	//KAM_SUPPRESS_RBLUR ppEffectAdjust [0, 0, 0, 0];
	//KAM_SUPPRESS_RBLUR ppEffectCommit 0;
	//KAM_SUPPRESS_RBLUR ppEffectEnable true;
	
	KAM_EH = KAM_CURRENT_UNIT addEventHandler ["Suppressed", {
		params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
		
		_hit = getNumber (_ammoConfig >> "hit");
		_value = _hit / (_distance * _distance);
		_value = _value / 5;
		
		//systemChat str [_value, KAM_SUPPRESS_VALUE, KAM_SUPPRESS_VALUES, time];
		
		if (((vehicle _unit) == _unit) || (isTurnedOut _unit)) then {
			KAM_SUPPRESS_VALUES pushBack _value;
		};
	}];
	
	["unit", {
		params ["_newPlayerUnit"];
		
		//systemChat str ["PlayerEventHandler", _this];
		
		KAM_CURRENT_UNIT removeEventHandler ["Suppressed", KAM_EH];
		
		KAM_CURRENT_UNIT = _newPlayerUnit;
		
		KAM_SUPPRESS_VALUE = 0;
	
		resetCamShake;
		
		KAM_EH = KAM_CURRENT_UNIT addEventHandler ["Suppressed", {
			params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
			
			_hit = getNumber (_ammoConfig >> "hit");
			_value = _hit / (_distance * _distance);
			_value = _value / 5;
			
			//systemChat str [_value, KAM_SUPPRESS_VALUE, KAM_SUPPRESS_VALUES, time];
			
			if (((vehicle _unit) == _unit) || (isTurnedOut _unit)) then {
				KAM_SUPPRESS_VALUES pushBack _value;
			};
		}];
	}] call CBA_fnc_addPlayerEventHandler;
	
	waitUntil {
		if ((count KAM_SUPPRESS_VALUES) > 0) then {
			_temp = (KAM_SUPPRESS_VALUES deleteAt 0);
			KAM_SUPPRESS_VALUE = KAM_SUPPRESS_VALUE + _temp;
			KAM_SUPPRESS_VALUE = KAM_SUPPRESS_VALUE min KAM_SUPPRESS_VALUE_MAX;
		};
		_time = time;
		KAM_SUPPRESS_VALUE = KAM_SUPPRESS_VALUE - (_time - KAM_SUPPRESS_TIME);
		KAM_SUPPRESS_TIME = _time;
		KAM_SUPPRESS_VALUE = KAM_SUPPRESS_VALUE max 0;
		
		//hintSilent str KAM_SUPPRESS_VALUE;
		
		KAM_SUPPRESS_CC ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,(1 - ((KAM_SUPPRESS_VALUE / KAM_SUPPRESS_VALUE_MAX)) * 0.3)],[1,1,1,0]];
		KAM_SUPPRESS_CC ppEffectCommit 0;
		KAM_SUPPRESS_DBLUR ppEffectAdjust [KAM_SUPPRESS_VALUE / KAM_SUPPRESS_VALUE_MAX];
		KAM_SUPPRESS_DBLUR ppEffectCommit 0;
		//KAM_SUPPRESS_RBLUR ppEffectAdjust [KAM_SUPPRESS_VALUE / 1000, KAM_SUPPRESS_VALUE / 1000, 0.2, 0.2];
		//KAM_SUPPRESS_RBLUR ppEffectCommit 0;
		
		if (KAM_SUPPRESS_VALUE > (KAM_SUPPRESS_VALUE_MAX * 0.7)) then {
			addCamShake [0.2, 0.2, 80];
			//systemChat str ["addCamShake", time];
		};
		
		false;
	};
};
