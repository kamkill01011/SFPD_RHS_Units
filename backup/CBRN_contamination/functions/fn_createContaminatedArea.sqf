/*
	Author: Assaultboy

	Description:
		Creates a contaminated area without animations, useful for mission setup
	
	Remark(s):
		This function must be executed on the server

	Parameter(s):
	0: Position - The position to create the contamination (3d)
	1: Size - The width and length of the contamination (3d)
	2: Lethality - The lethality of the contamination (0 - Non-lethal, 1 - Very Deadly)
	3: Lifetime - The lifetime of the contamination in seconds (-1 is non-decaying)
	4: MOPP Needed - The level of MOPP required to avoid contamination (0 - None, 1 - Mask, 2 - Full Suit)
	5: Direction (Optional) - The direction to spawn the area facing

	Returns:
		Trigger - The trigger representing the contamination (objNull if it fails)
*/

//Handle our parameters and locality
if (!isServer) exitWith {"'CBRN_fnc_createContaminatedArea' must be called on the server!" call CBRN_fnc_throwWarning;objNull};
params [
	["_position", [0, 0, 0], [[]], [3]],
	["_size", [10, 10, 10], [[]], [3]],
	["_lethality", 0, [0]],
	["_lifetime", -1, [0]],
	["_MOPP", 0, [0]],
	["_angle", 0, [0]]
];

//Get our damage mod
private _damageMod = 1;
if (!isNil "CBRN_set_damageMod") then {_damageMod = CBRN_set_damageMod};

private _area = createTrigger ["EmptyDetector", _position];
_area setTriggerArea [_size select 0, _size select 1 , 0, false, _size select 2];
_area setTriggerActivation ["ANY", "PRESENT", true];
_area setTriggerStatements ["false", "'Contaminated area trigger was activated!' remoteExecCall ['CBRN_fnc_throwWarning', 0]", "'Contaminated area trigger was deactivated!' remoteExecCall ['CBRN_fnc_throwWarning', 0]"];

_area setDir _angle;

_area setVariable ["CBRN_lifetime", _lifetime];
_area setVariable ["CBRN_lethality", (_lethality / (100 / _damageMod)) * _MOPP];
_area setVariable ["CBRN_MOPP", _MOPP];

_area setVariable ["CBRN_index", CBRN_var_contaminatedAreas pushback _area];

//Lets see if sober me ever finds this comment lol
//I did

_nil = [{
	private _area = (_this select 0);
	
	//Check to make sure our area still exists
	if (!(isNil "_area") && !(isNull _area)) then {
		private _MOPPLevel = (_area getVariable ["CBRN_MOPP", 0]);
		private _lethality = (_area getVariable ["CBRN_lethality", 0]);
		private _lifetime = (_area getVariable ["CBRN_lifetime", 0]);
		
		private _lastList = (_area getVariable ["CBRN_lastList", []]);
		private _newList = [];
		
		//Now we cylce through all objects inside the area
		{
			//Filter out any non-unit objects and dead objects
			if ((_x isKindOf "CAManBase") && !(_x isKindOf "VirtualMan_F")) then {
				if (alive _x) then {
					//Check the units MOPP level
					if ((_x call CBRN_fnc_getMOPPLevel) < _MOPPLevel) then {
						//Get the units contamination level so we can make sure it is up to date
						private _contamination = (_x getVariable ["CBRN_contaminationLevel", 0]);
						
						//If we are not maxed out on contamination than add some
						if (_contamination < 1) then {_x setVariable ["CBRN_contaminationLevel", (_contamination + _lethality) min 1]};
						if (isPlayer _x) then {
							_newList pushBack _x;
							if (!(_x in _lastList)) then {
								(_MOPPLevel call CBRN_fnc_getContaminationMessage) remoteExecCall ["hint", _x];
							};
						};
						
						//If our unit doesn't have a CDH then lets start one
						if ((_x getVariable ["CBRN_chemicalDamageHandler", -1]) == -1) then {
						
							//Let them know about their inevitable death before we hop into the loop (IF it's a player)
							if (isPlayer _x) then {
								//(_MOPPLevel call CBRN_fnc_getContaminationMessage) remoteExecCall ["hint", _x];
								
							//And if it's not a play than force them to react accordingly.
							} else {
								if (((group _x) getVariable ["CBRN_alertness", 0]) == 0) then {[_x, 1] call CBRN_fnc_reactToChemicals};
							};
							
							_x call CBRN_fnc_addChemicalDamageHandler;
						};
					};
				};
			};
			
		} forEach list _area;
		
		_area setVariable ["CBRN_lastList", _newList];
		
		//Tick down the life of our area
		if (_lifetime != -1) then {
			_lifetime = (_lifetime - 1);
			
			_area setVariable ["CBRN_lifetime", _lifetime];
		};
		
		//If our area has run out of life, then delete it and remove it from the index
		if (_lifetime == 0) then {
			CBRN_var_contaminatedAreas deleteAt (_area getVariable ["CBRN_index", -1]);
			deleteVehicle _area;
		};
		
	//If our area does not exist than we can remove the handle for this function and let it die
	} else {
		(_this select 1) call CBA_fnc_removePerFrameHandler;
	};
}, 1, _area] call CBA_fnc_addPerFrameHandler;

_area;