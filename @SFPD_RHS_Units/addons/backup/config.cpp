//Constructed by -Delta 1 Actual and you are free to use this
//Calling classes = Items you Item will get extra information from e.g Models, physics etc.
//http://www.armaholic.com/forums.php?m=posts&q=31238

//Defines

#define THREE_TIMES(CLASS_NAME) #CLASS_NAME,#CLASS_NAME,#CLASS_NAME

#define FOUR_TIMES(CLASS_NAME) THREE_TIMES(CLASS_NAME),#CLASS_NAME
	
#define FIVE_TIMES(CLASS_NAME) FOUR_TIMES(CLASS_NAME),#CLASS_NAME

#define SIX_TIMES(CLASS_NAME) FIVE_TIMES(CLASS_NAME),#CLASS_NAME
	
#define SEVEN_TIMES(CLASS_NAME) SIX_TIMES(CLASS_NAME),#CLASS_NAME
	
#define EIGHT_TIMES(CLASS_NAME) SEVEN_TIMES(CLASS_NAME),#CLASS_NAME
	
#define TEN_TIMES(CLASS_NAME) EIGHT_TIMES(CLASS_NAME),#CLASS_NAME,#CLASS_NAME
	
#define ELEVEN_TIMES(CLASS_NAME) TEN_TIMES(CLASS_NAME),#CLASS_NAME
	
#define TWELVE_TIMES(CLASS_NAME) ELEVEN_TIMES(CLASS_NAME),#CLASS_NAME

#define BASIC_WEAPONS(HANDGUN) #HANDGUN,"Binocular","Throw","Put"

#define BASIC_MAGS "rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)

#define BASIC_LINKED "ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"

#define BASIC_ITEMS "ACE_morphine",FOUR_TIMES(ACE_tourniquet),"ACE_MapTools","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_splint","ACE_splint"

#define TRANSPORT_ITEMS(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        name = #CLASS_NAME; \
        count = AMOUNT; \
    };
	
#define TRANSPORT_MAGAZINES(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        magazine = #CLASS_NAME; \
        count = AMOUNT; \
    };
	
#define TRANSPORT_WEAPONS(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        weapon = #CLASS_NAME; \
        count = AMOUNT; \
    };
	
#define TRANSPORT_BACKPACKS(CLASS_NAME,AMOUNT) \
	class _xx_##CLASS_NAME \
    { \
        backpack = #CLASS_NAME; \
        count = AMOUNT; \
    };
	
#define SFPD_RHS_BLUFOR_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(rhs_mag_30Rnd_556x45_Mk318_Stanag,10) \
		TRANSPORT_MAGAZINES(rhsusf_200rnd_556x45_mixed_box,3) \
		TRANSPORT_MAGAZINES(rhsusf_mag_17Rnd_9x19_JHP,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(rhs_weap_M136_hedp,1) \
    }; \
	class TransportItems { \
		TRANSPORT_ITEMS(ACE_elasticBandage,10) \
		TRANSPORT_ITEMS(ACE_quikclot,20) \
		TRANSPORT_ITEMS(ACE_bodyBag,1) \
		TRANSPORT_ITEMS(ACE_epinephrine,2) \
		TRANSPORT_ITEMS(ACE_morphine,2) \
		TRANSPORT_ITEMS(ACE_salineIV_500,2) \
		TRANSPORT_ITEMS(ACE_surgicalKit,1) \
		TRANSPORT_ITEMS(ACE_tourniquet,2) \
		TRANSPORT_ITEMS(ACE_CableTie,10) \
		TRANSPORT_ITEMS(ACE_EntrenchingTool,1) \
		TRANSPORT_ITEMS(rhsusf_acc_M952V,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(rhsusf_falconii_coy,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_RHS_OPFOR_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_762x39_AK12_Mag_F,10) \
		TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Mag_Tracer_F,3) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(rhs_weap_rpg26,1) \
    }; \
	class TransportItems { \
		TRANSPORT_ITEMS(ACE_elasticBandage,10) \
		TRANSPORT_ITEMS(ACE_quikclot,20) \
		TRANSPORT_ITEMS(ACE_bodyBag,1) \
		TRANSPORT_ITEMS(ACE_epinephrine,2) \
		TRANSPORT_ITEMS(ACE_morphine,2) \
		TRANSPORT_ITEMS(ACE_salineIV_500,2) \
		TRANSPORT_ITEMS(ACE_surgicalKit,1) \
		TRANSPORT_ITEMS(ACE_tourniquet,2) \
		TRANSPORT_ITEMS(ACE_CableTie,10) \
		TRANSPORT_ITEMS(ACE_EntrenchingTool,1) \
		TRANSPORT_ITEMS(rhs_acc_2dpZenit_ris,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_RHS_INDEP_Transport \
	class TransportMagazines {}; \
	class TransportWeapons {}; \
	class TransportItems { \
		TRANSPORT_ITEMS(ACE_fieldDressing,20) \
		TRANSPORT_ITEMS(ACE_bodyBag,1) \
		TRANSPORT_ITEMS(ACE_tourniquet,2) \
		TRANSPORT_ITEMS(ACE_CableTie,10) \
		TRANSPORT_ITEMS(ACE_EntrenchingTool,1) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks {};
	
#define REMOVE_ZEUS(CLASS,PARENT) \
	class CLASS : PARENT { \
		scopeCurator = 0; \
	};

class CfgPatches {
    class SFPD_RHS_Units  {
        units[] = {
			"SFPD_RHS_BLUFOR_DESERT_Rifleman",
			"SFPD_RHS_BLUFOR_DESERT_NBC_Mask",
			"SFPD_RHS_BLUFOR_DESERT_NBC_Suit",
			"SFPD_RHS_BLUFOR_DESERT_Rifleman_light",
			"SFPD_RHS_BLUFOR_DESERT_Unequiped",
			"SFPD_RHS_BLUFOR_DESERT_Leader",
			"SFPD_RHS_BLUFOR_DESERT_Medic",
			"SFPD_RHS_BLUFOR_DESERT_Grenadier",
			"SFPD_RHS_BLUFOR_DESERT_AT",
			"SFPD_RHS_BLUFOR_DESERT_AT_M136",
			"SFPD_RHS_BLUFOR_DESERT_LMG",
			"SFPD_RHS_BLUFOR_DESERT_Marksman",
			"SFPD_RHS_BLUFOR_DESERT_JTAC",
			"SFPD_RHS_BLUFOR_DESERT_MMG",
			"SFPD_RHS_BLUFOR_DESERT_Commander",
			"SFPD_RHS_BLUFOR_DESERT_AA",
			"SFPD_RHS_BLUFOR_DESERT_Recon_DMR",
			"SFPD_RHS_BLUFOR_DESERT_Spotter",
			"SFPD_RHS_BLUFOR_DESERT_Sniper",
			"SFPD_RHS_BLUFOR_DESERT_SF",
			"SFPD_RHS_BLUFOR_DESERT_SF_Leader",
			"SFPD_RHS_BLUFOR_DESERT_SF_Grenadier",
			"SFPD_RHS_BLUFOR_DESERT_SF_AT",
			"SFPD_RHS_BLUFOR_DESERT_SF_LMG",
			"SFPD_RHS_BLUFOR_DESERT_Recon_Rifle",
			"SFPD_RHS_BLUFOR_DESERT_TankCrew",
			"SFPD_RHS_BLUFOR_WOODLAND_Rifleman",
			"SFPD_RHS_BLUFOR_WOODLAND_NBC_Mask",
			"SFPD_RHS_BLUFOR_WOODLAND_NBC_Suit",
			"SFPD_RHS_BLUFOR_WOODLAND_Rifleman_light",
			"SFPD_RHS_BLUFOR_WOODLAND_Unequiped",
			"SFPD_RHS_BLUFOR_WOODLAND_Leader",
			"SFPD_RHS_BLUFOR_WOODLAND_Medic",
			"SFPD_RHS_BLUFOR_WOODLAND_Grenadier",
			"SFPD_RHS_BLUFOR_WOODLAND_AT",
			"SFPD_RHS_BLUFOR_WOODLAND_AT_M136",
			"SFPD_RHS_BLUFOR_WOODLAND_LMG",
			"SFPD_RHS_BLUFOR_WOODLAND_Marksman",
			"SFPD_RHS_BLUFOR_WOODLAND_JTAC",
			"SFPD_RHS_BLUFOR_WOODLAND_MMG",
			"SFPD_RHS_BLUFOR_WOODLAND_Commander",
			"SFPD_RHS_BLUFOR_WOODLAND_AA",
			"SFPD_RHS_BLUFOR_WOODLAND_Recon_DMR",
			"SFPD_RHS_BLUFOR_WOODLAND_Spotter",
			"SFPD_RHS_BLUFOR_WOODLAND_Sniper",
			"SFPD_RHS_BLUFOR_WOODLAND_SF",
			"SFPD_RHS_BLUFOR_WOODLAND_SF_Leader",
			"SFPD_RHS_BLUFOR_WOODLAND_SF_Grenadier",
			"SFPD_RHS_BLUFOR_WOODLAND_SF_AT",
			"SFPD_RHS_BLUFOR_WOODLAND_SF_LMG",
			"SFPD_RHS_BLUFOR_WOODLAND_Recon_Rifle",
			"SFPD_RHS_BLUFOR_WOODLAND_TankCrew",
			"SFPD_RHS_BLUFOR_WINTER_Rifleman",
			"SFPD_RHS_BLUFOR_WINTER_NBC_Mask",
			"SFPD_RHS_BLUFOR_WINTER_NBC_Suit",
			"SFPD_RHS_BLUFOR_WINTER_Rifleman_light",
			"SFPD_RHS_BLUFOR_WINTER_Unequiped",
			"SFPD_RHS_BLUFOR_WINTER_Leader",
			"SFPD_RHS_BLUFOR_WINTER_Medic",
			"SFPD_RHS_BLUFOR_WINTER_Grenadier",
			"SFPD_RHS_BLUFOR_WINTER_AT",
			"SFPD_RHS_BLUFOR_WINTER_AT_M136",
			"SFPD_RHS_BLUFOR_WINTER_LMG",
			"SFPD_RHS_BLUFOR_WINTER_Marksman",
			"SFPD_RHS_BLUFOR_WINTER_JTAC",
			"SFPD_RHS_BLUFOR_WINTER_MMG",
			"SFPD_RHS_BLUFOR_WINTER_Commander",
			"SFPD_RHS_BLUFOR_WINTER_AA",
			"SFPD_RHS_BLUFOR_WINTER_Recon_DMR",
			"SFPD_RHS_BLUFOR_WINTER_Spotter",
			"SFPD_RHS_BLUFOR_WINTER_Sniper",
			"SFPD_RHS_BLUFOR_WINTER_SF",
			"SFPD_RHS_BLUFOR_WINTER_SF_Leader",
			"SFPD_RHS_BLUFOR_WINTER_SF_Grenadier",
			"SFPD_RHS_BLUFOR_WINTER_SF_AT",
			"SFPD_RHS_BLUFOR_WINTER_SF_LMG",
			"SFPD_RHS_BLUFOR_WINTER_Recon_Rifle",
			"SFPD_RHS_BLUFOR_WINTER_TankCrew",
			"SFPD_RHS_BLUFOR_HelicopterPilot",
			"SFPD_RHS_BLUFOR_PlanePilot",
			"SFPD_RHS_BLUFOR_ION_Protector",
			"SFPD_RHS_OPFOR_DESERT_Rifleman",
			"SFPD_RHS_OPFOR_DESERT_NBC_Mask",
			"SFPD_RHS_OPFOR_DESERT_NBC_Suit",
			"SFPD_RHS_OPFOR_DESERT_Rifleman_light",
			"SFPD_RHS_OPFOR_DESERT_Unequiped",
			"SFPD_RHS_OPFOR_DESERT_Leader",
			"SFPD_RHS_OPFOR_DESERT_Medic",
			"SFPD_RHS_OPFOR_DESERT_Grenadier",
			"SFPD_RHS_OPFOR_DESERT_AT",
			"SFPD_RHS_OPFOR_DESERT_LMG",
			"SFPD_RHS_OPFOR_DESERT_MG",
			"SFPD_RHS_OPFOR_DESERT_Marksman",
			"SFPD_RHS_OPFOR_DESERT_Commander",
			"SFPD_RHS_OPFOR_DESERT_AA",
			"SFPD_RHS_OPFOR_DESERT_Sniper",
			"SFPD_RHS_OPFOR_DESERT_Spotter",
			"SFPD_RHS_OPFOR_DESERT_Recon_DMR",
			"SFPD_RHS_OPFOR_DESERT_SF",
			"SFPD_RHS_OPFOR_DESERT_SF_Leader",
			"SFPD_RHS_OPFOR_DESERT_SF_Grenadier",
			"SFPD_RHS_OPFOR_DESERT_SF_AT",
			"SFPD_RHS_OPFOR_DESERT_SF_LMG",
			"SFPD_RHS_OPFOR_DESERT_Recon_Rifle",
			"SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL",
			"SFPD_RHS_OPFOR_DESERT_Paporotnik_SVD",
			"SFPD_RHS_OPFOR_DESERT_TankCrew",
			"SFPD_RHS_OPFOR_WOODLAND_Rifleman",
			"SFPD_RHS_OPFOR_WOODLAND_NBC_Mask",
			"SFPD_RHS_OPFOR_WOODLAND_NBC_Suit",
			"SFPD_RHS_OPFOR_WOODLAND_Rifleman_light",
			"SFPD_RHS_OPFOR_WOODLAND_Unequiped",
			"SFPD_RHS_OPFOR_WOODLAND_Leader",
			"SFPD_RHS_OPFOR_WOODLAND_Medic",
			"SFPD_RHS_OPFOR_WOODLAND_Grenadier",
			"SFPD_RHS_OPFOR_WOODLAND_AT",
			"SFPD_RHS_OPFOR_WOODLAND_LMG",
			"SFPD_RHS_OPFOR_WOODLAND_MG",
			"SFPD_RHS_OPFOR_WOODLAND_Marksman",
			"SFPD_RHS_OPFOR_WOODLAND_Commander",
			"SFPD_RHS_OPFOR_WOODLAND_AA",
			"SFPD_RHS_OPFOR_WOODLAND_Sniper",
			"SFPD_RHS_OPFOR_WOODLAND_Spotter",
			"SFPD_RHS_OPFOR_WOODLAND_Recon_DMR",
			"SFPD_RHS_OPFOR_WOODLAND_SF",
			"SFPD_RHS_OPFOR_WOODLAND_SF_Leader",
			"SFPD_RHS_OPFOR_WOODLAND_SF_Grenadier",
			"SFPD_RHS_OPFOR_WOODLAND_SF_AT",
			"SFPD_RHS_OPFOR_WOODLAND_SF_LMG",
			"SFPD_RHS_OPFOR_WOODLAND_Recon_Rifle",
			"SFPD_RHS_OPFOR_WOODLAND_Paporotnik_ASVAL",
			"SFPD_RHS_OPFOR_WOODLAND_Paporotnik_SVD",
			"SFPD_RHS_OPFOR_WOODLAND_TankCrew",
			"SFPD_RHS_OPFOR_WINTER_Rifleman",
			"SFPD_RHS_OPFOR_WINTER_NBC_Mask",
			"SFPD_RHS_OPFOR_WINTER_NBC_Suit",
			"SFPD_RHS_OPFOR_WINTER_Rifleman_light",
			"SFPD_RHS_OPFOR_WINTER_Unequiped",
			"SFPD_RHS_OPFOR_WINTER_Leader",
			"SFPD_RHS_OPFOR_WINTER_Medic",
			"SFPD_RHS_OPFOR_WINTER_Grenadier",
			"SFPD_RHS_OPFOR_WINTER_AT",
			"SFPD_RHS_OPFOR_WINTER_LMG",
			"SFPD_RHS_OPFOR_WINTER_MG",
			"SFPD_RHS_OPFOR_WINTER_Marksman",
			"SFPD_RHS_OPFOR_WINTER_AA",
			"SFPD_RHS_OPFOR_WINTER_Sniper",
			"SFPD_RHS_OPFOR_WINTER_Spotter",
			"SFPD_RHS_OPFOR_WINTER_Recon_DMR",
			"SFPD_RHS_OPFOR_WINTER_Recon_Rifle",
			"SFPD_RHS_OPFOR_WINTER_SF",
			"SFPD_RHS_OPFOR_WINTER_SF_Leader",
			"SFPD_RHS_OPFOR_WINTER_SF_Grenadier",
			"SFPD_RHS_OPFOR_WINTER_SF_AT",
			"SFPD_RHS_OPFOR_WINTER_SF_LMG",
			"SFPD_RHS_OPFOR_WINTER_Paporotnik_ASVAL",
			"SFPD_RHS_OPFOR_WINTER_Paporotnik_SVD",
			"SFPD_RHS_OPFOR_WINTER_TankCrew",
			"SFPD_RHS_OPFOR_Pilot",
			"SFPD_RHS_INDEP_Rifleman_1",
			"SFPD_RHS_INDEP_NBC_Mask",
			"SFPD_RHS_INDEP_NBC_Suit",
			"SFPD_RHS_INDEP_Rifleman_2",
			"SFPD_RHS_INDEP_Rifleman_3",
			"SFPD_RHS_INDEP_Rifleman_4",
			"SFPD_RHS_INDEP_MG",
			"SFPD_RHS_INDEP_AT",
			"SFPD_RHS_INDEP_Marksman",
			"SFPD_RHS_INDEP_Commander",
			"SFPD_RHS_INDEP_AA",
			"SFPD_RHS_INDEP_WOODLAND_Rifleman_1",
			"SFPD_RHS_INDEP_WOODLAND_NBC_Mask",
			"SFPD_RHS_INDEP_WOODLAND_NBC_Suit",
			"SFPD_RHS_INDEP_WOODLAND_Rifleman_2",
			"SFPD_RHS_INDEP_WOODLAND_Rifleman_3",
			"SFPD_RHS_INDEP_WOODLAND_Rifleman_4",
			"SFPD_RHS_INDEP_WOODLAND_MG",
			"SFPD_RHS_INDEP_WOODLAND_AT",
			"SFPD_RHS_INDEP_WOODLAND_Marksman",
			"SFPD_RHS_INDEP_WOODLAND_Commander",
			"SFPD_RHS_INDEP_WOODLAND_AA",
			"SFPD_RHS_INDEP_WINTER_Rifleman_1",
			"SFPD_RHS_INDEP_WINTER_NBC_Mask",
			"SFPD_RHS_INDEP_WINTER_NBC_Suit",
			"SFPD_RHS_INDEP_WINTER_Rifleman_2",
			"SFPD_RHS_INDEP_WINTER_Rifleman_3",
			"SFPD_RHS_INDEP_WINTER_Rifleman_4",
			"SFPD_RHS_INDEP_WINTER_MG",
			"SFPD_RHS_INDEP_WINTER_AT",
			"SFPD_RHS_INDEP_WINTER_Marksman",
			"SFPD_RHS_INDEP_WINTER_Commander",
			"SFPD_RHS_INDEP_WINTER_AA",
			"SFPD_RHS_INDEP_UAZ_MG",
			"SFPD_RHS_INDEP_UAZ",
			"SFPD_RHS_INDEP_UAZ_AT",
			"SFPD_RHS_INDEP_Ural",
			"SFPD_RHS_INDEP_zil",
			"SFPD_RHS_INDEP_zil_open",
			"SFPD_RHS_INDEP_BRDM2",
			"SFPD_RHS_INDEP_Ural_Zu23",
			"SFPD_RHS_INDEP_BTR60",
			"SFPD_RHS_INDEP_BMD1",
			"SFPD_RHS_INDEP_BMD2",
			"SFPD_RHS_INDEP_T72",
			"SFPD_RHS_INDEP_Static_D30",
			"SFPD_RHS_INDEP_Static_DSHKM",
			"SFPD_RHS_INDEP_Static_DSHKM_mini",
			"SFPD_RHS_INDEP_Static_ZU23",
			"SFPD_RHS_INDEP_Static_SPG9",
			"SFPD_RHS_INDEP_Static_AGS30",
			"SFPD_RHS_INDEP_WOODLAND_UAZ_MG",
			"SFPD_RHS_INDEP_WOODLAND_UAZ",
			"SFPD_RHS_INDEP_WOODLAND_UAZ_AT",
			"SFPD_RHS_INDEP_WOODLAND_Ural",
			"SFPD_RHS_INDEP_WOODLAND_zil",
			"SFPD_RHS_INDEP_WOODLAND_zil_open",
			"SFPD_RHS_INDEP_WOODLAND_BRDM2",
			"SFPD_RHS_INDEP_WOODLAND_Ural_Zu23",
			"SFPD_RHS_INDEP_WOODLAND_BTR60",
			"SFPD_RHS_INDEP_WOODLAND_BMD1",
			"SFPD_RHS_INDEP_WOODLAND_BMD2",
			"SFPD_RHS_INDEP_WOODLAND_T72",
			"SFPD_RHS_INDEP_WOODLAND_Static_D30",
			"SFPD_RHS_INDEP_WOODLAND_Static_DSHKM",
			"SFPD_RHS_INDEP_WOODLAND_Static_DSHKM_mini",
			"SFPD_RHS_INDEP_WOODLAND_Static_ZU23",
			"SFPD_RHS_INDEP_WOODLAND_Static_SPG9",
			"SFPD_RHS_INDEP_WOODLAND_Static_AGS30",
			"SFPD_RHS_INDEP_Ammo",
			"SFPD_RHS_INDEP_Weapons",
			"SFPD_RHS_INDEP_Explosives",
			"SFPD_RHS_INDEP_Launchers",
			"SFPD_RHS_BLUFOR_DESERT_M1151",
			"SFPD_RHS_BLUFOR_DESERT_M1151_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1151_M240",
			"SFPD_RHS_BLUFOR_DESERT_M1152_cargo",
			"SFPD_RHS_BLUFOR_DESERT_M1152_ammo",
			"SFPD_RHS_BLUFOR_DESERT_M1152_SICPS",
			"SFPD_RHS_BLUFOR_DESERT_M1165_cargo",
			"SFPD_RHS_BLUFOR_DESERT_M966_TOW",
			"SFPD_RHS_BLUFOR_DESERT_M1240",
			"SFPD_RHS_BLUFOR_DESERT_M1240_M2_CROWS",
			"SFPD_RHS_BLUFOR_DESERT_M1240_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1240_M240",
			"SFPD_RHS_BLUFOR_DESERT_M1097_4D_open",
			"SFPD_RHS_BLUFOR_DESERT_M1025_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1237_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1230_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1230_MED",
			"SFPD_RHS_BLUFOR_DESERT_M113",
			"SFPD_RHS_BLUFOR_DESERT_stryker",
			"SFPD_RHS_BLUFOR_DESERT_stryker_engineer",
			"SFPD_RHS_BLUFOR_DESERT_stryker_TOW",
			"SFPD_RHS_BLUFOR_DESERT_M2A2_BUSKI",
			"SFPD_RHS_BLUFOR_DESERT_m1A2SEP1_TUSKII",
			"SFPD_RHS_BLUFOR_DESERT_M978A4_BKIT",
			"SFPD_RHS_BLUFOR_DESERT_M977A4_AMMO_BKIT",
			"SFPD_RHS_BLUFOR_DESERT_M1083A1P2",
			"SFPD_RHS_BLUFOR_DESERT_M1083A1P2_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1083A1P2_wide",
			"SFPD_RHS_BLUFOR_DESERT_M1084A1P2",
			"SFPD_RHS_BLUFOR_DESERT_M1084A1P2_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1084A1P2_wide",
			"SFPD_RHS_BLUFOR_DESERT_M1078A1P2_CP",
			"SFPD_RHS_BLUFOR_DESERT_M1085A1P2_Med",
			"SFPD_RHS_BLUFOR_DESERT_M1078A1R_SOV_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1084A1R_SOV_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1117",
			"SFPD_RHS_BLUFOR_DESERT_MRZR",
			"SFPD_RHS_BLUFOR_DESERT_RG33_M2",
			"SFPD_RHS_BLUFOR_DESERT_CGRCAT1A2",
			"SFPD_RHS_BLUFOR_DESERT_CGRCAT1A2_M2",
			"SFPD_RHS_BLUFOR_DESERT_M142",
			"SFPD_RHS_BLUFOR_DESERT_Static_M2",
			"SFPD_RHS_BLUFOR_DESERT_Static_M2_mini",
			"SFPD_RHS_BLUFOR_DESERT_Static_TOW",
			"SFPD_RHS_BLUFOR_DESERT_Static_Mk6",
			"SFPD_RHS_BLUFOR_DESERT_Static_M119",
			"SFPD_RHS_BLUFOR_DESERT_Static_Stinger",
			"SFPD_RHS_BLUFOR_DESERT_Static_Mk19",
			"SFPD_RHS_BLUFOR_DESERT_M113_Medical",
			"SFPD_RHS_BLUFOR_DESERT_M109",
			"SFPD_RHS_BLUFOR_DESERT_M1025",
			"SFPD_RHS_BLUFOR_DESERT_M998",
			"SFPD_RHS_BLUFOR_DESERT_M977A4_BKIT",
			"SFPD_RHS_BLUFOR_DESERT_RG33",
			"SFPD_RHS_BLUFOR_DESERT_M1238A1",
			"SFPD_RHS_BLUFOR_DESERT_M1238A1_M2",
			"SFPD_RHS_BLUFOR_DESERT_M1239",
			"SFPD_RHS_BLUFOR_DESERT_M1239_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1151",
			"SFPD_RHS_BLUFOR_WOODLAND_M1151_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1151_M240",
			"SFPD_RHS_BLUFOR_WOODLAND_M1152_cargo",
			"SFPD_RHS_BLUFOR_WOODLAND_M1152_ammo",
			"SFPD_RHS_BLUFOR_WOODLAND_M1152_SICPS",
			"SFPD_RHS_BLUFOR_WOODLAND_M1165_cargo",
			"SFPD_RHS_BLUFOR_WOODLAND_M966_TOW",
			"SFPD_RHS_BLUFOR_WOODLAND_M1240",
			"SFPD_RHS_BLUFOR_WOODLAND_M1240_M2_CROWS",
			"SFPD_RHS_BLUFOR_WOODLAND_M1240_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1240_M240",
			"SFPD_RHS_BLUFOR_WOODLAND_M1097_4D_open",
			"SFPD_RHS_BLUFOR_WOODLAND_M1025_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1237_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1230_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1230_MED",
			"SFPD_RHS_BLUFOR_WOODLAND_M113",
			"SFPD_RHS_BLUFOR_WOODLAND_stryker",
			"SFPD_RHS_BLUFOR_WOODLAND_stryker_engineer",
			"SFPD_RHS_BLUFOR_WOODLAND_stryker_TOW",
			"SFPD_RHS_BLUFOR_WOODLAND_M2A2_BUSKI",
			"SFPD_RHS_BLUFOR_WOODLAND_m1A2SEP1_TUSKII",
			"SFPD_RHS_BLUFOR_WOODLAND_M978A4_BKIT",
			"SFPD_RHS_BLUFOR_WOODLAND_M977A4_AMMO_BKIT",
			"SFPD_RHS_BLUFOR_WOODLAND_M1078A1P2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1083A1P2_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1083A1P2_wide",
			"SFPD_RHS_BLUFOR_WOODLAND_M1084A1P2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1084A1P2_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1084A1P2_wide",
			"SFPD_RHS_BLUFOR_WOODLAND_M1078A1P2_CP",
			"SFPD_RHS_BLUFOR_WOODLAND_M1085A1P2_Med",
			"SFPD_RHS_BLUFOR_WOODLAND_M1078A1R_SOV_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1084A1R_SOV_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1117",
			"SFPD_RHS_BLUFOR_WOODLAND_MRZR",
			"SFPD_RHS_BLUFOR_WOODLAND_RG33_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_CGRCAT1A2",
			"SFPD_RHS_BLUFOR_WOODLAND_CGRCAT1A2_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M142",
			"SFPD_RHS_BLUFOR_WOODLAND_Static_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_Static_M2_mini",
			"SFPD_RHS_BLUFOR_WOODLAND_Static_TOW",
			"SFPD_RHS_BLUFOR_WOODLAND_Static_Mk6",
			"SFPD_RHS_BLUFOR_WOODLAND_Static_M119",
			"SFPD_RHS_BLUFOR_WOODLAND_Static_Stinger",
			"SFPD_RHS_BLUFOR_WOODLAND_Static_Mk19",
			"SFPD_RHS_BLUFOR_WOODLAND_M113_Medical",
			"SFPD_RHS_BLUFOR_WOODLAND_M109",
			"SFPD_RHS_BLUFOR_WOODLAND_M1025",
			"SFPD_RHS_BLUFOR_WOODLAND_M998",
			"SFPD_RHS_BLUFOR_WOODLAND_M977A4_BKIT",
			"SFPD_RHS_BLUFOR_WOODLAND_RG33",
			"SFPD_RHS_BLUFOR_WOODLAND_M1238A1",
			"SFPD_RHS_BLUFOR_WOODLAND_M1238A1_M2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1239",
			"SFPD_RHS_BLUFOR_WOODLAND_M1239_M2",
			"SFPD_RHS_BLUFOR_Chinook",
			"SFPD_RHS_BLUFOR_Blackfish_infantery",
			"SFPD_RHS_BLUFOR_Blackfish_vehicule",
			"SFPD_RHS_BLUFOR_Blackfish_armed",
			"SFPD_RHS_BLUFOR_Blackhawk",
			"SFPD_RHS_BLUFOR_Blackhawk_med",
			"SFPD_RHS_BLUFOR_MH6",
			"SFPD_RHS_BLUFOR_AH6",
			"SFPD_RHS_BLUFOR_UH1Y",
			"SFPD_RHS_BLUFOR_Comanche",
			"SFPD_RHS_BLUFOR_A10",
			"SFPD_RHS_BLUFOR_BlackWasp",
			"SFPD_RHS_BLUFOR_MKVSCO",
			"SFPD_RHS_OPFOR_DESERT_UAZ_open",
			"SFPD_RHS_OPFOR_DESERT_TIGR_M",
			"SFPD_RHS_OPFOR_DESERT_TIGR_STS",
			"SFPD_RHS_OPFOR_DESERT_BRDM2_HQ",
			"SFPD_RHS_OPFOR_DESERT_BTR80",
			"SFPD_RHS_OPFOR_DESERT_BTR80A",
			"SFPD_RHS_OPFOR_DESERT_GAZ",
			"SFPD_RHS_OPFOR_DESERT_GAZ_ammo",
			"SFPD_RHS_OPFOR_DESERT_GAZ_R142",
			"SFPD_RHS_OPFOR_DESERT_Ural",
			"SFPD_RHS_OPFOR_DESERT_Ural_fuel",
			"SFPD_RHS_OPFOR_DESERT_BM21",
			"SFPD_RHS_OPFOR_DESERT_Ural_Zu23",
			"SFPD_RHS_OPFOR_DESERT_Ural_Zu234",
			"SFPD_RHS_OPFOR_DESERT_BMP3_KA",
			"SFPD_RHS_OPFOR_DESERT_T90A",
			"SFPD_RHS_OPFOR_DESERT_T14",
			"SFPD_RHS_OPFOR_DESERT_9K79",
			"SFPD_RHS_OPFOR_DESERT_2S3",
			"SFPD_RHS_OPFOR_DESERT_2S1",
			"SFPD_RHS_OPFOR_DESERT_PTS",
			"SFPD_RHS_OPFOR_DESERT_TIGR",
			"SFPD_RHS_OPFOR_DESERT_UAZ",
			"SFPD_RHS_OPFOR_DESERT_BMP1K",
			"SFPD_RHS_OPFOR_DESERT_BMD1",
			"SFPD_RHS_OPFOR_DESERT_BMD1PK",
			"SFPD_RHS_OPFOR_DESERT_BMD2K",
			"SFPD_RHS_OPFOR_DESERT_BMP2K",
			"SFPD_RHS_OPFOR_DESERT_BRM1K",
			"SFPD_RHS_OPFOR_DESERT_BMD4MA",
			"SFPD_RHS_OPFOR_DESERT_PRP3",
			"SFPD_RHS_OPFOR_DESERT_BRDM2",
			"SFPD_RHS_OPFOR_DESERT_BRDM2_ATGM",
			"SFPD_RHS_OPFOR_DESERT_BRDM2_UM",
			"SFPD_RHS_OPFOR_DESERT_GAZ_Open",
			"SFPD_RHS_OPFOR_DESERT_Ural_Open",
			"SFPD_RHS_OPFOR_DESERT_bkm_t",
			"SFPD_RHS_OPFOR_DESERT_Static_KORD_mini",
			"SFPD_RHS_OPFOR_DESERT_Static_KORD",
			"SFPD_RHS_OPFOR_DESERT_Static_D30",
			"SFPD_RHS_OPFOR_DESERT_Static_ZU23",
			"SFPD_RHS_OPFOR_DESERT_Static_Igla",
			"SFPD_RHS_OPFOR_DESERT_Static_9M133",
			"SFPD_RHS_OPFOR_DESERT_Static_9k115",
			"SFPD_RHS_OPFOR_DESERT_Static_AGS30",
			"SFPD_RHS_OPFOR_WOODLAND_UAZ_open",
			"SFPD_RHS_OPFOR_WOODLAND_TIGR_M",
			"SFPD_RHS_OPFOR_WOODLAND_TIGR_STS",
			"SFPD_RHS_OPFOR_WOODLAND_BRDM2_HQ",
			"SFPD_RHS_OPFOR_WOODLAND_BTR80",
			"SFPD_RHS_OPFOR_WOODLAND_BTR80A",
			"SFPD_RHS_OPFOR_WOODLAND_GAZ",
			"SFPD_RHS_OPFOR_WOODLAND_GAZ_ammo",
			"SFPD_RHS_OPFOR_WOODLAND_GAZ_R142",
			"SFPD_RHS_OPFOR_WOODLAND_Ural",
			"SFPD_RHS_OPFOR_WOODLAND_Ural_fuel",
			"SFPD_RHS_OPFOR_WOODLAND_BM21",
			"SFPD_RHS_OPFOR_WOODLAND_Ural_Zu23",
			"SFPD_RHS_OPFOR_WOODLAND_Ural_Zu234",
			"SFPD_RHS_OPFOR_WOODLAND_BMP3_KA",
			"SFPD_RHS_OPFOR_WOODLAND_T90A",
			"SFPD_RHS_OPFOR_WOODLAND_T14",
			"SFPD_RHS_OPFOR_WOODLAND_9K79",
			"SFPD_RHS_OPFOR_WOODLAND_2S3",
			"SFPD_RHS_OPFOR_WOODLAND_2S1",
			"SFPD_RHS_OPFOR_WOODLAND_PTS",
			"SFPD_RHS_OPFOR_WOODLAND_TIGR",
			"SFPD_RHS_OPFOR_WOODLAND_UAZ",
			"SFPD_RHS_OPFOR_WOODLAND_BMP1K",
			"SFPD_RHS_OPFOR_WOODLAND_BMD1",
			"SFPD_RHS_OPFOR_WOODLAND_BMD1PK",
			"SFPD_RHS_OPFOR_WOODLAND_BMD2K",
			"SFPD_RHS_OPFOR_WOODLAND_BMP2K",
			"SFPD_RHS_OPFOR_WOODLAND_BRM1K",
			"SFPD_RHS_OPFOR_WOODLAND_BMD4MA",
			"SFPD_RHS_OPFOR_WOODLAND_PRP3",
			"SFPD_RHS_OPFOR_WOODLAND_BRDM2",
			"SFPD_RHS_OPFOR_WOODLAND_BRDM2_ATGM",
			"SFPD_RHS_OPFOR_WOODLAND_BRDM2_UM",
			"SFPD_RHS_OPFOR_WOODLAND_GAZ_Open",
			"SFPD_RHS_OPFOR_WOODLAND_Ural_Open",
			"SFPD_RHS_OPFOR_WOODLAND_bkm_t",
			"SFPD_RHS_OPFOR_WOODLAND_Static_KORD_mini",
			"SFPD_RHS_OPFOR_WOODLAND_Static_KORD",
			"SFPD_RHS_OPFOR_WOODLAND_Static_D30",
			"SFPD_RHS_OPFOR_WOODLAND_Static_ZU23",
			"SFPD_RHS_OPFOR_WOODLAND_Static_Igla",
			"SFPD_RHS_OPFOR_WOODLAND_Static_9M133",
			"SFPD_RHS_OPFOR_WOODLAND_Static_9k115",
			"SFPD_RHS_OPFOR_WOODLAND_Static_AGS30",
			"SFPD_RHS_OPFOR_MI8",
			"SFPD_RHS_OPFOR_MI24",
			"SFPD_RHS_OPFOR_MI28",
			"SFPD_RHS_OPFOR_KA52",
			"SFPD_RHS_OPFOR_Shirka",
			"SFPD_RHS_OPFOR_TU95MS",
			"SFPD_RHS_OPFOR_WINTER_UAZ_open",
			"SFPD_RHS_OPFOR_WINTER_UAZ",
			"SFPD_RHS_OPFOR_WINTER_TIGR_M",
			"SFPD_RHS_OPFOR_WINTER_TIGR_STS",
			"SFPD_RHS_OPFOR_WINTER_TIGR",
			"SFPD_RHS_OPFOR_WINTER_BTR80",
			"SFPD_RHS_OPFOR_WINTER_BTR80A",
			"SFPD_RHS_OPFOR_WINTER_Ural",
			"SFPD_RHS_OPFOR_WINTER_Ural_Open",
			"SFPD_RHS_BLUFOR_Medical",
			"SFPD_RHS_BLUFOR_Ammo1",
			"SFPD_RHS_BLUFOR_Ammo2",
			"SFPD_RHS_BLUFOR_Grenades",
			"SFPD_RHS_BLUFOR_Explosives",
			"SFPD_RHS_BLUFOR_Launchers1",
			"SFPD_RHS_BLUFOR_Launchers2",
			"SFPD_RHS_BLUFOR_Launchers3",
			"SFPD_RHS_BLUFOR_Equipment",
			"SFPD_RHS_BLUFOR_Weapons",
			"SFPD_RHS_BLUFOR_Shotgun",
			"SFPD_RHS_BLUFOR_Special_Weapons",
			"SFPD_RHS_BLUFOR_NBC_suits",
			"SFPD_RHS_BLUFOR_NBC_masks",
			"SFPD_RHS_BLUFOR_NBC_drugs",
			"SFPD_RHS_BLUFOR_NBC_detector",
			"SFPD_RHS_BLUFOR_Rappeling",
			"SFPD_RHS_OPFOR_Medical",
			"SFPD_RHS_OPFOR_Ammo",
			"SFPD_RHS_OPFOR_Grenades",
			"SFPD_RHS_OPFOR_Explosives",
			"SFPD_RHS_OPFOR_Launchers1",
			"SFPD_RHS_OPFOR_Launchers2",
			"SFPD_RHS_OPFOR_Launchers3",
			"SFPD_RHS_OPFOR_Equipment",
			"SFPD_RHS_OPFOR_Weapons",
			"SFPD_RHS_OPFOR_NBC_suits",
			"SFPD_RHS_OPFOR_NBC_masks",
			"SFPD_RHS_OPFOR_NBC_drugs",
			"SFPD_RHS_OPFOR_NBC_detector",
			"SFPD_RHS_OPFOR_Rappeling",
			"SFPD_RHS_BLUFOR_BOX_Cargo",
			"SFPD_RHS_OPFOR_BOX_Cargo"
		};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhsusf_c_troops",
			"rhsusf_c_m1117",
			"rhsusf_c_statics",
			"rhsgref_c_air",
			"rhsgref_c_troops",
			"rhsgref_c_vehicles_ret",
			"rhsgref_main",
			"rhsgref_c_a2port_armor",
			"tfar_core",
			"tfar_backpacks",
			"ace_common",
			"ace_csw",
			"ace_compat_rhs_usf3",
			"ace_compat_rhs_afrf3",
			"ace_compat_rhs_gref3",
			"AN_Equipements_CBRN"
		};
    };
};

class cfgUnitInsignia {
	class SFPD_RHS_RedCross_Insignia {
		displayName = "Red Cross";
		author = "kamkill";
		texture = "\SFPD_RHS_Units\RedCross.paa";
		textureVehicle = "";
	};
};

class CfgMagazines {
	class rhsusf_M130_CMFlare_Chaff_Magazine;
	class rhsusf_M130_CMFlare_Chaff_Magazine_x4;
	class rhs_ASO2_CMFlare_Chaff_Magazine;
	class rhsusf_M130_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine {
		count=240;
	};
	class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4 {
		count=240;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine {
		count=240;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x6: rhs_ASO2_CMFlare_Chaff_Magazine {
		count=240;
	};
	class rhs_UV26_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine_x4 {
		count=240;
	};
	
	class rhs_mag_3bm46_10;
	class rhs_mag_3bk31_8;
	class rhs_mag_3of26_6;
	class rhs_mag_3bm46_8: rhs_mag_3bm46_10 {
		count=25;
	};
	class rhs_mag_3bk31_3: rhs_mag_3bk31_8 {
		count=5;
	};
	class rhs_mag_3of26_7: rhs_mag_3of26_6 {
		count=8;
	};
};

class CfgAmmo {
    class SmokeShell;
    class G_40mm_Smoke: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
    class rhs_g_vog25;
    class rhs_g_vg40md_white: rhs_g_vog25 {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
};

class cfgFactionClasses {
	class SFPD_RHS_BLUFOR_DESERT_Faction { //Faction Calling Name
		displayName = "[SFPD] US (Desert)"; //Faction name in-game
		priority = 1; //How far down it is on the menu, uselss ?
		side = 1; // 1 Blufor 2 opfor 3 independant i think.
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Faction {
		displayName = "[SFPD] US (Woodland)";
		priority = 2;
		side = 1;
	};
	
	class SFPD_RHS_BLUFOR_Faction {
		displayName = "[SFPD] US (Universal)";
		priority = 3;
		side = 1;
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Faction {
		displayName = "[SFPD] US (Winter)";
		priority = 4;
		side = 1;
	};
	
	class SFPD_RHS_OPFOR_DESERT_Faction {
		displayName = "[SFPD] RU (Desert)";
		priority = 1;
		side = 2;
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Faction {
		displayName = "[SFPD] RU (Woodland)";
		priority = 2;
		side = 2;
	};
	
	class SFPD_RHS_OPFOR_Faction {
		displayName = "[SFPD] RU (Universal)";
		priority = 3;
		side = 2;
	};
	
	class SFPD_RHS_OPFOR_WINTER_Faction {
		displayName = "[SFPD] RU (Winter)";
		priority = 4;
		side = 2;
	};
	
	class SFPD_RHS_INDEP_DESERT_Faction {
		displayName = "[SFPD] Insurgents (Desert)";
		priority = 1;
		side = 3;
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Faction {
		displayName = "[SFPD] Insurgents (Woodland)";
		priority = 2;
		side = 3;
	};
	
	class SFPD_RHS_INDEP_WINTER_Faction {
		displayName = "[SFPD] Insurgents (Winter)";
		priority = 2;
		side = 3;
	};
};

class CfgVehicleClasses {// useless ?
	class SFPD_RHS_BLUFOR_Infantry { //Name of unit group e.g Air, Infantry, Armour
		displayName = "Infantry"; //In-game name
		priority = 1; // How far down it is on the menu
	};
	
	class SFPD_RHS_OPFOR_Infantry {
		displayName = "Infantry";
		priority = 1;
		side = 2; // 1 Blufor 2 opfor 3 independant i think.
	};
	
	class SFPD_RHS_INDEP_Infantry {
		displayName = "Infantry";
		priority = 1;
		side = 3; // 1 Blufor 2 opfor 3 independant i think.
	};
};

class CfgFunctions {
	class KAM {
		class Kam_NBC {
			class Shower {
				file = "\SFPD_RHS_Units\handleOn.sqf";
				postInit = 1;
			};
			class ChemicalDetector {
				file = "\SFPD_RHS_Units\ChemicalDetector.sqf";
				postInit = 1;
			};
			class ContactDevice {
				file = "\SFPD_RHS_Units\ContactDevice.sqf";
				postInit = 1;
			};
			class Fatigue {
				file = "\SFPD_RHS_Units\NBC_Fatigue.sqf";
				postInit = 1;
			};
		};
		class K9 {
			file = "SFPD_RHS_Units\functions";
			class K9 {};
			class K9_drag {};
			class hcam_start {};
			class hcam_onLoad {};
			class skyhook {};
			class showMedicalStatus {};
			class addDevice {};
			class autoloaded {};
		};
	};
};

/*class Extended_Init_EventHandlers {
	class Man {
		class test {
			init = "hint str _this;systemChat str _this;";
		};
    };
};*/

class CfgMovesAnimal_Base_F;
class CfgMovesDog_F: CfgMovesAnimal_Base_F {
	class States {
		class Dog_Idle_Sprint;
		class Dog_Sprint: Dog_Idle_Sprint {
			speed = -0.98;//-1.47
			relSpeedMax = 1.65;//1.1
			relSpeedMin = 1.05;//0.7
		};
	};
};

class CfgGlasses {
	class G_CBRN_A {
		displayname = "CBRN-A mask";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\AN_CBRN\data\G_CBRN_A_mask_CO.paa","\AN_CBRN\data\G_CBRN_A_glasses_CO.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		model = "\AN_CBRN\G_CBRN_A.p3d";
		picture = "\AN_CBRN\data\ui\icon_G_CBRN_A_ca.paa";
		scope = 2;
		CBRN_protectionLevel = 1 + 2;
		ace_color[] = {0, 0, 0};
		ace_tintAmount = 0;
		ace_resistance = 1;
		ace_protection = 1;
		ACE_Overlay = "a3\ui_f_enoch\data\objects\data\optics_APR_02_CA.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class G_CBRN_A_multicam {
		displayname = "CBRN-A mask (multicam)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\AN_CBRN\data\G_CBRN_A_mask_CO.paa","\AN_CBRN\data\G_CBRN_A_glasses_CO.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		model = "\AN_CBRN\G_CBRN_A_alt.p3d";
		picture = "\AN_CBRN\data\ui\icon_G_CBRN_A_multicam_ca.paa";
		scope = 2;
		CBRN_protectionLevel = 1 + 2 + 4;
		ace_color[] = {0, 0, 0};
		ace_tintAmount = 0;
		ace_resistance = 1;
		ace_protection = 1;
		ACE_Overlay = "a3\ui_f_enoch\data\objects\data\optics_APR_02_CA.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class G_CBRN_B {
		displayname = "CBRN-B mask";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\AN_CBRN\data\G_CBRN_B_mask_black_CO.paa","\AN_CBRN\data\G_CBRN_B_glasses_CO.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		model = "\AN_CBRN\G_CBRN_B.p3d";
		picture = "\AN_CBRN\data\ui\icon_G_CBRN_B_ca.paa";
		scope = 2;
		CBRN_protectionLevel = 1 + 2;
		ace_color[] = {0, 0, 0};
		ace_tintAmount = 0;
		ace_resistance = 1;
		ace_protection = 1;
		ACE_Overlay = "a3\ui_f_enoch\data\objects\data\optics_APR_02_CA.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class G_CBRN_B_black {
		displayname = "CBRN-B mask (black)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\AN_CBRN\data\G_CBRN_B_mask_black_CO.paa","\AN_CBRN\data\G_CBRN_B_glasses_CO.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		model = "\AN_CBRN\G_CBRN_B_alt.p3d";
		picture = "\AN_CBRN\data\ui\icon_G_CBRN_B_black_ca.paa";
		scope = 2;
		CBRN_protectionLevel = 1 + 2 + 4;
		ace_color[] = {0, 0, 0};
		ace_tintAmount = 0;
		ace_resistance = 1;
		ace_protection = 1;
		ACE_Overlay = "a3\ui_f_enoch\data\objects\data\optics_APR_02_CA.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class G_CBRN_C_blue {
		displayname = "CBRN-B mask (blue)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\AN_CBRN\data\G_CBRN_B_mask_blue_CO.paa","\AN_CBRN\data\G_CBRN_B_glasses_CO.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		model = "\AN_CBRN\G_CBRN_B_alt.p3d";
		picture = "\AN_CBRN\data\ui\icon_G_CBRN_B_blue_ca.paa";
		scope = 2;
		CBRN_protectionLevel = 1 + 2 + 4;
		ace_color[] = {0, 0, 0};
		ace_tintAmount = 0;
		ace_resistance = 1;
		ace_protection = 1;
		ACE_Overlay = "a3\ui_f_enoch\data\objects\data\optics_APR_02_CA.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
};

class CfgVehicles {
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_base_F;
	class TFAR_rt1523g_bwmod;
	class rhsusf_falconii_coy;
	class B_LegStrapBag_black_F;
	class B_LegStrapBag_coyote_F;
	class B_LegStrapBag_olive_F;
	class B_Carryall_khk;
	
	class ace_fastroping_helper;
	class KAM_Skyhook: ace_fastroping_helper {
		class ACE_Actions {
			class AttachSkyhook {
				displayName = "Attach";
				condition = "(!(alive(_target getVariable ['unit', objNull])))";
				statement = "_target setVariable ['unit', _player, true];_player setVariable ['Skyhook', _target, true];_player attachTo [_target, (_target getVariable ['sykhook_a', [0,0,-1]])];_player setVectorUp (_target getVariable ['sykhook_u', [0,0,1]]);";
				distance = 7;
				position = [0,0,0];
			};
		};
	};
	
	class Air;
	class Helicopter: Air {
		class ACE_SelfActions {
			class DeploySkyhook {
				displayName = "Deploy skyhook";
				condition = "(!(alive((vehicle _target) getVariable ['Skyhook', objNull])))";
				statement = "[(vehicle _target) ] call KAM_fnc_skyhook";
			};
			class CutSkyhook {
				displayName = "Cut skyhook";
				condition = "(alive((vehicle _target)  getVariable ['Skyhook', objNull]))";
				statement = "{deleteVehicle _x} forEach ((vehicle _target) getVariable ['SkyhookAll', []])";
			};
		};
	};
	
	class Animal_Base_F;
	class Dog_Base_F: Animal_Base_F {
		class ACE_Actions {
			class TakeControl {
				displayName = "control";
				condition = "((alive _target) && (_target getVariable ['K9', false]) && ((side _target) == (side _player)))";
				statement = "_player setVariable ['dog',_target, true];_target setVariable ['own',_player, true];_target setVariable ['newOrder',0, true];";
				distance = 10;
				position = [0,0,0];
			};
			
			//TEST
			class CheckDog {
				displayName = "check";
				condition = "((alive _target) && (_target getVariable ['K9', false]) && ((side _target) == (side _player)))";
				statement = "hint format ['Dog life: %1', (_target getVariable ['dogLife', 5]) / (_target getVariable ['dogMaxLife', 5])];";
				distance = 3;
				position = [0,0,0.5];
			};
		};
	};
	
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ace_csw_deploy {
				class ACE_CSW_M3_toHight {
				displayName = "to hight";
				condition = "(secondaryWeapon _target == 'ace_csw_m3CarryTripodLow')";
				statement = "_target removeWeapon 'ace_csw_m3CarryTripodLow';_target addWeapon 'ace_csw_m3CarryTripod';";
				};
				class ACE_CSW_M3_toLow {
				displayName = "to low";
				condition = "(secondaryWeapon _target == 'ace_csw_m3CarryTripod')";
				statement = "_target removeWeapon 'ace_csw_m3CarryTripod';_target addWeapon 'ace_csw_m3CarryTripodLow';";
				};
				class ACE_CSW_KORD_toHight {
				displayName = "to hight";
				condition = "(secondaryWeapon _target == 'ace_csw_kordCarryTripodLow')";
				statement = "_target removeWeapon 'ace_csw_kordCarryTripodLow';_target addWeapon 'ace_csw_kordCarryTripod';";
				};
				class ACE_CSW_KORD_toLow {
				displayName = "to low";
				condition = "(secondaryWeapon _target == 'ace_csw_kordCarryTripod')";
				statement = "_target removeWeapon 'ace_csw_kordCarryTripod';_target addWeapon 'ace_csw_kordCarryTripodLow';";
				};
			};
			
			class DetachSkyhook {
				displayName = "Detach";
				condition = "(alive(_target getVariable ['Skyhook', objNull]))";
				statement = "(_target getVariable ['Skyhook', objNull]) setVariable ['unit', objNull, true];_player setVariable ['Skyhook', objNull, true];detach _player;";
			};
			
			class ACE_Equipment {
				class ChemicalDetector {
					displayName = "Chemical Detector";
					condition = "('ChemicalDetector_01_watch_F' in (assignedItems _target))";
					statement = "";
					
					class ChemicalDetectorSelf {
						displayName = "Self";
						condition = "('ChemicalDetector_01_watch_F' in (assignedItems _target))";
						statement = "_target setVariable ['ScanMod', 2, false];";
					};
					class ChemicalDetectorContamination {
						displayName = "Contamination";
						condition = "('ChemicalDetector_01_watch_F' in (assignedItems _target))";
						statement = "_target setVariable ['ScanMod', 1, false];";
					};
					class ChemicalDetectorDanger {
						displayName = "Danger";
						condition = "('ChemicalDetector_01_watch_F' in (assignedItems _target))";
						statement = "_target setVariable ['ScanMod', 0, false];";
					};
				};
			};
			
			class Dog {
				displayName = "dog";
				condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
				statement = "";
				class Drag {
					displayName = "Drag";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
					statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newOrder',5, true];";
				};
				class StayClose {
					displayName = "Stay close";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
					statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newOrder',4, true];";
				};
				class Attack {
					displayName = "Attack";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
					statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newPos', [getPosATL _target, 20, getDir _target] call BIS_fnc_relPos, true];_dog setVariable ['newTarget', cursorObject, true];_dog setVariable ['newOrder',3, true];";
					class Attack100 {
						displayName = "100 m";
						condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
						statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newPos', [getPosATL _target, 100, getDir _target] call BIS_fnc_relPos, true];_dog setVariable ['newTarget', cursorObject, true];_dog setVariable ['newOrder',3, true];";
					};
					class Attack50 {
						displayName = "50 m";
						condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
						statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newPos', [getPosATL _target, 50, getDir _target] call BIS_fnc_relPos, true];_dog setVariable ['newTarget', cursorObject, true];_dog setVariable ['newOrder',3, true];";
					};
					class Attack20 {
						displayName = "20 m";
						condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
						statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newPos', [getPosATL _target, 20, getDir _target] call BIS_fnc_relPos, true];_dog setVariable ['newTarget', cursorObject, true];_dog setVariable ['newOrder',3, true];";
					};
				};
				class Move {
					displayName = "Move";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
					statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newPos', screenToWorld [0.5,0.5], true];_dog setVariable ['newOrder',2, true];";
				};
				class Hold {
					displayName = "Hold";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
					statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newOrder',1, true];";
				};
				class Follow {
					displayName = "Follow";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
					statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['newOrder',0, true];";
				};
			};
			
			class DogCam {
				displayName = "dog camera";
				condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target))";
				statement = "call KAM_fnc_hcam_start;";
				class DogCamStop {
					runOnHover = 1;
					displayName = "stop";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
					statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['speed', 0, true];_dog setVariable ['newOrder',7, true];";
					class DogCamTurnRight {
						runOnHover = 1;
						displayName = "right";
						condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
						statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['turnAngle', 10, true];_dog setVariable ['newOrder',6, true];";
					};
					class DogCamWalk {
						runOnHover = 1;
						displayName = "walk";
						condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
						statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['speed', 1, true];_dog setVariable ['newOrder',7, true];";
						class DogCamRun {
							runOnHover = 1;
							displayName = "run";
							condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
							statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['speed', 2, true];_dog setVariable ['newOrder',7, true];";
							class DogCamSprint {
								runOnHover = 1;
								displayName = "sprint";
								condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
								statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['speed', 3, true];_dog setVariable ['newOrder',7, true];";
							};
						};
					};
					class DogCamTurnLeft {
						runOnHover = 1;
						displayName = "left";
						condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
						statement = "_dog = _target getVariable ['dog', objNull];_dog setVariable ['turnAngle', -10, true];_dog setVariable ['newOrder',6, true];";
					};
				};
				class DogCamNVG {
					displayName = "toggle NVG";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
					statement = "_target setVariable ['hcam_nvg',!(_target getVariable ['hcam_nvg', false])];";
				};
				class DogCamOff {
					displayName = "turn off";
					condition = "(alive (_target getVariable ['dog', objNull]) && (vehicle _target == _target) && (_target getVariable ['hcam_active', false]))";
					statement = "_target setVariable ['hcam_stop',true];";
				};
			};
		};
	};
	
	//ED-1
	class LandVehicle;
	class Tank: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {};
		};
	};
	class Tank_F: Tank {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {};
		};
	};
	class UGV_02_Base_F: Tank_F{
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ace_logistics_uavbattery_RefuelUAV {
					condition = "[_player,_target] call ace_logistics_uavbattery_fnc_canRefuelUAV";
					displayName = "Recharge";
					icon = "\z\ace\addons\logistics_uavbattery\ui\UAV_battery_ca.paa";
					statement = "[_player,_target] call ace_logistics_uavbattery_fnc_refuelUAV";
				};
				class KAM_Repaire_Tracks {
					condition = "(((_target getHitPointDamage 'hitltrack') > 0) or ((_target getHitPointDamage 'hitrtrack') > 0))";
					displayName = "Repaire Tracks";
					statement = "_target setHitPointDamage ['hitltrack', 0];_target setHitPointDamage ['hitrtrack', 0];";
				};
			};
		};
	};
	//
	
	//Desert
	class SFPD_RHS_BLUFOR_DESERT_Rifleman: B_Soldier_base_F { //Unit Class name: Class getting info from 
		side = 1; //Blufor
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction"; //Your Faction
		//backpack = "Class_Backpack"; //Backpack
		vehicleclass = "SFPD_RHS_BLUFOR_Infantry"; //Unit Group
		author = "Kamkill"; //Self Explanatory 
		_generalMacro = "SFPD_RHS_BLUFOR_DESERT_Rifleman"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Desert Rifleman"; //In-Game Name
		icon = "iconMan"; //Custom icon (* + Medic,Engineer,Explosive,Recon,Virtual,AT,Leader,MG,Officer)
		weapons[] = {"SFPD_RHS_M4_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)}; //Spawning Gear
		respawnWeapons[] = {"SFPD_RHS_M4_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {TEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),BASIC_MAGS};
		respawnMagazines[] = {TEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),BASIC_MAGS};
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","rhs_googles_black",BASIC_LINKED};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "rhs_uniform_FROG01_d"; //uniform you are using
		camouflage = 1; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_BLUFOR_DESERT_NBC_Mask: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert NBC (Mask)";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","G_CBRN_A_multicam",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatd_headset","G_CBRN_A_multicam",BASIC_LINKED};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_NBC_Suit: SFPD_RHS_BLUFOR_DESERT_NBC_Mask {
		displayName = "Desert NBC (Suit)";
		uniformClass = "U_CBRN_A_multicam";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Rifleman_light: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Rifleman (light)";
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Unequiped: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Unequiped";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"}; 
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Leader: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_Leader_Backpack";
		displayName = "Desert Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Medic: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_Medic_Backpack";
		displayName = "Desert Medic";
		icon = "iconManMedic";
		
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_marine_v2.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhs_frog02_d_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_BLUFOR_DESERT_Medic_Uniform";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Grenadier: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_Grenadier_Backpack";
		displayName = "Desert Grenadier";
		weapons[] = {"SFPD_RHS_M4_GL_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M4_GL_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] += {THREE_TIMES(1Rnd_HE_Grenade_shell)};
		respawnMagazines[] += {THREE_TIMES(1Rnd_HE_Grenade_shell)};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_AT: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_AT_Backpack";
		displayName = "Desert AT";
		icon = "iconManAT";
		weapons[] = {"SFPD_RHS_M4_Default","SFPD_RHS_Glock17","rhs_weap_maaws_optic","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Default","SFPD_RHS_Glock17","rhs_weap_maaws_optic","ACE_Vector","Throw","Put"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_AT_M136: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert AT (M136)";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_M136_hedp"};
		respawnWeapons[] += {"rhs_weap_M136_hedp"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_LMG: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_LMG_Backpack";
		displayName = "Desert LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_M249_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M249_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box",BASIC_MAGS};//rhs_200rnd_556x45_T_SAW
		respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box",BASIC_MAGS};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Marksman: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Marksman";
		weapons[] = {"SFPD_RHS_DESERT_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_DESERT_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		magazines[] = {SIX_TIMES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),BASIC_MAGS};
		respawnMagazines[] = {SIX_TIMES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),BASIC_MAGS};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_JTAC: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_JTAC_Backpack";
		displayName = "Desert JTAC";
		weapons[] = {"SFPD_RHS_M4_GL_Default","SFPD_RHS_Glock17","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_GL_Default","SFPD_RHS_Glock17","Laserdesignator","Throw","Put"};
		magazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F","Laserbatteries"};
		respawnMagazines[] += {"UGL_FlareGreen_F","UGL_FlareRed_F","Laserbatteries"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_MMG: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert MMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_M240_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_M240_Default",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer",BASIC_MAGS};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer",BASIC_MAGS};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Commander: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Commander";
		icon = "iconManOfficer";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {THREE_TIMES(rhsusf_mag_17Rnd_9x19_JHP)};
		respawnMagazines[] = {THREE_TIMES(rhsusf_mag_17Rnd_9x19_JHP)};
		linkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatd","rhs_googles_black",BASIC_LINKED};
		camouflage = 0.7; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille  
	};
	
	class SFPD_RHS_BLUFOR_DESERT_AA: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_BLUFOR_AA_Backpack";
		displayName = "Desert AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_fim92"};
		respawnWeapons[] += {"rhs_weap_fim92"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Recon_DMR: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Recon DMR";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		icon = "iconManRecon";
		weapons[] = {"SFPD_RHS_DESERT_M2010_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_DESERT_M2010_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {EIGHT_TIMES(rhsusf_5Rnd_300winmag_xm2010),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue","Laserbatteries"};
		respawnMagazines[] = {EIGHT_TIMES(rhsusf_5Rnd_300winmag_xm2010),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue","Laserbatteries"};
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatd","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille 
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_Leader: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		backpack = "SFPD_RHS_BLUFOR_Leader_Backpack";
		displayName = "Desert SF Leader";
		weapons[] = {"SFPD_RHS_M4_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),BASIC_MAGS,"Laserbatteries"};
		respawnMagazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),BASIC_MAGS,"Laserbatteries"};
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_Grenadier: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_BLUFOR_SF_Grenadier_Backpack";
		displayName = "Desert SF Grenadier";
		weapons[] = {"SFPD_RHS_M4_GL_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_GL_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_AT: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "";
		displayName = "Desert SF AT";
		weapons[] += {"rhs_weap_M136_hedp"};
		respawnWeapons[] += {"rhs_weap_M136_hedp"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF_LMG: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_BLUFOR_SF_LMG_Backpack";
		displayName = "Desert SF LMG";
		weapons[] = {"SFPD_RHS_M249_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M249_Silenced","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {"rhsusf_200rnd_556x45_mixed_box",BASIC_MAGS,"Laserbatteries"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box",BASIC_MAGS,"Laserbatteries"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_SF: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_BLUFOR_SF_Backpack";//TODO
		displayName = "Desert SF";
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Recon_Rifle: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		displayName = "Desert Recon Rifle";
		weapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","Laserdesignator","Throw","Put"};
		magazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		respawnMagazines[] = {SIX_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","Laserbatteries"};
		items[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_EntrenchingTool",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Sniper: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		backpack = "";
		displayName = "Desert Sniper";
		weapons[] = {"SFPD_RHS_M200","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M200","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		items[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {"ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_B_FullGhillie_ard";
		camouflage = 0.5; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Spotter: SFPD_RHS_BLUFOR_DESERT_Sniper {
		backpack = "SFPD_RHS_BLUFOR_Spotter_Backpack";
		displayName = "Desert Spotter";
		weapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M4_Spotter","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		magazines[] = {THREE_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {THREE_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","SmokeShell","SmokeShell","SmokeShellBlue",FOUR_TIMES(7Rnd_408_Mag),"ACE_FlareTripMine_Mag"};
		items[] = {"ACE_EntrenchingTool","ACE_Kestrel4500","ACE_RangeCard","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_DefusalKit"};
		respawnItems[] = {"ACE_EntrenchingTool","ACE_Kestrel4500","ACE_RangeCard","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_ATragMX",BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_DefusalKit"};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_TankCrew: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		displayName = "Desert Tank Crew";
		weapons[] = {"SFPD_RHS_Glock17","Binocular","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_Glock17","Binocular","Throw","Put"};
		magazines[] = {FOUR_TIMES(rhsusf_mag_17Rnd_9x19_JHP),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(rhsusf_mag_17Rnd_9x19_JHP),"SmokeShellBlue","ACE_HandFlare_Yellow"};
		linkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat",BASIC_LINKED};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_HelmetCrew_B","G_Combat",BASIC_LINKED};
		items[] = {BASIC_ITEMS,EIGHT_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,EIGHT_TIMES(ACE_quikclot)};
	};
	
	//Woodland
	class SFPD_RHS_BLUFOR_WOODLAND_Rifleman: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Rifleman";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_NBC_Mask: SFPD_RHS_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","G_CBRN_A_multicam",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","G_CBRN_A_multicam",BASIC_LINKED};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_NBC_Suit: SFPD_RHS_BLUFOR_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_CBRN_A_multicam";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Rifleman_light: SFPD_RHS_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Rifleman (light)";
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Unequiped: SFPD_RHS_BLUFOR_WOODLAND_Rifleman {
		displayName = "Woodland Unequiped";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"}; 
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Leader: SFPD_RHS_BLUFOR_DESERT_Leader {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Leader";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Medic: SFPD_RHS_BLUFOR_DESERT_Medic {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Medic";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_marine_v2.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhs_frog02_wd_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_BLUFOR_WOODLAND_Medic_Uniform";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Grenadier: SFPD_RHS_BLUFOR_DESERT_Grenadier {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Grenadier";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_AT: SFPD_RHS_BLUFOR_DESERT_AT {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland AT";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_AT_M136: SFPD_RHS_BLUFOR_DESERT_AT_M136 {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland AT (M136)";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_LMG: SFPD_RHS_BLUFOR_DESERT_LMG {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland LMG";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Marksman: SFPD_RHS_BLUFOR_DESERT_Marksman {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Marksman";
		weapons[] = {"SFPD_RHS_WOODLAND_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WOODLAND_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_JTAC: SFPD_RHS_BLUFOR_DESERT_JTAC {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland JTAC";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_MMG: SFPD_RHS_BLUFOR_DESERT_MMG {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland MMG";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Commander: SFPD_RHS_BLUFOR_DESERT_Commander {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Commander";
		linkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_booniehat2_marpatwd","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_AA: SFPD_RHS_BLUFOR_DESERT_AA {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland AA";
		linkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_iar","rhsusf_mich_helmet_marpatwd_headset","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Recon_DMR: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Recon DMR";
		weapons[] = {"SFPD_RHS_WOODLAND_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WOODLAND_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_Leader: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF Leader";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_Grenadier: SFPD_RHS_BLUFOR_DESERT_SF_Grenadier {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF Grenadier";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_AT: SFPD_RHS_BLUFOR_DESERT_SF_AT {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF AT";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF_LMG: SFPD_RHS_BLUFOR_DESERT_SF_LMG {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF LMG";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_SF: SFPD_RHS_BLUFOR_DESERT_SF {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland SF";
		linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_opscore_paint_pelt_nsw","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Recon_Rifle: SFPD_RHS_BLUFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Recon Rifle";
		linkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhs_booniehat2_marpatwd","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Sniper: SFPD_RHS_BLUFOR_DESERT_Sniper {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Sniper";
		linkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "U_B_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Spotter: SFPD_RHS_BLUFOR_DESERT_Spotter {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Spotter";
		linkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_brn","rhsusf_shemagh2_gogg_grn","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "U_B_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_TankCrew: SFPD_RHS_BLUFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		displayName = "Woodland Tank Crew";
		uniformClass = "rhs_uniform_FROG01_wd";
	};
	
	//Universal
	class SFPD_RHS_BLUFOR_HelicopterPilot: SFPD_RHS_BLUFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_BLUFOR_Faction";
		displayName = "Universal Helicopter Pilot";
		weapons[] = {"SFPD_RHS_Glock17","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_Glock17","Throw","Put"};
		linkedItems[] = {"V_Rangemaster_belt","rhsusf_hgu56p_visor_mask_black_skull",BASIC_LINKED,"ACE_NVG_Wide"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhsusf_hgu56p_visor_mask_black_skull",BASIC_LINKED,"ACE_NVG_Wide"};
		uniformClass = "U_B_HeliPilotCoveralls";
	};
	
	class SFPD_RHS_BLUFOR_PlanePilot: SFPD_RHS_BLUFOR_HelicopterPilot {
		displayName = "Universal Plane Pilot";
		linkedItems[] = {"H_PilotHelmetFighter_B",BASIC_LINKED};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_B",BASIC_LINKED};
		uniformClass = "U_B_PilotCoveralls";
	};
	
	class SFPD_RHS_BLUFOR_ION_Protector: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_RHS_BLUFOR_Faction";
		vehicleclass = "SFPD_RHS_BLUFOR_Infantry";
		displayName = "ION Protector";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_HK416_ION",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {"SFPD_RHS_HK416_ION",BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {SEVEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),BASIC_MAGS};
		respawnMagazines[] = {SEVEN_TIMES(rhs_mag_30Rnd_556x45_Mk318_Stanag),BASIC_MAGS};
		linkedItems[] = {"rhsusf_spc_squadleader","H_Cap_blk_ION","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_spc_squadleader","H_Cap_blk_ION","rhs_googles_black",BASIC_LINKED};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500"};
		uniformClass = "U_I_G_Story_Protagonist_F";
	};
	
	//Winter
	class SFPD_RHS_BLUFOR_WINTER_Rifleman: SFPD_RHS_BLUFOR_DESERT_Rifleman {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Rifleman";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_NBC_Mask: SFPD_RHS_BLUFOR_WINTER_Rifleman {
		displayName = "Winter NBC (Mask)";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","G_CBRN_A_multicam",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","G_CBRN_A_multicam",BASIC_LINKED};
	};
	
	class SFPD_RHS_BLUFOR_WINTER_NBC_Suit: SFPD_RHS_BLUFOR_WINTER_NBC_Mask {
		displayName = "Winter NBC (Suit)";
		uniformClass = "U_CBRN_A_multicam";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Rifleman_light: SFPD_RHS_BLUFOR_WINTER_Rifleman {
		displayName = "Winter Rifleman (light)";
		linkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED};
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Unequiped: SFPD_RHS_BLUFOR_WINTER_Rifleman {
		displayName = "Winter Unequiped";
		weapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		respawnWeapons[] = {BASIC_WEAPONS(SFPD_RHS_Glock17)};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"}; 
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Leader: SFPD_RHS_BLUFOR_DESERT_Leader {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Leader";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Medic: SFPD_RHS_BLUFOR_DESERT_Medic {
		backpack = "SFPD_RHS_BLUFOR_WINTER_Medic_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Medic";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa","rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa","","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_BLUFOR_WINTER_Medic_Uniform";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Grenadier: SFPD_RHS_BLUFOR_DESERT_Grenadier {
		backpack = "SFPD_RHS_BLUFOR_WINTER_Grenadier_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Grenadier";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_AT: SFPD_RHS_BLUFOR_DESERT_AT {
		backpack = "SFPD_RHS_BLUFOR_WINTER_AT_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter AT";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_AT_M136: SFPD_RHS_BLUFOR_DESERT_AT_M136 {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter AT (M136)";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_LMG: SFPD_RHS_BLUFOR_DESERT_LMG {
		backpack = "SFPD_RHS_BLUFOR_WINTER_LMG_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter LMG";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Marksman: SFPD_RHS_BLUFOR_DESERT_Marksman {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Marksman";
		weapons[] = {"SFPD_RHS_WINTER_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WINTER_MK11_Default","SFPD_RHS_Glock17","ACE_Vector","Throw","Put"};
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_JTAC: SFPD_RHS_BLUFOR_DESERT_JTAC {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter JTAC";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_MMG: SFPD_RHS_BLUFOR_DESERT_MMG {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter MMG";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Commander: SFPD_RHS_BLUFOR_DESERT_Commander {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Commander";
		linkedItems[] = {"V_Rangemaster_belt","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_Booniehat_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_AA: SFPD_RHS_BLUFOR_DESERT_AA {
		backpack = "SFPD_RHS_BLUFOR_WINTER_AA_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter AA";
		linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_headset_ess_ucp","rhs_googles_black",BASIC_LINKED};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Recon_DMR: SFPD_RHS_BLUFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Recon DMR";
		weapons[] = {"SFPD_RHS_WINTER_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_WINTER_M2010_Silenced","SFPD_RHS_Glock17_Silenced","ACE_Vector","Throw","Put"};
		linkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Leader: SFPD_RHS_BLUFOR_DESERT_SF_Leader {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF Leader";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Grenadier: SFPD_RHS_BLUFOR_DESERT_SF_Grenadier {
		backpack = "SFPD_RHS_BLUFOR_WINTER_SF_Grenadier_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF Grenadier";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_AT: SFPD_RHS_BLUFOR_DESERT_SF_AT {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF AT";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF_LMG: SFPD_RHS_BLUFOR_DESERT_SF_LMG {
		backpack = "SFPD_RHS_BLUFOR_WINTER_SF_LMG_Backpack";
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF LMG";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_SF: SFPD_RHS_BLUFOR_DESERT_SF {
		backpack = "SFPD_RHS_BLUFOR_WINTER_SF_Backpack";//TODO
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter SF";
		linkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_opscore_mar_ut_pelt","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","rhsusf_ANPVS_15"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Recon_Rifle: SFPD_RHS_BLUFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Recon Rifle";
		linkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhs_Booniehat_ucp","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Sniper: SFPD_RHS_BLUFOR_DESERT_Sniper {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Sniper";
		linkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		
		hideProxySelections[] = {"ghillie_hide"};
		model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
		textureList[] = {"snow", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\SFPD_RHS_Units\ghillie_coverall_snow.paa","\SFPD_RHS_Units\fullghillie_camo_snow.paa"};
		uniformClass = "U_B_FullGhillie_Snow";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Spotter: SFPD_RHS_BLUFOR_DESERT_Spotter {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Spotter";
		linkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		respawnLinkedItems[] = {"V_HarnessO_gry","rhsusf_shemagh2_gogg_white","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152"};
		uniformClass = "U_B_FullGhillie_Snow";
	};
	
	class SFPD_RHS_BLUFOR_WINTER_TankCrew: SFPD_RHS_BLUFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
		displayName = "Winter Tank Crew";
		uniformClass = "rhs_uniform_cu_ucp";
	};
	
	//backpack
	class rhsusf_assault_eagleaiii_ucp;
	
	class SFPD_RHS_BLUFOR_WINTER_Medic_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "Medic Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,10)
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_splint,12)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_Grenadier_Backpack: B_LegStrapBag_black_F {
        displayname = "Grenadier Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,7)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_LMG_Backpack: B_LegStrapBag_black_F {
        displayname = "LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhsusf_200rnd_556x45_mixed_box,1)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_AT_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_maaws_HEAT,3)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Grenadier_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_SF_LMG_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(rhsusf_200rnd_556x45_mixed_box,2)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_SF_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_WINTER_AA_Backpack: rhsusf_assault_eagleaiii_ucp {
        displayname = "AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_fim92_mag,2)
        };
    };
	
	//AFRF
	//Desert
	class SFPD_RHS_OPFOR_DESERT_Rifleman: O_Soldier_base_F {
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian"};
		genericNames = "RussianMen";
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		vehicleclass = "SFPD_RHS_OPFOR_Infantry";
		author = "Kamkill";
		_generalMacro = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		scope = 2;
		backpack = "SFPD_RHS_OPFOR_DESERT_Rifleman_Backpack";
		displayName = "Desert Rifleman";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_AK74MR","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {FIVE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		respawnMagazines[] = {FIVE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "rhs_uniform_mflora_patchless"; //uniform you are using//rhs_uniform_flora_patchless_alt
		camouflage = 1; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_OPFOR_DESERT_NBC_Mask: SFPD_RHS_OPFOR_DESERT_Rifleman {
		displayName = "Desert NBC (Mask)";
		linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala","G_CBRN_B_green","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ML_ess_bala","G_CBRN_B_green","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_NBC_Suit: SFPD_RHS_OPFOR_DESERT_NBC_Mask {
		displayName = "Desert NBC (Suit)";
		uniformClass = "U_CBRN_B_green";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Rifleman_light: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Rifleman (light)";
		linkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Unequiped: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Unequiped";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"}; 
	};
	
	class SFPD_RHS_OPFOR_DESERT_Leader: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Leader_Backpack";
		displayName = "Desert Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Medic: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Medic_Backpack";
		displayName = "Desert Medic";
		icon = "iconManMedic";
		
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\flora_mf_co.paa","","","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_OPFOR_DESERT_Medic_Uniform";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Grenadier: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Grenadier_Backpack";
		displayName = "Desert Grenadier";
		weapons[] = {"SFPD_RHS_AK74MR_GL","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_GL","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_AT: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_AT_Backpack";
		displayName = "Desert AT";
		icon = "iconManAT";
		weapons[] += {"SFPD_RHS_RPG7"};
		respawnWeapons[] += {"SFPD_RHS_RPG7"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_LMG: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_LMG_Backpack";
		displayName = "Desert LMG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_AK_LMG","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK_LMG","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		respawnMagazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
	};
	
	class SFPD_RHS_OPFOR_DESERT_MG: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_MG_Backpack";
		displayName = "Desert MG";
		icon = "iconManMG";
		weapons[] = {"SFPD_RHS_PKP","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_PKP","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Marksman: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Marksman";
		weapons[] = {"SFPD_RHS_SVD","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		respawnMagazines[] = {TEN_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Commander: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Commander";
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {THREE_TIMES(rhs_mag_9x18_8_57N181S)};
		respawnMagazines[] = {THREE_TIMES(rhs_mag_9x18_8_57N181S)};
		linkedItems[] = {"rhs_vest_pistol_holster","rhs_beret_milp","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_vest_pistol_holster","rhs_beret_milp","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		camouflage = 0.7;
	};
	
	class SFPD_RHS_OPFOR_DESERT_AA: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_AA_Backpack";
		displayName = "Desert AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Sniper: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Sniper";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_LYNX_DESERT","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_LYNX_DESERT","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		magazines[] = {SEVEN_TIMES(5Rnd_127x108_APDS_Mag),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {SEVEN_TIMES(5Rnd_127x108_APDS_Mag),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_FullGhillie_ard";
		camouflage = 0.5; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_OPFOR_DESERT_Spotter: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Spotter_Backpack";
		displayName = "Desert Spotter";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		magazines[] = {FOUR_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue","ACE_FlareTripMine_Mag"};
		respawnMagazines[] = {FOUR_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue","ACE_FlareTripMine_Mag"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_DefusalKit"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_salineIV_500","ACE_salineIV_500","ACE_surgicalKit","ACE_DefusalKit"};
		uniformClass = "U_O_FullGhillie_ard";
		camouflage = 0.5; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_OPFOR_DESERT_Recon_DMR: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Recon DMR";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_T5000","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_T5000","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {TEN_TIMES(rhs_5Rnd_338lapua_t5000),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {TEN_TIMES(rhs_5Rnd_338lapua_t5000),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShell","SmokeShellBlue"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_RangeCard","ACE_Kestrel4500","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_Leader: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_DESERT_Leader_Backpack";
		displayName = "Desert SF Leader";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {THREE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		respawnMagazines[] = {THREE_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhsusf_opscore_ut_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhsusf_opscore_ut_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint"};
		camouflage = 0.7; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_Grenadier: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_Grenadier_Backpack";
		displayName = "Desert SF Grenadier";
		weapons[] = {"SFPD_RHS_AK74MR_GL_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_GL_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_AT: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_AT_Backpack";
		displayName = "Desert SF AT";
		weapons[] += {"rhs_weap_rpg26"};
		respawnWeapons[] += {"rhs_weap_rpg26"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF_LMG: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_LMG_Backpack";
		displayName = "Desert SF LMG";
		weapons[] = {"SFPD_RHS_AK_LMG_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK_LMG_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
		respawnMagazines[] = {"75rnd_762x39_AK12_Mag_Tracer_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)};
	};
	
	class SFPD_RHS_OPFOR_DESERT_SF: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_DESERT_SF_Backpack";//TODO
		displayName = "Desert SF";
	};
	
	class SFPD_RHS_OPFOR_DESERT_Recon_Rifle: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Recon Rifle";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AK74MR_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {FOUR_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		respawnMagazines[] = {FOUR_TIMES(30Rnd_762x39_AK12_Mag_F),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","H_Booniehat_tan","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_EntrenchingTool","ACE_salineIV_500","ACE_salineIV_500"};
		camouflage = 0.7; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Paporotnik AS VAL";
		icon = "iconManRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		weapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_ASVAL","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {EIGHT_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		respawnMagazines[] = {EIGHT_TIMES(rhs_20rnd_9x39mm_SP6),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		linkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_elasticBandage),"ACE_epinephrine","ACE_surgicalKit","ACE_salineIV_500","ACE_salineIV_500"};
		uniformClass = "U_O_FullGhillie_ard";
		camouflage = 0.5; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1 is Default and 0.6 is a sniper ghille
	};
	
	class SFPD_RHS_OPFOR_DESERT_Paporotnik_SVD: SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL {
		displayName = "Desert Paporotnik SVD";
		weapons[] = {"SFPD_RHS_SVD_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		magazines[] = {FIVE_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		respawnMagazines[] = {FIVE_TIMES(rhs_10Rnd_762x54mmR_7N1),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
		items[] += {"ACE_RangeCard","ACE_Kestrel4500"};
		respawnItems[] += {"ACE_RangeCard","ACE_Kestrel4500"};
	};
	
	class SFPD_RHS_OPFOR_DESERT_TankCrew: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "";
		displayName = "Desert Tank Crew";
		icon = "iconMan";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {FOUR_TIMES(rhs_mag_9x18_8_57N181S),"SmokeShellRed","ACE_HandFlare_Yellow"};
		respawnMagazines[] = {FOUR_TIMES(rhs_mag_9x18_8_57N181S),"SmokeShellRed","ACE_HandFlare_Yellow"};
		linkedItems[] = {"rhs_vest_commander","rhs_tsh4_ess","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_vest_commander","rhs_tsh4_ess","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
	};
	
	//Woodland
	class SFPD_RHS_OPFOR_WOODLAND_Rifleman: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Rifleman_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Rifleman";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_NBC_Mask: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		displayName = "Woodland NBC (Mask)";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","G_CBRN_B_green","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","G_CBRN_B_green","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_NBC_Suit: SFPD_RHS_OPFOR_WOODLAND_NBC_Mask {
		displayName = "Woodland NBC (Suit)";
		uniformClass = "U_CBRN_B_green";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Rifleman_light: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		backpack = "";
		displayName = "Woodland Rifleman (light)";
		linkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Unequiped: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		displayName = "Woodland Unequipped";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"}; 
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Leader: SFPD_RHS_OPFOR_WOODLAND_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Leader_Backpack";
		displayName = "Woodland Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Medic: SFPD_RHS_OPFOR_DESERT_Medic {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Medic_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Medic";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};

		model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa","rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa","rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa","\SFPD_RHS_Units\RedCross.paa"};
		uniformClass = "SFPD_RHS_OPFOR_WOODLAND_Medic_Uniform";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Grenadier: SFPD_RHS_OPFOR_DESERT_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Grenadier";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_AT: SFPD_RHS_OPFOR_DESERT_AT {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland AT";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_LMG: SFPD_RHS_OPFOR_DESERT_LMG {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland LMG";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_MG: SFPD_RHS_OPFOR_DESERT_MG {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_MG_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland MG";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Marksman: SFPD_RHS_OPFOR_DESERT_Marksman {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Marksman";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Commander: SFPD_RHS_OPFOR_DESERT_Commander {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Commander";
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_AA: SFPD_RHS_OPFOR_DESERT_AA {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_AA_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland AA";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess_bala","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Sniper: SFPD_RHS_OPFOR_DESERT_Sniper {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Sniper";
		weapons[] = {"SFPD_RHS_LYNX_JUNGLE","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_LYNX_JUNGLE","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Spotter: SFPD_RHS_OPFOR_DESERT_Spotter {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Spotter_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Spotter";
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Recon_DMR: SFPD_RHS_OPFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Recon DMR";
		linkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_Leader: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_Leader_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF Leader";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_Grenadier: SFPD_RHS_OPFOR_DESERT_SF_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF Grenadier";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_AT: SFPD_RHS_OPFOR_DESERT_SF_AT {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF AT";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_LMG: SFPD_RHS_OPFOR_DESERT_SF_LMG {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF LMG";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_SF: SFPD_RHS_OPFOR_DESERT_SF {
		backpack = "SFPD_RHS_OPFOR_WOODLAND_SF_Backpack";//TODO
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland SF";
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhsusf_opscore_fg_pelt","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Recon_Rifle: SFPD_RHS_OPFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Recon Rifle";
		linkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","H_Booniehat_oli","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Paporotnik_ASVAL: SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Paporotnik AS VAL";
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Paporotnik_SVD: SFPD_RHS_OPFOR_DESERT_Paporotnik_SVD {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Paporotnik SVD";
		linkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6sh92_digi_vog","rhs_balaclava","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "U_O_T_FullGhillie_tna_F";
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_TankCrew: SFPD_RHS_OPFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		displayName = "Woodland Tank Crew";
		uniformClass = "rhs_uniform_msv_emr";
	};
	
	//Universal
	class SFPD_RHS_OPFOR_Pilot: SFPD_RHS_OPFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_OPFOR_Faction";
		displayName = "Universal Pilot";
		weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		linkedItems[] = {"rhs_6sh46","rhs_zsh7a_alt","ItemMap","ItemCompass","ItemWatch","TFAR_fadak","ACE_NVG_Wide"};
		respawnLinkedItems[] = {"rhs_6sh46","rhs_zsh7a_alt","ItemMap","ItemCompass","ItemWatch","TFAR_fadak","ACE_NVG_Wide"};
		uniformClass = "rhs_uniform_df15";
	};
	
	//Winter
	class SFPD_RHS_OPFOR_WINTER_Rifleman: SFPD_RHS_OPFOR_DESERT_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WINTER_Rifleman_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Rifleman";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_NBC_Mask: SFPD_RHS_OPFOR_WINTER_Rifleman {
		displayName = "Winter NBC (Mask)";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","G_CBRN_B_green","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","G_CBRN_B_green","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
	};
	
	class SFPD_RHS_OPFOR_WINTER_NBC_Suit: SFPD_RHS_OPFOR_WINTER_NBC_Mask {
		displayName = "Winter NBC (Suit)";
		uniformClass = "U_CBRN_B_green";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Rifleman_light: SFPD_RHS_OPFOR_WINTER_Rifleman {
		backpack = "";
		displayName = "Winter Rifleman (light)";
		linkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
	};
	
	class SFPD_RHS_OPFOR_WINTER_Unequiped: SFPD_RHS_OPFOR_WINTER_Rifleman {
		displayName = "Winter Unequipped";
		weapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"}; 
	};
	
	class SFPD_RHS_OPFOR_WINTER_Leader: SFPD_RHS_OPFOR_WINTER_Rifleman {
		backpack = "SFPD_RHS_OPFOR_WINTER_Leader_Backpack";
		displayName = "Winter Leader";
		icon = "iconManLeader";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Medic: SFPD_RHS_OPFOR_DESERT_Medic {
		backpack = "SFPD_RHS_OPFOR_WINTER_Medic_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Medic";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Grenadier: SFPD_RHS_OPFOR_DESERT_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WINTER_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Grenadier";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_AT: SFPD_RHS_OPFOR_DESERT_AT {
		backpack = "SFPD_RHS_OPFOR_WINTER_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter AT";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_LMG: SFPD_RHS_OPFOR_DESERT_LMG {
		backpack = "SFPD_RHS_OPFOR_WINTER_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter LMG";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_MG: SFPD_RHS_OPFOR_DESERT_MG {
		backpack = "SFPD_RHS_OPFOR_WINTER_MG_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter MG";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Marksman: SFPD_RHS_OPFOR_DESERT_Marksman {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Marksman";
		weapons[] = {"SFPD_RHS_SVD_Black","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD_Black","rhs_weap_makarov_pm","rhs_pdu4","Throw","Put"};
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_AA: SFPD_RHS_OPFOR_DESERT_AA {
		backpack = "SFPD_RHS_OPFOR_WINTER_AA_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter AA";
		linkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		respawnLinkedItems[] = {"fsg_vest_4","fsg_helmet_3","ItemMap","ItemCompass","ItemWatch","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	///sniper
	class SFPD_RHS_OPFOR_WINTER_Sniper: SFPD_RHS_OPFOR_DESERT_Sniper {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Sniper";
		weapons[] = {"SFPD_RHS_LYNX_Black","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_LYNX_Black","rhs_weap_pb_6p9","ACE_Vector","Throw","Put"};
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		
		hideProxySelections[] = {"ghillie_hide"};
		model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
		textureList[] = {"snow", 1};
		hiddenSelections[] = {"Camo","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\SFPD_RHS_Units\ghillie_coverall_snow.paa","\SFPD_RHS_Units\fullghillie_camo_snow.paa"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Spotter: SFPD_RHS_OPFOR_DESERT_Spotter {
		backpack = "SFPD_RHS_OPFOR_WINTER_Spotter_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Spotter";
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	///
	
	class SFPD_RHS_OPFOR_WINTER_Recon_DMR: SFPD_RHS_OPFOR_DESERT_Recon_DMR {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Recon DMR";
		linkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Recon_Rifle: SFPD_RHS_OPFOR_DESERT_Recon_Rifle {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Recon Rifle";
		linkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_booniehat_snw","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_Leader: SFPD_RHS_OPFOR_DESERT_SF_Leader {
		backpack = "SFPD_RHS_OPFOR_WINTER_Leader_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF Leader";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_Grenadier: SFPD_RHS_OPFOR_DESERT_SF_Grenadier {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_Grenadier_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF Grenadier";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_AT: SFPD_RHS_OPFOR_DESERT_SF_AT {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_AT_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF AT";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF_LMG: SFPD_RHS_OPFOR_DESERT_SF_LMG {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_LMG_Backpack";
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF LMG";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_SF: SFPD_RHS_OPFOR_DESERT_SF {
		backpack = "SFPD_RHS_OPFOR_WINTER_SF_Backpack";//TODO
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter SF";
		linkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"fsg_vest_4","rhsusf_opscore_mar_ut_pelt","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "fsg_gorka_snw";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Paporotnik_ASVAL: SFPD_RHS_OPFOR_DESERT_Paporotnik_ASVAL {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Paporotnik AS VAL";
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	
	class SFPD_RHS_OPFOR_WINTER_Paporotnik_SVD: SFPD_RHS_OPFOR_DESERT_Paporotnik_SVD {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Paporotnik SVD";
		weapons[] = {"SFPD_RHS_SVD_Black_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_SVD_Black_Silenced","rhs_weap_pb_6p9","rhs_pdu4","Throw","Put"};
		linkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		respawnLinkedItems[] = {"V_HarnessO_gry","fsg_Balaclava_Snw","ItemMap","ItemCompass","ACE_Altimeter","TFAR_fadak","rhs_1PN138"};
		uniformClass = "U_O_FullGhillie_Snow";
	};
	
	class SFPD_RHS_OPFOR_WINTER_TankCrew: SFPD_RHS_OPFOR_DESERT_TankCrew {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		displayName = "Winter Tank Crew";
		uniformClass = "fsg_gorka_snw";
	};
	
	//INDEP
	class SFPD_RHS_INDEP_Rifleman_1: I_Soldier_base_F {
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		genericNames = "TakistaniMen";
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		vehicleclass = "SFPD_RHS_INDEP_Infantry";
		author = "Kamkill";
		scope = 2;
		displayName = "Rifleman 1";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_AKM","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AKM","Throw","Put"};
		magazines[] = {ELEVEN_TIMES(rhs_30Rnd_762x39mm),"MiniGrenade"};
		respawnMagazines[] = {ELEVEN_TIMES(rhs_30Rnd_762x39mm),"MiniGrenade"};
		linkedItems[] = {"V_HarnessO_brn","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		items[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
		camouflage = 1;
	};
	
	class SFPD_RHS_INDEP_NBC_Mask: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "NBC (Mask)";
		linkedItems[] = {"V_HarnessO_brn","G_CBRN_C_blue","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_HarnessO_brn","G_CBRN_C_blue","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
	};
	
	class SFPD_RHS_INDEP_NBC_Suit: SFPD_RHS_INDEP_NBC_Mask {
		displayName = "NBC (Suit)";
		uniformClass = "U_CBRN_C_blue";
	};
	
	class SFPD_RHS_INDEP_Rifleman_2: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Rifleman 2";
		uniformClass = "U_I_C_Soldier_Bandit_3_F";
	};
	
	class SFPD_RHS_INDEP_Rifleman_3: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Rifleman 3";
		uniformClass = "U_I_C_Soldier_Bandit_4_F";
	};
	
	class SFPD_RHS_INDEP_Rifleman_4: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Rifleman 4";
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
	};
	
	class SFPD_RHS_INDEP_MG: SFPD_RHS_INDEP_Rifleman_4 {
		backpack = "SFPD_RHS_INDEP_MG_Backpack";
		displayName = "MG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
	};
	
	class SFPD_RHS_INDEP_AT: SFPD_RHS_INDEP_Rifleman_1 {
		backpack = "SFPD_RHS_INDEP_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg7"};
		respawnWeapons[] += {"rhs_weap_rpg7"};
	};
	
	class SFPD_RHS_INDEP_Marksman: SFPD_RHS_INDEP_Rifleman_2 {
		backpack = "";
		displayName = "Marksman";
		weapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
	};
	
	class SFPD_RHS_INDEP_Commander: SFPD_RHS_INDEP_Rifleman_1 {
		displayName = "Commander";
		icon = "iconManOfficer";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		respawnMagazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		linkedItems[] = {"V_Rangemaster_belt","H_Beret_gen_F","G_Aviator","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","H_Beret_gen_F","G_Aviator","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "U_I_C_Soldier_Camo_F";//U_BG_leader
		camouflage = 0.7;
	};
	
	class SFPD_RHS_INDEP_AA: SFPD_RHS_INDEP_Rifleman_3 {
		backpack = "SFPD_RHS_INDEP_AA_Backpack";
		displayName = "AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	class B_FieldPack_cbr;
	
	class SFPD_RHS_INDEP_MG_Backpack: B_FieldPack_cbr {
        displayname = "MG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_100Rnd_762x54mmR_green,3)
        };
    };
	
	class SFPD_RHS_INDEP_AT_Backpack: B_FieldPack_cbr {
        displayname = "AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_rpg7_PG7V_mag,6)
        };
    };
	
	class SFPD_RHS_INDEP_AA_Backpack: B_FieldPack_cbr {
        displayname = "AA Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_9k38_rocket,3)
        };
    };
	
	//Woodland
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_1: I_Soldier_base_F {
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian"};
		genericNames = "RussianMen";
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		vehicleclass = "SFPD_RHS_INDEP_Infantry";
		author = "Kamkill";
		scope = 2;
		displayName = "Rifleman 1";
		icon = "iconMan";
		weapons[] = {"SFPD_RHS_AKMS","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_AKMS","Throw","Put"};
		magazines[] = {TEN_TIMES(rhssaf_30Rnd_762x39mm_M67),"MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhssaf_30Rnd_762x39mm_M67),"MiniGrenade"};
		linkedItems[] = {"V_TacChestrig_grn_F","rhssaf_booniehat_md2camo","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhssaf_booniehat_md2camo","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		items[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		respawnItems[] = {"ACE_DeadManSwitch","ACE_Cellphone","ACE_morphine","ACE_EarPlugs","ACE_tourniquet","ACE_CableTie","ACE_CableTie",TEN_TIMES(ACE_fieldDressing),"ACE_splint","ACE_splint"};
		uniformClass = "rhsgref_uniform_dpm_olive";
		camouflage = 1;
	};
	
	class SFPD_RHS_INDEP_WOODLAND_NBC_Mask: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "NBC (Mask)";
		linkedItems[] = {"V_TacChestrig_grn_F","G_CBRN_C_blue","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","G_CBRN_C_blue","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_NBC_Suit: SFPD_RHS_INDEP_WOODLAND_NBC_Mask {
		displayName = "NBC (Suit)";
		uniformClass = "U_CBRN_C_blue";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_2: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Rifleman 2";
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_balaclava1_olive","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_balaclava1_olive","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_para_ttsko_urban";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_3: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Rifleman 3";
		linkedItems[] = {"V_TacChestrig_grn_F","rhsgref_patrolcap_specter","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhsgref_patrolcap_specter","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_woodland_olive";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Rifleman_4: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Rifleman 4";
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_beanie_green","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_beanie_green","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_flecktarn";
	};
	
	class SFPD_RHS_INDEP_WOODLAND_MG: SFPD_RHS_INDEP_WOODLAND_Rifleman_4 {
		backpack = "SFPD_RHS_INDEP_WOODLAND_MG_Backpack";
		displayName = "MG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_AT: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		backpack = "SFPD_RHS_INDEP_WOODLAND_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg7"};
		respawnWeapons[] += {"rhs_weap_rpg7"};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Marksman: SFPD_RHS_INDEP_WOODLAND_Rifleman_2 {
		backpack = "";
		displayName = "Marksman";
		weapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Commander: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		displayName = "Commander";
		icon = "iconManOfficer";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		respawnMagazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		linkedItems[] = {"V_Rangemaster_belt","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhssaf_uniform_m10_digital_tan_boots";
		camouflage = 0.7;
	};
	
	class SFPD_RHS_INDEP_WOODLAND_AA: SFPD_RHS_INDEP_WOODLAND_Rifleman_3 {
		backpack = "SFPD_RHS_INDEP_WOODLAND_AA_Backpack";
		displayName = "AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	class B_FieldPack_oli;
	
	class SFPD_RHS_INDEP_WOODLAND_MG_Backpack: B_FieldPack_oli {
        displayname = "MG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_100Rnd_762x54mmR_green,3)
        };
    };
	
	class SFPD_RHS_INDEP_WOODLAND_AT_Backpack: B_FieldPack_oli {
        displayname = "AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_rpg7_PG7V_mag,6)
        };
    };
	
	class SFPD_RHS_INDEP_WOODLAND_AA_Backpack: B_FieldPack_oli {
        displayname = "AA Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_9k38_rocket,3)
        };
    };
	
	//Winter
	class SFPD_RHS_INDEP_WINTER_Rifleman_1: SFPD_RHS_INDEP_WOODLAND_Rifleman_1 {
		faction = "SFPD_RHS_INDEP_WINTER_Faction";
		linkedItems[] = {"V_TacChestrig_grn_F","fsg_booniehat_snw","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","fsg_booniehat_snw","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_reed";
	};
	
	class SFPD_RHS_INDEP_WINTER_NBC_Mask: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "NBC (Mask)";
		linkedItems[] = {"V_TacChestrig_grn_F","G_CBRN_C_blue","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","G_CBRN_C_blue","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
	};
	
	class SFPD_RHS_INDEP_WINTER_NBC_Suit: SFPD_RHS_INDEP_WINTER_NBC_Mask {
		displayName = "NBC (Suit)";
		uniformClass = "U_CBRN_C_blue";
	};
	
	class SFPD_RHS_INDEP_WINTER_Rifleman_2: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Rifleman 2";
		linkedItems[] = {"V_TacChestrig_grn_F","fsg_Balaclava_Snw","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","fsg_Balaclava_Snw","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_ttsko_urban";
	};
	
	class SFPD_RHS_INDEP_WINTER_Rifleman_3: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Rifleman 3";
		linkedItems[] = {"V_TacChestrig_grn_F","rhsgref_fieldcap_ttsko_urban","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhsgref_fieldcap_ttsko_urban","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_para_ttsko_urban";
	};
	
	class SFPD_RHS_INDEP_WINTER_Rifleman_4: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Rifleman 4";
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_beanie","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_beanie","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_para_ttsko_oxblood";
	};
	
	class SFPD_RHS_INDEP_WINTER_MG: SFPD_RHS_INDEP_WINTER_Rifleman_4 {
		backpack = "SFPD_RHS_INDEP_WINTER_MG_Backpack";
		displayName = "MG";
		icon = "iconManMG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","MiniGrenade"};
	};
	
	class SFPD_RHS_INDEP_WINTER_AT: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		backpack = "SFPD_RHS_INDEP_WINTER_AT_Backpack";
		displayName = "AT";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_rpg7"};
		respawnWeapons[] += {"rhs_weap_rpg7"};
	};
	
	class SFPD_RHS_INDEP_WINTER_Marksman: SFPD_RHS_INDEP_WINTER_Rifleman_2 {
		backpack = "";
		displayName = "Marksman";
		weapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"SFPD_RHS_M38","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		respawnMagazines[] = {TEN_TIMES(rhsgref_5Rnd_762x54_m38),TEN_TIMES(rhsgref_5Rnd_762x54_m38),"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","MiniGrenade"};
		items[] += {"ACE_RangeCard"};
		respawnItems[] += {"ACE_RangeCard"};
	};
	
	class SFPD_RHS_INDEP_WINTER_Commander: SFPD_RHS_INDEP_WINTER_Rifleman_1 {
		displayName = "Commander";
		icon = "iconManOfficer";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		respawnMagazines[] = {FIVE_TIMES(6Rnd_45ACP_Cylinder)};
		linkedItems[] = {"V_Rangemaster_belt","rhs_beret_milp","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","rhs_beret_milp","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"};
		uniformClass = "rhsgref_uniform_para_ttsko_mountain";
		camouflage = 0.7;
	};
	
	class SFPD_RHS_INDEP_WINTER_AA: SFPD_RHS_INDEP_WINTER_Rifleman_3 {
		backpack = "SFPD_RHS_INDEP_WINTER_AA_Backpack";
		displayName = "AA";
		icon = "iconManAT";
		weapons[] += {"rhs_weap_igla"};
		respawnWeapons[] += {"rhs_weap_igla"};
	};
	
	class fsg_fieldpack;
	
	class SFPD_RHS_INDEP_WINTER_MG_Backpack: fsg_fieldpack {
        displayname = "MG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_100Rnd_762x54mmR_green,3)
        };
    };
	
	class SFPD_RHS_INDEP_WINTER_AT_Backpack: fsg_fieldpack {
        displayname = "AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_rpg7_PG7V_mag,6)
        };
    };
	
	class SFPD_RHS_INDEP_WINTER_AA_Backpack: fsg_fieldpack {
        displayname = "AA Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_9k38_rocket,3)
        };
    };
	
	//cars
	class rhsgref_ins_g_uaz_dshkm_chdkz;
	class rhsgref_ins_g_uaz_open;
	class rhsgref_ins_g_uaz_spg9;
	class rhsgref_ins_g_ural_open;
	//class rhs_uaz_dshkm_chdkz;
	//class rhs_uaz_open_chdkz;
	//class rhs_uaz_spg9_chdkz;
	//class rhs_ural_open_chdkz;
	class rhsgref_BRDM2_HQ_ins_g;
	class rhsgref_ins_g_ural_Zu23;
	class rhsgref_ins_g_btr60;
	class rhsgref_ins_g_bmd1;
	class rhsgref_ins_g_bmd2;
	class rhsgref_ins_g_t72ba;
	class rhsgref_ins_g_d30;
	class rhsgref_ins_g_DSHKM;
	class rhsgref_ins_g_DSHKM_Mini_TriPod;
	class rhsgref_ins_g_ZU23;
	class rhsgref_ins_g_SPG9;
	class rhsgref_ins_g_AGS30_TriPod;
	class rhsgref_ins_g_zil131;
	class rhsgref_ins_g_zil131_open;
	
	class SFPD_RHS_INDEP_UAZ_MG: rhsgref_ins_g_uaz_dshkm_chdkz {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_1";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_UAZ: rhsgref_ins_g_uaz_open {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_2";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_UAZ_AT: rhsgref_ins_g_uaz_spg9 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_3";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_Ural: rhsgref_ins_g_ural_open {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_4";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_zil: rhsgref_ins_g_zil131 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_2";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_zil_open: rhsgref_ins_g_zil131_open {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_3";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BRDM2: rhsgref_BRDM2_HQ_ins_g {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_1";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_Ural_Zu23: rhsgref_ins_g_ural_Zu23 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_2";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BTR60: rhsgref_ins_g_btr60 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_3";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BMD1: rhsgref_ins_g_bmd1 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_4";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BMD2: rhsgref_ins_g_bmd2 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_4";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_T72: rhsgref_ins_g_t72ba {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_1";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_Static_D30: rhsgref_ins_g_d30 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_2";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_Static_DSHKM: rhsgref_ins_g_DSHKM {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_3";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_Static_DSHKM_mini: rhsgref_ins_g_DSHKM_Mini_TriPod {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_4";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_Static_ZU23: rhsgref_ins_g_ZU23 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_1";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_Static_SPG9: rhsgref_ins_g_SPG9 {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_1";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_Static_AGS30: rhsgref_ins_g_AGS30_TriPod {
		faction = "SFPD_RHS_INDEP_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_Rifleman_1";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	//Woodland
	class SFPD_RHS_INDEP_WOODLAND_UAZ_MG: rhsgref_ins_g_uaz_dshkm_chdkz {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_UAZ: rhsgref_ins_g_uaz_open {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_2";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_UAZ_AT: rhsgref_ins_g_uaz_spg9 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Ural: rhsgref_ins_g_ural_open {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_4";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_zil: rhsgref_ins_g_zil131 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_zil_open: rhsgref_ins_g_zil131_open {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BRDM2: rhsgref_BRDM2_HQ_ins_g {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Ural_Zu23: rhsgref_ins_g_ural_Zu23 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_2";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BTR60: rhsgref_ins_g_btr60 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BMD1: rhsgref_ins_g_bmd1 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_4";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BMD2: rhsgref_ins_g_bmd2 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_4";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_T72: rhsgref_ins_g_t72ba {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_D30: rhsgref_ins_g_d30 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_2";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_DSHKM: rhsgref_ins_g_DSHKM {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_DSHKM_mini: rhsgref_ins_g_DSHKM_Mini_TriPod {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_4";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_ZU23: rhsgref_ins_g_ZU23 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_SPG9: rhsgref_ins_g_SPG9 {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_AGS30: rhsgref_ins_g_AGS30_TriPod {
		faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	//-----
	
	//Backpacks
	class SFPD_RHS_BLUFOR_Leader_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Leader Radio";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(SmokeShellBlue,3)
        };
    };
	
	class SFPD_RHS_BLUFOR_Medic_Backpack: rhsusf_falconii_coy {
        displayname = "Medic Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,10)
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_splint,12)
        };
    };
	
	class SFPD_RHS_BLUFOR_Grenadier_Backpack: B_LegStrapBag_coyote_F {
        displayname = "Grenadier Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,7)
        };
    };
	
	class SFPD_RHS_BLUFOR_LMG_Backpack: B_LegStrapBag_coyote_F {
        displayname = "LMG Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhsusf_200rnd_556x45_mixed_box,1)
        };
    };
	
	class SFPD_RHS_BLUFOR_AT_Backpack: B_Carryall_khk {
        displayname = "AT Backpack";
        scope = 1;
        class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_maaws_HEAT,3)
        };
    };
	
	class SFPD_RHS_BLUFOR_JTAC_Backpack: TFAR_rt1523g_bwmod {
        displayname = "JTAC Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(1Rnd_SmokeRed_Grenade_shell,3)
            TRANSPORT_ITEMS(1Rnd_SmokeGreen_Grenade_shell,3)
            TRANSPORT_ITEMS(1Rnd_SmokeBlue_Grenade_shell,3)
			TRANSPORT_ITEMS(B_IR_Grenade,1)
        };
    };
	
	class SFPD_RHS_BLUFOR_SF_Grenadier_Backpack: rhsusf_falconii_coy {
        displayname = "SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,6)
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_SF_LMG_Backpack: rhsusf_falconii_coy {
        displayname = "SF LMG Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(rhsusf_200rnd_556x45_mixed_box,2)
        };
    };
	
	class SFPD_RHS_BLUFOR_SF_Backpack: rhsusf_falconii_coy {
        displayname = "SF Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(rhs_mag_30Rnd_556x45_Mk318_Stanag,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_BLUFOR_Spotter_Backpack: TFAR_rt1523g_bwmod {
        displayname = "Spotter Radio";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(Laserdesignator, 1)
			TRANSPORT_ITEMS(Laserbatteries, 1)
		};
    };
	
	class SFPD_RHS_BLUFOR_AA_Backpack: B_Carryall_khk {
        displayname = "AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_fim92_mag,3)
        };
    };
	
	//AFRF
	class rhssaf_kitbag_smb;
	class B_Kitbag_cbr;
	class TFAR_mr3000_rhs;
	class TFAR_mr3000;
	class TFAR_mr3000_bwmod: TFAR_mr3000 {
		tf_encryptionCode = "tf_east_radio_code";
	};
	class TFAR_mr3000_bwmod_tropen;
	
	class SFPD_RHS_WINTER_kitbag: B_Kitbag_cbr {
        displayname = "Winter Kitbag";
		hiddenselectionstextures[] = {"\SFPD_RHS_Units\backpack_fast_co.paa"};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Rifleman_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland Rifleman Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,10)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_Rifleman_Backpack: B_Kitbag_cbr {
        displayname = "Desert Rifleman Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,10)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_Rifleman_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter Rifleman Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,10)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_Grenadier_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland Grenadier Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,10)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_Grenadier_Backpack: B_Kitbag_cbr {
        displayname = "Desert Grenadier Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,10)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_Grenadier_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter Grenadier Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,10)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_Leader_Backpack: TFAR_mr3000_bwmod {
        displayname = "Woodland Leader Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(SmokeShellRed,3)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_Leader_Backpack: TFAR_mr3000_rhs {
        displayname = "Desert Leader Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(SmokeShellRed,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_Leader_Backpack: TFAR_mr3000_bwmod_tropen {
        displayname = "Winter Leader Radio";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(SmokeShellRed,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_Medic_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland Medic Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,10)
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_splint,12)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_Medic_Backpack: B_Kitbag_cbr {
        displayname = "Desert Medic Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,10)
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_splint,12)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_Medic_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter Medic Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(ACE_surgicalKit,1)
            TRANSPORT_ITEMS(ACE_salineIV_500,10)
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_splint,12)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_AT_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_rpg7_PG7V_mag,4)
            TRANSPORT_ITEMS(rhs_rpg7_OG7V_mag,4)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_AT_Backpack: B_Kitbag_cbr {
        displayname = "Desert AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_rpg7_PG7V_mag,4)
            TRANSPORT_ITEMS(rhs_rpg7_OG7V_mag,4)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_AT_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter AT Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_rpg7_PG7V_mag,4)
            TRANSPORT_ITEMS(rhs_rpg7_OG7V_mag,4)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_LMG_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Mag_Tracer_F,8)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_LMG_Backpack: B_Kitbag_cbr {
        displayname = "Desert LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Mag_Tracer_F,8)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_LMG_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Mag_Tracer_F,8)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_MG_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland MG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_100Rnd_762x54mmR_green,4)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_MG_Backpack: B_Kitbag_cbr {
        displayname = "Desert MG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_100Rnd_762x54mmR_green,4)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_MG_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter MG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_100Rnd_762x54mmR_green,4)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_AA_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_9k38_rocket,3)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_AA_Backpack: B_Kitbag_cbr {
        displayname = "Desert AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_9k38_rocket,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_AA_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter AA Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(rhs_mag_9k38_rocket,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_Spotter_Backpack: TFAR_mr3000_bwmod {
        displayname = "Woodland Spotter Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_Spotter_Backpack: TFAR_mr3000_rhs {
        displayname = "Desert Spotter Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_Spotter_Backpack: TFAR_mr3000_bwmod_tropen {
        displayname = "Winter Spotter Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(Laserdesignator,1)
            TRANSPORT_ITEMS(Laserbatteries,1)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland SF Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_SF_Backpack: B_Kitbag_cbr {
        displayname = "Desert SF Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_SF_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter SF Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,8)
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_Grenadier_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,8)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,8)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_SF_Grenadier_Backpack: B_Kitbag_cbr {
        displayname = "Desert SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,8)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,8)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_SF_Grenadier_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter SF Grenadier Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(1Rnd_HE_Grenade_shell,8)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,8)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_AT_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland SF AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_SF_AT_Backpack: B_Kitbag_cbr {
        displayname = "Desert SF AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_SF_AT_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter SF AT Backpack";
        scope = 1;
		class TransportItems {
			TRANSPORT_ITEMS(ACE_Clacker,1)
			TRANSPORT_ITEMS(ACE_DefusalKit,1)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,1)
			TRANSPORT_ITEMS(ACE_salineIV_500,4)
			TRANSPORT_ITEMS(ACE_elasticBandage,10)
            TRANSPORT_ITEMS(30Rnd_762x39_AK12_Mag_F,3)
        };
    };
	
	class SFPD_RHS_OPFOR_WOODLAND_SF_LMG_Backpack: rhssaf_kitbag_smb {
        displayname = "Woodland SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Mag_Tracer_F,5)
        };
    };
	
	class SFPD_RHS_OPFOR_DESERT_SF_LMG_Backpack: B_Kitbag_cbr {
        displayname = "Desert SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Mag_Tracer_F,5)
        };
    };
	
	class SFPD_RHS_OPFOR_WINTER_SF_LMG_Backpack: SFPD_RHS_WINTER_kitbag {
        displayname = "Winter SF LMG Backpack";
        scope = 1;
		class TransportItems {
            TRANSPORT_ITEMS(75rnd_762x39_AK12_Mag_Tracer_F,5)
        };
    };
	
	//Vehicles
	class ACE_medicalSupplyCrate_advanced;
	class Box_NATO_Ammo_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_Equip_F;
	class Box_NATO_Wps_F;
	class Box_NATO_WpsSpecial_F;
	class B_CargoNet_01_ammo_F;
	class Box_NATO_Support_F;
	class Land_PlasticCase_01_large_black_CBRN_F;
	class Land_PlasticCase_01_medium_black_CBRN_F;
	class Land_PlasticCase_01_small_black_CBRN_F;
	class Land_PlasticCase_01_medium_black_F;
	class Box_Syndicate_Ammo_F;
	class Box_Syndicate_Wps_F;
	class Box_IED_Exp_F;
	class Box_Syndicate_WpsLaunch_F;
	class rhsusf_m998_d_4dr;
	class rhsusf_m1025_d_m2;
	class rhsusf_M1237_M2_usarmy_d;
	class rhsusf_m113d_usarmy;
	//class RHS_M2A2_BUSKI;
	class rhsusf_m1a2sep1tuskiid_usarmy;
	class rhsusf_M978A4_BKIT_usarmy_d;
	class rhsusf_M977A4_AMMO_BKIT_usarmy_d;
	class rhsusf_M1083A1P2_B_d_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy;
	class rhsusf_m998_w_4dr;
	class rhsusf_m1025_w_m2;
	class rhsusf_M1237_M2_usarmy_wd;
	class rhsusf_m113_usarmy;
	//class RHS_M2A2_BUSKI_WD;
	class rhsusf_m1a2sep1tuskiiwd_usarmy;
	class rhsusf_M978A4_BKIT_usarmy_wd;
	class rhsusf_M977A4_AMMO_BKIT_usarmy_wd;
	//class rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy;
	//class rhsusf_M1078A1P2_B_wd_fmtv_usarmy;
	class B_Heli_Transport_03_F;
	class B_T_VTOL_01_infantry_F;
	class B_T_VTOL_01_vehicle_F;
	class B_T_VTOL_01_armed_F;
	//
	class RHS_UH60M;
	class RHS_UH60M_d : RHS_UH60M {
		class AnimationSources;
	};
	class RHS_UH60M_MEV2;
	class RHS_UH60M_MEV2_d: RHS_UH60M_MEV2 {
		class AnimationSources;
	};
	//
	class RHS_MELB_MH6M;
	class RHS_MELB_AH6M;
	class RHS_UH1Y;
	class RHS_AH64D;
	class B_Plane_CAS_01_dynamicLoadout_F;
	class B_Plane_Fighter_01_F;
	class RHS_M2StaticMG_D;
	class RHS_M2StaticMG_MiniTripod_D;
	class RHS_TOW_TriPod_D;
	class B_Mortar_01_F;
	class RHS_M119_D;
	class RHS_Stinger_AA_pod_D;
	class RHS_MK19_TriPod_D;
	class rhsusf_mrzr4_d;
	class rhsusf_rg33_m2_usmc_d;
	class rhsusf_M1117_W;
	class rhsusf_mrzr4_w;
	class rhsusf_rg33_m2_usmc_wd;
	class rhsusf_m113d_usarmy_medical;
	class rhsusf_m109d_usarmy;
	class rhsusf_m1025_d;
	class rhsusf_m998_d_2dr_halftop;
	class rhsusf_M977A4_BKIT_usarmy_d;
	class rhsusf_rg33_usmc_d;
	class rhsusf_m113_usarmy_medical;
	class rhsusf_m109_usarmy;
	class rhsusf_m1025_w;
	class rhsusf_m998_w_2dr_halftop;
	class rhsusf_M977A4_BKIT_usarmy_wd;
	class rhsusf_rg33_usmc_wd;
	class rhsusf_mkvsoc;
	class rhsusf_caiman_GPK_base;
	class rhsusf_caiman_base;
	class rhsusf_M1117_base;
	class rhsusf_M1083A1P2_D_fmtv_usarmy;
	class rhsusf_M1084A1P2_B_D_fmtv_usarmy;
	class rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy;
	class rhsusf_M1084A1P2_D_fmtv_usarmy;
	class rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy;
	class rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy;
	class rhsusf_M1083A1P2_WD_fmtv_usarmy;
	class rhsusf_M1084A1P2_B_WD_fmtv_usarmy;
	class rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy;
	class rhsusf_M1084A1P2_WD_fmtv_usarmy;
	class rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy;
	class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy;
	class rhsusf_M1078A1P2_B_M2_fmtv_usarmy;
	class rhsusf_M1084A1P2_B_M2_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_WD_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy;
	class RHS_M2A3_BUSKIII;
	class RHS_M2A3_BUSKIII_wd;
	class rhsusf_Cougar_base;
	class rhsusf_himars_base;
	class rhs_zil131_base;
	class rhs_zil131_flatbed_base;
	class rhs_mig29sm_base;
	class rhs_uaz_open_MSV_01;
	class rhs_tigr_m_3camo_vdv;
	class rhs_tigr_sts_3camo_msv;
	class rhsgref_BRDM2_HQ;
	class rhs_btr80_msv;
	class rhs_btr80a_msv;
	class rhs_gaz66_msv;
	class rhs_gaz66_ammo_msv;
	class rhs_gaz66_r142_msv;
	class RHS_Ural_MSV_01;
	class RHS_Ural_Fuel_MSV_01;
	class RHS_BM21_MSV_01;
	class RHS_Ural_Zu23_MSV_01;
	class rhs_zsu234_aa;
	class rhs_bmp3mera_msv;
	
	class rhs_t90_tv;
	class rhs_t90a_tv: rhs_t90_tv{
		class ACE_SelfActions;
	};
	
	class rhs_9k79_B;
	class RHS_Ka52_vvs;
	class RHS_Ka52_vvsc;
	class RHS_Mi24P_AT_VVS_Base;
	class RHS_Mi24P_CAS_VVS_Base;
	class RHS_Mi24V_AT_VVS_Base;
	class RHS_Mi24V_FAB_VVS_Base;
	class RHS_Mi24V_UPK23_VVS_Base;
	class RHS_Mi8AMTSh_vvs;
	class RHS_Mi8MTV3_vvs;
	class RHS_Su25SM_vvs;
	class RHS_Su25SM_vvsc;
	class rhs_mi28n_vvsc;
	class O_Plane_Fighter_02_F;
	class RHS_TU95MS_vvs_old;
	class rhs_KORD_MSV;
	class rhs_KORD_high_MSV;
	class rhs_D30_msv;
	class rhs_2s3_tv;
	class rhs_pts_vmf;
	class RHS_ZU23_MSV;
	class rhs_Igla_AA_pod_msv;
	class rhs_Kornet_9M133_2_msv;
	class rhs_Metis_9k115_2_msv;
	class RHS_AGS30_TriPod_MSV;
	//class rhsgref_BRDM2;
	class rhsgref_BRDM2_ATGM;
	class rhsgref_BRDM2UM;
	class rhs_tigr_3camo_msv;
	class RHS_UAZ_MSV_01;
	class rhs_bmp1k_msv;
	class rhs_prp3_msv;
	class rhs_gaz66o_msv;
	class RHS_Ural_Open_MSV_01;
	class rhs_bmd1;
	class rhs_bmd1pk;
	class rhs_bmd2k;
	class rhs_bmp2k_vdv;
	class rhs_brm1k_vdv;
	class rhs_bmd4ma_vdv;
	class SoldierWB;
	class MRAP_01_base_F;
	class APC_Tracked_02_base_F;
	class MBT_01_base_F;
	class Truck_01_base_F;
	class APC_Tracked_03_base_F;
	class StaticMortar;
	class MBT_01_arty_base_F;
	class StaticCannon;
	class Plane_Base_F;
	class Plane_Fighter_03_base_F;
	class Plane_CAS_01_base_F;
	class Ship_F;
	class Helicopter_Base_H;
	class Heli_Transport_01_base_F;
	class Heli_Transport_02_base_F;
	class Heli_Attack_01_base_F;
	class Heli_light_03_base_F;
	class StaticAAWeapon;
	class StaticGrenadeLauncher;
	class StaticMGWeapon;
	class StaticATWeapon;
	class SoldierGB;
	class Wheeled_APC_F;
	class MRAP_02_base_F;
	class Offroad_01_base_F;
	//class Tank_F;
	class Truck_F;
	class O_Truck_02_covered_F;
	class AT_01_base_F;
	class rhs_tigr_vdv;
	class OTR21_Base;
	class Heli_Light_02_base_F;
	class Heli_Attack_02_base_F;
	class O_Truck_03_repair_F;
	class UAV_02_base_F;
	class O_Heli_Light_02_unarmed_F;
	class O_Plane_CAS_02_F;
	class rhs_pilot_base;
	class I_supplyCrate_F;
	//class Box_Syndicate_Wps_F;
	class EAST_Box_Base;
	class rhsusf_m113_usarmy_unarmed;
	class rhsusf_m113_usarmy_MK19;
	class rhsusf_m113_usarmy_supply;
	class rhs_mig29s_base;
	class RHS_AH1Z;
	class rhsusf_m1025_w_mk19;
	class rhsusf_m998_w_2dr;
	class rhsusf_m998_w_2dr_fulltop;
	class rhsusf_m998_w_4dr_fulltop;
	class rhsusf_m998_w_4dr_halftop;
	class rhsusf_RG33_CROWS_base;
	class rhsusf_M1239_base;
	class rhsusf_M1239_CROWS_base;
	class rhsusf_M1239_CROWSMK19_base;
	class rhsusf_M1239_Deploy_base;
	class rhsusf_M1239_DeployMK19_base;
	class rhsusf_stryker_m1126_m2_base;
	class rhs_t14_base;
	class rhs_2s1tank_base;
	class rhsusf_M1238A1_socom_wd;
	class rhsusf_M1238A1_M2_socom_wd;
	class rhsusf_M1239_socom_wd;
	class rhsusf_M1239_M2_socom_wd;
	class fsg_uaz_2;
	class fsg_uaz_1;
	class fsg_tigr_1;
	class fsg_btr_2;
	class fsg_btr_3;
	class fsg_ural_1;
	class fsg_ural_2;
	class O_Soldier_F;
	class fsg_base_o_sf_soldier;
	class rhsusf_m1240a1_usarmy_d;
	class rhsusf_m1240a1_m2crows_usarmy_d;
	class rhsusf_m1240a1_m2_usarmy_d;
	class rhsusf_m1240a1_m240_usarmy_d;
	class rhsusf_m1240a1_usarmy_wd;
	class rhsusf_m1240a1_m2crows_usarmy_wd;
	class rhsusf_m1240a1_m2_usarmy_wd;
	class rhsusf_m1240a1_m240_usarmy_wd;
	class rhsusf_m1151_base;
	class rhsusf_M1151_CROWS_M2_base;
	class rhsusf_M1151_CROWS_Mk19_base;
	class rhsusf_M1151_GPK_M2_base;
	class rhsusf_M1151_M2_LRAS3_base;
	class rhsusf_M1151_GPK_M240_base;
	class rhsusf_M1151_GPK_MK19_base;
	class rhsusf_M1151_OGPK_M2_base;
	class rhsusf_M1151_OGPK_M240_base;
	class rhsusf_M1151_OGPK_MK19_base;
	class rhsusf_m1152_base;
	class rhsusf_m1152_sicps_base;
	class rhsusf_m1165_base;
	class rhsusf_stryker_m1126_mk19_base;
	class rhsusf_stryker_m1127_m2_base;
	class rhsusf_stryker_m1132_m2_np_base;
	class rhsusf_stryker_m1132_m2_base;
	class rhsusf_stryker_m1134_base;
	class rhsusf_M1165_ASV_OGPK_M240_base;
	class rhsusf_M1151_MCTAGS_M2_base;
	class rhsusf_M1151_MCTAGS_M240_base;
	class rhsusf_M1151_MCTAGS_Mk19_base;
	class rhs_kraz255b1_bmkt_base;
	class rhs_kraz255b1_flatbed_base;
	class rhs_kraz255b1_pmp_base;
	class rhs_kraz255b1_fuel_base;
	class RHS_T50_base;
	class rhs_kraz255b1_cargo_open_base;
	class rhsgref_cdf_ngd_base;
	class rhssaf_soldier_un_digital_base;
	class rhssaf_soldier_un_desert_base;
	class rhsgref_cdf_air_pilot;
	class rhs_zil131_flatbed_cover_base;
	class rhs_zil131_open_base;
	class rhs_uh1h_base;
	class rhsgref_cdf_reg_base;
	class rhsgref_cdf_reg_rifleman_m70;
	class rhsgref_cdf_para_base;
	class rhs_DSHkM_Mini_TriPod_base;
	class rhs_DSHKM_base;
	class rhsgref_mi24g_base;
	class rhsgref_cdf_Igla_AA_pod;
	class rhsgref_cdf_AGS30_TriPod;
	class rhsgref_cdf_NSV_TriPod;
	class rhsgref_cdf_SPG9;
	class rhsgref_cdf_SPG9M;
	class RHSgref_cdf_ZU23;
	class rhsgref_cdf_zsu234;
	class rhsgref_cdf_btr60;
	class rhsgref_cdf_btr70;
	class rhsgref_cdf_btr80;
	class rhsgref_cdf_reg_d30;
	class rhsgref_cdf_reg_d30_at;
	class rhsgref_cdf_reg_BM21;
	class rhsgref_cdf_reg_M252;
	class rhsgref_cdf_reg_uaz;
	class rhsgref_cdf_reg_uaz_ags;
	class rhsgref_cdf_reg_uaz_dshkm;
	class rhsgref_cdf_reg_uaz_open;
	class rhsgref_cdf_reg_uaz_spg9;
	class rhsgref_cdf_bmd1;
	class rhsgref_cdf_bmd1k;
	class rhsgref_cdf_bmd1p;
	class rhsgref_cdf_bmd1pk;
	class rhsgref_cdf_bmd2;
	class rhsgref_cdf_bmd2k;
	class rhsgref_cdf_bmp1;
	class rhsgref_cdf_bmp1d;
	class rhsgref_cdf_bmp1k;
	class rhsgref_cdf_bmp1p;
	class rhsgref_cdf_bmp2e;
	class rhsgref_cdf_bmp2;
	class rhsgref_cdf_bmp2d;
	class rhsgref_cdf_bmp2k;
	class rhsgref_cdf_t72ba_tv;
	class rhsgref_cdf_t72bb_tv;
	class rhsgref_cdf_t80b_tv;
	class rhsgref_cdf_t80bv_tv;
	class rhsgref_cdf_gaz66;
	class rhsgref_cdf_gaz66_ammo;
	class rhsgref_cdf_gaz66_flat;
	class rhsgref_cdf_gaz66o;
	class rhsgref_cdf_gaz66o_flat;
	class rhsgref_cdf_gaz66_r142;
	class rhsgref_cdf_gaz66_zu23;
	class rhsgref_cdf_gaz66_ap2;
	class rhsgref_cdf_gaz66_repair;
	class rhsgref_cdf_ural;
	class rhsgref_cdf_ural_fuel;
	class rhsgref_cdf_ural_open;
	class rhsgref_cdf_ural_repair;
	class rhsgref_cdf_ural_Zu23;
	class rhsgref_cdf_Mi24D;
	class rhsgref_cdf_Mi24D_early;
	class rhsgref_mi24g_CAS;
	class rhsgref_cdf_Mi35;
	class rhsgref_cdf_reg_Mi8amt;
	class rhsgref_cdf_reg_Mi17Sh;
	
	class rhsgref_tla_para1;
	class rhsgref_tla_para2;
	class I_G_Offroad_01_F;
	class I_G_Offroad_01_AT_F;
	class I_G_Offroad_01_armed_F;
	class rhsgref_tla_SPG9;
	class rhsgref_tla_ZU23;
	class rhsgref_tla_2b14;
	class rhsgref_tla_btr60;
	
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman_lite,rhsgref_cdf_reg_base)
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman_rpg75,rhsgref_cdf_reg_base)
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman,rhsgref_cdf_reg_base)
	REMOVE_ZEUS(rhsgref_cdf_reg_grenadier,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_squadleader,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_specialist_aa,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_grenadier_rpg,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_crew,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_engineer,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_general,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_machinegunner,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_marksman,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_medic,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_officer,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_crew_commander,rhsgref_cdf_reg_crew)
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman_aks74,rhsgref_cdf_reg_rifleman_m70)
	REMOVE_ZEUS(rhsgref_cdf_para_rifleman,rhsgref_cdf_para_base)
	REMOVE_ZEUS(rhsgref_cdf_para_specialist_aa,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_grenadier_rpg,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_autorifleman,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_crew,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_engineer,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_grenadier,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_machinegunner,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_marksman,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_medic,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_officer,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_rifleman_lite,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_para_squadleader,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_DSHKM_Mini_TriPod,rhs_DSHkM_Mini_TriPod_base)
	REMOVE_ZEUS(rhsgref_cdf_DSHKM,rhs_DSHKM_base)
	REMOVE_ZEUS(rhsgref_cdf_zil131,rhs_zil131_base)
	REMOVE_ZEUS(rhsgref_cdf_zil131_flatbed_cover,rhs_zil131_flatbed_cover_base)
	REMOVE_ZEUS(rhsgref_cdf_zil131_open,rhs_zil131_open_base)
	REMOVE_ZEUS(rhsgref_cdf_zil131_flatbed,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhsgref_cdf_2s1,rhs_2s1tank_base)
	REMOVE_ZEUS(rhsgref_mi24g_FAB,rhsgref_mi24g_base)
	REMOVE_ZEUS(rhsgref_mi24g_UPK23,rhsgref_mi24g_base)
	REMOVE_ZEUS(rhsgref_cdf_Mi35_AT,RHS_Mi24V_AT_VVS_Base)
	REMOVE_ZEUS(rhsgref_cdf_Mi35_UPK,RHS_Mi24V_UPK23_VVS_Base)
	REMOVE_ZEUS(RHS_Mi8AMTSh_FAB_vvs,RHS_Mi8AMTSh_vvs)
	REMOVE_ZEUS(rhsgref_cdf_reg_Mi17Sh_FAB,RHS_Mi8AMTSh_FAB_vvs)
	REMOVE_ZEUS(RHS_Mi8AMTSh_UPK23_vvs,RHS_Mi8AMTSh_vvs)
	REMOVE_ZEUS(rhsgref_cdf_reg_Mi17Sh_UPK,RHS_Mi8AMTSh_UPK23_vvs)
	REMOVE_ZEUS(rhssaf_un_m10_digital_sq_lead,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_crew,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_engineer,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_exp,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_medic,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_rifleman_at,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_officer,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_repair,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_mgun_m84,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_rifleman_m21,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_sniper_m76,rhssaf_soldier_un_digital_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_sq_lead,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_rifleman_at,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_rifleman_m21,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_officer,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_repair,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_gl,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_mgun_m84,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_sniper_m76,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_crew,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_engineer,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_exp,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_medic,rhssaf_soldier_un_desert_base)
	REMOVE_ZEUS(rhssaf_un_m10_digital_asst_mgun,rhssaf_un_m10_digital_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_asst_spec_aa,rhssaf_un_m10_digital_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_asst_spec_at,rhssaf_un_m10_digital_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_rifleman_ammo,rhssaf_un_m10_digital_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_rifleman_m70,rhssaf_un_m10_digital_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_spotter,rhssaf_un_m10_digital_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_spec_aa,rhssaf_un_m10_digital_rifleman_at)
	REMOVE_ZEUS(rhssaf_un_m10_digital_spec_at,rhssaf_un_m10_digital_rifleman_at)
	REMOVE_ZEUS(rhssaf_un_m10_digital_ft_lead,rhssaf_un_m10_digital_sq_lead)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_ft_lead,rhssaf_un_m10_digital_desert_sq_lead)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_spec_aa,rhssaf_un_m10_digital_desert_rifleman_at)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_spec_at,rhssaf_un_m10_digital_desert_rifleman_at)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_rifleman_ammo,rhssaf_un_m10_digital_desert_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_rifleman_m70,rhssaf_un_m10_digital_desert_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_spotter,rhssaf_un_m10_digital_desert_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_asst_mgun,rhssaf_un_m10_digital_desert_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_asst_spec_aa,rhssaf_un_m10_digital_desert_rifleman_m21)
	REMOVE_ZEUS(rhssaf_un_m10_digital_desert_asst_spec_at,rhssaf_un_m10_digital_desert_rifleman_m21)
	REMOVE_ZEUS(rhsgref_cdf_ngd_rifleman,rhsgref_cdf_ngd_base)
	REMOVE_ZEUS(rhsgref_cdf_ngd_squadleader,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_ngd_rifleman_rpg75,rhsgref_cdf_ngd_base)
	REMOVE_ZEUS(rhsgref_cdf_ngd_rifleman_lite,rhsgref_cdf_ngd_base)
	REMOVE_ZEUS(rhsgref_cdf_ngd_grenadier,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_ngd_rifleman_ak74,rhsgref_cdf_ngd_base)
	REMOVE_ZEUS(rhsgref_cdf_ngd_officer,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_ngd_medic,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_ngd_machinegunner,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_ngd_engineer,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_ngd_crew,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_ngd_grenadier_rpg,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_rifleman,rhsgref_cdf_ngd_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_squadleader,rhsgref_cdf_ngd_squadleader)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_rifleman_rpg75,rhsgref_cdf_ngd_rifleman_rpg75)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_rifleman_lite,rhsgref_cdf_ngd_rifleman_lite)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_grenadier,rhsgref_cdf_ngd_grenadier)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_rifleman_ak74,rhsgref_cdf_ngd_rifleman_ak74)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_officer,rhsgref_cdf_ngd_officer)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_medic,rhsgref_cdf_ngd_medic)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_machinegunner,rhsgref_cdf_ngd_machinegunner)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_engineer,rhsgref_cdf_ngd_engineer)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_crew,rhsgref_cdf_ngd_crew)
	REMOVE_ZEUS(rhsgref_cdf_b_ngd_grenadier_rpg,rhsgref_cdf_ngd_grenadier_rpg)
	REMOVE_ZEUS(rhsgref_cdf_un_squadleader,rhsgref_cdf_reg_squadleader)
	REMOVE_ZEUS(rhsgref_cdf_un_rifleman_lite,rhsgref_cdf_reg_rifleman_lite)
	REMOVE_ZEUS(rhsgref_cdf_un_grenadier,rhsgref_cdf_reg_grenadier)
	REMOVE_ZEUS(rhsgref_cdf_un_rifleman,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_un_pilot,rhsgref_cdf_air_pilot)
	REMOVE_ZEUS(rhsgref_cdf_un_officer,rhsgref_cdf_reg_officer)
	REMOVE_ZEUS(rhsgref_cdf_un_medic,rhsgref_cdf_reg_medic)
	REMOVE_ZEUS(rhsgref_cdf_un_machinegunner,rhsgref_cdf_reg_machinegunner)
	REMOVE_ZEUS(rhsgref_cdf_un_general,rhsgref_cdf_reg_general)
	REMOVE_ZEUS(rhsgref_cdf_un_engineer,rhsgref_cdf_reg_engineer)
	REMOVE_ZEUS(rhsgref_cdf_un_crew,rhsgref_cdf_reg_crew)
	REMOVE_ZEUS(rhsgref_cdf_un_grenadier_rpg,rhsgref_cdf_reg_grenadier_rpg)
	REMOVE_ZEUS(rhsgref_un_zil131,rhs_zil131_base)
	REMOVE_ZEUS(rhsgref_un_zil131_flatbed_cover,rhs_zil131_flatbed_cover_base)
	REMOVE_ZEUS(rhsgref_un_zil131_open,rhs_zil131_open_base)
	REMOVE_ZEUS(rhsgref_un_zil131_flatbed,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_uh1h_un,rhs_uh1h_base)
	REMOVE_ZEUS(rhsgref_un_Mi24V_UPK,RHS_Mi24V_UPK23_VVS_Base)
	REMOVE_ZEUS(rhs_kraz255b1_cargo_open_msv,rhs_kraz255b1_cargo_open_base)
	REMOVE_ZEUS(rhs_kraz255b1_cargo_open_vdv,rhs_kraz255b1_cargo_open_base)
	REMOVE_ZEUS(rhs_kraz255b1_cargo_open_vmf,rhs_kraz255b1_cargo_open_base)
	REMOVE_ZEUS(rhs_kraz255b1_cargo_open_vv,rhs_kraz255b1_cargo_open_base)
	REMOVE_ZEUS(rhs_kraz255b1_bmkt_msv,rhs_kraz255b1_bmkt_base)
	REMOVE_ZEUS(rhs_kraz255b1_flatbed_msv,rhs_kraz255b1_flatbed_base)
	REMOVE_ZEUS(rhs_kraz255b1_pmp_msv,rhs_kraz255b1_pmp_base)
	REMOVE_ZEUS(rhs_kraz255b1_fuel_msv,rhs_kraz255b1_fuel_base)
	REMOVE_ZEUS(rhs_kraz255b1_bmkt_vdv,rhs_kraz255b1_bmkt_base)
	REMOVE_ZEUS(rhs_kraz255b1_flatbed_vdv,rhs_kraz255b1_flatbed_base)
	REMOVE_ZEUS(rhs_kraz255b1_pmp_vdv,rhs_kraz255b1_pmp_base)
	REMOVE_ZEUS(rhs_kraz255b1_fuel_vdv,rhs_kraz255b1_fuel_base)
	REMOVE_ZEUS(rhs_kraz255b1_bmkt_vmf,rhs_kraz255b1_bmkt_base)
	REMOVE_ZEUS(rhs_kraz255b1_flatbed_vmf,rhs_kraz255b1_flatbed_base)
	REMOVE_ZEUS(rhs_kraz255b1_pmp_vmf,rhs_kraz255b1_pmp_base)
	REMOVE_ZEUS(rhs_kraz255b1_fuel_vmf,rhs_kraz255b1_fuel_base)
	REMOVE_ZEUS(rhs_kraz255b1_bmkt_vv,rhs_kraz255b1_bmkt_base)
	REMOVE_ZEUS(rhs_kraz255b1_flatbed_vv,rhs_kraz255b1_flatbed_base)
	REMOVE_ZEUS(rhs_kraz255b1_pmp_vv,rhs_kraz255b1_pmp_base)
	REMOVE_ZEUS(rhs_kraz255b1_fuel_vv,rhs_kraz255b1_fuel_base)
	REMOVE_ZEUS(RHS_T50_vvs_generic,RHS_T50_base)
	REMOVE_ZEUS(RHS_T50_vvs_051,RHS_T50_vvs_generic)
	REMOVE_ZEUS(RHS_T50_vvs_052,RHS_T50_vvs_051)
	REMOVE_ZEUS(RHS_T50_vvs_053,RHS_T50_vvs_051)
	REMOVE_ZEUS(RHS_T50_vvs_generic_ext,RHS_T50_vvs_generic)
	REMOVE_ZEUS(RHS_T50_vvs_054,RHS_T50_vvs_051)
	REMOVE_ZEUS(RHS_T50_vvs_blueonblue,RHS_T50_vvs_051)
	REMOVE_ZEUS(rhsusf_m1165_asv_m240_usaf_d,rhsusf_M1165_ASV_OGPK_M240_base)
	REMOVE_ZEUS(rhsusf_m1151_usmc_d,rhsusf_m1151_base)
	REMOVE_ZEUS(rhsusf_m1151_m2crows_usmc_d,rhsusf_M1151_CROWS_M2_base)
	REMOVE_ZEUS(rhsusf_m1151_mk19crows_usmc_d,rhsusf_M1151_CROWS_Mk19_base)
	REMOVE_ZEUS(rhsusf_m1151_m2_v3_usmc_d,rhsusf_M1151_MCTAGS_M2_base)
	REMOVE_ZEUS(rhsusf_m1151_m240_v3_usmc_d,rhsusf_M1151_MCTAGS_M240_base)
	REMOVE_ZEUS(rhsusf_m1151_mk19_v3_usmc_d,rhsusf_M1151_MCTAGS_Mk19_base)
	REMOVE_ZEUS(rhsusf_m1152_usmc_d,rhsusf_m1152_base)
	REMOVE_ZEUS(rhsusf_m1152_rsv_usmc_d,rhsusf_m1152_base)
	REMOVE_ZEUS(rhsusf_m1165_usmc_d,rhsusf_m1165_base)
	REMOVE_ZEUS(rhsusf_m1151_usmc_wd,rhsusf_m1151_usmc_d)
	REMOVE_ZEUS(rhsusf_m1151_m2crows_usmc_wd,rhsusf_m1151_m2crows_usmc_d)
	REMOVE_ZEUS(rhsusf_m1151_mk19crows_usmc_wd,rhsusf_m1151_mk19crows_usmc_d)
	REMOVE_ZEUS(rhsusf_m1151_m2_v3_usmc_wd,rhsusf_m1151_m2_v3_usmc_d)
	REMOVE_ZEUS(rhsusf_m1151_m240_v3_usmc_wd,rhsusf_m1151_m240_v3_usmc_d)
	REMOVE_ZEUS(rhsusf_m1151_mk19_v3_usmc_wd,rhsusf_m1151_mk19_v3_usmc_d)
	REMOVE_ZEUS(rhsusf_m1152_usmc_wd,rhsusf_m1152_usmc_d)
	REMOVE_ZEUS(rhsusf_m1152_rsv_usmc_wd,rhsusf_m1152_rsv_usmc_d)
	REMOVE_ZEUS(rhsusf_m1165_usmc_wd,rhsusf_m1165_usmc_d)
	REMOVE_ZEUS(rhsusf_m1151_usarmy_d,rhsusf_m1151_base)
	REMOVE_ZEUS(rhsusf_m1151_usarmy_wd,rhsusf_m1151_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_m2crows_usarmy_d,rhsusf_M1151_CROWS_M2_base)
	REMOVE_ZEUS(rhsusf_m1151_m2crows_usarmy_wd,rhsusf_m1151_m2crows_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_mk19crows_usarmy_d,rhsusf_M1151_CROWS_Mk19_base)
	REMOVE_ZEUS(rhsusf_m1151_mk19crows_usarmy_wd,rhsusf_m1151_mk19crows_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_m2_v1_usarmy_d,rhsusf_M1151_GPK_M2_base)
	REMOVE_ZEUS(rhsusf_m1151_m2_v1_usarmy_wd,rhsusf_m1151_m2_v1_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_m2_lras3_v1_usarmy_d,rhsusf_M1151_M2_LRAS3_base)
	REMOVE_ZEUS(rhsusf_m1151_m2_lras3_v1_usarmy_wd,rhsusf_m1151_m2_lras3_v1_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_m240_v1_usarmy_d,rhsusf_M1151_GPK_M240_base)
	REMOVE_ZEUS(rhsusf_m1151_m240_v1_usarmy_wd,rhsusf_m1151_m240_v1_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_mk19_v1_usarmy_d,rhsusf_M1151_GPK_MK19_base)
	REMOVE_ZEUS(rhsusf_m1151_mk19_v1_usarmy_wd,rhsusf_m1151_mk19_v1_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_m2_v2_usarmy_d,rhsusf_M1151_OGPK_M2_base)
	REMOVE_ZEUS(rhsusf_m1151_m2_v2_usarmy_wd,rhsusf_m1151_m2_v2_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_m240_v2_usarmy_d,rhsusf_M1151_OGPK_M240_base)
	REMOVE_ZEUS(rhsusf_m1151_m240_v2_usarmy_wd,rhsusf_m1151_m240_v2_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1151_mk19_v2_usarmy_d,rhsusf_M1151_OGPK_MK19_base)
	REMOVE_ZEUS(rhsusf_m1151_mk19_v2_usarmy_wd,rhsusf_m1151_mk19_v2_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1152_usarmy_d,rhsusf_m1152_base)
	REMOVE_ZEUS(rhsusf_m1152_usarmy_wd,rhsusf_m1152_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1152_rsv_usarmy_d,rhsusf_m1152_base)
	REMOVE_ZEUS(rhsusf_m1152_rsv_usarmy_wd,rhsusf_m1152_rsv_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1152_sicps_usarmy_d,rhsusf_m1152_sicps_base)
	REMOVE_ZEUS(rhsusf_m1152_sicps_usarmy_wd,rhsusf_m1152_sicps_usarmy_d)
	REMOVE_ZEUS(rhsusf_m1165_usarmy_d,rhsusf_m1165_base)
	REMOVE_ZEUS(rhsusf_m1165_usarmy_wd,rhsusf_m1165_usarmy_d)
	REMOVE_ZEUS(rhsusf_m966_w,rhsusf_m1025_w)
	REMOVE_ZEUS(rhsusf_m966_d,rhsusf_m966_w)
	REMOVE_ZEUS(rhsusf_stryker_m1126_mk19_d,rhsusf_stryker_m1126_mk19_base)
	REMOVE_ZEUS(rhsusf_stryker_m1126_mk19_wd,rhsusf_stryker_m1126_mk19_base)
	REMOVE_ZEUS(rhsusf_stryker_m1127_m2_d,rhsusf_stryker_m1127_m2_base)
	REMOVE_ZEUS(rhsusf_stryker_m1127_m2_wd,rhsusf_stryker_m1127_m2_base)
	REMOVE_ZEUS(rhsusf_stryker_m1132_m2_np_d,rhsusf_stryker_m1132_m2_np_base)
	REMOVE_ZEUS(rhsusf_stryker_m1132_m2_np_wd,rhsusf_stryker_m1132_m2_np_base)
	REMOVE_ZEUS(rhsusf_stryker_m1132_m2_d,rhsusf_stryker_m1132_m2_base)
	REMOVE_ZEUS(rhsusf_stryker_m1132_m2_wd,rhsusf_stryker_m1132_m2_base)
	REMOVE_ZEUS(rhsusf_stryker_m1134_d,rhsusf_stryker_m1134_base)
	REMOVE_ZEUS(rhsusf_stryker_m1134_wd,rhsusf_stryker_m1134_base)
	REMOVE_ZEUS(rhsusf_MATV_base,MRAP_01_base_F)
	REMOVE_ZEUS(rhs_bkm_t,Ship_F)
	REMOVE_ZEUS(rhsgref_BRDM2,Wheeled_APC_F)
	REMOVE_ZEUS(RHS_MELB_AH6M_L,RHS_MELB_AH6M)
	REMOVE_ZEUS(rhsusf_M1220_usarmy_d,rhsusf_caiman_base)
	REMOVE_ZEUS(rhsusf_M1230_M2_usarmy_d,rhsusf_caiman_GPK_base)
	REMOVE_ZEUS(rhsusf_M1230_M2_usarmy_wd,rhsusf_M1230_M2_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1230a1_usarmy_d,rhsusf_M1220_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1230a1_usarmy_wd,rhsusf_M1230a1_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1117_D,rhsusf_M1117_base)
	REMOVE_ZEUS(rhsusf_M1078A1R_SOV_M2_D_fmtv_socom,rhsusf_M1078A1P2_B_M2_fmtv_usarmy)
	REMOVE_ZEUS(rhsusf_M1084A1R_SOV_M2_D_fmtv_socom,rhsusf_M1084A1P2_B_M2_fmtv_usarmy)
	REMOVE_ZEUS(rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom,rhsusf_M1078A1P2_B_M2_fmtv_usarmy)
	REMOVE_ZEUS(rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom,rhsusf_M1084A1R_SOV_M2_D_fmtv_socom)
	REMOVE_ZEUS(rhsusf_CGRCAT1A2_usmc_d,rhsusf_Cougar_base)
	REMOVE_ZEUS(rhsusf_CGRCAT1A2_M2_usmc_d,rhsusf_Cougar_base)
	REMOVE_ZEUS(rhsusf_M142_usarmy_D,rhsusf_himars_base)
	REMOVE_ZEUS(rhsusf_CGRCAT1A2_usmc_wd,rhsusf_CGRCAT1A2_usmc_d)
	REMOVE_ZEUS(rhsusf_CGRCAT1A2_M2_usmc_wd,rhsusf_CGRCAT1A2_M2_usmc_d)
	REMOVE_ZEUS(rhsusf_M142_usarmy_WD,rhsusf_himars_base)
	REMOVE_ZEUS(rhsusf_CGRCAT1A2_Mk19_usmc_d,rhsusf_CGRCAT1A2_M2_usmc_d)
	REMOVE_ZEUS(rhsusf_CGRCAT1A2_Mk19_usmc_wd,rhsusf_CGRCAT1A2_Mk19_usmc_d)
	REMOVE_ZEUS(rhsusf_M142_usmc_WD,rhsusf_himars_base)
	REMOVE_ZEUS(rhs_zil131_msv,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_cover_msv,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_zil131_open_msv,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_msv,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_zil131_vdv,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_cover_vdv,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_zil131_open_vdv,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_vdv,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_zil131_vmf,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_cover_vmf,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_zil131_open_vmf,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_vmf,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_zil131_vv,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_cover_vv,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_zil131_open_vv,rhs_zil131_base)
	REMOVE_ZEUS(rhs_zil131_flatbed_vv,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhs_mig29sm_vvs,rhs_mig29sm_base)
	REMOVE_ZEUS(rhsgref_BRDM2_HQ_msv,rhsgref_BRDM2_HQ)
	REMOVE_ZEUS(rhs_tigr_m_3camo_msv,rhs_tigr_m_3camo_vdv)
	REMOVE_ZEUS(RHS_Ka52_UPK23_vvs,RHS_Ka52_vvs)
	REMOVE_ZEUS(RHS_Ka52_UPK23_vvsc,RHS_Ka52_vvsc)
	REMOVE_ZEUS(RHS_Mi24P_AT_vvs,RHS_Mi24P_AT_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24P_AT_vvsc,RHS_Mi24P_AT_vvs)
	REMOVE_ZEUS(RHS_Mi24P_CAS_vdv,RHS_Mi24P_CAS_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24P_CAS_vvs,RHS_Mi24P_CAS_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24P_CAS_vvsc,RHS_Mi24P_CAS_vvs)
	REMOVE_ZEUS(RHS_Mi24V_AT_vdv,RHS_Mi24V_AT_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24V_AT_vvs,RHS_Mi24V_AT_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24V_AT_vvsc,RHS_Mi24V_AT_vvs)
	REMOVE_ZEUS(RHS_Mi24V_FAB_vdv,RHS_Mi24V_FAB_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24V_FAB_vvs,RHS_Mi24V_FAB_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24V_FAB_vvsc,RHS_Mi24V_FAB_vvs)
	REMOVE_ZEUS(RHS_Mi24V_UPK23_vdv,RHS_Mi24V_UPK23_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24V_UPK23_vvs,RHS_Mi24V_UPK23_VVS_Base)
	REMOVE_ZEUS(RHS_Mi24V_UPK23_vvsc,RHS_Mi24V_UPK23_vvs)
	REMOVE_ZEUS(RHS_Mi8AMTSh_FAB_vvsc,RHS_Mi8AMTSh_FAB_vvs)
	REMOVE_ZEUS(RHS_Mi8AMTSh_UPK23_vvsc,RHS_Mi8AMTSh_UPK23_vvs)
	REMOVE_ZEUS(RHS_Mi8MTV3_FAB_vvs,RHS_Mi8MTV3_vvs)
	REMOVE_ZEUS(RHS_Mi8MTV3_FAB_vvsc,RHS_Mi8MTV3_FAB_vvs)
	REMOVE_ZEUS(RHS_Mi8MTV3_FAB_vdv,RHS_Mi8MTV3_FAB_vvsc)
	REMOVE_ZEUS(RHS_Mi8MTV3_UPK23_vvs,RHS_Mi8MTV3_vvs)
	REMOVE_ZEUS(RHS_Mi8MTV3_UPK23_vvsc,RHS_Mi8MTV3_UPK23_vvs)
	REMOVE_ZEUS(RHS_Mi8MTV3_UPK23_vdv,RHS_Mi8MTV3_UPK23_vvsc)
	REMOVE_ZEUS(RHS_Su25SM_CAS_vvs,RHS_Su25SM_vvs)
	REMOVE_ZEUS(RHS_Su25SM_CAS_vvsc,RHS_Su25SM_vvsc)
	REMOVE_ZEUS(RHS_Su25SM_Cluster_vvs,RHS_Su25SM_vvs)
	REMOVE_ZEUS(RHS_Su25SM_Cluster_vvsc,RHS_Su25SM_vvsc)
	REMOVE_ZEUS(RHS_Su25SM_KH29_vvs,RHS_Su25SM_vvs)
	REMOVE_ZEUS(RHS_Su25SM_KH29_vvsc,RHS_Su25SM_vvsc)
	REMOVE_ZEUS(rhsgref_BRDM2_msv,rhsgref_BRDM2)
	REMOVE_ZEUS(rhsgref_BRDM2_ATGM_msv,rhsgref_BRDM2_ATGM)
	REMOVE_ZEUS(rhsgref_BRDM2UM_msv,rhsgref_BRDM2UM)
	REMOVE_ZEUS(rhsusf_infantry_army_base,SoldierWB)
	REMOVE_ZEUS(rhsusf_socom_uniform_base,SoldierWB)
	REMOVE_ZEUS(rhsusf_hmmwe_base,MRAP_01_base_F)
	REMOVE_ZEUS(rhsusf_m113tank_base,APC_Tracked_02_base_F)
	REMOVE_ZEUS(rhsusf_m1a1tank_base,MBT_01_base_F)
	REMOVE_ZEUS(rhsusf_fmtv_base,Truck_01_base_F)
	REMOVE_ZEUS(RHS_M2A2_Base,APC_Tracked_03_base_F)
	REMOVE_ZEUS(rhsusf_rg33_base,MRAP_01_base_F)
	REMOVE_ZEUS(RHS_M252_Base,StaticMortar)
	REMOVE_ZEUS(rhsusf_HEMTT_A4_base,Truck_01_base_F)
	REMOVE_ZEUS(rhsusf_RG33L_base,Truck_01_base_F)
	REMOVE_ZEUS(rhsusf_m109tank_base,MBT_01_arty_base_F)
	REMOVE_ZEUS(RHS_M119_base,StaticCannon)
	REMOVE_ZEUS(RHS_C130J_Base,Plane_Base_F)
	REMOVE_ZEUS(rhsusf_f22,Plane_Fighter_03_base_F)
	REMOVE_ZEUS(RHS_A10,Plane_CAS_01_base_F)
	REMOVE_ZEUS(RHS_Ship,Ship_F)
	REMOVE_ZEUS(rhsusf_mrzr_base,MRAP_01_base_F)
	REMOVE_ZEUS(RHS_MELB_base,Helicopter_Base_H)
	REMOVE_ZEUS(RHS_UH60_Base,Heli_Transport_01_base_F)
	REMOVE_ZEUS(RHS_CH_47F_base,Heli_Transport_02_base_F)
	REMOVE_ZEUS(RHS_AH64_base,Heli_Attack_01_base_F)
	REMOVE_ZEUS(RHS_UH1_Base,Heli_light_03_base_F)
	REMOVE_ZEUS(rhsusf_CH53E_USMC,Helicopter_Base_H)
	REMOVE_ZEUS(RHS_AH1Z_base,Heli_Attack_01_base_F)
	REMOVE_ZEUS(RHS_Stinger_AA_pod_Base,StaticAAWeapon)
	REMOVE_ZEUS(RHS_MK19_TriPod_base,StaticGrenadeLauncher)
	REMOVE_ZEUS(rhs_m2staticmg_base,StaticMGWeapon)
	REMOVE_ZEUS(RHS_TOW_TriPod_base,StaticATWeapon)
	REMOVE_ZEUS(rhs_infantry_msv_base,SoldierGB)
	REMOVE_ZEUS(rhs_btr_base,Wheeled_APC_F)
	REMOVE_ZEUS(rhs_D30_base,StaticCannon)
	REMOVE_ZEUS(rhs_2b14_82mm_Base,StaticMortar)
	REMOVE_ZEUS(rhs_tigr_base,MRAP_02_base_F)
	REMOVE_ZEUS(rhs_tigr_m_vdv,rhs_tigr_vdv)
	REMOVE_ZEUS(rhs_tigr_sts_vdv,rhs_tigr_vdv)
	REMOVE_ZEUS(rhs_tigr_m_msv,rhs_tigr_m_vdv)
	REMOVE_ZEUS(RHS_UAZ_Base,Offroad_01_base_F)
	REMOVE_ZEUS(rhs_bmp1tank_base,Tank_F)
	REMOVE_ZEUS(rhs_bmp3tank_base,Tank_F)
	REMOVE_ZEUS(rhsgref_BRDM2_vdv,rhsgref_BRDM2)
	REMOVE_ZEUS(rhsgref_BRDM2_ATGM_vdv,rhsgref_BRDM2_ATGM)
	REMOVE_ZEUS(rhsgref_BRDM2UM_vdv,rhsgref_BRDM2UM)
	REMOVE_ZEUS(rhsgref_BRDM2_HQ_vdv,rhsgref_BRDM2_HQ)
	REMOVE_ZEUS(rhsgref_BRDM2_vmf,rhsgref_BRDM2)
	REMOVE_ZEUS(rhsgref_BRDM2_ATGM_vmf,rhsgref_BRDM2_ATGM)
	REMOVE_ZEUS(rhsgref_BRDM2UM_vmf,rhsgref_BRDM2UM)
	REMOVE_ZEUS(rhsgref_BRDM2_HQ_vmf,rhsgref_BRDM2_HQ)
	REMOVE_ZEUS(rhs_truck,Truck_F)
	REMOVE_ZEUS(rhs_kamaz5350,O_Truck_02_covered_F)
	REMOVE_ZEUS(RHS_Ural_BaseTurret,Truck_F)
	REMOVE_ZEUS(rhs_Metis_Base,AT_01_base_F)
	REMOVE_ZEUS(rhs_Kornet_Base,AT_01_base_F)
	REMOVE_ZEUS(rhs_Igla_AA_pod_Base,StaticAAWeapon)
	REMOVE_ZEUS(RHS_AGS30_TriPod_base,StaticGrenadeLauncher)
	REMOVE_ZEUS(rhs_nsv_tripod_base,StaticMGWeapon)
	REMOVE_ZEUS(rhs_SPG9_base,AT_01_base_F)
	REMOVE_ZEUS(RHS_ZU23_base,StaticCannon)
	REMOVE_ZEUS(rhs_rva_crew,rhs_infantry_msv_base)
	REMOVE_ZEUS(rhs_9k79,OTR21_Base)
	REMOVE_ZEUS(rhs_2s3tank_base,Tank_F)
	REMOVE_ZEUS(rhs_a3t72tank_base,Tank_F)
	REMOVE_ZEUS(rhs_tank_base,Tank_F)
	REMOVE_ZEUS(rhs_bmd_base,Tank_F)
	REMOVE_ZEUS(rhs_a3spruttank_base,Tank_F)
	REMOVE_ZEUS(RHS_Mi8_base,Heli_Light_02_base_F)
	REMOVE_ZEUS(RHS_Mi24_base,Heli_Attack_02_base_F)
	REMOVE_ZEUS(rhs_typhoon_base,O_Truck_03_repair_F)
	REMOVE_ZEUS(rhs_pts_base,APC_Tracked_02_base_F)
	REMOVE_ZEUS(rhs_zsutank_base,APC_Tracked_02_base_F)
	REMOVE_ZEUS(rhs_pchela1t_base,UAV_02_base_F)
	REMOVE_ZEUS(RHS_Ka52_base,Heli_Attack_02_base_F)
	REMOVE_ZEUS(rhs_ka60_grey,O_Heli_Light_02_unarmed_F)
	REMOVE_ZEUS(rhs_mi28_base,Heli_Attack_02_base_F)
	REMOVE_ZEUS(RHS_su25_base,O_Plane_CAS_02_F)
	REMOVE_ZEUS(rhs_pilot,rhs_pilot_base)
	REMOVE_ZEUS(rhs_pilot_combat_heli,rhs_pilot_base)
	REMOVE_ZEUS(rhs_pilot_tan,rhs_pilot_base)
	REMOVE_ZEUS(rhs_pilot_transport_heli,rhs_pilot_base)
	REMOVE_ZEUS(RHS_TU95MS_base,Plane_Base_F)
	REMOVE_ZEUS(rhsusf_weapons_crate,Box_NATO_Wps_F)
	REMOVE_ZEUS(rhsusf_weapon_crate,Box_NATO_Wps_F)
	REMOVE_ZEUS(rhsusf_spec_weapons_crate,Box_NATO_Wps_F)
	REMOVE_ZEUS(rhsusf_launcher_crate,Box_NATO_Wps_F)
	REMOVE_ZEUS(rhsusf_gear_crate,Box_NATO_Wps_F)
	REMOVE_ZEUS(rhsusf_ammo_crate,Box_NATO_Ammo_F)
	REMOVE_ZEUS(rhsusf_mags_crate,Box_NATO_Wps_F)
	REMOVE_ZEUS(rhssaf_virtual_crate,I_supplyCrate_F)
	REMOVE_ZEUS(rhsgref_weapons_crate,Box_Syndicate_Wps_F)
	REMOVE_ZEUS(rhs_weapon_crate,EAST_Box_Base)
	REMOVE_ZEUS(rhs_spec_weapons_crate,EAST_Box_Base)
	REMOVE_ZEUS(rhs_launcher_crate,EAST_Box_Base)
	REMOVE_ZEUS(rhs_gear_crate,EAST_Box_Base)
	REMOVE_ZEUS(rhs_mags_crate,EAST_Box_Base)
	REMOVE_ZEUS(rhs_weapons_crate_ak,EAST_Box_Base)
	REMOVE_ZEUS(rhs_weapons_crate_ak_ammo_545x39,EAST_Box_Base)
	REMOVE_ZEUS(rhsgref_hidf_m113a3_unarmed,rhsusf_m113_usarmy_unarmed)
	REMOVE_ZEUS(rhsgref_hidf_m113a3_mk19,rhsusf_m113_usarmy_MK19)
	REMOVE_ZEUS(rhsgref_hidf_m113a3_m2,rhsusf_m113_usarmy_supply)
	REMOVE_ZEUS(RHS_A10_CBU,RHS_A10)
	REMOVE_ZEUS(rhs_mig29s_vvs,rhs_mig29s_base)
	REMOVE_ZEUS(rhs_mig29s_vmf,rhs_mig29s_vvs)
	REMOVE_ZEUS(rhs_mig29s_vvsc,rhs_mig29s_vvs)
	REMOVE_ZEUS(RHS_AH1Z_CS,RHS_AH1Z)
	REMOVE_ZEUS(RHS_AH1Z_GS,RHS_AH1Z)
	REMOVE_ZEUS(RHS_AH64D_AA,RHS_AH64D)
	REMOVE_ZEUS(RHS_AH64D_CS,RHS_AH64D)
	REMOVE_ZEUS(RHS_AH64D_GS,RHS_AH64D)
	REMOVE_ZEUS(RHS_AH64D_noradar_AA,RHS_AH64D_AA)
	REMOVE_ZEUS(RHS_AH64D_noradar_CS,RHS_AH64D_CS)
	REMOVE_ZEUS(RHS_AH64D_noradar_GS,RHS_AH64D_GS)
	REMOVE_ZEUS(RHS_MELB_AH6M_H,RHS_MELB_AH6M)
	REMOVE_ZEUS(RHS_MELB_AH6M_M,RHS_MELB_AH6M)
	REMOVE_ZEUS(rhsusf_M1220_M2_usarmy_d,rhsusf_caiman_GPK_base)
	REMOVE_ZEUS(rhsusf_M1220_M153_M2_usarmy_d,rhsusf_M1220_M2_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1220_M153_M2_usarmy_wd,rhsusf_M1220_M153_M2_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1220_M2_usarmy_wd,rhsusf_M1220_M2_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1220_MK19_usarmy_d,rhsusf_M1220_M2_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1220_MK19_usarmy_wd,rhsusf_M1220_MK19_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1220_usarmy_wd,rhsusf_M1220_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1230_MK19_usarmy_d,rhsusf_M1230_M2_usarmy_d)
	REMOVE_ZEUS(rhsusf_M1230_MK19_usarmy_wd,rhsusf_M1230_MK19_usarmy_d)
	REMOVE_ZEUS(rhsgref_hidf_m1025,rhsusf_m1025_w)
	REMOVE_ZEUS(rhsgref_hidf_m1025_m2,rhsusf_m1025_w_m2)
	REMOVE_ZEUS(rhsgref_hidf_m1025_mk19,rhsusf_m1025_w_mk19)
	REMOVE_ZEUS(rhsgref_hidf_M998_2dr,rhsusf_m998_w_2dr)
	REMOVE_ZEUS(rhsgref_hidf_M998_2dr_fulltop,rhsusf_m998_w_2dr_fulltop)
	REMOVE_ZEUS(rhsgref_hidf_M998_2dr_halftop,rhsusf_m998_w_2dr_halftop)
	REMOVE_ZEUS(rhsgref_hidf_m998_4dr,rhsusf_m998_w_4dr)
	REMOVE_ZEUS(rhsgref_hidf_M998_4dr_fulltop,rhsusf_m998_w_4dr_fulltop)
	REMOVE_ZEUS(rhsgref_hidf_M998_4dr_halftop,rhsusf_m998_w_4dr_halftop)
	REMOVE_ZEUS(rhsusf_M1238A1_socom_d,rhsusf_RG33_base)
	REMOVE_ZEUS(rhsusf_M1238A1_M2_socom_d,rhsusf_RG33_CROWS_base)
	REMOVE_ZEUS(rhsusf_M1239_socom_d,rhsusf_M1239_base)
	REMOVE_ZEUS(rhsusf_M1239_M2_socom_d,rhsusf_M1239_CROWS_base)
	REMOVE_ZEUS(rhsusf_M1239_MK19_socom_d,rhsusf_M1239_CROWSMK19_base)
	REMOVE_ZEUS(rhsusf_M1239_M2_Deploy_socom_d,rhsusf_M1239_Deploy_base)
	REMOVE_ZEUS(rhsusf_M1239_MK19_Deploy_socom_d,rhsusf_M1239_DeployMK19_base)
	REMOVE_ZEUS(rhsusf_stryker_m1126_m2_d,rhsusf_stryker_m1126_m2_base)
	REMOVE_ZEUS(rhsusf_stryker_m1126_m2_wd,rhsusf_stryker_m1126_m2_base)
	REMOVE_ZEUS(rhs_t14_tv,rhs_t14_base)
	REMOVE_ZEUS(rhs_2s1_tv,rhs_2s1tank_base)
	REMOVE_ZEUS(rhsgref_cdf_b_zil131,rhsgref_cdf_zil131)
	REMOVE_ZEUS(rhsgref_cdf_b_zil131_flatbed_cover,rhsgref_cdf_zil131_flatbed_cover)
	REMOVE_ZEUS(rhsgref_cdf_b_zil131_open,rhsgref_cdf_zil131_open)
	REMOVE_ZEUS(rhsgref_cdf_b_zil131_flatbed,rhsgref_cdf_zil131_flatbed)
	REMOVE_ZEUS(rhsgref_cdf_b_Igla_AA_pod,rhsgref_cdf_Igla_AA_pod)
	REMOVE_ZEUS(rhsgref_cdf_b_AGS30_TriPod,rhsgref_cdf_AGS30_TriPod)
	REMOVE_ZEUS(rhsgref_cdf_b_DSHKM,rhsgref_cdf_DSHKM)
	REMOVE_ZEUS(rhsgref_cdf_b_DSHKM_Mini_TriPod,rhsgref_cdf_DSHKM_Mini_TriPod)
	REMOVE_ZEUS(rhsgref_cdf_b_NSV_TriPod,rhsgref_cdf_NSV_TriPod)
	REMOVE_ZEUS(rhsgref_cdf_b_SPG9,rhsgref_cdf_SPG9)
	REMOVE_ZEUS(rhsgref_cdf_b_SPG9M,rhsgref_cdf_SPG9M)
	REMOVE_ZEUS(rhsgref_cdf_b_ZU23,RHSgref_cdf_ZU23)
	REMOVE_ZEUS(rhsgref_cdf_b_zsu234,rhsgref_cdf_zsu234)
	REMOVE_ZEUS(rhsgref_cdf_b_btr60,rhsgref_cdf_btr60)
	REMOVE_ZEUS(rhsgref_cdf_b_btr70,rhsgref_cdf_btr70)
	REMOVE_ZEUS(rhsgref_cdf_b_btr80,rhsgref_cdf_btr80)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_d30,rhsgref_cdf_reg_d30)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_d30_at,rhsgref_cdf_reg_d30_at)
	REMOVE_ZEUS(rhsgref_cdf_b_2s1,rhsgref_cdf_2s1)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_BM21,rhsgref_cdf_reg_BM21)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_M252,rhsgref_cdf_reg_M252)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_uaz,rhsgref_cdf_reg_uaz)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_uaz_ags,rhsgref_cdf_reg_uaz_ags)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_uaz_dshkm,rhsgref_cdf_reg_uaz_dshkm)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_uaz_open,rhsgref_cdf_reg_uaz_open)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_uaz_spg9,rhsgref_cdf_reg_uaz_spg9)
	REMOVE_ZEUS(rhsgref_cdf_b_bmd1,rhsgref_cdf_bmd1)
	REMOVE_ZEUS(rhsgref_cdf_b_bmd1k,rhsgref_cdf_bmd1k)
	REMOVE_ZEUS(rhsgref_cdf_b_bmd1p,rhsgref_cdf_bmd1p)
	REMOVE_ZEUS(rhsgref_cdf_b_bmd1pk,rhsgref_cdf_bmd1pk)
	REMOVE_ZEUS(rhsgref_cdf_b_bmd2,rhsgref_cdf_bmd2)
	REMOVE_ZEUS(rhsgref_cdf_b_bmd2k,rhsgref_cdf_bmd2k)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp1,rhsgref_cdf_bmp1)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp1d,rhsgref_cdf_bmp1d)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp1k,rhsgref_cdf_bmp1k)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp1p,rhsgref_cdf_bmp1p)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp2e,rhsgref_cdf_bmp2e)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp2,rhsgref_cdf_bmp2)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp2d,rhsgref_cdf_bmp2d)
	REMOVE_ZEUS(rhsgref_cdf_b_bmp2k,rhsgref_cdf_bmp2k)
	REMOVE_ZEUS(rhsgref_cdf_b_t72ba_tv,rhsgref_cdf_t72ba_tv)
	REMOVE_ZEUS(rhsgref_cdf_b_t72bb_tv,rhsgref_cdf_t72bb_tv)
	REMOVE_ZEUS(rhsgref_cdf_b_t80b_tv,rhsgref_cdf_t80b_tv)
	REMOVE_ZEUS(rhsgref_cdf_b_t80bv_tv,rhsgref_cdf_t80bv_tv)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66,rhsgref_cdf_gaz66)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66_ammo,rhsgref_cdf_gaz66_ammo)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66_flat,rhsgref_cdf_gaz66_flat)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66o,rhsgref_cdf_gaz66o)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66o_flat,rhsgref_cdf_gaz66o_flat)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66_r142,rhsgref_cdf_gaz66_r142)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66_zu23,rhsgref_cdf_gaz66_zu23)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66_ap2,rhsgref_cdf_gaz66_ap2)
	REMOVE_ZEUS(rhsgref_cdf_b_gaz66_repair,rhsgref_cdf_gaz66_repair)
	REMOVE_ZEUS(rhsgref_cdf_b_ural,rhsgref_cdf_ural)
	REMOVE_ZEUS(rhsgref_cdf_b_ural_fuel,rhsgref_cdf_ural_fuel)
	REMOVE_ZEUS(rhsgref_cdf_b_ural_open,rhsgref_cdf_ural_open)
	REMOVE_ZEUS(rhsgref_cdf_b_ural_repair,rhsgref_cdf_ural_repair)
	REMOVE_ZEUS(rhsgref_cdf_b_ural_Zu23,rhsgref_cdf_ural_Zu23)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_specialist_aa,rhsgref_cdf_reg_specialist_aa)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_grenadier_rpg,rhsgref_cdf_reg_grenadier_rpg)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_crew,rhsgref_cdf_reg_crew)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_crew_commander,rhsgref_cdf_reg_crew_commander)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_engineer,rhsgref_cdf_reg_engineer)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_general,rhsgref_cdf_reg_general)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_machinegunner,rhsgref_cdf_reg_machinegunner)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_marksman,rhsgref_cdf_reg_marksman)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_medic,rhsgref_cdf_reg_medic)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_officer,rhsgref_cdf_reg_officer)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_rifleman,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_rifleman_aks74,rhsgref_cdf_reg_rifleman_aks74)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_grenadier,rhsgref_cdf_reg_grenadier)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_rifleman_lite,rhsgref_cdf_reg_rifleman_lite)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_rifleman_rpg75,rhsgref_cdf_reg_rifleman_rpg75)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_squadleader,rhsgref_cdf_reg_squadleader)
	REMOVE_ZEUS(rhsgref_cdf_b_para_specialist_aa,rhsgref_cdf_para_specialist_aa)
	REMOVE_ZEUS(rhsgref_cdf_b_para_grenadier_rpg,rhsgref_cdf_para_grenadier_rpg)
	REMOVE_ZEUS(rhsgref_cdf_b_para_autorifleman,rhsgref_cdf_para_autorifleman)
	REMOVE_ZEUS(rhsgref_cdf_b_para_crew,rhsgref_cdf_para_crew)
	REMOVE_ZEUS(rhsgref_cdf_b_para_engineer,rhsgref_cdf_para_engineer)
	REMOVE_ZEUS(rhsgref_cdf_b_para_grenadier,rhsgref_cdf_para_grenadier)
	REMOVE_ZEUS(rhsgref_cdf_b_para_machinegunner,rhsgref_cdf_para_machinegunner)
	REMOVE_ZEUS(rhsgref_cdf_b_para_marksman,rhsgref_cdf_para_marksman)
	REMOVE_ZEUS(rhsgref_cdf_b_para_medic,rhsgref_cdf_para_medic)
	REMOVE_ZEUS(rhsgref_cdf_b_para_officer,rhsgref_cdf_para_officer)
	REMOVE_ZEUS(rhsgref_cdf_b_para_rifleman,rhsgref_cdf_para_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_b_para_rifleman_lite,rhsgref_cdf_para_rifleman_lite)
	REMOVE_ZEUS(rhsgref_cdf_b_para_squadleader,rhsgref_cdf_para_squadleader)
	REMOVE_ZEUS(rhsgref_cdf_b_Mi24D,rhsgref_cdf_Mi24D)
	REMOVE_ZEUS(rhsgref_cdf_b_Mi24D_Early,rhsgref_cdf_Mi24D_early)
	REMOVE_ZEUS(rhsgref_b_mi24g_CAS,rhsgref_mi24g_CAS)
	REMOVE_ZEUS(rhsgref_b_mi24g_FAB,rhsgref_mi24g_FAB)
	REMOVE_ZEUS(rhsgref_b_mi24g_UPK23,rhsgref_mi24g_UPK23)
	REMOVE_ZEUS(rhsgref_cdf_b_Mi35,rhsgref_cdf_Mi35)
	REMOVE_ZEUS(rhsgref_cdf_b_Mi35_AT,rhsgref_cdf_Mi35_AT)
	REMOVE_ZEUS(rhsgref_cdf_b_Mi35_UPK,rhsgref_cdf_Mi35_UPK)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_Mi8amt,rhsgref_cdf_reg_Mi8amt)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_Mi17Sh,rhsgref_cdf_reg_Mi17Sh)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_Mi17Sh_FAB,rhsgref_cdf_reg_Mi17Sh_FAB)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_Mi17Sh_UPK,rhsgref_cdf_reg_Mi17Sh_UPK)
	
	REMOVE_ZEUS(rhsgref_tla_rifleman_rpg75,rhsgref_tla_para1)
	REMOVE_ZEUS(rhsgref_tla_mechanic,rhsgref_tla_para1)
	REMOVE_ZEUS(rhsgref_tla_medic,rhsgref_tla_para1)
	REMOVE_ZEUS(rhsgref_tla_rifleman,rhsgref_tla_para1)
	REMOVE_ZEUS(rhsgref_tla_grenadier,rhsgref_tla_para1)
	REMOVE_ZEUS(rhsgref_tla_squadleader,rhsgref_tla_para1)
	REMOVE_ZEUS(rhsgref_tla_warlord,rhsgref_tla_para1)
	REMOVE_ZEUS(rhsgref_tla_saboteur,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_crew,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_grenadier_m79,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_rifleman_akms,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_rifleman_l1a1,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_rifleman_m1,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_rifleman_m14,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_machinegunner,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_marksman_m14,rhsgref_tla_para2)
	REMOVE_ZEUS(rhsgref_tla_specialist_at,rhsgref_tla_rifleman_rpg75)
	REMOVE_ZEUS(rhsgref_tla_rifleman_M16,rhsgref_tla_rifleman)
	REMOVE_ZEUS(rhsgref_tla_rifleman_pm63,rhsgref_tla_rifleman)
	REMOVE_ZEUS(rhsgref_tla_rifleman_vz58,rhsgref_tla_rifleman)
	REMOVE_ZEUS(rhsgref_tla_machinegunner_mg42,rhsgref_tla_machinegunner)
	REMOVE_ZEUS(rhsgref_tla_offroad,I_G_Offroad_01_F)
	REMOVE_ZEUS(rhsgref_tla_offroad_at,I_G_Offroad_01_AT_F)
	REMOVE_ZEUS(rhsgref_tla_offroad_armed,I_G_Offroad_01_armed_F)
	REMOVE_ZEUS(rhsgref_tla_kraz255b1_cargo_open,rhs_kraz255b1_cargo_open_base)
	REMOVE_ZEUS(rhsgref_tla_DSHKM,rhs_DSHKM_base)
	REMOVE_ZEUS(rhsgref_tla_DSHKM_Mini_TriPod,rhs_DSHkM_Mini_TriPod_base)
	
	REMOVE_ZEUS(rhsgref_tla_g_specialist_at,rhsgref_tla_specialist_at)
	REMOVE_ZEUS(rhsgref_tla_g_squadleader,rhsgref_tla_squadleader)
	REMOVE_ZEUS(rhsgref_tla_g_crew,rhsgref_tla_crew)
	REMOVE_ZEUS(rhsgref_tla_g_grenadier,rhsgref_tla_grenadier)
	REMOVE_ZEUS(rhsgref_tla_g_grenadier_m79,rhsgref_tla_grenadier_m79)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman,rhsgref_tla_rifleman)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_akms,rhsgref_tla_rifleman_akms)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_l1a1,rhsgref_tla_rifleman_l1a1)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_m1,rhsgref_tla_rifleman_m1)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_m14,rhsgref_tla_rifleman_m14)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_M16,rhsgref_tla_rifleman_M16)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_pm63,rhsgref_tla_rifleman_pm63)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_rpg75,rhsgref_tla_rifleman_rpg75)
	REMOVE_ZEUS(rhsgref_tla_g_rifleman_vz58,rhsgref_tla_rifleman_vz58)
	REMOVE_ZEUS(rhsgref_tla_g_machinegunner,rhsgref_tla_machinegunner)
	REMOVE_ZEUS(rhsgref_tla_g_machinegunner_mg42,rhsgref_tla_machinegunner_mg42)
	REMOVE_ZEUS(rhsgref_tla_g_marksman_m14,rhsgref_tla_marksman_m14)
	REMOVE_ZEUS(rhsgref_tla_g_mechanic,rhsgref_tla_mechanic)
	REMOVE_ZEUS(rhsgref_tla_g_medic,rhsgref_tla_medic)
	REMOVE_ZEUS(rhsgref_tla_g_saboteur,rhsgref_tla_saboteur)
	REMOVE_ZEUS(rhsgref_tla_g_warlord,rhsgref_tla_warlord)
	REMOVE_ZEUS(rhsgref_tla_g_kraz255b1_cargo_open,rhsgref_tla_kraz255b1_cargo_open)
	REMOVE_ZEUS(rhsgref_tla_g_DSHKM,rhsgref_tla_DSHKM)
	REMOVE_ZEUS(rhsgref_tla_g_offroad,rhsgref_tla_offroad)
	REMOVE_ZEUS(rhsgref_tla_g_offroad_at,rhsgref_tla_offroad_at)
	REMOVE_ZEUS(rhsgref_tla_g_offroad_armed,rhsgref_tla_offroad_armed)
	REMOVE_ZEUS(rhsgref_tla_g_DSHKM_Mini_TriPod,rhsgref_tla_DSHKM_Mini_TriPod)
	REMOVE_ZEUS(rhsgref_tla_g_SPG9,rhsgref_tla_SPG9)
	REMOVE_ZEUS(rhsgref_tla_g_ZU23,rhsgref_tla_ZU23)
	REMOVE_ZEUS(rhsgref_tla_g_2b14,rhsgref_tla_2b14)
	REMOVE_ZEUS(rhsgref_tla_g_btr60,rhsgref_tla_btr60)
	
	REMOVE_ZEUS(fsg_base_o_soldier,O_Soldier_F)
	REMOVE_ZEUS(fsg_o_sf_operator_1,fsg_base_o_sf_soldier)
	REMOVE_ZEUS(fsg_o_sf_operator_2,fsg_base_o_sf_soldier)
	REMOVE_ZEUS(fsg_o_sf_operator_3,fsg_base_o_sf_soldier)
	REMOVE_ZEUS(fsg_o_sf_squadleader,fsg_base_o_sf_soldier)
	REMOVE_ZEUS(fsg_o_sf_teamleader,fsg_base_o_sf_soldier)
	REMOVE_ZEUS(fsg_tigr_2,fsg_tigr_1)
	REMOVE_ZEUS(fsg_tigr_3,fsg_tigr_1)
	
	
	class SFPD_RHS_BLUFOR_DESERT_M1151: rhsusf_m1151_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1151_M2: rhsusf_m1151_m2_v2_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1151_M240: rhsusf_m1151_m240_v2_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1152_cargo: rhsusf_m1152_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1152_ammo: rhsusf_m1152_rsv_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1152_SICPS: rhsusf_m1152_sicps_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1165_cargo: rhsusf_m1165_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M966_TOW: rhsusf_m966_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1240: rhsusf_m1240a1_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1240_M2_CROWS: rhsusf_m1240a1_m2crows_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1240_M2: rhsusf_m1240a1_m2_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1240_M240: rhsusf_m1240a1_m240_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1097_4D_open: rhsusf_m998_d_4dr {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1025_M2: rhsusf_m1025_d_m2 {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1237_M2: rhsusf_M1237_M2_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1230_M2: rhsusf_M1230_M2_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1230_MED: rhsusf_M1230a1_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M113: rhsusf_m113d_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_stryker: rhsusf_stryker_m1126_m2_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_stryker_engineer: rhsusf_stryker_m1132_m2_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_stryker_TOW: rhsusf_stryker_m1134_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M2A2_BUSKI: RHS_M2A3_BUSKIII {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_m1A2SEP1_TUSKII: rhsusf_m1a2sep1tuskiid_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M978A4_BKIT: rhsusf_M978A4_BKIT_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M977A4_AMMO_BKIT: rhsusf_M977A4_AMMO_BKIT_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1083A1P2: rhsusf_M1083A1P2_B_d_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1083A1P2_M2: rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1083A1P2_wide: rhsusf_M1083A1P2_D_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1084A1P2: rhsusf_M1084A1P2_B_D_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1084A1P2_M2: rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1084A1P2_wide: rhsusf_M1084A1P2_D_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1078A1P2_CP: rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1085A1P2_Med: rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1078A1R_SOV_M2: rhsusf_M1078A1R_SOV_M2_D_fmtv_socom {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1084A1R_SOV_M2: rhsusf_M1084A1R_SOV_M2_D_fmtv_socom {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1117: rhsusf_M1117_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_MRZR: rhsusf_mrzr4_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_RG33_M2: rhsusf_rg33_m2_usmc_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M113_Medical: rhsusf_m113d_usarmy_medical {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M109: rhsusf_m109d_usarmy {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1025: rhsusf_m1025_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M998: rhsusf_m998_d_2dr_halftop {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M977A4_BKIT: rhsusf_M977A4_BKIT_usarmy_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_RG33: rhsusf_rg33_usmc_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1238A1: rhsusf_M1238A1_socom_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1238A1_M2: rhsusf_M1238A1_M2_socom_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1239: rhsusf_M1239_socom_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M1239_M2: rhsusf_M1239_M2_socom_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_CGRCAT1A2: rhsusf_CGRCAT1A2_usmc_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_CGRCAT1A2_M2: rhsusf_CGRCAT1A2_M2_usmc_d {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_M142: rhsusf_M142_usarmy_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Static_M2: RHS_M2StaticMG_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Static_M2_mini: RHS_M2StaticMG_MiniTripod_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Static_TOW: RHS_TOW_TriPod_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Static_Mk6: B_Mortar_01_F {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Static_M119: RHS_M119_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Static_Stinger: RHS_Stinger_AA_pod_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_DESERT_Static_Mk19: RHS_MK19_TriPod_D {
		faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	//Woodland
	class SFPD_RHS_BLUFOR_WOODLAND_M1151: rhsusf_m1151_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1151_M2: rhsusf_m1151_m2_v2_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1151_M240: rhsusf_m1151_m240_v2_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1152_cargo: rhsusf_m1152_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1152_ammo: rhsusf_m1152_rsv_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1152_SICPS: rhsusf_m1152_sicps_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1165_cargo: rhsusf_m1165_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M966_TOW: rhsusf_m966_w {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1240: rhsusf_m1240a1_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1240_M2_CROWS: rhsusf_m1240a1_m2crows_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1240_M2: rhsusf_m1240a1_m2_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1240_M240: rhsusf_m1240a1_m240_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1097_4D_open: rhsusf_m998_w_4dr {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1025_M2: rhsusf_m1025_w_m2 {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1237_M2: rhsusf_M1237_M2_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1230_M2: rhsusf_M1230_M2_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1230_MED: rhsusf_M1230a1_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M113: rhsusf_m113_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_stryker: rhsusf_stryker_m1126_m2_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_stryker_engineer: rhsusf_stryker_m1132_m2_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_stryker_TOW: rhsusf_stryker_m1134_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M2A2_BUSKI: RHS_M2A3_BUSKIII_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_m1A2SEP1_TUSKII: rhsusf_m1a2sep1tuskiiwd_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M978A4_BKIT: rhsusf_M978A4_BKIT_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M977A4_AMMO_BKIT: rhsusf_M977A4_AMMO_BKIT_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1083A1P2: rhsusf_M1083A1P2_B_WD_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1083A1P2_M2: rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1083A1P2_wide: rhsusf_M1083A1P2_WD_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1084A1P2: rhsusf_M1084A1P2_B_WD_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1084A1P2_M2: rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1084A1P2_wide: rhsusf_M1084A1P2_WD_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1078A1P2_CP: rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1085A1P2_Med: rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1078A1R_SOV_M2: rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1084A1R_SOV_M2: rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1117: rhsusf_M1117_W {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_MRZR: rhsusf_mrzr4_w {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_RG33_M2: rhsusf_rg33_m2_usmc_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M113_Medical: rhsusf_m113_usarmy_medical {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M109: rhsusf_m109_usarmy {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_TankCrew";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1025: rhsusf_m1025_w {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M998: rhsusf_m998_w_2dr_halftop {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M977A4_BKIT: rhsusf_M977A4_BKIT_usarmy_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_RG33: rhsusf_rg33_usmc_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1238A1: rhsusf_M1238A1_socom_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1238A1_M2: rhsusf_M1238A1_M2_socom_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1239: rhsusf_M1239_socom_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M1239_M2: rhsusf_M1239_M2_socom_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_CGRCAT1A2: rhsusf_CGRCAT1A2_usmc_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_CGRCAT1A2_M2: rhsusf_CGRCAT1A2_M2_usmc_wd {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_M142: rhsusf_M142_usarmy_WD {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Static_M2: RHS_M2StaticMG_D {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Static_M2_mini: RHS_M2StaticMG_MiniTripod_D {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Static_TOW: RHS_TOW_TriPod_D {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Static_Mk6: B_Mortar_01_F {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Static_M119: RHS_M119_D {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Static_Stinger: RHS_Stinger_AA_pod_D {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Static_Mk19: RHS_MK19_TriPod_D {
		faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	//Universal
	class SFPD_RHS_BLUFOR_Chinook: B_Heli_Transport_03_F {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_BLUFOR_HelicopterPilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_Blackfish_infantery: B_T_VTOL_01_infantry_F {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_BLUFOR_PlanePilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_Blackfish_vehicule: B_T_VTOL_01_vehicle_F {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_BLUFOR_PlanePilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_Blackfish_armed: B_T_VTOL_01_armed_F {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_BLUFOR_PlanePilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_Blackhawk: RHS_UH60M_d {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_HelicopterPilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		incomingMissileDetectionSystem = 16;
		
		class AnimationSources: AnimationSources {
			class doors_hide {
				initPhase = 0;
				animPeriod = 0.0001;
				displayName = "hide front doors";
				mass = -100;
				source = "user";
			};
		};
	};
	
	class SFPD_RHS_BLUFOR_Blackhawk_med: RHS_UH60M_MEV2_d {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_HelicopterPilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		incomingMissileDetectionSystem = 16;
		
		class AnimationSources: AnimationSources {
			class doors_hide {
				initPhase = 0;
				animPeriod = 0.0001;
				displayName = "hide front doors";
				mass = -100;
				source = "user";
			};
		};
	};
	
	class SFPD_RHS_BLUFOR_MH6: RHS_MELB_MH6M {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_HelicopterPilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_AH6: RHS_MELB_AH6M_L {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_HelicopterPilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_UH1Y: RHS_UH1Y {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_HelicopterPilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		incomingMissileDetectionSystem = 16;
	};
	
	class SFPD_RHS_BLUFOR_Comanche: RHS_AH64D {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_BLUFOR_HelicopterPilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(rhsusf_ihadss,2)
		};
		class TransportBackpacks {};
		
		incomingMissileDetectionSystem = 16;
	};
	
	class SFPD_RHS_BLUFOR_A10: B_Plane_CAS_01_dynamicLoadout_F {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_BLUFOR_PlanePilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_BlackWasp: B_Plane_Fighter_01_F {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_BLUFOR_PlanePilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_BLUFOR_MKVSCO: rhsusf_mkvsoc {
		faction = "SFPD_RHS_BLUFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
		SFPD_RHS_BLUFOR_Transport
	};
	
	
	//AFRF
	class SFPD_RHS_OPFOR_DESERT_UAZ_open: rhs_uaz_open_MSV_01 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_TIGR_M: rhs_tigr_m_3camo_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_TIGR_STS: rhs_tigr_sts_3camo_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_BRDM2_HQ: rhsgref_BRDM2_HQ_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenselectionstextures[] = {
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01_TKA_CO.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"}
		;
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BTR80: rhs_btr80_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa",
			"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa",
			"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
		};

	};
	
	class SFPD_RHS_OPFOR_DESERT_BTR80A: rhs_btr80a_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa",
			"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa",
			"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_GAZ: rhs_gaz66_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_GAZ_ammo: rhs_gaz66_ammo_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_GAZ_R142: rhs_gaz66_r142_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_Ural: RHS_Ural_MSV_01 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_Ural_fuel: RHS_Ural_Fuel_MSV_01 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_fuel_sand_co.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BM21: RHS_BM21_MSV_01 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_bm21_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_Ural_Zu23: RHS_Ural_Zu23_MSV_01 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_Ural_Zu234: rhs_zsu234_aa {//typo !!!
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa",
			"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa",
			"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	
	class SFPD_RHS_OPFOR_DESERT_BMP3_KA: rhs_bmp3mera_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_01_3mera_sand_co.paa",
			"rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_02_3mera_sand_co.paa",
			"rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_03_3m_sand_co.paa",
			"rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_04_sand_co.paa",
			"rhsafrf\addons\rhs_bmp3_camo\data\3m_era_sand_co.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_T90A: rhs_t90a_tv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		class ACE_SelfActions: ACE_SelfActions {
			class AmmoSelect {
				condition = "(gunner (vehicle _player)) isEqualTo _player";
				displayName = "Ammo Select";
				statement = "[_player] call KAM_fnc_autoloaded;";
			};
		};
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa",
			"",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa",
			"rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	
	class SFPD_RHS_OPFOR_DESERT_T14: rhs_t14_tv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_9K79: rhs_9k79_B {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_2S3: rhs_2s3_tv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_des_co.paa",
			"rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_des_co.paa",
			"rhsafrf\addons\rhs_2s3_camo\data\rhs_art_wheels_des_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_2S1: rhs_2s1_tv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_hull_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_turret_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_PTS: rhs_pts_vmf {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_TIGR: rhs_tigr_3camo_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_UAZ: RHS_UAZ_MSV_01 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BMP1K: rhs_bmp1k_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BMD1: rhs_bmd1 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus1_co.paa",
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd1_02_rus1_co.paa",
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus1_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BMD1PK: rhs_bmd1pk {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus1_co.paa",
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd1_02_rus1_co.paa",
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus1_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BMD2K: rhs_bmd2k {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus1_co.paa",
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd1_02_rus1_co.paa",
			"\rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus1_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BMP2K: rhs_bmp2k_vdv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_BRM1K: rhs_brm1k_vdv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BMD4MA: rhs_bmd4ma_vdv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_DESERT_PRP3: rhs_prp3_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa",
			"rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BRDM2: rhsgref_BRDM2_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenselectionstextures[] = {
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01_TKA_CO.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BRDM2_ATGM: rhsgref_BRDM2_ATGM_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenselectionstextures[] = {
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_ATGM_01_TKA_CO.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_BRDM2_UM: rhsgref_BRDM2UM_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		hiddenselectionstextures[] = {
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01_TKA_CO.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_GAZ_Open: rhs_gaz66o_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa",
			"\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_Ural_Open: RHS_Ural_Open_MSV_01 {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		SFPD_RHS_OPFOR_Transport
		
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
			"rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		
	};
	
	class SFPD_RHS_OPFOR_DESERT_bkm_t: rhs_bkm_t {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_KORD_mini: rhs_KORD_MSV {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_KORD: rhs_KORD_high_MSV {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_D30: rhs_D30_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_ZU23: RHS_ZU23_MSV {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_Igla: rhs_Igla_AA_pod_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_9M133: rhs_Kornet_9M133_2_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_9k115: rhs_Metis_9k115_2_msv {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_DESERT_Static_AGS30: RHS_AGS30_TriPod_MSV {
		faction = "SFPD_RHS_OPFOR_DESERT_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_DESERT_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	//Woodland
	class SFPD_RHS_OPFOR_WOODLAND_UAZ_open: rhs_uaz_open_MSV_01 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_TIGR_M: rhs_tigr_m_3camo_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_TIGR_STS: rhs_tigr_sts_3camo_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BRDM2_HQ: rhsgref_BRDM2_HQ_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BTR80: rhs_btr80_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BTR80A: rhs_btr80a_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_GAZ: rhs_gaz66_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_GAZ_ammo: rhs_gaz66_ammo_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_GAZ_R142: rhs_gaz66_r142_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Ural: RHS_Ural_MSV_01 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Ural_fuel: RHS_Ural_Fuel_MSV_01 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BM21: RHS_BM21_MSV_01 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Ural_Zu23: RHS_Ural_Zu23_MSV_01 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Ural_Zu234: rhs_zsu234_aa {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BMP3_KA: rhs_bmp3mera_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_T90A: rhs_t90a_tv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
		
		class ACE_SelfActions: ACE_SelfActions {
			class AmmoSelect {
				condition = "(gunner (vehicle _player)) isEqualTo _player";
				displayName = "Ammo Select";
				statement = "[_player] call KAM_fnc_autoloaded;";
			};
		};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_T14: rhs_t14_tv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_9K79: rhs_9k79_B {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_2S3: rhs_2s3_tv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_2S1: rhs_2s1_tv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_PTS: rhs_pts_vmf {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_TIGR: rhs_tigr_3camo_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_UAZ: RHS_UAZ_MSV_01 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BMP1K: rhs_bmp1k_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BMD1: rhs_bmd1 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BMD1PK: rhs_bmd1pk {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BMD2K: rhs_bmd2k {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BMP2K: rhs_bmp2k_vdv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BRM1K: rhs_brm1k_vdv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BMD4MA: rhs_bmd4ma_vdv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_PRP3: rhs_prp3_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BRDM2: rhsgref_BRDM2_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BRDM2_ATGM: rhsgref_BRDM2_ATGM_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_BRDM2_UM: rhsgref_BRDM2UM_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_GAZ_Open: rhs_gaz66o_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Ural_Open: RHS_Ural_Open_MSV_01 {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_bkm_t: rhs_bkm_t {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_KORD_mini: rhs_KORD_MSV {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_KORD: rhs_KORD_high_MSV {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_D30: rhs_D30_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_ZU23: RHS_ZU23_MSV {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_Igla: rhs_Igla_AA_pod_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_9M133: rhs_Kornet_9M133_2_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_9k115: rhs_Metis_9k115_2_msv {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Static_AGS30: RHS_AGS30_TriPod_MSV {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	//Universal
	class SFPD_RHS_OPFOR_MI8: RHS_Mi8MTV3_UPK23_vdv {
		ace_fastroping_enabled = 1;
		
		faction = "SFPD_RHS_OPFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_Pilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		incomingMissileDetectionSystem = 16;
	};
	
	class SFPD_RHS_OPFOR_MI24: rhsgref_mi24g_UPK23 {
		side = 0;
		faction = "SFPD_RHS_OPFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_Pilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		ace_fastroping_enabled = 1;
		incomingMissileDetectionSystem = 16;
	};
	
	class SFPD_RHS_OPFOR_MI28: rhs_mi28n_vvsc {
		side = 0;
		faction = "SFPD_RHS_OPFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_Pilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		incomingMissileDetectionSystem = 16;
	};
	
	class SFPD_RHS_OPFOR_KA52: RHS_Ka52_vvsc {
		side = 0;
		faction = "SFPD_RHS_OPFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_Pilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		incomingMissileDetectionSystem = 16;
	};
	
	class SFPD_RHS_OPFOR_Shirka: O_Plane_Fighter_02_F {
		faction = "SFPD_RHS_OPFOR_Faction";
		scope = 2;
		crew = "SFPD_RHS_OPFOR_Pilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
		
		hiddenSelectionsTextures[] = {
			"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa",
			"a3\air_f_jets\plane_fighter_02\data\fighter_02_fuselage_02_Blue_co.paa",
			"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa",
			"a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa",
			"a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa",
			"a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa"
		};
	};
	
	class SFPD_RHS_OPFOR_TU95MS: RHS_TU95MS_vvs_old {
		faction = "SFPD_RHS_OPFOR_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_Pilot";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	//Winter
	class SFPD_RHS_OPFOR_WINTER_UAZ_open: fsg_uaz_2 {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_UAZ: fsg_uaz_1 {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_TIGR_M: SFPD_RHS_OPFOR_WOODLAND_TIGR_M {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_Rifleman";
		
		hiddenSelectionsTextures[] = {
			"fsg\fsg_vehicles\data\rhs_tigr_co.paa",
			"fsg\fsg_vehicles\data\rhs_tigr_int_01_co.paa",
			"rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
			"fsg\fsg_vehicles\data\tigr_ext_ads_co.paa",
			"rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_TIGR_STS: SFPD_RHS_OPFOR_WOODLAND_TIGR_STS {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_Rifleman";
		
		hiddenSelectionsTextures[] = {
			"fsg\fsg_vehicles\data\rhs_tigr_co.paa",
			"fsg\fsg_vehicles\data\rhs_tigr_int_01_co.paa",
			"rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
			"fsg\fsg_vehicles\data\tigr_ext_ads_co.paa",
			"rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_TIGR: SFPD_RHS_OPFOR_WOODLAND_TIGR {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_Rifleman";
		
		hiddenSelectionsTextures[] = {
			"fsg\fsg_vehicles\data\rhs_tigr_co.paa",
			"fsg\fsg_vehicles\data\rhs_tigr_int_01_co.paa",
			"rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
			"fsg\fsg_vehicles\data\tigr_ext_ads_co.paa",
			"rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_BTR80: fsg_btr_2 {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_BTR80A: fsg_btr_3 {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_TankCrew";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_Ural: fsg_ural_1 {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	class SFPD_RHS_OPFOR_WINTER_Ural_Open: fsg_ural_2 {
		faction = "SFPD_RHS_OPFOR_WINTER_Faction";
		scope = 2;
		scopeCurator = 2;
		crew = "SFPD_RHS_OPFOR_WINTER_Rifleman";
		SFPD_RHS_OPFOR_Transport
	};
	
	//Ammo Box
	//USAF
	class SFPD_RHS_BLUFOR_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD] USAF Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_quikclot,50)
            TRANSPORT_ITEMS(ACE_bodyBag,10)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_salineIV_500,20)
            TRANSPORT_ITEMS(ACE_surgicalKit,2)
            TRANSPORT_ITEMS(ACE_tourniquet,10)
            TRANSPORT_ITEMS(ACE_splint,20)
        };
    };
	
	class SFPD_RHS_BLUFOR_Ammo1: Box_NATO_Ammo_F {
        displayname = "[SFPD] USAF Ammo 1";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_30Rnd_556x45_Mk318_Stanag,50)
            TRANSPORT_MAGAZINES(rhsusf_200rnd_556x45_mixed_box,10)
            TRANSPORT_MAGAZINES(rhsusf_mag_17Rnd_9x19_JHP,20)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_BLUFOR_Ammo2: Box_NATO_Ammo_F {
        displayname = "[SFPD] USAF Ammo 2";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,10)
            TRANSPORT_MAGAZINES(7Rnd_408_Mag,10)
            TRANSPORT_MAGAZINES(rhsusf_5Rnd_300winmag_xm2010,20)
            TRANSPORT_MAGAZINES(rhsusf_100Rnd_762x51_m62_tracer,10)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_BLUFOR_Grenades: Box_NATO_Grenades_F {
        displayname = "[SFPD] USAF Grenades";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,20)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(B_IR_Grenade,2)
            TRANSPORT_MAGAZINES(SmokeShellBlue,5)
            TRANSPORT_MAGAZINES(SmokeShellGreen,5)
            TRANSPORT_MAGAZINES(SmokeShellRed,5)
            TRANSPORT_MAGAZINES(HandGrenade,20)
            TRANSPORT_MAGAZINES(SmokeShell,20)
            TRANSPORT_MAGAZINES(ACE_M84,20)
            TRANSPORT_MAGAZINES(1Rnd_Smoke_Grenade_shell,10)
            TRANSPORT_MAGAZINES(UGL_FlareWhite_F,10)
            TRANSPORT_MAGAZINES(1Rnd_SmokeRed_Grenade_shell,5)
            TRANSPORT_MAGAZINES(1Rnd_SmokeGreen_Grenade_shell,5)
            TRANSPORT_MAGAZINES(1Rnd_SmokeBlue_Grenade_shell,5)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_BLUFOR_Explosives: Box_NATO_AmmoOrd_F {
        displayname = "[SFPD] USAF Explosives";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ACE_VMH3,2)
        };
		class TransportItems {
            TRANSPORT_ITEMS(ACE_DefusalKit,5)
            TRANSPORT_ITEMS(ACE_Clacker,5)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,10)
            TRANSPORT_ITEMS(ATMine_Range_Mag,2)
            TRANSPORT_ITEMS(SatchelCharge_Remote_Mag,2)
            TRANSPORT_ITEMS(ClaymoreDirectionalMine_Remote_Mag,4)
            TRANSPORT_ITEMS(SLAMDirectionalMine_Wire_Mag,4)
        };
    };
	
	class SFPD_RHS_BLUFOR_Launchers1: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] USAF Launchers 1";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_fim92_mag,5)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_fim92,2)
            TRANSPORT_WEAPONS(rhs_weap_M136_hedp,5)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Launchers2: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] USAF Launchers 2";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HE,4)
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HEDP,4)
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HEAT,4)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_maaws_optic,1)
			TRANSPORT_WEAPONS(ACE_Vector,1)
        };
		class TransportItems {};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
		};
    };
	
	class SFPD_RHS_BLUFOR_Launchers3: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] USAF Launchers 3";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_fgm148_magazine_AT,3)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_fgm148,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Equipment: Box_NATO_Equip_F {
        displayname = "[SFPD] USAF Equipment";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(rhsusf_ANPVS_15,10)
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,2)
            TRANSPORT_ITEMS(ToolKit,2)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(rhsusf_acc_M952V,20)
            TRANSPORT_ITEMS(rhsusf_acc_anpeq16a,10)
            TRANSPORT_ITEMS(ACE_wirecutter,2)
            TRANSPORT_ITEMS(optic_NVS,4)
            TRANSPORT_ITEMS(ACE_Tripod,1)
        };
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(rhsusf_falconii_coy,4)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
            TRANSPORT_BACKPACKS(TFAR_rt1523g_bwmod,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_RHS_BLUFOR_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD] USAF Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_M4_Default,8)
            TRANSPORT_WEAPONS(SFPD_RHS_M4_GL_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_M249_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_DESERT_MK11_Default,1)
            TRANSPORT_WEAPONS(SFPD_RHS_WOODLAND_MK11_Default,1)
            TRANSPORT_WEAPONS(SFPD_RHS_Glock17,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Shotgun: Box_NATO_Wps_F {
        displayname = "[SFPD] USAF Shotgun";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhsusf_8Rnd_00Buck,10)
            TRANSPORT_MAGAZINES(rhsusf_8Rnd_Slug,10)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_M590_8RD,1)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Special_Weapons: Box_NATO_WpsSpecial_F {
        displayname = "[SFPD] USAF Special Weapons";
        scope = 2;
		class TransportMagazines {
			TRANSPORT_MAGAZINES(Laserbatteries,1)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_M240_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_DESERT_M2010_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_RHS_WOODLAND_M2010_Silenced,1)
            TRANSPORT_WEAPONS(SFPD_RHS_M4_Spotter,1)
            TRANSPORT_WEAPONS(SFPD_RHS_M200,1)
			TRANSPORT_WEAPONS(Laserdesignator,1)
			TRANSPORT_WEAPONS(ACE_Vector,4)
		};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_Tripod,2)
			TRANSPORT_ITEMS(ACE_SpottingScope,2)
			TRANSPORT_ITEMS(ACE_ATragMX,2)
			TRANSPORT_ITEMS(ACE_RangeCard,8)
			TRANSPORT_ITEMS(ACE_Kestrel4500,4)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_NBC_suits: Land_PlasticCase_01_large_black_CBRN_F {
        displayname = "[SFPD] USAF NBC Suits";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(U_CBRN_A_multicam,10)
		};
		class TransportBackpacks {
			TRANSPORT_BACKPACKS(B_AssaultPack_rgr,10)
		};
    };
	
	class SFPD_RHS_BLUFOR_NBC_masks: Land_PlasticCase_01_medium_black_CBRN_F {
        displayname = "[SFPD] USAF NBC Masks";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(G_CBRN_A_multicam,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_NBC_drugs: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD] USAF NBC Drugs";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_adenosine,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_NBC_detector: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD] USAF NBC Detector";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ChemicalDetector_01_watch_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_Rappeling: Land_PlasticCase_01_medium_black_F {
        displayname = "[SFPD] USAF Rappeling";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(AUR_Rappel_Gear,1)
			TRANSPORT_ITEMS(AUR_Rappel_Rope_10,3)
			TRANSPORT_ITEMS(AUR_Rappel_Rope_20,3)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_BLUFOR_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD] USAF Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_30Rnd_556x45_Mk318_Stanag,50)
            TRANSPORT_MAGAZINES(rhsusf_200rnd_556x45_mixed_box,5)
            TRANSPORT_MAGAZINES(rhsusf_mag_17Rnd_9x19_JHP,10)
            TRANSPORT_MAGAZINES(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,10)
            TRANSPORT_MAGAZINES(rhsusf_100Rnd_762x51_m62_tracer,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(rhs_mag_maaws_HEAT,4)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_maaws_optic,1)
            TRANSPORT_WEAPONS(rhs_weap_M136_hedp,4)
            TRANSPORT_WEAPONS(SFPD_RHS_M4_Default,2)
            TRANSPORT_WEAPONS(SFPD_RHS_M240_Default,1)
		};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_elasticBandage,40)
            TRANSPORT_ITEMS(ACE_quikclot,40)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_salineIV_500,20)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,4)
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(ACE_splint,20)
		};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(rhsusf_falconii_coy,2)
            TRANSPORT_BACKPACKS(B_Carryall_khk,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };
	
	//AFRF
	class SFPD_RHS_OPFOR_Medical: ACE_medicalSupplyCrate_advanced {
        displayname = "[SFPD] AFRF Medical";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_elasticBandage,50)
            TRANSPORT_ITEMS(ACE_quikclot,50)
            TRANSPORT_ITEMS(ACE_bodyBag,10)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_salineIV_500,20)
            TRANSPORT_ITEMS(ACE_surgicalKit,2)
            TRANSPORT_ITEMS(ACE_tourniquet,10)
            TRANSPORT_ITEMS(ACE_splint,20)
        };
    };
	
	class SFPD_RHS_OPFOR_Ammo: Box_NATO_Ammo_F {
        displayname = "[SFPD] AFRF Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_762x39_AK12_Mag_F,50)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Mag_Tracer_F,10)
            TRANSPORT_MAGAZINES(rhs_100Rnd_762x54mmR_green,10)
            TRANSPORT_MAGAZINES(rhs_10Rnd_762x54mmR_7N1,10)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_OPFOR_Grenades: Box_NATO_Grenades_F {
        displayname = "[SFPD] AFRF Grenades";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,20)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(O_IR_Grenade,2)
            TRANSPORT_MAGAZINES(SmokeShellBlue,5)
            TRANSPORT_MAGAZINES(SmokeShellGreen,5)
            TRANSPORT_MAGAZINES(SmokeShellRed,5)
            TRANSPORT_MAGAZINES(HandGrenade,20)
            TRANSPORT_MAGAZINES(SmokeShell,20)
            TRANSPORT_MAGAZINES(ACE_M84,20)
            TRANSPORT_MAGAZINES(1Rnd_Smoke_Grenade_shell,10)
            TRANSPORT_MAGAZINES(UGL_FlareWhite_F,10)
            TRANSPORT_MAGAZINES(1Rnd_SmokeRed_Grenade_shell,5)
            TRANSPORT_MAGAZINES(1Rnd_SmokeGreen_Grenade_shell,5)
            TRANSPORT_MAGAZINES(1Rnd_SmokeBlue_Grenade_shell,5)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_OPFOR_Explosives: Box_NATO_AmmoOrd_F {
        displayname = "[SFPD] AFRF Explosives";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(ACE_VMH3,2)
        };
		class TransportItems {
            TRANSPORT_ITEMS(ACE_DefusalKit,5)
            TRANSPORT_ITEMS(ACE_Clacker,5)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,10)
            TRANSPORT_ITEMS(ATMine_Range_Mag,2)
            TRANSPORT_ITEMS(SatchelCharge_Remote_Mag,2)
            TRANSPORT_ITEMS(ClaymoreDirectionalMine_Remote_Mag,4)
            TRANSPORT_ITEMS(SLAMDirectionalMine_Wire_Mag,4)
        };
    };
	
	class SFPD_RHS_OPFOR_Launchers1: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] AFRF Launchers 1";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_mag_9k38_rocket,5)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_igla,2)
            TRANSPORT_WEAPONS(rhs_weap_rpg26,5)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Launchers2: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] AFRF Launchers 2";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_rpg7_OG7V_mag,5)
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7V_mag,5)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_RPG7,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Launchers3: Box_NATO_WpsLaunch_F {
        displayname = "[SFPD] AFRF Launchers 3";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_rpg7_TBG7V_mag,5)
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7VR_mag,5)
        };
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_RPG7,1)
        };
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Equipment: Box_NATO_Equip_F {
        displayname = "[SFPD] AFRF Equipment";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(rhs_1PN138,10)
            TRANSPORT_ITEMS(rhs_acc_2dpZenit_ris,20)
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,2)
            TRANSPORT_ITEMS(rhsusf_acc_anpeq16a,10)
            TRANSPORT_ITEMS(ToolKit,2)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(ACE_wirecutter,2)
            TRANSPORT_ITEMS(optic_NVS,4)
            TRANSPORT_ITEMS(rhs_acc_1pn93_2,2)
            TRANSPORT_ITEMS(ACE_Tripod,1)
        };
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(rhssaf_kitbag_smb,4)
            TRANSPORT_BACKPACKS(ace_gunbag,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000_rhs,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000_bwmod,2)
            TRANSPORT_BACKPACKS(TFAR_mr3000_bwmod_tropen,2)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1)
		};
    };
	
	class SFPD_RHS_OPFOR_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD] AFRF Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_AK74MR,8)
            TRANSPORT_WEAPONS(SFPD_RHS_AK74MR_GL,2)
            TRANSPORT_WEAPONS(SFPD_RHS_AK_LMG,2)
            TRANSPORT_WEAPONS(SFPD_RHS_PKP,1)
            TRANSPORT_WEAPONS(SFPD_RHS_SVD,2)
            TRANSPORT_WEAPONS(rhs_weap_makarov_pm,8)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_NBC_suits: Land_PlasticCase_01_large_black_CBRN_F {
        displayname = "[SFPD] AFRF NBC Suits";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(U_CBRN_B_green,10)
		};
		class TransportBackpacks {
			TRANSPORT_BACKPACKS(B_AssaultPack_rgr,10)
		};
    };
	
	class SFPD_RHS_OPFOR_NBC_masks: Land_PlasticCase_01_medium_black_CBRN_F {
        displayname = "[SFPD] AFRF NBC Masks";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(G_CBRN_B_green,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_NBC_drugs: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD] AFRF NBC Drugs";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ACE_adenosine,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_NBC_detector: Land_PlasticCase_01_small_black_CBRN_F {
        displayname = "[SFPD] AFRF NBC Detector";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(ChemicalDetector_01_watch_F,10)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_Rappeling: Land_PlasticCase_01_medium_black_F {
        displayname = "[SFPD] AFRF Rappeling";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			TRANSPORT_ITEMS(AUR_Rappel_Gear,1)
			TRANSPORT_ITEMS(AUR_Rappel_Rope_10,3)
			TRANSPORT_ITEMS(AUR_Rappel_Rope_20,3)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_OPFOR_BOX_Cargo: B_CargoNet_01_ammo_F {
        displayname = "[SFPD] AFRF Cargo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(30Rnd_762x39_AK12_Mag_F,50)
            TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Mag_Tracer_F,10)
            TRANSPORT_MAGAZINES(rhs_100Rnd_762x54mmR_green,10)
            TRANSPORT_MAGAZINES(rhs_mag_9x18_8_57N181S,10)
            TRANSPORT_MAGAZINES(rhs_10Rnd_762x54mmR_7N1,10)
            TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,10)
            TRANSPORT_MAGAZINES(ACE_M14,4)
            TRANSPORT_MAGAZINES(SmokeShellBlue,3)
            TRANSPORT_MAGAZINES(HandGrenade,15)
            TRANSPORT_MAGAZINES(SmokeShell,15)
            TRANSPORT_MAGAZINES(ACE_M84,15)
            TRANSPORT_MAGAZINES(rhs_rpg7_OG7V_mag,4)
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7V_mag,4)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(SFPD_RHS_RPG7,1)
            TRANSPORT_WEAPONS(rhs_weap_rpg26,4)
            TRANSPORT_WEAPONS(SFPD_RHS_AK74MR,2)
            TRANSPORT_WEAPONS(SFPD_RHS_PKP,1)
		};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_elasticBandage,40)
            TRANSPORT_ITEMS(ACE_quikclot,40)
            TRANSPORT_ITEMS(ACE_epinephrine,10)
            TRANSPORT_ITEMS(ACE_morphine,10)
            TRANSPORT_ITEMS(ACE_salineIV_500,20)
            TRANSPORT_ITEMS(DemoCharge_Remote_Mag,4)
            TRANSPORT_ITEMS(ACE_CableTie,10)
            TRANSPORT_ITEMS(ACE_EntrenchingTool,1)
            TRANSPORT_ITEMS(ACE_UAVBattery,2)
            TRANSPORT_ITEMS(ACE_wirecutter,1)
            TRANSPORT_ITEMS(ACE_splint,20)
		};
		class TransportBackpacks {
            TRANSPORT_BACKPACKS(rhssaf_kitbag_smb,4)
            TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,2)
		};
    };
	
	// INDEP
	class SFPD_RHS_INDEP_Ammo: Box_Syndicate_Ammo_F {
        displayname = "[SFPD] Insurgents Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhssaf_30Rnd_762x39mm_M67,30)
            TRANSPORT_MAGAZINES(rhs_30Rnd_762x39mm,30)
            TRANSPORT_MAGAZINES(rhs_100Rnd_762x54mmR_green,10)
            TRANSPORT_MAGAZINES(rhsgref_5Rnd_762x54_m38,20)
            TRANSPORT_MAGAZINES(rhs_mag_9x18_8_57N181S,10)
		};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_INDEP_Weapons: Box_Syndicate_Wps_F {
        displayname = "[SFPD] Insurgents Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_akms,5)
            TRANSPORT_WEAPONS(rhs_weap_m70b1,5)
            TRANSPORT_WEAPONS(rhs_weap_m84,1)
            TRANSPORT_WEAPONS(rhs_weap_m38_rail,2)
            TRANSPORT_WEAPONS(rhs_weap_makarov_pm,5)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_INDEP_Explosives: Box_IED_Exp_F {
        displayname = "[SFPD] Insurgents Explosives";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_Cellphone,4)
            TRANSPORT_ITEMS(ACE_DeadManSwitch,4)
            TRANSPORT_ITEMS(IEDLandBig_Remote_Mag,5)
            TRANSPORT_ITEMS(IEDUrbanBig_Remote_Mag,5)
            TRANSPORT_ITEMS(IEDLandSmall_Remote_Mag,5)
            TRANSPORT_ITEMS(IEDUrbanSmall_Remote_Mag,5)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_INDEP_Launchers: Box_Syndicate_WpsLaunch_F {
        displayname = "[SFPD] Insurgents Launchers";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7V_mag,15)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_rpg7,3)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
};

class cfgWeapons {
	class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    // Tripods:
    class ace_csw_m3CarryTripod: Launcher_Base_F {//US MG
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
    class ace_csw_m3CarryTripodLow: ace_csw_m3CarryTripod {//US MG
		
    };

    class ace_csw_kordCarryTripod: Launcher_Base_F {//RU MG
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class ace_csw_kordCarryTripodLow: ace_csw_kordCarryTripod {//RU MG
		
    };

    class ace_csw_m220CarryTripod: Launcher_Base_F {//TOW
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class ace_csw_spg9CarryTripod: Launcher_Base_F {//SPG9
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class ace_csw_carryMortarBaseplate: Launcher_Base_F {//MORT
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    // Weapons:
    class ace_csw_staticMortarCarry: Launcher_Base_F {//MORT
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 220;
        };
    };
	
	// usf3
	class ace_compat_rhs_usf3_m2_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };

    class ace_compat_rhs_usf3_tow_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };
	
	//afrf3
	class ace_compat_rhs_afrf3_nsv_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };

    class ace_compat_rhs_afrf3_kord_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };

    class ace_compat_rhs_afrf3_spg9_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };

    class ace_compat_rhs_afrf3_metis_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };

    class ace_compat_rhs_afrf3_kornet_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };
	
	//gref3
	class ace_compat_rhs_gref3_dshkm_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 220;
        };
    };
	
	class rhs_weap_m4a1;
	class rhs_weap_m4a1_m320;
	class rhs_weap_m249_pip_L;
	class rhs_weap_sr25_ec_d;
	class rhs_weap_sr25_ec_wd;
	class rhs_weap_sr25_ec;
	class rhs_weap_XM2010_d;
	class rhs_weap_XM2010_wd;
	class rhs_weap_XM2010;
	class rhs_weap_m240B;
	class srifle_LRR_F;
	class rhsusf_weap_glock17g4;
	class rhs_weap_hk416d10_LMT_d;
	//Uniforms
	class UniformItem;
	class rhs_uniform_FROG01_d;
	class rhs_uniform_FROG01_wd;
	class rhs_uniform_cu_ucp;
	class rhs_uniform_mflora_patchless;
	class rhs_uniform_msv_emr;
	
	class SFPD_RHS_BLUFOR_DESERT_Medic_Uniform : rhs_uniform_FROG01_d {
		displayName = "FROG MARPAT-D Medic";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_BLUFOR_DESERT_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_RHS_BLUFOR_WOODLAND_Medic_Uniform : rhs_uniform_FROG01_wd {
		displayName = "FROG MARPAT-WD Medic";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_BLUFOR_WOODLAND_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_RHS_BLUFOR_WINTER_Medic_Uniform : rhs_uniform_cu_ucp {
		displayName = "Combat Uniform UCP Medic";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_BLUFOR_WINTER_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_RHS_OPFOR_DESERT_Medic_Uniform : rhs_uniform_mflora_patchless {
		displayName = "Mountain Flora Medic";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_OPFOR_DESERT_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_RHS_OPFOR_WOODLAND_Medic_Uniform : rhs_uniform_msv_emr {
		displayName = "EMR-Summer Medic (MSV)";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_OPFOR_WOODLAND_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	//Weapon
	class SFPD_RHS_M4_Default: rhs_weap_m4a1 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
            /*class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_nt4_black";
			};*/
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
        };
    };
	
	class SFPD_RHS_Glock17: rhsusf_weap_glock17g4 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
        };
    };
	
	class SFPD_RHS_M4_GL_Default: rhs_weap_m4a1_m320 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
        };
    };
	
	class SFPD_RHS_M249_Default: rhs_weap_m249_pip_L {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
        };
    };
	
	class SFPD_RHS_DESERT_MK11_Default: rhs_weap_sr25_ec_d {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_AMS";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
        };
    };
	
	class SFPD_RHS_WOODLAND_MK11_Default: rhs_weap_sr25_ec_wd {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_AMS";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
        };
    };
	
	class SFPD_RHS_WINTER_MK11_Default: rhs_weap_sr25_ec {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_AMS";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
        };
    };
	
	class SFPD_RHS_M240_Default: rhs_weap_m240B {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";//rhsusf_acc_ELCAN
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
        };
    };
	
	class SFPD_RHS_DESERT_M2010_Silenced: rhs_weap_XM2010_d {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_AMS";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_M2010S_d";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
        };
    };
	
	class SFPD_RHS_WOODLAND_M2010_Silenced: rhs_weap_XM2010_wd {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_AMS";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_M2010S_wd";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
        };
    };
	
	class SFPD_RHS_WINTER_M2010_Silenced: rhs_weap_XM2010 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_AMS";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_M2010S_wd";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
        };
    };
	
	class SFPD_RHS_M4_Silenced: rhs_weap_m4a1 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_nt4_black";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
        };
    };
	
	class SFPD_RHS_M4_GL_Silenced: rhs_weap_m4a1_m320 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_nt4_black";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
        };
    };
	
	class SFPD_RHS_M249_Silenced: rhs_weap_m249_pip_L {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_nt4_black";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
        };
    };
	
	class SFPD_RHS_M4_Spotter: rhs_weap_m4a1 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_nt4_black";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
        };
    };
	
	class SFPD_RHS_M200: srifle_LRR_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
        };
    };
	
	class SFPD_RHS_Glock17_Silenced: rhsusf_weap_glock17g4 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhsusf_acc_omega9k";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
        };
    };
	
	class SFPD_RHS_HK416_ION: rhs_weap_hk416d10_LMT_d {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552_d";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_M952V";
			};
        };
    };
	
	//AFRF
	class arifle_AK12_F;
	class arifle_AK12_GL_F;
	class arifle_RPK12_F;
	class rhs_weap_pkp;
	class rhs_weap_asval_grip;
	class rhs_weap_t5000;
	class srifle_GM6_camo_F;
	class srifle_GM6_ghex_F;
	class srifle_GM6_F;
	class rhs_weap_svdp_wd_npz;
	class rhs_weap_rpg7;
	class rhs_weap_svdp_npz;
	
	class SFPD_RHS_AK74MR: arifle_AK12_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhs_acc_2dpZenit_ris";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhs_acc_harris_swivel";
			};
        };
    };
	
	class SFPD_RHS_AK74MR_GL: arifle_AK12_GL_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhs_acc_2dpZenit_ris";
			};
        };
    };
	
	class SFPD_RHS_AK_LMG: arifle_RPK12_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Arco_AK_blk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhs_acc_2dpZenit_ris";
			};
        };
    };
	
	class SFPD_RHS_PKP: rhs_weap_pkp {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhs_acc_1p78";
			};
        };
    };
	
	class SFPD_RHS_AK74MR_Silenced: arifle_AK12_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhs_acc_harris_swivel";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
        };
    };
	
	class SFPD_RHS_AK74MR_GL_Silenced: arifle_AK12_GL_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
        };
    };
	
	class SFPD_RHS_AK_LMG_Silenced: arifle_RPK12_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Arco_AK_blk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq16a";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
        };
    };
	
	class SFPD_RHS_ASVAL: rhs_weap_asval_grip {
        scope = 1;
        class LinkedItems {
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhs_acc_perst1ik_ris";
			};
        };
    };
	
	class SFPD_RHS_T5000: rhs_weap_t5000 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
            class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "rhs_acc_harris_swivel";
			};
        };
    };
	
	class SFPD_RHS_LYNX_DESERT: srifle_GM6_camo_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
        };
    };
	
	class SFPD_RHS_LYNX_JUNGLE: srifle_GM6_ghex_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
        };
    };
	
	class SFPD_RHS_LYNX_Black: srifle_GM6_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
        };
    };
	
	class SFPD_RHS_SVD: rhs_weap_svdp_wd_npz {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
        };
    };
	
	class SFPD_RHS_SVD_Silenced: rhs_weap_svdp_wd_npz {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhs_acc_tgpv2";
			};
        };
    };
	
	class SFPD_RHS_SVD_Black: rhs_weap_svdp_npz {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
        };
    };
	
	class SFPD_RHS_SVD_Black_Silenced: rhs_weap_svdp_npz {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
            class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "rhs_acc_tgpv2";
			};
        };
    };
	
	class SFPD_RHS_RPG7: rhs_weap_rpg7 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "rhs_acc_pgo7v3";
			};
        };
    };
	
	//INDEP
	class rhs_weap_m70b1;
	class rhs_weap_m38_rail;
	class rhs_weap_akms;
	
	class SFPD_RHS_AKM: rhs_weap_m70b1 {
        scope = 1;
        class LinkedItems {
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhs_acc_2dpZenit";
			};
        };
    };
	
	class SFPD_RHS_M38: rhs_weap_m38_rail {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_KHS_old";
			};
        };
    };
	
	class SFPD_RHS_AKMS: rhs_weap_akms {
        scope = 1;
        class LinkedItems {
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "rhs_acc_2dpZenit";
			};
        };
    };
	
	//uniform
	class Uniform_Base;
	class U_B_FullGhillie_lsh;
	
	class fsg_gorka_snw: Uniform_Base {
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "fsg_gorka_base_snw";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class U_B_FullGhillie_Snow: U_B_FullGhillie_lsh {
		scope=2;
		displayName="Full Ghillie (Snow)";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\SFPD_RHS_Units\ghillie_coverall_snow.paa","\SFPD_RHS_Units\fullghillie_camo_snow.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_BLUFOR_WINTER_Sniper";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	
	class U_O_FullGhillie_Snow: U_B_FullGhillie_lsh {
		scope=2;
		displayName="Full Ghillie (Snow)";
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"\SFPD_RHS_Units\ghillie_coverall_snow.paa","\SFPD_RHS_Units\fullghillie_camo_snow.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_OPFOR_WINTER_Sniper";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	
	//helmet
	class rhsusf_opscore_01;
	class rhsusf_ihadss: rhsusf_opscore_01 {
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	
	// NBC
	class U_CBRN_A_multicam: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_A_woodland: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_B_black: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_B_blue: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_B_green: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_C_blue: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_C_orange: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_C_red: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_C_white: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_C_yellow: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_DLC_bluegreen: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_DLC_cyan: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_DLC_orange: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
	class U_CBRN_DLC_yellow: Uniform_Base {
		CBRN_protectionLevel = 8;
	};
};

class cfgGroups {
	class West {
		name = "BLUFOR";
		side = 1;
		class SFPD_RHS_BLUFOR_DESERT_Faction {
			name = "[SFPD] US (Desert)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_BLUFOR_DESERT_GROUP_FT {
					name = "Fire Team";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_AT_M136";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_RHS_BLUFOR_DESERT_GROUP_SQUAD {
					name = "Squad";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Grenadier";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_AT_M136";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
					
				};
				class SFPD_RHS_BLUFOR_DESERT_GROUP_Patrol {
					name = "Patrol";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_RHS_BLUFOR_DESERT_GROUP_SFT {
					name = "Special Forces Team";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_DESERT_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
		
		class SFPD_RHS_BLUFOR_WOODLAND_Faction {
			name = "[SFPD] US (Woodland)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_BLUFOR_WOODLAND_GROUP_FT {
					name = "Fire Team";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_AT_M136";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_RHS_BLUFOR_WOODLAND_GROUP_SQUAD {
					name = "Squad";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Grenadier";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_AT_M136";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
					
				};
				class SFPD_RHS_BLUFOR_WOODLAND_GROUP_Patrol {
					name = "Patrol";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_RHS_BLUFOR_WOODLAND_GROUP_SFT {
					name = "Special Forces Team";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WOODLAND_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
		
		class SFPD_RHS_BLUFOR_WINTER_Faction {
			name = "[SFPD] US (Winter)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_BLUFOR_WINTER_GROUP_FT {
					name = "Fire Team";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_AT_M136";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_RHS_BLUFOR_WINTER_GROUP_SQUAD {
					name = "Squad";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Grenadier";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_AT_M136";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
					
				};
				class SFPD_RHS_BLUFOR_WINTER_GROUP_Patrol {
					name = "Patrol";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_RHS_BLUFOR_WINTER_GROUP_SFT {
					name = "Special Forces Team";
					side = 1;
					faction = "SFPD_RHS_BLUFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_RHS_BLUFOR_WINTER_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
	};
	
	class East {
		name = "OPFOR";
		side = 0;
		class SFPD_RHS_OPFOR_DESERT_Faction {
			name = "[SFPD] RU (Desert)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_OPFOR_DESERT_GROUP_FT {
					name = "Fire Team";
					side = 0;
					faction = "SFPD_RHS_OPFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_OPFOR_DESERT_GROUP_SQUAD {
					name = "Squad";
					side = 0;
					faction = "SFPD_RHS_OPFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Grenadier";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_AT";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_RHS_OPFOR_DESERT_GROUP_Patrol {
					name = "Patrol";
					side = 0;
					faction = "SFPD_RHS_OPFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_RHS_OPFOR_DESERT_GROUP_SFT {
					name = "Special Forces Team";
					side = 0;
					faction = "SFPD_RHS_OPFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_DESERT_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
		
		class SFPD_RHS_OPFOR_WOODLAND_Faction {
			name = "[SFPD] RU (Woodland)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_OPFOR_WOODLAND_GROUP_FT {
					name = "Fire Team";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_OPFOR_WOODLAND_GROUP_SQUAD {
					name = "Squad";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Grenadier";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_RHS_OPFOR_WOODLAND_GROUP_Patrol {
					name = "Patrol";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_RHS_OPFOR_WOODLAND_GROUP_SFT {
					name = "Special Forces Team";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WOODLAND_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
		
		class SFPD_RHS_OPFOR_WINTER_Faction {
			name = "[SFPD] RU (Winter)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_OPFOR_WINTER_GROUP_FT {
					name = "Fire Team";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_OPFOR_WINTER_GROUP_SQUAD {
					name = "Squad";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Grenadier";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_AT";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Rifleman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_RHS_OPFOR_WINTER_GROUP_Patrol {
					name = "Patrol";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_RHS_OPFOR_WINTER_GROUP_SFT {
					name = "Special Forces Team";
					side = 0;
					faction = "SFPD_RHS_OPFOR_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 0;
						vehicle = "SFPD_RHS_OPFOR_WINTER_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
	};
	
	class Indep {
		name = "Independent";
		side = 2;
		class SFPD_RHS_INDEP_DESERT_Faction {
			name = "[SFPD] Insurgents (Desert)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_INDEP_DESERT_GROUP_FT {
					name = "Fire Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_3";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_2";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_AT";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_MG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_INDEP_DESERT_GROUP_RT {
					name = "Rifle Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_2";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_3";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_4";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_INDEP_DESERT_GROUP_SQUAD {
					name = "Squad";
					side = 2;
					faction = "SFPD_RHS_INDEP_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_3";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_MG";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Marksman";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_2";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_3";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_4";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_Rifleman_1";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
			};
		};
		
		class SFPD_RHS_INDEP_WOODLAND_Faction {
			name = "[SFPD] Insurgents (Woodland)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_INDEP_WOODLAND_GROUP_FT {
					name = "Fire Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_2";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_MG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_INDEP_WOODLAND_GROUP_RT {
					name = "Rifle Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_2";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_4";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_INDEP_WOODLAND_GROUP_SQUAD {
					name = "Squad";
					side = 2;
					faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_MG";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Marksman";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_2";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_3";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_4";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WOODLAND_Rifleman_1";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
			};
		};
		
		class SFPD_RHS_INDEP_WINTER_Faction {
			name = "[SFPD] Insurgents (Winter)";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_INDEP_WINTER_GROUP_FT {
					name = "Fire Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_3";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_2";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_AT";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_MG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_INDEP_WINTER_GROUP_RT {
					name = "Rifle Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_2";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_3";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_4";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				
				class SFPD_RHS_INDEP_WINTER_GROUP_SQUAD {
					name = "Squad";
					side = 2;
					faction = "SFPD_RHS_INDEP_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_3";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_MG";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Marksman";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_2";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_3";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTER_Rifleman_4";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "SFPD_RHS_INDEP_WINTEr_Rifleman_1";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
			};
		};
	};
};

class RscTitles {
	class RscPicture;
	class RscHcamDialog {
		idd = -1;
		onLoad = "_this call KAM_fnc_hcam_onLoad";
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		duration = 99999999;
		fadein = 0;
		fadeout = 0;
		class controls { 
			class RscHcamBack: RscPicture {
				idc = 2;
				type = 0;
				style = 48;
				text = "SFPD_RHS_Units\hcam\back.paa";
				x = 0.78 * safezoneW + safezoneX;
				y = 0.67 * safezoneH + safezoneY;
				w = 0.22 * safezoneW;
				h = 0.17 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0, 0, 0, 0};
				font = "TahomaB";
					sizeEx = 0;
					lineSpacing = 0;
					fixedWidth = 0;
					shadow = 0;
			};
			class RscHcamCam: RscPicture {
				idc = 0;
				type = 0;
				style = 48;
				text = "";
				x = 0.80 * safezoneW + safezoneX;
				y = 0.68 * safezoneH + safezoneY;
				w = 0.18 * safezoneW;
				h = 0.15 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0, 0, 0, 0.3};
				font = "TahomaB";
					sizeEx = 0;
					lineSpacing = 0;
					fixedWidth = 0;
					shadow = 0;
			};
			class HcamText
			{
				idc = 1;
				type  = 0;
				style = 0x01;
				x = 0.80 * safezoneW + safezoneX;
				y = 0.81 * safezoneH + safezoneY;
				w = 0.18 * safezoneW;
				h = 0.02 * safezoneH;
				colorText[]       = {0,0,0,0.75};
				colorBackground[] = {1, 1, 1, 0.2};
				font = "TahomaB";
					sizeEx = 0.02;
					text="";
			};
			
			class RscHcamFront: RscPicture {
				idc = 3;
				type = 0;
				style = 48;
				text = "SFPD_RHS_Units\hcam\front.paa";
				x = 0.80 * safezoneW + safezoneX;
				y = 0.68 * safezoneH + safezoneY;
				w = 0.18 * safezoneW;
				h = 0.15 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0, 0, 0, 0};
				font = "TahomaB";
					sizeEx = 0;
					lineSpacing = 0;
					fixedWidth = 0;
					shadow = 0;
			};		
		};
	};
};