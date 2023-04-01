fn_radioAnims_hand = {
    if (isNil "radioAnims_radioModel") then {
        //-- Select radio attributes (Returns "radioAnims_modelToUse","radioAnims_dattach","radioAnims_dvector")
        _currentlyUsedRadio = 0;
        if (["prc152", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 152};
        if (["prc154", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 154};
        if (["prc148", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 148};
        if (["fadak", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 21};
        if (["pnr1000", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 1000};
        if (["rf7800", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 7800};

        if (isClass(configFile >> "CfgPatches" >> "tfar_core")) then {
            switch (_currentlyUsedRadio) do {
                case 152: {
                    radioAnims_dvector = [  
                        [[0.956,-0.176,0.231],[-0.288,-0.465,0.836]],  
                        [[0.656,-0.876,0.231],[-0.288,-0.465,1.236]]
                    ];
                    if (isClass(configFile >> "CfgPatches" >> "rhsusf_c_radio")) then {
                        radioAnims_modelToUse = "rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
                        radioAnims_dattach = [ [-0.1,-0.14,0.15], [-0.13,-0.055,0.18] ];
                    } else {
                        radioAnims_modelToUse = "z\tfar\addons\handhelds\anprc152\data\tfr_anprc152.p3d";
                        radioAnims_dattach = [ [.02,-0.04,0], [-.01,-0.05,0] ];
                    };
                };
                case 154: {
                    radioAnims_modelToUse = "z\tfar\addons\handhelds\anprc154\data\tfr_anprc154.p3d";
                    radioAnims_dattach = [ [0,-0.04,0], [-.02,-0.04,0.0] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.176,0.231],[-0.288,-0.465,0.836]],  
                        [[0.656,-0.876,0.231],[-0.288,-0.465,1.236]]
                    ];
                };
                case 148: {
                    radioAnims_modelToUse = "z\tfar\addons\handhelds\anprc148jem\data\tfr_anprc148.p3d";
                    radioAnims_dattach = [ [-.1,-0.09,0.06], [-.03,-0.01,0.12] ];
                    radioAnims_dvector = [  
                        [[-0.9,0.9,0],[0.6,0.1,0.4]],  
                        [[0.956,-0.976,0.231],[-0.288,-0.465,0.136]]
                    ];
                };
                case 7800: {
                    radioAnims_modelToUse = "z\tfar\addons\handhelds\RF7800\data\tfr_RF7800.p3d";
                    radioAnims_dattach = [ [0,-0.04,-0.05], [-.01,0,0.01] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]],  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]]
                    ];
                };
                case 1000: {
                    radioAnims_modelToUse = "z\tfar\addons\handhelds\PNR1000A\data\tfr_PNR1000a.p3d";
                    radioAnims_dattach = [ [0,-0.07,-0.05], [-.02,-0.04,-0.05] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]],  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]]
                    ];
                };
                case 21: {
                    radioAnims_modelToUse = "z\tfar\addons\handhelds\fadak\data\tfr_fadak.p3d";
                    radioAnims_dattach = [ [-0.03,-0.09,0.01], [-.04,-0.04,0.05] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]],  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]]
                    ];
                };
                default {
                    radioAnims_modelToUse = "Jet_radio";
                    radioAnims_dattach = [ [0,-0.04,-0.01], [-0.01,-0.04,0] ];
                    radioAnims_dvector = [
                        [[0.334,0.788,-0.516],[0.917,-0.398,-0.014]],
                        [[1.434,0.588,-1.916],[0.917,-0.298,-0.024]]
                    ];
                };
            };
        } else {
            switch (_currentlyUsedRadio) do {
                case 152: {
                    radioAnims_dvector = [  
                        [[0.956,-0.176,0.231],[-0.288,-0.465,0.836]],  
                        [[0.656,-0.876,0.231],[-0.288,-0.465,1.236]]
                    ];
                    if (isClass(configFile >> "CfgPatches" >> "rhsusf_c_radio")) then {
                        radioAnims_modelToUse = "rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
                        radioAnims_dattach = [ [-0.1,-0.14,0.15], [-0.13,-0.055,0.18] ];
                    } else {
                        radioAnims_modelToUse = "task_force_radio_items\models\tfr_anprc152.p3d";
                        radioAnims_dattach = [ [.02,-0.04,0], [-.01,-0.05,0] ];
                    };
                };
                case 154: {
                    radioAnims_modelToUse = "task_force_radio_items\models\tfr_anprc154.p3d";
                    radioAnims_dattach = [ [0,-0.04,0], [-.02,-0.04,0.0] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.176,0.231],[-0.288,-0.465,0.836]],  
                        [[0.656,-0.876,0.231],[-0.288,-0.465,1.236]]
                    ];
                };
                case 148: {
                    radioAnims_modelToUse = "task_force_radio_items\models\tfr_anprc148.p3d";
                    radioAnims_dattach = [ [-.1,-0.09,0.06], [-.03,-0.01,0.12] ];
                    radioAnims_dvector = [  
                        [[-0.9,0.9,0],[0.6,0.1,0.4]],  
                        [[0.956,-0.976,0.231],[-0.288,-0.465,0.136]]
                    ];
                };
                case 7800: {
                    radioAnims_modelToUse = "task_force_radio_items\models\tfr_RF7800.p3d";
                    radioAnims_dattach = [ [0,-0.04,-0.05], [-.01,0,0.01] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]],  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]]
                    ];
                };
                case 1000: {
                    radioAnims_modelToUse = "task_force_radio_items\models\tfr_PNR1000a.p3d";
                    radioAnims_dattach = [ [0,-0.07,-0.05], [-.02,-0.04,-0.05] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]],  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]]
                    ];
                };
                case 21: {
                    radioAnims_modelToUse = "task_force_radio_items\models\tfr_fadak.p3d";
                    radioAnims_dattach = [ [-0.03,-0.09,0.01], [-.04,-0.04,0.05] ];
                    radioAnims_dvector = [  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]],  
                        [[0.956,-0.776,0.331],[-0.188,-0.165,0.936]]
                    ];
                };
                default {
                    radioAnims_modelToUse = "Jet_radio";
                    radioAnims_dattach = [ [0,-0.04,-0.01], [-0.01,-0.04,0] ];
                    radioAnims_dvector = [
                        [[0.334,0.788,-0.516],[0.917,-0.398,-0.014]],
                        [[1.434,0.588,-1.916],[0.917,-0.298,-0.024]]
                    ];
                };
            }; 
        }; 

        //-- Use different values if player has weapon
        if (currentWeapon TFAR_currentUnit != "") then {
            radioAnims_dattach = radioAnims_dattach select 1;
            radioAnims_dvector = radioAnims_dvector select 1;
        } else {
            radioAnims_dattach = radioAnims_dattach select 0;
            radioAnims_dvector = radioAnims_dvector select 0;
        };

        //-- Create radio and play animation
        TFAR_currentUnit playactionnow radioAnims_Hand;
        radioAnims_radioModel = createSimpleObject [radioAnims_modelToUse,position TFAR_currentUnit];
        radioAnims_radioModel attachto [TFAR_currentUnit,radioAnims_dattach,"lefthand"];   
        [[radioAnims_radioModel,radioAnims_dvector],"setVectorDirAndUp",true,false] call BIS_fnc_MP;
    }; 
};

fn_radioAnims_Ear = {
    if ( (headgear TFAR_currentUnit in radioAnims_cba_Earpieces) || (goggles TFAR_currentUnit in radioAnims_cba_Earpieces) ) then {
        TFAR_currentUnit playActionNow radioAnims_Ear;
    } else {
        call fn_radioAnims_hand;
    };
};

fn_radioAnims_vest = {
    _cond1 = (getNumber (configFile >> "CfgWeapons" >> (vest TFAR_currentUnit) >> "itemInfo" >> "HitpointsProtectionInfo" >> "Chest" >> "armor") > 5);
    _cond2 = (getNumber (configFile >> "CfgWeapons" >> (vest TFAR_currentUnit) >> "itemInfo" >> "armor") > 5);
    if (vest TFAR_currentUnit in radioAnims_cba_vests || ((_cond1 || _cond2) && radioAnims_cba_vestarmor) ) then {
        TFAR_currentUnit playActionNow radioAnims_Vest;
    } else {
        call fn_radioAnims_hand;
    };
};

//-- Start speaking on radio
    ["TFAR_RadioEventStart", "OnTangent", {	
        //-- Exceptions
		radioAnims_TFAR_currentRadio = _this select 1;
        if (!radioAnims_cba_main) exitWith {};
        if (!(_this select 4)) exitWith {};
        if (isWeaponDeployed TFAR_currentUnit) exitWith {};
        if (!isNil "radioAnims_playerProbablyReloading") exitWith {};
        if ( (radioAnims_cba_vehicles) && (vehicle TFAR_currentUnit != TFAR_currentUnit) ) exitWith {};
		if ( (radioAnims_cba_ads) && (currentWeapon TFAR_currentUnit != primaryWeapon TFAR_currentUnit) && (cameraView == "GUNNER") ) exitWith {};
        if ( (binocular TFAR_currentUnit != "") && (currentWeapon TFAR_currentUnit == binocular TFAR_currentUnit) ) exitWith {};
        if (!isNull (findDisplay 312)) exitWith {};

        //-- Figure out which setting to use
        _currentlyUsedRadio = 0;
        if (["prc152", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 152};
        if (["prc154", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 154};
        if (["prc148", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 148};
        if (["fadak", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 21};
        if (["pnr1000", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 1000};
        if (["rf7800", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 7800};
		radioAnims_animToUse = 0;

        switch (_currentlyUsedRadio) do {
            case 152: {radioAnims_animToUse = radioAnims_cba_preference_PRC152};
            case 154: {radioAnims_animToUse = radioAnims_cba_preference_PRC154};
            case 21: {radioAnims_animToUse = radioAnims_cba_preference_fadak};
            case 148: {radioAnims_animToUse = radioAnims_cba_preference_PRC148};
            case 7800: {radioAnims_animToUse = radioAnims_cba_preference_rf7800};
            case 1000: {radioAnims_animToUse = radioAnims_cba_preference_pnr1000};
            default {radioAnims_animToUse = radioAnims_cba_preference_Others};
        };

        //-- Use the setting
        radioAnims_playerAnimated = true;
        switch (radioAnims_animToUse) do {
            case "Hand": {call fn_radioAnims_hand};
            case "Ear": {call fn_radioAnims_Ear};
            case "Vest": {call fn_radioAnims_vest};
        };
    }, ObjNull] call TFAR_fnc_addEventHandler;

//-- Stop speaking on radio
    ["TFAR_RadioEventEnd", "OnTangent", {
        //-- Exceptions
        if (!radioAnims_cba_main) exitWith {};
        if ( (isWeaponDeployed TFAR_currentUnit) && (isNil "radioAnims_playerAnimated") ) exitWith {};  //-- If bipoded and not currently animated, dont do stopping animation
        If (!isNil "radioAnims_playerProbablyReloading") exitWith {};  //-- If reloading, dont do stopping animation
		if ( (radioAnims_cba_ads) && (currentWeapon TFAR_currentUnit != primaryWeapon TFAR_currentUnit) && (cameraView == "GUNNER") ) exitWith {};
        if ( (binocular TFAR_currentUnit != "") && (currentWeapon TFAR_currentUnit == binocular TFAR_currentUnit) ) exitWith {};
        if (!isNull (findDisplay 312)) exitWith {};

        if (!(_this select 4)) exitWith {
            if (!isNil "radioAnims_radioModel") then {deletevehicle radioAnims_radioModel;radioAnims_radioModel = nil};  //-- If radio model exists, delete it
            TFAR_currentUnit playActionNow "radioAnims_Stop";
            radioAnims_playerAnimated = nil;
        }; 
    }, ObjNull] call TFAR_fnc_addEventHandler;


//-- Eventhandler (Returns radioAnims_playerProbablyReloading = true if reloading)
    [] spawn {
        while {true} do {  
            _playerMagsPast = magazines TFAR_currentUnit;  //-- Save past state of magazines
            sleep 0.25;
            if (getText (configfile >> "CfgWeapons" >> (currentWeapon TFAR_currentUnit) >> "EventHandlers" >> "reload") != "radioAnims_playerProbablyReloading = true") then {
	            if (  (!(magazines TFAR_currentUnit isEqualTo _playerMagsPast)) && (isnull (findDisplay 602))  ) then {
                    radioAnims_playerProbablyReloading = true;
                    sleep 15; //-- Buffer
                    radioAnims_playerProbablyReloading = nil;
                };
            };
        };
    };