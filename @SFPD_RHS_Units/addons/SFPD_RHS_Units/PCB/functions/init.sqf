//

_null = [] spawn {
	if(!isServer) exitWith {};
	
	PCB_GlobalNamespace = true call CBA_fnc_createNamespace;
	publicVariable "PCB_GlobalNamespace";
};
