
systemChat str ["test", count ace_rearm_objectActions];

{
    ["ace_rearm_defaultCarriedObject", 0, ["ACE_MainActions"], _x, true] call ace_interact_menu_fnc_addActionToClass;
} forEach ace_rearm_objectActions;
