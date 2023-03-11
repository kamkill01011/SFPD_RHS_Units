//_unit call CBRN_fnc_broadcastExposure

if (!local _this) exitWith {};

_this setVariable ["CBRN_public_exposure", _this getVariable ["CBRN_exposure", 0], true];