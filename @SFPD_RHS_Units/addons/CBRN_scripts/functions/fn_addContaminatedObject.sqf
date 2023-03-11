//[_this # 1, 10, 100] call CBRN_fnc_addContaminatedObject

params ["_obj", "_max", "_radius"];

if (!alive _obj) exitWith {};

_obj setVariable ["CBRN_max", _max, false];
_obj setVariable ["CBRN_radius", _radius, false];
CBRN_contaminatedObject pushBack _obj;
