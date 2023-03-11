

_logic = _this # 0;
_pos = position _logic;
_unit = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if (!local _logic) exitWith {};

if (isNull _unit) exitWith { deleteVehicle _logic; [objNull, "Must be placed on something!"] call BIS_fnc_showCuratorFeedbackMessage; playSound "FD_Start_F"; };

if ((vest _unit) == "") then { _unit addVest "V_BandollierB_blk"; };
if (!("ACE_DeadManSwitch" in (items _unit))) then { _unit addItem "ACE_DeadManSwitch"; };
_unit addItem "DemoCharge_Remote_Mag";

deleteVehicle _logic;
