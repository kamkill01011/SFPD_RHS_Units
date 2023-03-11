
params ["_target"];

_bomb = _target getVariable ["ace_explosives_Explosive", objNull];

if (_bomb isKindOf "IEDLandBig_Remote_Ammo") exitWith {true;};
if (_bomb isKindOf "IEDLandSmall_Remote_Ammo") exitWith {true;};
if (_bomb isKindOf "IEDUrbanBig_Remote_Ammo") exitWith {true;};
if (_bomb isKindOf "IEDUrbanSmall_Remote_Ammo") exitWith {true;};

false;
