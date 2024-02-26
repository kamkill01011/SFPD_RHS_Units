
params ["_logic"];
if (!local _logic) exitWith {};
_unit = attachedTo _logic;
_pos = position _logic;

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

_m = ["G_AirPurifyingRespirator_01_F","G_AirPurifyingRespirator_02_black_F","G_RegulatorMask_F","G_RegulatorMask_F"];
_u = ["U_B_CBRN_Suit_01_MTP_F","U_C_CBRN_Suit_01_Blue_F","U_C_CBRN_Suit_01_White_F","U_C_CBRN_Suit_01_White_F"];
_s = 0;
_side = side _unit;
if (_side == west) then {_s = 0;};
if (_side == east) then {_s = 1;};
if (_side == resistance) then {_s = 2;};
if (_side == civilian) then {_s = 3;};
_unit addGoggles (_m # _s);
_i = uniformItems _unit;
_unit forceAddUniform (_u # _s);
{_unit addItemToUniform _x} forEach _i;

deleteVehicle _logic;
