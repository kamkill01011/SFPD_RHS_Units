/*
	DESCRIPTION:
		This function will add the listener for Adenosine treatment
		This function is called automatically by CBA XEH
		
	PARAMETERS:
		None 
			
	RETURNS
		Nothing
		
	EXAMPLE
		call CBN_fnc_treatmentHandler
*/

//Add our treatment listener
["ace_treatmentSucceded", {
	params ["_medic", "_patient", "_bodyPart", "_classname"];
	
	//Doh, only run on the patients machine
	if (!local _patient) exitWith {["ace_treatmentSucceded", _this, _patient] call CBA_fnc_targetEvent};
	
	//If we are using adenosine
	if (_classname == "Adenosine") then {
		private _currentExposure = (_patient getVariable ["CBRN_exposure", 0]);
		private _newExposure = ((_currentExposure - 30) max 0);
		
		//Set our new exposure
		_patient setVariable ["CBRN_exposure", _newExposure];
		
		//And let us know the exposure has changed
		["CBRN_unitExposureLevelChanged", [_patient, _newExposure]] call CBA_fnc_localEvent;
	};
}] call CBA_fnc_addEventHandler;