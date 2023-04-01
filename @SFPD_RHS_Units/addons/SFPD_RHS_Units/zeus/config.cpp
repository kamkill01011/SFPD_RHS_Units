
class CfgPatches {
	class SFPD_RHS_Units_Zeus  {
		units[] = {
			"SFPD_RHS_Units_Zeus_medicalStatus_Module",
			"SFPD_RHS_Units_Zeus_CPR_Module",
			"SFPD_RHS_Units_Zeus_addBlindfold_Module",
			"SFPD_RHS_Units_Zeus_addDemoCharge_Module",
			"SFPD_RHS_Units_Zeus_addGasGrenades_Module",
			"SFPD_RHS_Units_Zeus_putNBCMask_Module",
			"SFPD_RHS_Units_Zeus_putNBCSuit_Module",
			"SFPD_RHS_Units_Zeus_holsterWeapon_Module",
			"SFPD_RHS_Units_Zeus_addCarKey_Module",
			"SFPD_RHS_Units_Zeus_addK9_Module",
			"SFPD_RHS_Units_Zeus_setDeviceObject_Module",
			"SFPD_RHS_Units_Zeus_setJammerObject_Module",
			"SFPD_RHS_Units_Zeus_setContaminatedObject_Module",
			"SFPD_RHS_Units_Zeus_spawnPermanentArea_Module",
			"SFPD_RHS_Units_Zeus_spawnTemporaryArea_Module",
			"SFPD_RHS_Units_Zeus_miDesertCamo_Module",
			"SFPD_RHS_Units_Zeus_miWoodlandCamo_Module",
			"SFPD_RHS_Units_Zeus_addInjury_Module",
			"SFPD_RHS_Units_Zeus_applyTourniquet_Module",
			"SFPD_RHS_Units_Zeus_loiter_Module",
			"SFPD_RHS_Units_Zeus_setCanisterFuel_Module",
			"SFPD_RHS_Units_Zeus_setStationFuel_Module",
			"SFPD_RHS_Units_Zeus_showVehicleFuelInfo_Module",
			"SFPD_RHS_Units_Zeus_giveTracer_Module",
			
			"SFPD_RHS_Units_Zeus_giveAK_Module",
			"SFPD_RHS_Units_Zeus_givePistol_Module",
			"SFPD_RHS_Units_Zeus_giveRifle_Module",
			
			"SFPD_RHS_Units_Zeus_garbageSmall_Module",
			"SFPD_RHS_Units_Zeus_garbageBig_Module",
			"SFPD_RHS_Units_Zeus_garbageClean_Module",
			"SFPD_RHS_Units_Zeus_addIntel_Module",
			"SFPD_RHS_Units_Zeus_setBlood_Module",
			"SFPD_RHS_Units_Zeus_disableAutoCombat_Module",
			"SFPD_RHS_Units_Zeus_disablePath_Module",
			"SFPD_RHS_Units_Zeus_stayInImmobile_Module",
			"SFPD_RHS_Units_Zeus_CPZone_Module",
			"SFPD_RHS_Units_Zeus_CPSpawn_Module",
			"SFPD_RHS_Units_Zeus_CPPath_Module",
			"SFPD_RHS_Units_Zeus_CPCover_Module",
			"SFPD_RHS_Units_Zeus_breachableDoors_Module"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_common"};
	};
};

class CfgFactionClasses {
	class SFPD_Zeus_common {
		displayName = "[SFPD] common";
		priority = 2;
		side = 7;
	};
	class SFPD_Zeus_equipment {
		displayName = "[SFPD] equipment";
		priority = 2;
		side = 7;
	};
	class SFPD_Zeus_NBC {
		displayName = "[SFPD] NBC";
		priority = 2;
		side = 7;
	};
	class SFPD_Zeus_medical {
		displayName = "[SFPD] medical";
		priority = 2;
		side = 7;
	};
	class SFPD_Zeus_vehicle {
		displayName = "[SFPD] vehicle";
		priority = 2;
		side = 7;
	};
};

class CfgVehicles {
	class Module_F;
	
	class SFPD_RHS_Units_Zeus_medicalStatus_Module: Module_F {
		category = "SFPD_Zeus_medical";
		displayName = "medical status";
		functionPriority = 1;
		isGlobal = 1;// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0;
		scope = 1;
		scopeCurator = 2;
		curatorCanAttach = 0;
		function = "zeus_fnc_medicalStatus";
	};
	
	class SFPD_RHS_Units_Zeus_CPR_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_medical";
		displayName = "CPR/RCP";
		isGlobal = 1;// TODO
		function = "zeus_fnc_cpr";
	};
	
	class SFPD_RHS_Units_Zeus_addDemoCharge_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "add demo charge";
		function = "zeus_fnc_addDemoCharge";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_addGasGrenades_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "add gas grenades";
		function = "zeus_fnc_addGasGrenades";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_addBlindfold_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "add blindfold";
		function = "zeus_fnc_addBlindfold";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_giveAK_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "give AK";
		function = "zeus_fnc_giveAK";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_givePistol_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "give Pistol";
		function = "zeus_fnc_givePistol";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_giveRifle_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "give Rifle";
		function = "zeus_fnc_giveRifle";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_putNBCMask_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_NBC";
		displayName = "put NBC mask";
		function = "zeus_fnc_putNBCMask";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_putNBCSuit_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_NBC";
		displayName = "put NBC suit";
		function = "zeus_fnc_putNBCSuit";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_holsterWeapon_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "holster pistol";
		function = "zeus_fnc_holsterWeapon";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_addCarKey_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "add car key";
		function = "zeus_fnc_addCarKeyEnter";
	};
	
	class SFPD_RHS_Units_Zeus_addK9_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "add K9";
		function = "zeus_fnc_addK9Enter";
	};
	
	class SFPD_RHS_Units_Zeus_setDeviceObject_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "set device object";
		function = "zeus_fnc_setDeviceObjectEnter";
	};
	
	class SFPD_RHS_Units_Zeus_setJammerObject_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "set jammer object";
		function = "zeus_fnc_setJammerObjectEnter";
	};
	
	class SFPD_RHS_Units_Zeus_setContaminatedObject_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_NBC";
		displayName = "set contaminated object";
		function = "zeus_fnc_setContaminatedObjectEnter";
	};
	
	class SFPD_RHS_Units_Zeus_spawnPermanentArea_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_NBC";
		displayName = "spawn permanent area";
		function = "zeus_fnc_spawnPermanentAreaEnter";
	};
	
	class SFPD_RHS_Units_Zeus_spawnTemporaryArea_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_NBC"; 
		displayName = "spawn temporary area";
		function = "zeus_fnc_spawnTemporaryAreaEnter";
	};
	
	class SFPD_RHS_Units_Zeus_miDesertCamo_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_vehicle";
		displayName = "Mi-# desert camo";
		function = "zeus_fnc_miDesertCamo";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_miWoodlandCamo_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_vehicle";
		displayName = "Mi-# woodland camo";
		function = "zeus_fnc_miWoodlandCamo";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_addInjury_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_medical";
		displayName = "add injury";
		function = "zeus_fnc_addInjuryEnter";
	};
	
	class SFPD_RHS_Units_Zeus_applyTourniquet_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_medical";
		displayName = "apply tourniquet";
		function = "zeus_fnc_applyTourniquetEnter";
	};
	
	class SFPD_RHS_Units_Zeus_loiter_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_vehicle";
		displayName = "loiter (AC-130)";
		function = "zeus_fnc_loiterEnter";
	};
	
	class SFPD_RHS_Units_Zeus_setCanisterFuel_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_vehicle";
		displayName = "set canister fuel";
		function = "zeus_fnc_setCanisterFuelEnter";
	};
	
	class SFPD_RHS_Units_Zeus_setStationFuel_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_vehicle";
		displayName = "set station fuel";
		function = "zeus_fnc_setStationFuelEnter";
	};
	
	class SFPD_RHS_Units_Zeus_showVehicleFuelInfo_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_vehicle";
		displayName = "show vehicle fuel info";
		function = "zeus_fnc_showVehicleFuelInfo";
	};
	
	class SFPD_RHS_Units_Zeus_giveTracer_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "give tracer";
		function = "zeus_fnc_giveTracerEnter";
	};
	
	class SFPD_RHS_Units_Zeus_garbageSmall_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "garbage (small)";
		function = "zeus_fnc_garbageSmallEnter";
	};
	
	class SFPD_RHS_Units_Zeus_garbageBig_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "garbage (big)";
		function = "zeus_fnc_garbageBigEnter";
	};
	
	class SFPD_RHS_Units_Zeus_garbageClean_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "garbage (clean)";
		function = "zeus_fnc_garbageCleanEnter";
	};
	
	class SFPD_RHS_Units_Zeus_addIntel_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_equipment";
		displayName = "add intel";
		function = "zeus_fnc_addIntelEnter";
	};
	
	class SFPD_RHS_Units_Zeus_setBlood_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_medical";
		displayName = "set blood";
		function = "zeus_fnc_setBloodEnter";
	};
	
	class SFPD_RHS_Units_Zeus_disableAutoCombat_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "disable auto combat";
		function = "zeus_fnc_disableAutoCombat";
	};
	
	class SFPD_RHS_Units_Zeus_disablePath_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "disable path";
		function = "zeus_fnc_disablePath";
	};
	
	class SFPD_RHS_Units_Zeus_stayInImmobile_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_vehicle";
		displayName = "stay in immobile";
		function = "zeus_fnc_stayInImmobile";
	};
	
	class SFPD_RHS_Units_Zeus_CPZone_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "CP Zone";
		function = "zeus_fnc_CPZoneEnter";
	};
	
	class SFPD_RHS_Units_Zeus_CPSpawn_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "CP Spawn";
		function = "zeus_fnc_CPSpawn";
		isGlobal = 1;// TODO
	};
	
	class SFPD_RHS_Units_Zeus_CPPath_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "CP Path";
		function = "zeus_fnc_CPPathEnter";
	};
	
	class SFPD_RHS_Units_Zeus_CPCover_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "CP Cover";
		function = "zeus_fnc_CPCoverEnter";
	};
	
	class SFPD_RHS_Units_Zeus_breachableDoors_Module: SFPD_RHS_Units_Zeus_medicalStatus_Module {
		category = "SFPD_Zeus_common";
		displayName = "breachable doors";
		function = "zeus_fnc_breachableDoors";
	};
};

class CfgFunctions {
	class Zeus {
		tag = "zeus";
		class functions {
			file = "SFPD_RHS_Units\zeus\functions";
			class medicalStatus {};
			class cpr {};
			class addBlindfold {};
			class addDemoCharge {};
			class addGasGrenades {};
			class putNBCMask {};
			class putNBCSuit {};
			class holsterWeapon {};
			class addCarKeyEnter {};
			class addCarKeyExit {};
			class addK9Enter {};
			class addK9Exit {};
			class setDeviceObjectEnter {};
			class setDeviceObjectExit {};
			class setJammerObjectEnter {};
			class setJammerObjectExit {};
			class setContaminatedObjectEnter {};
			class setContaminatedObjectExit {};
			class spawnPermanentAreaEnter {};
			class spawnPermanentAreaExit {};
			class spawnTemporaryAreaEnter {};
			class spawnTemporaryAreaExit {};
			class miDesertCamo {};
			class miWoodlandCamo {};
			class addInjuryEnter {};
			class addInjuryExit {};
			class applyTourniquetEnter {};
			class applyTourniquetExit {};
			class loiterEnter {};
			class loiterExit {};
			class setCanisterFuelEnter {};
			class setCanisterFuelExit {};
			class setStationFuelEnter {};
			class setStationFuelExit {};
			class showVehicleFuelInfo {};
			class giveTracerEnter {};
			class giveTracerExit {};
			class giveAK {};
			class givePistol {};
			class giveRifle {};
			class garbageSmallEnter {};
			class garbageSmallExit {};
			class garbageBigEnter {};
			class garbageBigExit {};
			class garbageCleanEnter {};
			class garbageCleanExit {};
			class addIntelEnter {};
			class addIntelExit {};
			class setBloodEnter {};
			class setBloodExit {};
			class disableAutoCombat {};
			class disablePath {};
			class stayInImmobile {};
			class CPZoneEnter {};
			class CPZoneExit {};
			class CPSpawn {};
			class CPPathEnter {};
			class CPPathExit {};
			class CPCoverEnter {};
			class CPCoverExit {};
			class breachableDoors {};
		};
	};
};

#include "ui\RscZeus.h"
