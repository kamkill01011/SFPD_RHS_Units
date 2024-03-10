/*
ADV-aceCPR - by Belbo
*/

//register the eventhandlers:
//evh for showing the pulse after AED:
["adv_aceCPR_evh_showPulse", { (_this + ["Head"]) call ace_medical_treatment_fnc_checkPulse }] call CBA_fnc_addEventHandler;
//evh for the AED:
["adv_aceCPR_evh_AED_local", { _this call adv_aceCPR_fnc_AED_local }] call CBA_fnc_addEventHandler;


nil
