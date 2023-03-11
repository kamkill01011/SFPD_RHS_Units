
#include "\SFPD_RHS_Units\zeus\functions\moduleEnter_header.sqf"

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

createDialog "RscAddK9Module";

localNamespace setVariable ["KAM_ZEUS_POS", _pos];
localNamespace setVariable ["KAM_ZEUS_UNIT", _unit];
