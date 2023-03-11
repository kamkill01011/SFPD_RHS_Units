//[_this # 0] call KAM_fnc_vanActions;


//_type = typeOf ((_this # 0) # 0);
_type = "Van_02_base_F";

_dist = 2;
_icon = "\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa";

// door 1
_action = ["OPEN_DOOR_1","open",_icon,{_target animateDoor ['Door_1_source', 1];},{(alive _target) && {(_target doorPhase 'Door_1_source') < 0.5};},{},[], "door1", _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["CLOSE_DOOR_1","close",_icon,{_target animateDoor ['Door_1_source', 0];},{(alive _target) && {(_target doorPhase 'Door_1_source') > 0.5};},{},[], "door1", _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

// door 2
_action = ["OPEN_DOOR_2","open",_icon,{_target animateDoor ['Door_2_source', 1];},{(alive _target) && {(_target doorPhase 'Door_2_source') < 0.5};},{},[], "door2", _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["CLOSE_DOOR_2","close",_icon,{_target animateDoor ['Door_2_source', 0];},{(alive _target) && {(_target doorPhase 'Door_2_source') > 0.5};},{},[], "door2", _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

// door 3
_action = ["OPEN_DOOR_3","open",_icon,{_target animateDoor ['Door_3_source', 1];},{(alive _target) && {(_target doorPhase 'Door_3_source') < 0.5};},{},[], "door3", _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["CLOSE_DOOR_3","close",_icon,{_target animateDoor ['Door_3_source', 0];},{(alive _target) && {(_target doorPhase 'Door_3_source') > 0.5};},{},[], "door3", _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

// door 4/5
_action = ["OPEN_DOOR_4","open",_icon,{_target animateDoor ['Door_4_source', 1];},{(alive _target) && {(_target doorPhase 'Door_4_source') < 0.5};},{},[], [0,-3.27,-0.38], _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["CLOSE_DOOR_4","close",_icon,{_target animateDoor ['Door_4_source', 0];},{(alive _target) && {(_target doorPhase 'Door_4_source') > 0.5};},{},[], [1.02,-4.14,-0.38], _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["CLOSE_DOOR_5","close",_icon,{_target animateDoor ['Door_4_source', 0];},{(alive _target) && {(_target doorPhase 'Door_4_source') > 0.5};},{},[], [-1.02,-4.14,-0.38], _dist] call ace_interact_menu_fnc_createAction;
[_type, 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;


// door 1 internal
_action = ["OPEN_DOOR_1_INSIDE","open",_icon,{_target animateDoor ['Door_1_source', 1];},{(alive _target) && {(_target doorPhase 'Door_1_source') < 0.5 && {((driver _target) == _player)}};}] call ace_interact_menu_fnc_createAction;
[_type, 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["CLOSE_DOOR_1_INSIDE","close",_icon,{_target animateDoor ['Door_1_source', 0];},{(alive _target) && {(_target doorPhase 'Door_1_source') > 0.5 && {((driver _target) == _player)}};}] call ace_interact_menu_fnc_createAction;
[_type, 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

// door 2 internal
_action = ["OPEN_DOOR_2_INSIDE","open",_icon,{_target animateDoor ['Door_2_source', 1];},{(alive _target) && {(_target doorPhase 'Door_2_source') < 0.5 && {((_target getCargoIndex _player) == 0)}};}] call ace_interact_menu_fnc_createAction;
[_type, 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["CLOSE_DOOR_2_INSIDE","close",_icon,{_target animateDoor ['Door_2_source', 0];},{(alive _target) && {(_target doorPhase 'Door_2_source') > 0.5 && {((_target getCargoIndex _player) == 0)}};}] call ace_interact_menu_fnc_createAction;
[_type, 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

