﻿class CfgPatches
{
    class adv_aceCPR
    {
        units[] = {
			"adv_aceCPR_AEDItem"
		};
        weapons[] = {
			"adv_aceCPR_AED"
		};
        requiredVersion = 1.88;
        requiredAddons[] = {
			"ace_medical",
			"cba_settings"
		};
		version = "2.1.4";
		versionStr = "2.1.4";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};
/*
#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}
*/
#define MACRO_AED_STATION class ACE_Actions { \
	class ACE_MainActions { \
		condition = "true"; \
		displayName = "Interactions"; \
		distance = 2; \
		selection = ""; \
		class adv_aceCPR_aed_station { \
			priority = -1; \
			showDisabled = 0; \
			displayName = "$STR_ADV_ACECPR_AED_STATION_ACTION"; \
			condition = "missionNamespace getVariable ['adv_aceCPR_enable',true] && !(_player getVariable ['adv_aceCPR_usedAEDStation',false]) && (_player getVariable ['ace_medical_medicClass',0]) > 0"; \
			statement = "[_player,_target] call adv_aceCPR_fnc_useAEDStation"; \
			exceptions[] = {"isNotInside"}; \
			icon = "\adv_aceCPR\ui\defib_action.paa"; \
		};\
	};\
};

class CfgFunctions {
	class adv_aceCPR {
		tag = "adv_aceCPR";
		class init {
			file = "adv_aceCPR\functions";
			class AED_action {};
			class AED_local {};
			class AED_sound {};
			class AED_cancelled {};
			class AED_station {};
			class AED_station_condition {};
			class createAEDstations {};
			class init { postInit = 1; };
			class isResurrectable {};
			class useAEDStation {};

			class giveHeartRate {};
			class getMedications {};
			class inReviveState {};
		};
	};
};

class Extended_PostInit_EventHandlers {
    class adv_aceCPR_postInit {
        init = "nul = [] spawn adv_aceCPR_fnc_createAEDstations";
    };
};

class cfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	
    class adv_aceCPR_AED: ACE_ItemCore {
        scope = 2;
        displayName = "$STR_ADV_ACECPR_AED_DISPLAYNAME";
        picture = "\adv_aceCPR\ui\defib.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort = "$STR_ADV_ACECPR_AED_DESCRIPTION";
        descriptionUse = "$STR_ADV_ACECPR_AED_DESCRIPTION";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
	};
};

class cfgVehicles {
	class Item_Base_F;
	
	class adv_aceCPR_AEDItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_ADV_ACECPR_AED_DISPLAYNAME";
        author = "[SeL] Belbo";
        vehicleClass = "Items";
		//model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_closed_F.p3d";
        /*class TransportItems {
            MACRO_ADDITEM(adv_aceCPR_AED,1);
        };*/
	};

	class Items_base_F;
	class Land_Defibrillator_F: Items_base_F {
		//MACRO_AED_STATION
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 270;
        ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
};

class ACE_Medical_Treatment_Actions {
	class fieldDressing;
	class CPR: fieldDressing {
		animationMedic = "AinvPknlMstpSnonWnonDr_medic0";
		animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
	};
	/*class Defibrillator: CPR {
		displayName = "$STR_ADV_ACECPR_AED_ACTION";
		displayNameProgress = "$STR_ADV_ACECPR_AED_PROGRESS";
		icon = "\adv_aceCPR\ui\defib_action.paa";
		items[] = {"adv_aceCPR_AED"};
		condition = "[_medic, _patient] call adv_aceCPR_fnc_AED_condition";
		treatmentTime = 8;
		callbackSuccess = "adv_aceCPR_fnc_AED_action";
		callbackStart = "adv_aceCPR_fnc_AED_sound";
		callbackFailure = "adv_aceCPR_fnc_AED_cancelled";
		callbackProgress = "adv_aceCPR_fnc_AED_progress";
		animationMedic = "AinvPknlMstpSnonWnonDnon_medic3";
		treatmentLocations = "adv_aceCPR_useLocation_AED";
	};*/
	class Defibrillator_station: Defibrillator {
		displayName = "$STR_ADV_ACECPR_AED_ACTION";
		displayNameProgress = "$STR_ADV_ACECPR_AED_PROGRESS";
		icon = "\adv_aceCPR\ui\defib_action.paa";
		treatmentTime = 1;
		items[] = {};
		condition = "[_medic, _patient] call adv_aceCPR_fnc_AED_station_condition";
		callbackStart = "adv_aceCPR_fnc_AED_sound";
		callbackProgress = "";
		callbackSuccess = "adv_aceCPR_fnc_AED_station";
		callbackFailure = "";
		animationMedic = "AinvPknlMstpSnonWnonDnon_medic3";
		treatmentLocations = 0;
	};
};
