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

#define BASIC_GRENS "HandGrenade","HandGrenade",THREE_TIMES(ACE_M84),FOUR_TIMES(SmokeShell)

#define BASIC_LINKED_BLUE "ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"

#define BASIC_LINKED_RED "ItemMap","ItemCompass","ItemWatch","TFAR_fadak"

#define BASIC_LINKED_GREEN "ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem"

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

#define SFPD_BLUFOR_DESERT_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_mag,16) \
		TRANSPORT_MAGAZINES(200Rnd_556x45_Box_Tracer_Red_F,3) \
		TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(MRAWS_HEAT_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_MRAWS_sand_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_AssaultPack_mcamo,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_BLUFOR_WOODLAND_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_khaki_mag,16) \
		TRANSPORT_MAGAZINES(200Rnd_556x45_Box_Tracer_Red_F,3) \
		TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(MRAWS_HEAT_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_MRAWS_green_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_AssaultPack_wdl_F,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_BLUFOR_JUNGLE_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_556x45_Stanag_red,20) \
		TRANSPORT_MAGAZINES(150Rnd_556x45_Drum_Mag_Tracer_F,4) \
		TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(MRAWS_HEAT_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_MRAWS_green_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_AssaultPack_tna_F,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_OPFOR_DESERT_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_green,16) \
		TRANSPORT_MAGAZINES(150Rnd_762x54_Box_Tracer,6) \
		TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(RPG32_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_RPG32_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_FieldPack_ocamo,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_OPFOR_WOODLAND_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30rnd_762x39_AK12_Lush_Mag_F,20) \
		TRANSPORT_MAGAZINES(75rnd_762x39_AK12_Lush_Mag_Tracer_F,8) \
		TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(RPG32_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_RPG32_green_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_FieldPack_taiga_F,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_OPFOR_JUNGLE_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_580x42_Mag_F,20) \
		TRANSPORT_MAGAZINES(100Rnd_580x42_Mag_Tracer_F,4) \
		TRANSPORT_MAGAZINES(16Rnd_9x21_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(RPG32_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_RPG32_ghex_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_FieldPack_ghex_F,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_AAF_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_556x45_Stanag,20) \
		TRANSPORT_MAGAZINES(200Rnd_65x39_cased_Box_Tracer,4) \
		TRANSPORT_MAGAZINES(9Rnd_45ACP_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(6Rnd_12Gauge_Pellets,5) \
		TRANSPORT_MAGAZINES(6Rnd_12Gauge_Slug,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(MRAWS_HEAT_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_MRAWS_green_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_AssaultPack_eaf_F,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};
	
#define SFPD_LDF_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(30Rnd_65x39_caseless_msbs_mag,16) \
		TRANSPORT_MAGAZINES(200Rnd_65x39_cased_Box_Tracer,4) \
		TRANSPORT_MAGAZINES(9Rnd_45ACP_Mag,5) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
		TRANSPORT_MAGAZINES(MRAWS_HEAT_F,2) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(launch_MRAWS_green_F,1) \
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
		TRANSPORT_ITEMS(acc_flashlight,5) \
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_AssaultPack_dgtl,2) \
		TRANSPORT_BACKPACKS(ACE_TacticalLadder_Pack,1) \
	};

//RHS

#define SFPD_RHS_BLUFOR_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(rhs_mag_30Rnd_556x45_Mk318_Stanag,10) \
		TRANSPORT_MAGAZINES(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,3) \
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
	
#define SFPD_RHS_SAV_Transport \
	class TransportMagazines { \
		TRANSPORT_MAGAZINES(rhssaf_30rnd_556x45_EPR_G36,10) \
		TRANSPORT_MAGAZINES(SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,3) \
		TRANSPORT_MAGAZINES(1Rnd_HE_Grenade_shell,5) \
		TRANSPORT_MAGAZINES(SmokeShellBlue,1) \
		TRANSPORT_MAGAZINES(SmokeShellGreen,1) \
		TRANSPORT_MAGAZINES(SmokeShellRed,1) \
		TRANSPORT_MAGAZINES(HandGrenade,5) \
		TRANSPORT_MAGAZINES(SmokeShell,5) \
		TRANSPORT_MAGAZINES(ACE_M84,5) \
	}; \
	class TransportWeapons { \
		TRANSPORT_WEAPONS(rhs_weap_rpg75,1) \
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
		TRANSPORT_ITEMS(ToolKit,1) \
		TRANSPORT_ITEMS(ACE_wirecutter,1) \
		TRANSPORT_ITEMS(ACE_EarPlugs,10) \
		TRANSPORT_ITEMS(ACE_splint,10) \
	}; \
	class TransportBackpacks { \
		TRANSPORT_BACKPACKS(B_Kitbag_rgr,2) \
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
	
#define BRDM_HIT_POINTS \
		class HitPoints: HitPoints { \
			class HitLBWheel { \
				armor = 0.2; \
				explosionShielding = 4; \
				material = -1; \
				name = "wheel_1_4_steering"; \
				passThrough = 0.3; \
				visual = "-"; \
			}; \
			class HitLF2Wheel { \
				armor = 0.2; \
				armorComponent = "wheel_1_2_hide"; \
				explosionShielding = 1; \
				material = -1; \
				name = "wheel_1_2_steering"; \
				passThrough = 0.3; \
				radius = 0.3; \
				visual = "-"; \
			}; \
			class HitLFWheel { \
				armor = 0.2; \
				armorComponent = "wheel_1_1_hide"; \
				explosionShielding = 1; \
				material = -1; \
				name = "wheel_1_1_steering"; \
				passThrough = 0.3; \
				radius = 0.3; \
				visual = "-"; \
			}; \
			class HitRBWheel { \
				armor = 0.2; \
				explosionShielding = 4; \
				material = -1; \
				name = "wheel_2_4_steering"; \
				passThrough = 0.3; \
				visual = "-"; \
			}; \
			class HitRF2Wheel { \
				armor = 0.2; \
				armorComponent = "wheel_2_2_hide"; \
				explosionShielding = 1; \
				material = -1; \
				name = "wheel_2_2_steering"; \
				passThrough = 0.3; \
				radius = 0.3; \
				visual = "-"; \
			}; \
			class HitRFWheel { \
				armor = 0.2; \
				armorComponent = "wheel_2_1_hide"; \
				explosionShielding = 1; \
				material = -1; \
				name = "wheel_2_1_steering"; \
				passThrough = 0.3; \
				radius = 0.3; \
				visual = "-"; \
			}; \
		};


class CfgPatches {
    class SFPD_RHS_Units  {
        units[] = {
			"SFPD_BLUFOR_DESERT_Rifleman",
			"SFPD_BLUFOR_DESERT_NBC_Mask",
			"SFPD_BLUFOR_DESERT_NBC_Suit",
			"SFPD_BLUFOR_DESERT_Rifleman_light",
			"SFPD_BLUFOR_DESERT_Unequiped",
			"SFPD_BLUFOR_DESERT_Grenadier",
			"SFPD_BLUFOR_DESERT_AT",
			"SFPD_BLUFOR_DESERT_AT_Heavy",
			"SFPD_BLUFOR_DESERT_LMG",
			"SFPD_BLUFOR_DESERT_Leader",
			"SFPD_BLUFOR_DESERT_Marksman",
			"SFPD_BLUFOR_DESERT_Sharpshooter",
			"SFPD_BLUFOR_DESERT_Medic",
			"SFPD_BLUFOR_DESERT_Ammo",
			"SFPD_BLUFOR_DESERT_Assaulter",
			"SFPD_BLUFOR_DESERT_EOD",
			"SFPD_BLUFOR_DESERT_JTAC",
			"SFPD_BLUFOR_DESERT_MMG",
			"SFPD_BLUFOR_DESERT_MMGAss",
			"SFPD_BLUFOR_DESERT_Logistician",
			"SFPD_BLUFOR_DESERT_TITAN_AT",
			"SFPD_BLUFOR_DESERT_TITAN_AA",
			"SFPD_BLUFOR_DESERT_Commandant",
			"SFPD_BLUFOR_DESERT_Recon",
			"SFPD_BLUFOR_DESERT_Recon_Rifle",
			"SFPD_BLUFOR_DESERT_Spotter",
			"SFPD_BLUFOR_DESERT_Sniper",
			"SFPD_BLUFOR_DESERT_SF",
			"SFPD_BLUFOR_DESERT_SF_Leader",
			"SFPD_BLUFOR_DESERT_SF_Grenadier",
			"SFPD_BLUFOR_DESERT_SF_AT",
			"SFPD_BLUFOR_DESERT_SF_LMG",
			"SFPD_BLUFOR_DESERT_TankCrew",
			"SFPD_BLUFOR_WOODLAND_Rifleman",
			"SFPD_BLUFOR_WOODLAND_NBC_Mask",
			"SFPD_BLUFOR_WOODLAND_NBC_Suit",
			"SFPD_BLUFOR_WOODLAND_Rifleman_light",
			"SFPD_BLUFOR_WOODLAND_Unequiped",
			"SFPD_BLUFOR_WOODLAND_Grenadier",
			"SFPD_BLUFOR_WOODLAND_AT",
			"SFPD_BLUFOR_WOODLAND_AT_Heavy",
			"SFPD_BLUFOR_WOODLAND_LMG",
			"SFPD_BLUFOR_WOODLAND_Leader",
			"SFPD_BLUFOR_WOODLAND_Marksman",
			"SFPD_BLUFOR_WOODLAND_Sharpshooter",
			"SFPD_BLUFOR_WOODLAND_Medic",
			"SFPD_BLUFOR_WOODLAND_Ammo",
			"SFPD_BLUFOR_WOODLAND_Assaulter",
			"SFPD_BLUFOR_WOODLAND_EOD",
			"SFPD_BLUFOR_WOODLAND_JTAC",
			"SFPD_BLUFOR_WOODLAND_MMG",
			"SFPD_BLUFOR_WOODLAND_MMGAss",
			"SFPD_BLUFOR_WOODLAND_Logistician",
			"SFPD_BLUFOR_WOODLAND_TITAN_AT",
			"SFPD_BLUFOR_WOODLAND_TITAN_AA",
			"SFPD_BLUFOR_WOODLAND_Commandant",
			"SFPD_BLUFOR_WOODLAND_Recon",
			"SFPD_BLUFOR_WOODLAND_Recon_Rifle",
			"SFPD_BLUFOR_WOODLAND_Spotter",
			"SFPD_BLUFOR_WOODLAND_Sniper",
			"SFPD_BLUFOR_WOODLAND_SF",
			"SFPD_BLUFOR_WOODLAND_SF_Leader",
			"SFPD_BLUFOR_WOODLAND_SF_Grenadier",
			"SFPD_BLUFOR_WOODLAND_SF_AT",
			"SFPD_BLUFOR_WOODLAND_SF_LMG",
			"SFPD_BLUFOR_WOODLAND_TankCrew",
			"SFPD_BLUFOR_JUNGLE_Rifleman",
			"SFPD_BLUFOR_JUNGLE_NBC_Mask",
			"SFPD_BLUFOR_JUNGLE_NBC_Suit",
			"SFPD_BLUFOR_JUNGLE_Rifleman_light",
			"SFPD_BLUFOR_JUNGLE_Unequiped",
			"SFPD_BLUFOR_JUNGLE_Grenadier",
			"SFPD_BLUFOR_JUNGLE_AT",
			"SFPD_BLUFOR_JUNGLE_AT_Heavy",
			"SFPD_BLUFOR_JUNGLE_LMG",
			"SFPD_BLUFOR_JUNGLE_Leader",
			"SFPD_BLUFOR_JUNGLE_Marksman",
			"SFPD_BLUFOR_JUNGLE_Sharpshooter",
			"SFPD_BLUFOR_JUNGLE_Medic",
			"SFPD_BLUFOR_JUNGLE_Ammo",
			"SFPD_BLUFOR_JUNGLE_Assaulter",
			"SFPD_BLUFOR_JUNGLE_EOD",
			"SFPD_BLUFOR_JUNGLE_JTAC",
			"SFPD_BLUFOR_JUNGLE_MMG",
			"SFPD_BLUFOR_JUNGLE_MMGAss",
			"SFPD_BLUFOR_JUNGLE_Logistician",
			"SFPD_BLUFOR_JUNGLE_TITAN_AT",
			"SFPD_BLUFOR_JUNGLE_TITAN_AA",
			"SFPD_BLUFOR_JUNGLE_Commandant",
			"SFPD_BLUFOR_JUNGLE_Recon",
			"SFPD_BLUFOR_JUNGLE_Recon_Rifle",
			"SFPD_BLUFOR_JUNGLE_Spotter",
			"SFPD_BLUFOR_JUNGLE_Sniper",
			"SFPD_BLUFOR_JUNGLE_SF",
			"SFPD_BLUFOR_JUNGLE_SF_Leader",
			"SFPD_BLUFOR_JUNGLE_SF_Grenadier",
			"SFPD_BLUFOR_JUNGLE_SF_AT",
			"SFPD_BLUFOR_JUNGLE_SF_LMG",
			"SFPD_BLUFOR_JUNGLE_TankCrew",
			"SFPD_BLUFOR_Diver",
			"SFPD_BLUFOR_HelicopterPilot",
			"SFPD_BLUFOR_PlanePilot",
			"SFPD_BLUFOR_SpecOps",
			"SFPD_BLUFOR_Colonel",
			"SFPD_OPFOR_DESERT_Rifleman",
			"SFPD_OPFOR_DESERT_NBC_Mask",
			"SFPD_OPFOR_DESERT_NBC_Suit",
			"SFPD_OPFOR_DESERT_Rifleman_light",
			"SFPD_OPFOR_DESERT_Grenadier",
			"SFPD_OPFOR_DESERT_AT",
			"SFPD_OPFOR_DESERT_AT_Heavy",
			"SFPD_OPFOR_DESERT_LMG",
			"SFPD_OPFOR_DESERT_Leader",
			"SFPD_OPFOR_DESERT_Marksman",
			"SFPD_OPFOR_DESERT_Sharpshooter",
			"SFPD_OPFOR_DESERT_Medic",
			"SFPD_OPFOR_DESERT_JTAC",
			"SFPD_OPFOR_DESERT_MMG",
			"SFPD_OPFOR_DESERT_MMGAss",
			"SFPD_OPFOR_DESERT_TITAN_AT",
			"SFPD_OPFOR_DESERT_TITAN_AA",
			"SFPD_OPFOR_DESERT_Commandant",
			"SFPD_OPFOR_DESERT_Recon",
			"SFPD_OPFOR_DESERT_Recon_DMR",
			"SFPD_OPFOR_DESERT_Spotter",
			"SFPD_OPFOR_DESERT_Sniper",
			"SFPD_OPFOR_DESERT_SF",
			"SFPD_OPFOR_DESERT_SF_Leader",
			"SFPD_OPFOR_DESERT_SF_Grenadier",
			"SFPD_OPFOR_DESERT_SF_AT",
			"SFPD_OPFOR_DESERT_SF_LMG",
			"SFPD_OPFOR_DESERT_Viper",
			"SFPD_OPFOR_DESERT_TankCrew",
			"SFPD_OPFOR_WOODLAND_Rifleman",
			"SFPD_OPFOR_WOODLAND_NBC_Mask",
			"SFPD_OPFOR_WOODLAND_NBC_Suit",
			"SFPD_OPFOR_WOODLAND_Rifleman_light",
			"SFPD_OPFOR_WOODLAND_Grenadier",
			"SFPD_OPFOR_WOODLAND_AT",
			"SFPD_OPFOR_WOODLAND_AT_Heavy",
			"SFPD_OPFOR_WOODLAND_LMG",
			"SFPD_OPFOR_WOODLAND_Leader",
			"SFPD_OPFOR_WOODLAND_Sharpshooter",
			"SFPD_OPFOR_WOODLAND_Medic",
			"SFPD_OPFOR_WOODLAND_JTAC",
			"SFPD_OPFOR_WOODLAND_MMG",
			"SFPD_OPFOR_WOODLAND_MMGAss",
			"SFPD_OPFOR_WOODLAND_TITAN_AT",
			"SFPD_OPFOR_WOODLAND_TITAN_AA",
			"SFPD_OPFOR_WOODLAND_Commandant",
			"SFPD_OPFOR_WOODLAND_Recon",
			"SFPD_OPFOR_WOODLAND_Recon_DMR",
			"SFPD_OPFOR_WOODLAND_Spotter",
			"SFPD_OPFOR_WOODLAND_Sniper",
			"SFPD_OPFOR_WOODLAND_SF",
			"SFPD_OPFOR_WOODLAND_SF_Leader",
			"SFPD_OPFOR_WOODLAND_SF_Grenadier",
			"SFPD_OPFOR_WOODLAND_SF_AT",
			"SFPD_OPFOR_WOODLAND_SF_LMG",
			"SFPD_OPFOR_WOODLAND_TankCrew",
			"SFPD_OPFOR_JUNGLE_Rifleman",
			"SFPD_OPFOR_JUNGLE_NBC_Mask",
			"SFPD_OPFOR_JUNGLE_NBC_Suit",
			"SFPD_OPFOR_JUNGLE_Rifleman_light",
			"SFPD_OPFOR_JUNGLE_Grenadier",
			"SFPD_OPFOR_JUNGLE_AT",
			"SFPD_OPFOR_JUNGLE_AT_Heavy",
			"SFPD_OPFOR_JUNGLE_LMG",
			"SFPD_OPFOR_JUNGLE_Leader",
			"SFPD_OPFOR_JUNGLE_Marksman",
			"SFPD_OPFOR_JUNGLE_Sharpshooter",
			"SFPD_OPFOR_JUNGLE_Medic",
			"SFPD_OPFOR_JUNGLE_JTAC",
			"SFPD_OPFOR_JUNGLE_MMG",
			"SFPD_OPFOR_JUNGLE_MMGAss",
			"SFPD_OPFOR_JUNGLE_TITAN_AT",
			"SFPD_OPFOR_JUNGLE_TITAN_AA",
			"SFPD_OPFOR_JUNGLE_Commandant",
			"SFPD_OPFOR_JUNGLE_Recon",
			"SFPD_OPFOR_JUNGLE_Recon_DMR",
			"SFPD_OPFOR_JUNGLE_Spotter",
			"SFPD_OPFOR_JUNGLE_Sniper",
			"SFPD_OPFOR_JUNGLE_SF",
			"SFPD_OPFOR_JUNGLE_SF_Leader",
			"SFPD_OPFOR_JUNGLE_SF_Grenadier",
			"SFPD_OPFOR_JUNGLE_SF_AT",
			"SFPD_OPFOR_JUNGLE_SF_LMG",
			"SFPD_OPFOR_JUNGLE_Viper",
			"SFPD_OPFOR_JUNGLE_TankCrew",
			"SFPD_OPFOR_HelicopterPilot",
			"SFPD_OPFOR_PlanePilot",
			"SFPD_OPFOR_Diver",
			"SFPD_OPFOR_Colonel",
			"SFPD_AAF_Rifleman",
			"SFPD_AAF_NBC_Mask",
			"SFPD_AAF_NBC_Suit",
			"SFPD_AAF_Rifleman_light",
			"SFPD_AAF_Grenadier",
			"SFPD_AAF_AT",
			"SFPD_AAF_AT_Heavy",
			"SFPD_AAF_LMG",
			"SFPD_AAF_Leader",
			"SFPD_AAF_Marksman",
			"SFPD_AAF_Medic",
			"SFPD_AAF_JTAC",
			"SFPD_AAF_TITAN_AT",
			"SFPD_AAF_TITAN_AA",
			"SFPD_AAF_Commandant",
			"SFPD_AAF_Recon",
			"SFPD_AAF_Recon_DMR",
			"SFPD_AAF_Spotter",
			"SFPD_AAF_Sniper",
			"SFPD_AAF_Diver",
			"SFPD_AAF_TankCrew",
			"SFPD_AAF_HelicopterPilot",
			"SFPD_AAF_PlanePilot",
			"SFPD_AAF_Colonel",
			"SFPD_LDF_Rifleman",
			"SFPD_LDF_NBC_Mask",
			"SFPD_LDF_NBC_Suit",
			"SFPD_LDF_Rifleman_light",
			"SFPD_LDF_Grenadier",
			"SFPD_LDF_Assaulter",
			"SFPD_LDF_AT",
			"SFPD_LDF_AT_Heavy",
			"SFPD_LDF_LMG",
			"SFPD_LDF_Leader",
			"SFPD_LDF_Marksman",
			"SFPD_LDF_Medic",
			"SFPD_LDF_JTAC",
			"SFPD_LDF_TITAN_AT",
			"SFPD_LDF_TITAN_AA",
			"SFPD_LDF_Commandant",
			"SFPD_LDF_Recon",
			"SFPD_LDF_Recon_DMR",
			"SFPD_LDF_Spotter",
			"SFPD_LDF_Sniper",
			"SFPD_LDF_Diver",
			"SFPD_LDF_TankCrew",
			"SFPD_LDF_HelicopterPilot",
			"SFPD_LDF_PlanePilot",
			"SFPD_LDF_Colonel",
			"SFPD_REBEL_Rifleman_AKM_1",
			"SFPD_REBEL_Rifleman_AKM_2",
			"SFPD_REBEL_Rifleman_AKM_3",
			"SFPD_REBEL_Rifleman_AKS_1",
			"SFPD_REBEL_Rifleman_AKS_2",
			"SFPD_REBEL_Rifleman_AKS_3",
			"SFPD_REBEL_Rifleman_TRG_1",
			"SFPD_REBEL_Rifleman_TRG_2",
			"SFPD_REBEL_Rifleman_TRG_3",
			"SFPD_REBEL_AT_AKM",
			"SFPD_REBEL_AT_AKS",
			"SFPD_REBEL_AT_TRG",
			"SFPD_REBEL_Shotgun",
			"SFPD_REBEL_Shotgun_sawoff",
			"SFPD_REBEL_Rifle",
			"SFPD_REBEL_Pistol",
			"SFPD_REBEL_LMG",
			"SFPD_REBEL_Marksman",
			"SFPD_BLUFOR_DESERT_Prowler_U",
			"SFPD_BLUFOR_DESERT_Prowler_A",
			"SFPD_BLUFOR_DESERT_Hunter",
			"SFPD_BLUFOR_DESERT_HEMTT",
			"SFPD_BLUFOR_DESERT_HEMTT_cargo",
			"SFPD_BLUFOR_DESERT_Badger",
			"SFPD_BLUFOR_DESERT_Namer",
			"SFPD_BLUFOR_DESERT_Nemmera",
			"SFPD_BLUFOR_DESERT_Merkava",
			"SFPD_BLUFOR_DESERT_HEMTT_A",
			"SFPD_BLUFOR_DESERT_HEMTT_F",
			"SFPD_BLUFOR_DESERT_HEMTT_M",
			"SFPD_BLUFOR_DESERT_HEMTT_FB",
			"SFPD_BLUFOR_DESERT_AA",
			"SFPD_BLUFOR_DESERT_MLRS",
			"SFPD_BLUFOR_DESERT_Howitzer",
			"SFPD_BLUFOR_DESERT_Boat",
			"SFPD_BLUFOR_DESERT_RHIB",
			"SFPD_BLUFOR_DESERT_Speedboat",
			"SFPD_BLUFOR_DESERT_HEMTT_Empty",
			"SFPD_BLUFOR_DESERT_HEMTT_C",
			"SFPD_BLUFOR_DESERT_Hunter_HMG",
			"SFPD_BLUFOR_DESERT_Quad",
			"SFPD_BLUFOR_DESERT_MH6",
			"SFPD_BLUFOR_DESERT_GhostHawk",
			"SFPD_BLUFOR_DESERT_Huron",
			"SFPD_BLUFOR_DESERT_AH6",
			"SFPD_BLUFOR_DESERT_Comanche",
			"SFPD_BLUFOR_DESERT_BlackFish_I",
			"SFPD_BLUFOR_DESERT_BlackFish_V",
			"SFPD_BLUFOR_DESERT_BlackFish_A",
			"SFPD_BLUFOR_DESERT_A10",
			"SFPD_BLUFOR_DESERT_A10_Cluster",
			"SFPD_BLUFOR_DESERT_BlackWasp",
			"SFPD_BLUFOR_DESERT_Rhino",
			"SFPD_BLUFOR_DESERT_Prowler_AT",
			"SFPD_BLUFOR_WOODLAND_Prowler_U",
			"SFPD_BLUFOR_WOODLAND_Prowler_A",
			"SFPD_BLUFOR_WOODLAND_Hunter",
			"SFPD_BLUFOR_WOODLAND_HEMTT",
			"SFPD_BLUFOR_WOODLAND_HEMTT_cargo",
			"SFPD_BLUFOR_WOODLAND_Badger",
			"SFPD_BLUFOR_WOODLAND_Namer",
			"SFPD_BLUFOR_WOODLAND_Nemmera",
			"SFPD_BLUFOR_WOODLAND_Merkava",
			"SFPD_BLUFOR_WOODLAND_HEMTT_A",
			"SFPD_BLUFOR_WOODLAND_HEMTT_F",
			"SFPD_BLUFOR_WOODLAND_HEMTT_M",
			"SFPD_BLUFOR_WOODLAND_HEMTT_FB",
			"SFPD_BLUFOR_WOODLAND_AA",
			"SFPD_BLUFOR_WOODLAND_MLRS",
			"SFPD_BLUFOR_WOODLAND_Howitzer",
			"SFPD_BLUFOR_WOODLAND_Boat",
			"SFPD_BLUFOR_WOODLAND_RHIB",
			"SFPD_BLUFOR_WOODLAND_Speedboat",
			"SFPD_BLUFOR_WOODLAND_HEMTT_Empty",
			"SFPD_BLUFOR_WOODLAND_HEMTT_C",
			"SFPD_BLUFOR_WOODLAND_Hunter_HMG",
			"SFPD_BLUFOR_WOODLAND_Quad",
			"SFPD_BLUFOR_WOODLAND_MH6",
			"SFPD_BLUFOR_WOODLAND_GhostHawk",
			"SFPD_BLUFOR_WOODLAND_Huron",
			"SFPD_BLUFOR_WOODLAND_AH6",
			"SFPD_BLUFOR_WOODLAND_Comanche",
			"SFPD_BLUFOR_WOODLAND_BlackFish_I",
			"SFPD_BLUFOR_WOODLAND_BlackFish_V",
			"SFPD_BLUFOR_WOODLAND_BlackFish_A",
			"SFPD_BLUFOR_WOODLAND_A10",
			"SFPD_BLUFOR_WOODLAND_A10_Cluster",
			"SFPD_BLUFOR_WOODLAND_BlackWasp",
			"SFPD_BLUFOR_WOODLAND_Rhino",
			"SFPD_BLUFOR_WOODLAND_Prowler_AT",
			"SFPD_BLUFOR_JUNGLE_Prowler_U",
			"SFPD_BLUFOR_JUNGLE_Prowler_A",
			"SFPD_BLUFOR_JUNGLE_Hunter",
			"SFPD_BLUFOR_JUNGLE_HEMTT",
			"SFPD_BLUFOR_JUNGLE_HEMTT_cargo",
			"SFPD_BLUFOR_JUNGLE_Badger",
			"SFPD_BLUFOR_JUNGLE_Namer",
			"SFPD_BLUFOR_JUNGLE_Nemmera",
			"SFPD_BLUFOR_JUNGLE_Merkava",
			"SFPD_BLUFOR_JUNGLE_HEMTT_A",
			"SFPD_BLUFOR_JUNGLE_HEMTT_F",
			"SFPD_BLUFOR_JUNGLE_HEMTT_M",
			"SFPD_BLUFOR_JUNGLE_HEMTT_FB",
			"SFPD_BLUFOR_JUNGLE_AA",
			"SFPD_BLUFOR_JUNGLE_MLRS",
			"SFPD_BLUFOR_JUNGLE_Howitzer",
			"SFPD_BLUFOR_JUNGLE_Boat",
			"SFPD_BLUFOR_JUNGLE_RHIB",
			"SFPD_BLUFOR_JUNGLE_Speedboat",
			"SFPD_BLUFOR_JUNGLE_HEMTT_Empty",
			"SFPD_BLUFOR_JUNGLE_HEMTT_C",
			"SFPD_BLUFOR_JUNGLE_Hunter_HMG",
			"SFPD_BLUFOR_JUNGLE_Quad",
			"SFPD_BLUFOR_JUNGLE_MH6",
			"SFPD_BLUFOR_JUNGLE_GhostHawk",
			"SFPD_BLUFOR_JUNGLE_Huron",
			"SFPD_BLUFOR_JUNGLE_AH6",
			"SFPD_BLUFOR_JUNGLE_Comanche",
			"SFPD_BLUFOR_JUNGLE_BlackFish_I",
			"SFPD_BLUFOR_JUNGLE_BlackFish_V",
			"SFPD_BLUFOR_JUNGLE_BlackFish_A",
			"SFPD_BLUFOR_JUNGLE_A10",
			"SFPD_BLUFOR_JUNGLE_A10_Cluster",
			"SFPD_BLUFOR_JUNGLE_BlackWasp",
			"SFPD_BLUFOR_JUNGLE_Rhino",
			"SFPD_BLUFOR_JUNGLE_Prowler_AT",
			"SFPD_BLUFOR_SDV",
			"SFPD_OPFOR_DESERT_Stalker",
			"SFPD_OPFOR_DESERT_ARMA",
			"SFPD_OPFOR_DESERT_Ifrit",
			"SFPD_OPFOR_DESERT_Qilin_Amred",
			"SFPD_OPFOR_DESERT_Qilin_Unarmed",
			"SFPD_OPFOR_DESERT_Typhoon_Ammo",
			"SFPD_OPFOR_DESERT_Typhoon_Fule",
			"SFPD_OPFOR_DESERT_Typhoon_Medical",
			"SFPD_OPFOR_DESERT_Typhoon_Transport",
			"SFPD_OPFOR_DESERT_Typhoon_Device",
			"SFPD_OPFOR_DESERT_AA",
			"SFPD_OPFOR_DESERT_Howitzer",
			"SFPD_OPFOR_DESERT_Ifrit_HMG",
			"SFPD_OPFOR_DESERT_Quad",
			"SFPD_OPFOR_DESERT_Boat",
			"SFPD_OPFOR_DESERT_RHIB",
			"SFPD_OPFOR_DESERT_Speedboat",
			"SFPD_OPFOR_DESERT_Ka60",
			"SFPD_OPFOR_DESERT_Ka60_unarmed",
			"SFPD_OPFOR_DESERT_Mi290",
			"SFPD_OPFOR_DESERT_Mi290_Ammo",
			"SFPD_OPFOR_DESERT_Mi290_Fuel",
			"SFPD_OPFOR_DESERT_Mi290_Cargo",
			"SFPD_OPFOR_DESERT_Mi290_Bench",
			"SFPD_OPFOR_DESERT_Mi290_Medevac",
			"SFPD_OPFOR_DESERT_Mi290_Transport",
			"SFPD_OPFOR_DESERT_Mi48",
			"SFPD_OPFOR_DESERT_To201",
			"SFPD_OPFOR_DESERT_To201_Cluster",
			"SFPD_OPFOR_DESERT_Yak",
			"SFPD_OPFOR_DESERT_T100",
			"SFPD_OPFOR_DESERT_Xian_inf",
			"SFPD_OPFOR_DESERT_Xian_Vehi",
			"SFPD_OPFOR_DESERT_Qilin_AT",
			"SFPD_OPFOR_DESERT_T140",
			"SFPD_OPFOR_DESERT_T140K",
			"SFPD_OPFOR_WOODLAND_Stalker",
			"SFPD_OPFOR_WOODLAND_ARMA",
			"SFPD_OPFOR_WOODLAND_Ifrit",
			"SFPD_OPFOR_WOODLAND_Qilin_Amred",
			"SFPD_OPFOR_WOODLAND_Qilin_Unarmed",
			"SFPD_OPFOR_WOODLAND_Typhoon_Ammo",
			"SFPD_OPFOR_WOODLAND_Typhoon_Fule",
			"SFPD_OPFOR_WOODLAND_Typhoon_Medical",
			"SFPD_OPFOR_WOODLAND_Typhoon_Transport",
			"SFPD_OPFOR_WOODLAND_Typhoon_Device",
			"SFPD_OPFOR_WOODLAND_AA",
			"SFPD_OPFOR_WOODLAND_Howitzer",
			"SFPD_OPFOR_WOODLAND_Ifrit_HMG",
			"SFPD_OPFOR_WOODLAND_Quad",
			"SFPD_OPFOR_WOODLAND_Boat",
			"SFPD_OPFOR_WOODLAND_RHIB",
			"SFPD_OPFOR_WOODLAND_Speedboat",
			"SFPD_OPFOR_WOODLAND_Ka60",
			"SFPD_OPFOR_WOODLAND_Ka60_unarmed",
			"SFPD_OPFOR_WOODLAND_Mi290",
			"SFPD_OPFOR_WOODLAND_Mi290_Ammo",
			"SFPD_OPFOR_WOODLAND_Mi290_Fuel",
			"SFPD_OPFOR_WOODLAND_Mi290_Cargo",
			"SFPD_OPFOR_WOODLAND_Mi290_Bench",
			"SFPD_OPFOR_WOODLAND_Mi290_Medevac",
			"SFPD_OPFOR_WOODLAND_Mi290_Transport",
			"SFPD_OPFOR_WOODLAND_Mi48",
			"SFPD_OPFOR_WOODLAND_To201",
			"SFPD_OPFOR_WOODLAND_To201_Cluster",
			"SFPD_OPFOR_WOODLAND_Yak",
			"SFPD_OPFOR_WOODLAND_T100",
			"SFPD_OPFOR_WOODLAND_Xian_inf",
			"SFPD_OPFOR_WOODLAND_Xian_Vehi",
			"SFPD_OPFOR_WOODLAND_Qilin_AT",
			"SFPD_OPFOR_WOODLAND_T140",
			"SFPD_OPFOR_WOODLAND_T140K",
			"SFPD_OPFOR_JUNGLE_Stalker",
			"SFPD_OPFOR_JUNGLE_ARMA",
			"SFPD_OPFOR_JUNGLE_Ifrit",
			"SFPD_OPFOR_JUNGLE_Qilin_Amred",
			"SFPD_OPFOR_JUNGLE_Qilin_Unarmed",
			"SFPD_OPFOR_JUNGLE_Typhoon_Ammo",
			"SFPD_OPFOR_JUNGLE_Typhoon_Fule",
			"SFPD_OPFOR_JUNGLE_Typhoon_Medical",
			"SFPD_OPFOR_JUNGLE_Typhoon_Transport",
			"SFPD_OPFOR_JUNGLE_Typhoon_Device",
			"SFPD_OPFOR_JUNGLE_AA",
			"SFPD_OPFOR_JUNGLE_Howitzer",
			"SFPD_OPFOR_JUNGLE_Ifrit_HMG",
			"SFPD_OPFOR_JUNGLE_Quad",
			"SFPD_OPFOR_JUNGLE_Boat",
			"SFPD_OPFOR_JUNGLE_RHIB",
			"SFPD_OPFOR_JUNGLE_Speedboat",
			"SFPD_OPFOR_JUNGLE_Ka60",
			"SFPD_OPFOR_JUNGLE_Ka60_unarmed",
			"SFPD_OPFOR_JUNGLE_Mi290",
			"SFPD_OPFOR_JUNGLE_Mi290_Ammo",
			"SFPD_OPFOR_JUNGLE_Mi290_Fuel",
			"SFPD_OPFOR_JUNGLE_Mi290_Cargo",
			"SFPD_OPFOR_JUNGLE_Mi290_Bench",
			"SFPD_OPFOR_JUNGLE_Mi290_Medevac",
			"SFPD_OPFOR_JUNGLE_Mi290_Transport",
			"SFPD_OPFOR_JUNGLE_Mi48",
			"SFPD_OPFOR_JUNGLE_To201",
			"SFPD_OPFOR_JUNGLE_To201_Cluster",
			"SFPD_OPFOR_JUNGLE_Yak",
			"SFPD_OPFOR_JUNGLE_T100",
			"SFPD_OPFOR_JUNGLE_Xian_inf",
			"SFPD_OPFOR_JUNGLE_Xian_Vehi",
			"SFPD_OPFOR_JUNGLE_Qilin_AT",
			"SFPD_OPFOR_JUNGLE_T140",
			"SFPD_OPFOR_JUNGLE_T140K",
			"SFPD_OPFOR_SDV",
			"SFPD_AAF_Quad",
			"SFPD_AAF_Fennek",
			"SFPD_AAF_Fennel_HMG",
			"SFPD_AAF_Kamaz_Transport",
			"SFPD_AAF_Kamaz_Ammo",
			"SFPD_AAF_Kamaz_Fuel",
			"SFPD_AAF_Kamaz_Medical",
			"SFPD_AAF_Pandur",
			"SFPD_AAF_FV510",
			"SFPD_AAF_Leopard",
			"SFPD_AAF_Boat",
			"SFPD_AAF_RHIB",
			"SFPD_AAF_Speedboat",
			"SFPD_AAF_SDV",
			"SFPD_AAF_Wildcat_Unarmed",
			"SFPD_AAF_Wildcat_Armed",
			"SFPD_AAF_Merlin",
			"SFPD_AAF_ALCA",
			"SFPD_AAF_Gripen",
			"SFPD_AAF_Kamaz_MLRS",
			"SFPD_AAF_Nyx_AT",
			"SFPD_AAF_Nyx_Radar",
			"SFPD_AAF_Nyx_Cannon",
			"SFPD_AAF_Nyx_AA",
			"SFPD_LDF_Quad",
			"SFPD_LDF_Offroad",
			"SFPD_LDF_Offroad_covered",
			"SFPD_LDF_Offroad_comms",
			"SFPD_LDF_Van_MP",
			"SFPD_LDF_Kamaz_Transport",
			"SFPD_LDF_Kamaz_Ammo",
			"SFPD_LDF_Kamaz_Fuel",
			"SFPD_LDF_Kamaz_Medical",
			"SFPD_LDF_Kamaz_MLRS",
			"SFPD_LDF_FV510",
			"SFPD_LDF_Boat",
			"SFPD_LDF_RHIB",
			"SFPD_LDF_Speedboat",
			"SFPD_LDF_SDV",
			"SFPD_LDF_Wildcat_Unarmed",
			"SFPD_LDF_Wildcat_Armed",
			"SFPD_REBEL_Offroad",
			"SFPD_REBEL_Offroad_MG",
			"SFPD_REBEL_Offroad_AT",
			"SFPD_REBEL_Jeep",
			"SFPD_REBEL_Jeep_MG",
			"SFPD_REBEL_Jeep_AT",
			"SFPD_REBEL_Van",
			"SFPD_REBEL_Truck",
			"SFPD_REBEL_Truck_Fuel",
			"SFPD_BLUFOR_BOX_Medical",
			"SFPD_BLUFOR_DESERT_BOX_Ammo",
			"SFPD_BLUFOR_WOODLAND_BOX_Ammo",
			"SFPD_BLUFOR_JUNGLE_BOX_Ammo",
			"SFPD_BLUFOR_BOX_Ammo",
			"SFPD_BLUFOR_BOX_Grenades",
			"SFPD_BLUFOR_BOX_Explosives",
			"SFPD_BLUFOR_DESERT_BOX_Launchers_AT",
			"SFPD_BLUFOR_DESERT_BOX_Launchers_TITAN_AT",
			"SFPD_BLUFOR_DESERT_BOX_Launchers_TITAN_AA",
			"SFPD_BLUFOR_WOODLAND_BOX_Launchers_AT",
			"SFPD_BLUFOR_WOODLAND_BOX_Launchers_TITAN_AT",
			"SFPD_BLUFOR_WOODLAND_BOX_Launchers_TITAN_AA",
			"SFPD_BLUFOR_JUNGLE_BOX_Launchers_AT",
			"SFPD_BLUFOR_JUNGLE_BOX_Launchers_TITAN_AT",
			"SFPD_BLUFOR_JUNGLE_BOX_Launchers_TITAN_AA",
			"SFPD_BLUFOR_DESERT_BOX_Equipment",
			"SFPD_BLUFOR_WOODLAND_BOX_Equipment",
			"SFPD_BLUFOR_JUNGLE_BOX_Equipment",
			"SFPD_BLUFOR_DESERT_BOX_Weapons",
			"SFPD_BLUFOR_WOODLAND_BOX_Weapons",
			"SFPD_BLUFOR_JUNGLE_BOX_Weapons",
			"SFPD_BLUFOR_DESERT_BOX_Special_Weapons",
			"SFPD_BLUFOR_WOODLAND_BOX_Special_Weapons",
			"SFPD_BLUFOR_JUNGLE_BOX_Special_Weapons",
			"SFPD_OPFOR_BOX_Medical",
			"SFPD_OPFOR_DESERT_BOX_Ammo",
			"SFPD_OPFOR_WOODLAND_BOX_Ammo",
			"SFPD_OPFOR_JUNGLE_BOX_Ammo",
			"SFPD_OPFOR_BOX_Ammo",
			"SFPD_OPFOR_BOX_Grenades",
			"SFPD_OPFOR_BOX_Explosives",
			"SFPD_OPFOR_DESERT_BOX_Launchers_AT",
			"SFPD_OPFOR_DESERT_BOX_Launchers_TITAN_AT",
			"SFPD_OPFOR_DESERT_BOX_Launchers_TITAN_AA",
			"SFPD_OPFOR_WOODLAND_BOX_Launchers_AT",
			"SFPD_OPFOR_WOODLAND_BOX_Launchers_TITAN_AT",
			"SFPD_OPFOR_WOODLAND_BOX_Launchers_TITAN_AA",
			"SFPD_OPFOR_JUNGLE_BOX_Launchers_AT",
			"SFPD_OPFOR_JUNGLE_BOX_Launchers_TITAN_AT",
			"SFPD_OPFOR_JUNGLE_BOX_Launchers_TITAN_AA",
			"SFPD_OPFOR_DESERT_BOX_Equipment",
			"SFPD_OPFOR_WOODLAND_BOX_Equipment",
			"SFPD_OPFOR_JUNGLE_BOX_Equipment",
			"SFPD_OPFOR_DESERT_BOX_Weapons",
			"SFPD_OPFOR_WOODLAND_BOX_Weapons",
			"SFPD_OPFOR_JUNGLE_BOX_Weapons",
			"SFPD_OPFOR_DESERT_BOX_Special_Weapons",
			"SFPD_OPFOR_WOODLAND_BOX_Special_Weapons",
			"SFPD_OPFOR_JUNGLE_BOX_Special_Weapons",
			"SFPD_AAF_BOX_Medical",
			"SFPD_AAF_BOX_Ammo",
			"SFPD_AAF_BOX_Ammo_Spec",
			"SFPD_AAF_BOX_Grenades",
			"SFPD_AAF_BOX_Explosives",
			"SFPD_AAF_BOX_Launchers_AT",
			"SFPD_AAF_BOX_Launchers_TITAN_AT",
			"SFPD_AAF_BOX_Launchers_TITAN_AA",
			"SFPD_AAF_BOX_Equipment",
			"SFPD_AAF_BOX_Weapons",
			"SFPD_AAF_BOX_Special_Weapons",
			"SFPD_LDF_BOX_Medical",
			"SFPD_LDF_BOX_Ammo",
			"SFPD_LDF_BOX_Ammo_Spec",
			"SFPD_LDF_BOX_Grenades",
			"SFPD_LDF_BOX_Explosives",
			"SFPD_LDF_BOX_Launchers_AT",
			"SFPD_LDF_BOX_Launchers_TITAN_AT",
			"SFPD_LDF_BOX_Launchers_TITAN_AA",
			"SFPD_LDF_BOX_Equipment",
			"SFPD_LDF_BOX_Weapons",
			"SFPD_LDF_BOX_Special_Weapons",
			"SFPD_REBEL_BOX_All",
			"SFPD_BLUFOR_DESERT_BOX_Cargo",
			"SFPD_BLUFOR_WOODLAND_BOX_Cargo",
			"SFPD_BLUFOR_JUNGLE_BOX_Cargo",
			"SFPD_OPFOR_DESERT_BOX_Cargo",
			"SFPD_OPFOR_WOODLAND_BOX_Cargo",
			"SFPD_OPFOR_JUNGLE_BOX_Cargo",
			"SFPD_AAF_BOX_Cargo",
			"SFPD_LDF_BOX_Cargo",
			
			//RHS
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
			"SFPD_RHS_SAV_WOODLAND_Rifleman",
			"SFPD_RHS_SAV_WOODLAND_NBC_Mask",
			"SFPD_RHS_SAV_WOODLAND_NBC_Suit",
			"SFPD_RHS_SAV_WOODLAND_Rifleman_light",
			"SFPD_RHS_SAV_WOODLAND_Unequiped",
			"SFPD_RHS_SAV_WOODLAND_Leader",
			"SFPD_RHS_SAV_WOODLAND_Medic",
			"SFPD_RHS_SAV_WOODLAND_Grenadier",
			"SFPD_RHS_SAV_WOODLAND_AT",
			"SFPD_RHS_SAV_WOODLAND_LMG",
			"SFPD_RHS_SAV_WOODLAND_Marksman",
			"SFPD_RHS_SAV_WOODLAND_Commander",
			"SFPD_RHS_SAV_WOODLAND_AA",
			"SFPD_RHS_SAV_WOODLAND_M1151A1",
			"SFPD_RHS_SAV_WOODLAND_M1151A1_GPK_PKM",
			"SFPD_RHS_SAV_WOODLAND_ural",
			"SFPD_RHS_SAV_NBC_suits",
			"SFPD_RHS_SAV_NBC_masks",
			"SFPD_RHS_SAV_NBC_drugs",
			"SFPD_RHS_SAV_NBC_detector",
			"SFPD_RHS_SAV_BOX_Cargo",
			"SFPD_RHS_IRAQ_WOODLAND_Rifleman",
			"SFPD_RHS_IRAQ_WOODLAND_NBC_Mask",
			"SFPD_RHS_IRAQ_WOODLAND_NBC_Suit",
			"SFPD_RHS_IRAQ_WOODLAND_Rifleman_light",
			"SFPD_RHS_IRAQ_WOODLAND_Unequiped",
			"SFPD_RHS_IRAQ_WOODLAND_Leader",
			"SFPD_RHS_IRAQ_WOODLAND_Medic",
			"SFPD_RHS_IRAQ_WOODLAND_Grenadier",
			"SFPD_RHS_IRAQ_WOODLAND_AT",
			"SFPD_RHS_IRAQ_WOODLAND_LMG",
			"SFPD_RHS_IRAQ_WOODLAND_Marksman",
			"SFPD_RHS_IRAQ_WOODLAND_Commander",
			"SFPD_RHS_IRAQ_WOODLAND_AA",
			"SFPD_RHS_TALIBAN_DESERT_Rifleman_1",
			"SFPD_RHS_TALIBAN_DESERT_Rifleman_2",
			"SFPD_RHS_TALIBAN_DESERT_Rifleman_3",
			"SFPD_RHS_TALIBAN_DESERT_Rifleman_4",
			"SFPD_RHS_TALIBAN_DESERT_MG",
			"SFPD_RHS_TALIBAN_DESERT_AT",
			"SFPD_RHS_TALIBAN_DESERT_Marksman",
			"SFPD_RHS_TALIBAN_DESERT_Commander",
			"SFPD_RHS_TALIBAN_DESERT_AA",
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
			"SFPD_RHS_INDEP_Black_ISIS",
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
			"SFPD_RHS_IRAQ_WOODLAND_UAZ_MG",
			"SFPD_RHS_IRAQ_WOODLAND_UAZ",
			"SFPD_RHS_IRAQ_WOODLAND_UAZ_open",
			"SFPD_RHS_IRAQ_WOODLAND_UAZ_AT",
			"SFPD_RHS_IRAQ_WOODLAND_Ural",
			"SFPD_RHS_IRAQ_WOODLAND_gaz66_ammo",
			"SFPD_RHS_IRAQ_WOODLAND_kraz255b1_fuel",
			"SFPD_RHS_IRAQ_WOODLAND_zil",
			"SFPD_RHS_IRAQ_WOODLAND_zil_open",
			"SFPD_RHS_IRAQ_WOODLAND_BRDM2",
			"SFPD_RHS_IRAQ_WOODLAND_BRDM2_ATGM",
			"SFPD_RHS_IRAQ_WOODLAND_BRDM2_HQ",
			"SFPD_RHS_IRAQ_WOODLAND_BRDM2UM",
			"SFPD_RHS_IRAQ_WOODLAND_Ural_Zu23",
			"SFPD_RHS_IRAQ_WOODLAND_BTR60",
			"SFPD_RHS_IRAQ_WOODLAND_BMD1",
			"SFPD_RHS_IRAQ_WOODLAND_BMD2",
			"SFPD_RHS_IRAQ_WOODLAND_ZSU23",
			"SFPD_RHS_IRAQ_WOODLAND_T72",
			"SFPD_RHS_IRAQ_WOODLAND_Static_D30",
			"SFPD_RHS_IRAQ_WOODLAND_Static_DSHKM",
			"SFPD_RHS_IRAQ_WOODLAND_Static_DSHKM_mini",
			"SFPD_RHS_IRAQ_WOODLAND_Static_ZU23",
			"SFPD_RHS_IRAQ_WOODLAND_Static_SPG9",
			"SFPD_RHS_IRAQ_WOODLAND_Static_AGS30",
			"SFPD_RHS_TALIBAN_DESERT_UAZ_MG",
			"SFPD_RHS_TALIBAN_DESERT_UAZ",
			"SFPD_RHS_TALIBAN_DESERT_UAZ_open",
			"SFPD_RHS_TALIBAN_DESERT_UAZ_AT",
			"SFPD_RHS_TALIBAN_DESERT_Ural",
			"SFPD_RHS_INDEP_UAZ_MG",
			"SFPD_RHS_INDEP_UAZ",
			"SFPD_RHS_INDEP_UAZ_open",
			"SFPD_RHS_INDEP_UAZ_AT",
			"SFPD_RHS_INDEP_Ural",
			"SFPD_RHS_INDEP_gaz66_ammo",
			"SFPD_RHS_INDEP_kraz255b1_fuel",
			"SFPD_RHS_INDEP_zil",
			"SFPD_RHS_INDEP_zil_open",
			"SFPD_RHS_INDEP_BRDM2",
			"SFPD_RHS_INDEP_BRDM2_ATGM",
			"SFPD_RHS_INDEP_BRDM2_HQ",
			"SFPD_RHS_INDEP_BRDM2UM",
			"SFPD_RHS_INDEP_Ural_Zu23",
			"SFPD_RHS_INDEP_BTR60",
			"SFPD_RHS_INDEP_BMD1",
			"SFPD_RHS_INDEP_BMD2",
			"SFPD_RHS_INDEP_ZSU23",
			"SFPD_RHS_INDEP_T72",
			"SFPD_RHS_INDEP_Static_D30",
			"SFPD_RHS_INDEP_Static_DSHKM",
			"SFPD_RHS_INDEP_Static_DSHKM_mini",
			"SFPD_RHS_INDEP_Static_ZU23",
			"SFPD_RHS_INDEP_Static_SPG9",
			"SFPD_RHS_INDEP_Static_AGS30",
			"SFPD_RHS_INDEP_M1025_Black",
			"SFPD_RHS_INDEP_M1025_M2_Black",
			"SFPD_RHS_INDEP_WOODLAND_UAZ_MG",
			"SFPD_RHS_INDEP_WOODLAND_UAZ",
			"SFPD_RHS_INDEP_WOODLAND_UAZ_open",
			"SFPD_RHS_INDEP_WOODLAND_UAZ_AT",
			"SFPD_RHS_INDEP_WOODLAND_Ural",
			"SFPD_RHS_INDEP_WOODLAND_gaz66_amm",
			"SFPD_RHS_INDEP_WOODLAND_kraz255b1_fuel",
			"SFPD_RHS_INDEP_WOODLAND_zil",
			"SFPD_RHS_INDEP_WOODLAND_zil_open",
			"SFPD_RHS_INDEP_WOODLAND_BRDM2",
			"SFPD_RHS_INDEP_WOODLAND_BRDM2_ATGM",
			"SFPD_RHS_INDEP_WOODLAND_BRDM2_HQ",
			"SFPD_RHS_INDEP_WOODLAND_BRDM2UM",
			"SFPD_RHS_INDEP_WOODLAND_Ural_Zu23",
			"SFPD_RHS_INDEP_WOODLAND_BTR60",
			"SFPD_RHS_INDEP_WOODLAND_BMD1",
			"SFPD_RHS_INDEP_WOODLAND_BMD2",
			"SFPD_RHS_INDEP_WOODLAND_ZSU23",
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
			"SFPD_RHS_BLUFOR_DESERT_M1165A1_m134d",
			"SFPD_RHS_BLUFOR_DESERT_M1165A1_m2",
			"SFPD_RHS_BLUFOR_DESERT_M1165A1_mk19",
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
			"SFPD_RHS_BLUFOR_WOODLAND_M1165A1_m134d",
			"SFPD_RHS_BLUFOR_WOODLAND_M1165A1_m2",
			"SFPD_RHS_BLUFOR_WOODLAND_M1165A1_mk19",
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
			"SFPD_RHS_OPFOR_DESERT_kraz255b1_pmp",
			"SFPD_RHS_OPFOR_DESERT_kraz255b1_bmkt",
			"SFPD_RHS_OPFOR_DESERT_bmk_t",
			"SFPD_RHS_OPFOR_DESERT_BMP3_KA",
			"SFPD_RHS_OPFOR_DESERT_T90SM",
			"SFPD_RHS_OPFOR_DESERT_T14",
			"SFPD_RHS_OPFOR_DESERT_T15",
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
			"SFPD_RHS_OPFOR_WOODLAND_kraz255b1_pmp",
			"SFPD_RHS_OPFOR_WOODLAND_kraz255b1_bmkt",
			"SFPD_RHS_OPFOR_WOODLAND_bmk_t",
			"SFPD_RHS_OPFOR_WOODLAND_BMP3_KA",
			"SFPD_RHS_OPFOR_WOODLAND_T90SM",
			"SFPD_RHS_OPFOR_WOODLAND_T14",
			"SFPD_RHS_OPFOR_WOODLAND_T15",
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
			"SFPD_RHS_BLUFOR_Launchers4",
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
			"SFPD_RHS_OPFOR_BOX_Cargo",
			
			"KAM_rhs_pontoon_end_static",
			"KAM_rhs_pontoon_start_static",
			"KAM_rhs_Land_TentA_F",
			
			"SFPD_RHS_CIV_DESERT_MI8T",
			"SFPD_RHS_CIV_DESERT_MI8AMT",
			"SFPD_RHS_CIV_DESERT_AN2",
			"SFPD_RHS_Ural_Civ_01",
			"SFPD_RHS_Ural_Open_Civ_01",
			"SFPD_RHS_Ural_Civ_03",
			"SFPD_RHS_Ural_Open_Civ_03",
			"SFPD_RHS_Ural_Civ_02",
			"SFPD_RHS_Ural_Open_Civ_02",
			
			"SFPD_BLUFOR_GEN",
			"SFPD_BLUFOR_GEN_Commander",
			
			"Land_rhs_kinder_01_R",
			"Land_rhs_kinder_01_L",
			
			"Land_Pod_Heli_Transport_04_ammo_black_F",
			"Land_Pod_Heli_Transport_04_ammo_F",
			"Land_Pod_Heli_Transport_04_bench_black_F",
			"Land_Pod_Heli_Transport_04_bench_F",
			"Land_Pod_Heli_Transport_04_box_black_F",
			"Land_Pod_Heli_Transport_04_box_F",
			"Land_Pod_Heli_Transport_04_covered_black_F",
			"Land_Pod_Heli_Transport_04_covered_F",
			"Land_Pod_Heli_Transport_04_fuel_black_F",
			"Land_Pod_Heli_Transport_04_fuel_F",
			"Land_Pod_Heli_Transport_04_medevac_black_F",
			"Land_Pod_Heli_Transport_04_medevac_F",
			"Land_Pod_Heli_Transport_04_repair_black_F",
			"Land_Pod_Heli_Transport_04_repair_F"
		};
        weapons[] = {
			"SFPD_MX_Default",
			"SFPD_MX_GL_Default",
			"SFPD_LMG_03_Default",
			"SFPD_DESERT_SIG_Default",
			"SFPD_DESERT_Noreen_Default",
			"SFPD_DESERT_SIG_Silenced",
			"SFPD_DESERT_P99_Silenced",
			"SFPD_MXC_Silenced",
			"SFPD_WOODLAND_MX",
			"SFPD_WOODLAND_MX_GL",
			"SFPD_WOODLAND_SIG",
			"SFPD_WOODLAND_Noreen",
			"SFPD_WOODLAND_SIG_Silenced",
			"SFPD_WOODLAND_P99_Silenced",
			"SFPD_WOODLAND_MXC_Silenced",
			"SFPD_JUNGLE_SPAR_16_Default",
			"SFPD_JUNGLE_SPAR_16_GL_Default",
			"SFPD_JUNGLE_SPAR_16S_Default",
			"SFPD_JUNGLE_SPAR_17_Default",
			"SFPD_JUNGLE_Noreen_Default",
			"SFPD_BLACK_P90_Default",
			"SFPD_JUNGLE_SPAR_17_Silenced",
			"SFPD_JUNGLE_SPAR_16_Silenced",
			"SFPD_JUNGLE_M200",
			"SFPD_BLACK_AK12_Silenced",
			"SFPD_BLACK_AK12_GL_Silenced",
			"SFPD_LMG_03_Silenced",
			
			"SFPD_KATIBA_Default",
			"SFPD_KATIBA_GL_Default",
			"SFPD_Zafir_Default",
			"SFPD_RAHIM_Default",
			"SFPD_CYRUS_Default",
			"SFPD_NAVID_Default",
			"SFPD_KATIBAC_Silenced",
			"SFPD_RAHIM_Silenced",
			"SFPD_ROOK_Silenced",
			"SFPD_DESERT_AK12_Silenced",
			"SFPD_DESERT_AK12_GL_Silenced",
			"SFPD_DESERT_RPK12_Silenced",
			"SFPD_LYNX_DESERT_Default",
			"SFPD_WOODLAND_AK12",
			"SFPD_WOODLAND_AK12_GL",
			"SFPD_WOODLAND_RPK12",
			"SFPD_WOODLAND_AKU12_Silenced",
			"SFPD_WOODLAND_AK12_Silenced",
			"SFPD_WOODLAND_AK12_GL_Silenced",
			"SFPD_WOODLAND_RPK12_Silenced",
			"SFPD_CYRUS_Black_Silenced",
			"SFPD_TYPE115_Silenced",
			"SFPD_CAR95_Default",
			"SFPD_CAR95_GL_Default",
			"SFPD_CAR951_Default",
			"SFPD_CMR76_Default",
			"SFPD_CYRUS_Black",
			"SFPD_NAVID_Tan",
			"SFPD_CAR95_Silenced",
			"SFPD_CMR76_Silenced",
			"SFPD_LYNX_JUNGLE_Default",
			"SFPD_TYPE115_JUNGLE_Silenced",
			
			"SFPD_F2000",
			"SFPD_ACPC2",
			"SFPD_F2000_GL",
			"SFPD_Stoner",
			"SFPD_M14",
			"SFPD_F2000_Silenced",
			"SFPD_M14_Silenced",
			"SFPD_ACPC2_Silenced",
			"SFPD_LYNX_Default",
			
			"SFPD_Promet",
			"SFPD_Promet_GL",
			"SFPD_Promet_SG",
			"SFPD_Stoner_Black",
			"SFPD_Promet_MR",
			"SFPD_Promet_Silenced",
			"SFPD_Promet_MR_Silenced",
			"SFPD_BALCK_Noreen_Silenced",
			"SFPD_BLACK_P90_Silenced",
			"SFPD_BLACK_MXC",
			"SFPD_FNX",
			
			"SFPD_RHS_M4_Default",
			"SFPD_RHS_Glock17",
			"SFPD_RHS_M4_GL_Default",
			"SFPD_RHS_M249_Default",
			"SFPD_RHS_DESERT_MK11_Default",
			"SFPD_RHS_WOODLAND_MK11_Default",
			"SFPD_RHS_WINTER_MK11_Default",
			"SFPD_RHS_M240_Default",
			"SFPD_RHS_DESERT_M2010_Silenced",
			"SFPD_RHS_WOODLAND_M2010_Silenced",
			"SFPD_RHS_WINTER_M2010_Silenced",
			"SFPD_RHS_M4_Silenced",
			"SFPD_RHS_M4_GL_Silenced",
			"SFPD_RHS_M249_Silenced",
			"SFPD_RHS_M4_Spotter",
			"SFPD_RHS_M200",
			"SFPD_RHS_Glock17_Silenced",
			"SFPD_RHS_HK416_ION",
			
			"SFPD_RHS_AK74MR",
			"SFPD_RHS_AK74MR_GL",
			"SFPD_RHS_AK_LMG",
			"SFPD_RHS_PKP",
			"SFPD_RHS_AK74MR_Silenced",
			"SFPD_RHS_AK74MR_GL_Silenced",
			"SFPD_RHS_AK_LMG_Silenced",
			"SFPD_RHS_ASVAL",
			"SFPD_RHS_T5000",
			"SFPD_RHS_LYNX_DESERT",
			"SFPD_RHS_LYNX_JUNGLE",
			"SFPD_RHS_LYNX_Black",
			"SFPD_RHS_SVD",
			"SFPD_RHS_SVD_Silenced",
			"SFPD_RHS_SVD_Black",
			"SFPD_RHS_SVD_Black_Silenced",
			"SFPD_RHS_RPG7",
			
			"SFPD_RHS_AK74",
			"SFPD_RHS_M38",
			"SFPD_RHS_AKS74",
			"SFPD_RHS_ISIS_M16",
			
			"SFPD_RHS_IRAQ_AKM",
			"SFPD_RHS_IRAQ_AKM_GL",
			"SFPD_RHS_IRAQ_SVD",
			
			"SFPD_RHS_G36KV",
			"SFPD_RHS_G36KV_GL",
			"SFPD_RHS_MINIMI_PARA",
			"SFPD_RHS_M14_RAIL"
		};
        requiredVersion = 0.1;
        requiredAddons[] = {
			"a3_characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhs_c_weapons",
			"rhsusf_c_troops",
			"rhsusf_c_m1117",
			"rhsusf_c_statics",
			"rhsusf_c_weapons",
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
			"ace_compat_rhs_gref3"
		};
    };
};

class CfgAmmo {
#include "CfgAmmo.hpp"
};

class cfgFactionClasses {
#include "CfgFactionClasses.hpp"
};

class CfgFunctions {
#include "CfgFunctions.hpp"
};

class CfgMagazines {
#include "CfgMagazines.hpp"
};

class CfgMagazineWells {
#include "CfgMagazineWells.hpp"
};

class cfgUnitInsignia {
#include "CfgUnitInsignia.hpp"
};

class CBA_Extended_EventHandlers_base;

class Extended_Init_EventHandlers {
	/*class Man {
		class test {
			init = "hint str _this;systemChat str _this;";
		};
    };*/
	
	class KAM_rhs_Land_TentA_F {
		class compileAceMenu {
			init = "['_this'] call ace_interact_menu_fnc_compileMenu;";
		};
    };
	
	class AllVehicles {
		class test {
			init = "[_this] call KAM_fnc_fuelConsumption;";
		};
    };
};

class Extended_GetOut_EventHandlers {
	class Van_02_base_F {
		class KAM_getOut_doors {
			getOut = "[_this] call KAM_fnc_handleVanGetOut;";
		};
    };
};

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

class CfgVehicles {
	
	class DeconShower_01_base_F;
	class DeconShower_01_F: DeconShower_01_base_F {
		class ACE_Actions {
			class Activate {
				displayName = "Activate";
				condition = "((_target animationSourcePhase 'valve_source') == 0)";
				statement = "[_target, 1.5, 9] remoteExec ['BIN_fnc_deconShowerAnim', 0];";
				distance = 3;
				position = [0,0,0];
			};
			class Deactivate {
				displayName = "Deactivate";
				condition = "((_target animationSourcePhase 'valve_source') == 1)";
				statement = "[_target] remoteExec ['BIN_fnc_deconShowerAnimStop', 0];";
				distance = 3;
				position = [0,0,0];
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
		class HitPoints {
			class HitFace;
		};
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
				class PutMaskOn {
					displayName = "Put mask on";
					condition = "(_player call CBRN_fnc_hasMaskInInventory) && !((goggles _player) in CBRN_allLevel1Masks)";
					statement = "[_player, _player] call CBRN_fnc_putMaskOnAction";
					icon = "CBRN_scripts\data\icons\gasmaskIcon.paa";
				};
				class PutSuitOn {
					displayName = "Put suit on";
					condition = "(((items _player) findIf {_x in CBRN_allLevel2Suits}) > -1) && (uniform _player == '')";
					statement = "_uniforms = (items _player) arrayIntersect CBRN_allLevel2Suits;if (count _uniforms == 0) exitWith {};_player removeItem (_uniforms # 0);_player forceAddUniform (_uniforms # 0);";
					icon = "";
				};
				
				class PlaceTent {
					displayName = "Place tent";
					_items = uniformItems _player + vestItems _player + backpackItems _player;
					condition = "((((backpackItems _player) find 'Sleeping_bag_folded_01') > -1) or {(((vestItems _player) find 'Sleeping_bag_folded_01') > -1) or {(((uniformItems _player) find 'Sleeping_bag_folded_01') > -1)}})";
					statement = "[_player] call KAM_fnc_placeTent";
					icon = "";
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
		class ACE_Actions {
			class ACE_Head {
				class KAM_putBlindfoldOn {
					displayName = "Put blindfold on";
					condition = "(((items _player) findIf {_x in ['G_Blindfold_01_black_F', 'G_Blindfold_01_white_F']}) > -1) && !((goggles _target) in ['G_Blindfold_01_black_F', 'G_Blindfold_01_white_F']) && ((side _target) != (side _player))";
					statement = "[_player, _target] call KAM_fnc_putBlindfoldOn";
					icon = "";
				};
				class KAM_removeBlindfold {
					displayName = "Remove blindfold";
					condition = "((goggles _target) in ['G_Blindfold_01_black_F', 'G_Blindfold_01_white_F'])";
					statement = "[_player, _target] call KAM_fnc_removeBlindfold";
					icon = "";
				};
			};
		};
	};
	
	class SoldierEB: CAManBase{};
	class O_Soldier_base_F: SoldierEB {};
	class B_Soldier_base_F;
	class I_Soldier_base_F;
	class I_G_Soldier_base_F;
	
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
	class UGV_02_Base_F: Tank_F {
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
	
	class ThingX;
	class rhs_pontoon_static_end_base;
	class House_F;

	class rhs_pontoon_float: ThingX {
		class ACE_Actions {
			class ACE_MainActions {
				distance = 15;
				condition = "true";
				class ToEnd {
					displayName = "to end";
					condition = "(_target animationSourcePhase 'fold_source' isEqualTo 0) && {isNull (_target getVariable ['KAM_pontoon_end', objNull])}";
					statement = "[_target] call KAM_fnc_pontoonToEnd;";
					distance = 15;
					position = [0,0,0];
				};
				class Attach {
					displayName = "attach";
					condition = "(_target animationSourcePhase 'fold_source' isEqualTo 0) && {isNull (_target getVariable ['KAM_pontoon_start', objNull])}";
					statement = "[_target] call KAM_fnc_pontoonAttach;";
					distance = 15;
					position = [0,0,0];
				};
				class Detach {
					displayName = "detach";
					condition = "(_target animationSourcePhase 'fold_source' isEqualTo 0) && {(!isNull (_target getVariable ['KAM_pontoon_start', objNull]))} && {isNull (_target getVariable ['KAM_pontoon_end', objNull])}";
					statement = "[_target] call KAM_fnc_pontoonDetach;";
					distance = 15;
					position = [0,0,0];
				};
			};
		};
	};

	class KAM_rhs_pontoon_end_static: rhs_pontoon_float {
		displayName = "PMP-60 Pontoon (end/static)";
		displayNameShort = "Pontoon (e/s)";
		model = "rhsafrf\addons\rhs_pontoon\rhs_pmp_end_static.p3d";
		
		class ACE_Actions {
			class ACE_MainActions {
				distance = 15;
				condition = "true";
				class ToFloating {
					displayName = "to floating";
					condition = "(isNull (_target getVariable ['KAM_pontoon_end', objNull]))";
					statement = "[_target] call KAM_fnc_pontoonToFloating;";
					distance = 15;
					position = [0,0,0];
				};
				class Right {
					displayName = "right";
					condition = "(isNull (_target getVariable ['KAM_pontoon_end', objNull]))";
					statement = "_target setDir ((getDir _target) + 5);";
					distance = 15;
					position = [0,0,0];
				};
				class Rotate {
					displayName = "rotate";
					condition = "(isNull (_target getVariable ['KAM_pontoon_end', objNull]))";
					statement = "_target setDir ((getDir _target) + 180);";
					distance = 15;
					position = [0,0,0];
				};
				class Left {
					displayName = "left";
					condition = "(isNull (_target getVariable ['KAM_pontoon_end', objNull]))";
					statement = "_target setDir ((getDir _target) - 5);";
					distance = 15;
					position = [0,0,0];
				};
			};
		};
	};
	class KAM_rhs_pontoon_start_static: KAM_rhs_pontoon_end_static {
		displayName = "PMP-60 Pontoon (start/static)";
		displayNameShort = "Pontoon (s/s)";
		
		class ACE_Actions {
			class ACE_MainActions {
				distance = 15;
				condition = "true";
				class ToFloating {
					displayName = "to floating";
					condition = "(isNull (_target getVariable ['KAM_pontoon_start', objNull]))";
					statement = "[_target] call KAM_fnc_pontoonToFloating;";
					distance = 15;
					position = [0,0,0];
				};
				class Right {
					displayName = "right";
					condition = "false";
					statement = "_target setDir ((getDir _target) + 5);";
					distance = 15;
					position = [0,0,0];
				};
				class Rotate {
					displayName = "rotate";
					condition = "false";
					statement = "_target setDir ((getDir _target) + 180);";
					distance = 15;
					position = [0,0,0];
				};
				class Left {
					displayName = "left";
					condition = "false";
					statement = "_target setDir ((getDir _target) - 5);";
					distance = 15;
					position = [0,0,0];
				};
			};
		};
	};
	
	class Land_TentA_F;
	class KAM_rhs_Land_TentA_F: Land_TentA_F {
		displayName = "Tent (A-shape) (rollable)";
		
		class ACE_Actions {
			class RollTent {
				displayName = "roll tent";
				condition = "(alive _target)";
				statement = "deleteVehicle _target;[_player, 'Sleeping_bag_folded_01', true] call CBA_fnc_addItem;";
				distance = 3;
				position = [0,0,0];
			};
		};
		
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	
	class Truck_F;
	class Van_02_base_F: Truck_F {
		class UserActions;
	};
	class Van_02_transport_base_F: Van_02_base_F {
		class UserActions: UserActions {
			class SideDoor_Open {
				condition = "false";
			};
			class SideDoor_Close: SideDoor_Open {
				condition = "false";
			};
			class Rear_Open: SideDoor_Open {
				condition = "false";
			};
			class Rear_Closed: Rear_Open {
				condition = "false";
			};
		};
	};
	
	
	//backpack
	class B_AssaultPack_mcamo;
	class rhs_rpg_empty;
	class B_TacticalPack_mcamo;
	class TFAR_rt1523g;
	class B_AssaultPack_wdl_F;
	class B_AssaultPack_tna_F;
	class B_TacticalPack_oli;
	class TFAR_rt1523g_black;
	class TFAR_rt1523g_green;
	class B_AssaultPack_rgr;
	class B_AssaultPack_sgg;
	class B_AssaultPack_blk;
	class ace_gunbag_Tan;
	class B_FieldPack_ocamo;
	class B_FieldPack_ghex_F;
	class B_ViperLightHarness_hex_F;
	class B_ViperLightHarness_ghex_F;
	class B_TacticalPack_ocamo;
	class B_AssaultPack_dgtl;
	class B_AssaultPack_eaf_F;
	class B_RadioBag_01_eaf_F;
	class B_FieldPack_taiga_F;
	class B_Carryall_taiga_F;
	class B_Kitbag_sgg;
	class rhsusf_assault_eagleaiii_ucp;
	class TFAR_rt1523g_bwmod;
	class rhsusf_falconii_coy;
	class B_LegStrapBag_black_F;
	class B_LegStrapBag_coyote_F;
	class B_LegStrapBag_olive_F;
	class B_Carryall_khk;
	class LOP_B_KB_Med_tub;
	class B_FieldPack_oli;
	class fsg_fieldpack;
	class rhssaf_kitbag_smb;
	class B_Kitbag_cbr;
	class TFAR_mr3000_rhs;
	class TFAR_mr3000;
	class TFAR_mr3000_bwmod: TFAR_mr3000 {
		tf_encryptionCode = "tf_east_radio_code";
	};
	class TFAR_mr3000_bwmod_tropen;
	class B_Kitbag_rgr;
	class TFAR_anprc155;
	class LOP_B_KB_Med_rgr;
	class SFPD_RHS_WINTER_kitbag: B_Kitbag_cbr {
        displayname = "Winter Kitbag";
		hiddenselectionstextures[] = {"\SFPD_RHS_Units\backpack_fast_co.paa"};
	};
	
	//Vehicles
	class I_C_Boat_Transport_02_F;
	class I_G_Offroad_01_F;
	class I_G_Offroad_01_armed_F;
	class I_G_Offroad_01_AT_F;
	class I_C_Offroad_02_unarmed_F;
	class I_C_Offroad_02_LMG_F;
	class I_C_Offroad_02_AT_F;
	class I_G_Van_02_vehicle_F;
	class I_G_Van_01_transport_F;
	class I_G_Van_01_fuel_F;
	
	//RHS
	class rhssaf_m1151_olive;
	class rhssaf_m1151_olive_pkm;
	class rhssaf_army_ural_open;
	class rhsgref_ins_g_uaz_dshkm_chdkz;
	class rhsgref_ins_g_uaz;
	class rhsgref_ins_g_uaz_open;
	class rhsgref_ins_g_uaz_spg9;
	class rhsgref_ins_g_ural_open;
	class rhsgref_ins_g_gaz66_ammo;
	class rhsgref_ins_g_kraz255b1_fuel;
	class rhsgref_BRDM2_ins_g;
	class rhsgref_BRDM2_ATGM_ins_g;
	class rhsgref_BRDM2_HQ_ins_g;
	class rhsgref_BRDM2UM_ins_g;
	class rhsgref_ins_g_ural_Zu23;
	class rhsgref_ins_g_btr60;
	class rhsgref_ins_g_bmd1;
	class rhsgref_ins_g_bmd2;
	class rhsgref_ins_g_zsu234;
	class rhsgref_ins_g_t72ba;
	class rhsgref_ins_g_d30;
	class rhsgref_ins_g_DSHKM;
	class rhsgref_ins_g_DSHKM_Mini_TriPod;
	class rhsgref_ins_g_ZU23;
	class rhsgref_ins_g_SPG9;
	class rhsgref_ins_g_AGS30_TriPod;
	class rhsgref_ins_g_zil131;
	class rhsgref_ins_g_zil131_open;
	class LOP_ISTS_M1025_D;
	class LOP_ISTS_M1025_W_M2;
	class rhsusf_m998_d_4dr;
	class rhsusf_m1025_d_m2;
	class rhsusf_M1237_M2_usarmy_d;
	class rhsusf_m113d_usarmy;
	class rhsusf_m1a2sep1tuskiid_usarmy;
	class rhsusf_M978A4_BKIT_usarmy_d;
	class rhsusf_M977A4_AMMO_BKIT_usarmy_d;
	class rhsusf_M1083A1P2_B_d_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy;
	class rhsusf_m998_w_4dr;
	class rhsusf_m1025_w_m2;
	class rhsusf_M1237_M2_usarmy_wd;
	class rhsusf_m113_usarmy;
	class rhsusf_m1a2sep1tuskiiwd_usarmy;
	class rhsusf_M978A4_BKIT_usarmy_wd;
	class rhsusf_M977A4_AMMO_BKIT_usarmy_wd;
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
	class RHS_M2StaticMG_D;
	class RHS_M2StaticMG_MiniTripod_D;
	class RHS_TOW_TriPod_D;
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
	//
	class rhs_t90sm_tv;
	class SFPD_RHS_rhs_t90sm_tv: rhs_t90sm_tv{
		class ACE_SelfActions;
	};
	//
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
	class MRAP_02_base_F;
	class Offroad_01_base_F;
	class AT_01_base_F;
	class rhs_tigr_vdv;
	class OTR21_Base;
	class Heli_Light_02_base_F;
	class Heli_Attack_02_base_F;
	class UAV_02_base_F;
	class UAV_02_dynamicLoadout_base_F;
	class O_Plane_CAS_02_F;
	class rhs_pilot_base;
	class I_supplyCrate_F;
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
	class rhs_t15_base;
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
	class rhsgref_tla_SPG9;
	class rhsgref_tla_ZU23;
	class rhsgref_tla_2b14;
	class rhsgref_tla_btr60;
	class rhs_bmk_t_base;
	class LOP_Offroad_base;
	class LOP_Offroad_M2_base;
	class LOP_LB_Armed_Base;
	class rhs_DSHKM_ins;
	class LOP_T34_Base;
	class LOP_T55_Base;
	class LOP_Truck_base;
	class LOP_Offroad_AT_base;
	class LOP_UAZ_AGS30_Base;
	class LOP_UAZ_DSHKM_Base;
	class LOP_UAZ_SPG9_Base;
	class LOP_KAMAZ_ammo_base;
	class LOP_KAMAZ_cov_base;
	class LOP_KAMAZ_fuel_base;
	class LOP_KAMAZ_trans_base;
	class LOP_KAMAZ_rep_base;
	class LOP_KAMAZ_med_base;
	class LOP_URAL_base;
	class LOP_URAL_open_base;
	class LOP_HEMTT_mov_base;
	class LOP_HEMTT_cov_base;
	class LOP_HEMTT_ammo_base;
	class LOP_HEMTT_box_base;
	class LOP_HEMTT_fuel_base;
	class LOP_HEMTT_med_base;
	class LOP_HEMTT_rep_base;
	class LOP_HEMTT_trans_base;
	class LOP_Nissan_PKM_base;
	class LOP_LandRover_mg_base;
	class LOP_LandRover_spg9_base;
	class LOP_LandRover_base_02;
	class LOP_Van_Cargo_base;
	class LOP_Van_Trans_base;
	class LOP_SUV_base;
	class LOP_LB_Civil_Base;
	class LOP_AFR_Base_IND;
	class LOP_BH_Infantry_base;
	class LOP_IRA_Infantry_base;
	class PO_ISIS_Infantry_Base_IND;
	class PO_ISTS_Infantry_B_Base_IND;
	class PO_NK_Infantry_Base;
	class PO_AM_Infantry_Base_OPF;
	class PO_SYR_Infantry_Base;
	class PO_AA_Infantry_Base;
	class PO_AA_Police_Base;
	class PO_GRE_Infantry_Base;
	class PO_IA_Infantry_D_Base;
	class PO_IA_Infantry_SF_Base;
	class PO_IA_Infantry_W_Base;
	class PO_PESH_Infantry_Base;
	class PO_AM_Infantry_Base_IND;
	class PO_PMC_Infantry_Base;
	class C_Marshal_F;
	class C_man_p_fugitive_F;
	class C_journalist_F;
	class PO_TRK_Infantry_Base;
	class LOP_UVF_Infantry_base;
	class rhsusf_M1165A1_GMV_SAG2_M134D_M240_base;
	class rhsusf_M1165A1_GMV_SAG2_M2_M240_base;
	class rhsusf_M1165A1_GMV_SAG2_Mk19_M240_base;
	class rhs_2s1tank_at_base;
	class rhsgref_cdf_su25;
	class rhssaf_airforce_l_18;
	class rhssaf_airforce_l_18_101;
	class rhssaf_army_2s1;
	class rhssaf_m1025_olive_m2;
	class rhssaf_m1025_olive;
	class rhssaf_m998_olive_2dr_fulltop;
	class rhssaf_m998_olive_2dr_halftop;
	class rhssaf_m1152_olive;
	class rhssaf_m1152_TCV_olive;
	class rhssaf_m1152_rsv_olive;
	class rhssaf_army_kraz255b1_flatbed;
	class rhssaf_army_kraz255b1_pmp;
	class rhsgref_ins_reed;
	class rhsgref_ins_uniform_izlom;
	class rhsgref_ins_uniform_specter;
	class rhsgref_ins_uniform_gorka_g;
	class rhsgref_ins_uniform_gorka_y;
	class rhssaf_army_m10_para_asst_mgun_m84;
	class rhssaf_army_m10_para_asst_mgun_minimi;
	class rhssaf_army_m10_para_asst_spec_aa;
	class rhssaf_army_m10_para_asst_spec_at;
	class rhssaf_army_m10_para_crew;
	class rhssaf_army_m10_para_engineer;
	class rhssaf_army_m10_para_exp;
	class rhssaf_army_m10_para_medic;
	class rhssaf_army_m10_para_ft_lead;
	class rhssaf_army_m10_para_gl_ag36;
	class rhssaf_army_m10_para_gl_m320;
	class rhssaf_army_m10_para_mgun_m84;
	class rhssaf_army_m10_para_mgun_minimi;
	class rhssaf_army_m10_para_sniper_m76;
	class rhssaf_army_m10_para_spec_aa;
	class rhssaf_army_m10_para_spec_at;
	class rhssaf_army_m10_para_officer;
	class rhssaf_army_m10_para_repair;
	class rhssaf_army_m10_para_rifleman_ammo;
	class rhssaf_army_m10_para_rifleman_at;
	class rhssaf_army_m10_para_rifleman_hk416;
	class rhssaf_army_m10_para_rifleman_g36;
	class rhssaf_army_m10_para_rifleman_m21;
	class rhssaf_army_m10_para_sniper_m82a1;
	class rhssaf_army_m10_para_spotter;
	class rhssaf_army_m10_para_sq_lead;
	class rhssaf_army_m10_digital_asst_mgun;
	class rhssaf_army_m10_digital_asst_spec_aa;
	class rhssaf_army_m10_digital_asst_spec_at;
	class rhssaf_army_m10_digital_crew_armored;
	class rhssaf_army_m10_digital_crew;
	class rhssaf_army_m10_digital_engineer;
	class rhssaf_army_m10_digital_exp;
	class rhssaf_army_m10_digital_medic;
	class rhssaf_army_m10_digital_ft_lead;
	class rhssaf_army_m10_digital_gl;
	class rhssaf_army_m10_digital_mgun_m84;
	class rhssaf_army_m10_digital_sniper_m76;
	class rhssaf_army_m10_digital_spec_aa;
	class rhssaf_army_m10_digital_spec_at;
	class rhssaf_army_m10_digital_officer;
	class rhssaf_army_m10_digital_repair;
	class rhssaf_army_m10_digital_rifleman_ammo;
	class rhssaf_army_m10_digital_rifleman_at;
	class rhssaf_army_m10_digital_rifleman_m21;
	class rhssaf_army_m10_digital_rifleman_m70;
	class rhssaf_army_m10_digital_spotter;
	class rhssaf_army_m10_digital_sq_lead;
	class rhssaf_army_m93_oakleaf_summer_asst_mgun;
	class rhssaf_army_m93_oakleaf_summer_asst_spec_aa;
	class rhssaf_army_m93_oakleaf_summer_asst_spec_at;
	class rhssaf_army_m93_oakleaf_summer_crew;
	class rhssaf_army_m93_oakleaf_summer_engineer;
	class rhssaf_army_m93_oakleaf_summer_exp;
	class rhssaf_army_m93_oakleaf_summer_medic;
	class rhssaf_army_m93_oakleaf_summer_ft_lead;
	class rhssaf_army_m93_oakleaf_summer_gl;
	class rhssaf_army_m93_oakleaf_summer_mgun_m84;
	class rhssaf_army_m93_oakleaf_summer_sniper_m76;
	class rhssaf_army_m93_oakleaf_summer_spec_aa;
	class rhssaf_army_m93_oakleaf_summer_spec_at;
	class rhssaf_army_m93_oakleaf_summer_officer;
	class rhssaf_army_m93_oakleaf_summer_repair;
	class rhssaf_army_m93_oakleaf_summer_rifleman_ammo;
	class rhssaf_army_m93_oakleaf_summer_rifleman_at;
	class rhssaf_army_m93_oakleaf_summer_rifleman_m21;
	class rhssaf_army_m93_oakleaf_summer_rifleman_m70;
	class rhssaf_army_m93_oakleaf_summer_spotter;
	class rhssaf_army_m93_oakleaf_summer_sq_lead;
	class rhssaf_airforce_pilot_mig29;
	class rhssaf_airforce_pilot_transport_heli;
	class UAV_03_dynamicLoadout_base_F;
	class B_Ship_MRLS_01_base_F;
	class B_Ship_Gun_01_base_F;
	class SAM_System_01_base_F;
	class AAA_System_01_base_F;
	class Static_Designator_01_base_F;
	class SAM_System_02_base_F;
	class UAV_05_Base_F;
	class B_TargetSoldier;
	class Radar_System_01_base_F;
	class ace_dragon_staticBase;
	class SAM_System_03_base_F;
	class Radar_System_02_base_F;
	class Static_Designator_02_base_F;
	class SAM_System_04_base_F;
	class O_TargetSoldier;
	class GMG_01_base_F;
	class GMG_01_high_base_F;
	class UAV_06_base_F;
	class UAV_06_medical_base_F;
	class UAV_01_base_F;
	class UGV_02_Demining_Base_F;
	class UGV_02_Science_Base_F;
	class UGV_01_base_F;
	class UGV_01_rcws_base_F;
	class UAV_02_CAS_base_F;
	class I_TargetSoldier;
	class HMG_02_base_F;
	class HMG_02_high_base_F;
	class AA_01_base_F;
	class Mortar_01_base_F;
	class ACE_SpottingScopeObject;
	class GMG_01_A_base_F;
	class HMG_01_base_F;
	class HMG_01_high_base_F;
	class HMG_01_A_base_F;
	class UAV_04_base_F;
	class rhsgref_cdf_t80u_tv;
	class rhsgref_cdf_t80uk_tv;
	class LSV_01_light_base_F;
	class rhsgref_cdf_reg_arifleman_rpk;
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_3_F;
	class B_MBT_01_base_F;
	class Heli_Attack_01_dynamicLoadout_base_F;
	class Plane_CAS_01_dynamicLoadout_base_F;
	class Plane_Fighter_01_Base_F;
	class SDV_01_base_F;
	class B_APC_Tracked_01_base_F;
	class B_APC_Wheeled_01_base_F;
	class AFV_Wheeled_01_base_F;
	class AFV_Wheeled_01_up_base_F;
	class B_MBT_01_mlrs_base_F;
	class Rubber_duck_base_F;
	class B_MBT_01_arty_base_F;
	class Boat_Armed_01_minigun_base_F;
	class Rescue_duck_base_F;
	class Truck_01_cargo_base_F;
	class Truck_01_flatbed_base_F;
	class MRAP_01_gmg_base_F;
	class MRAP_01_hmg_base_F;
	class LSV_01_unarmed_base_F;
	class LSV_01_AT_base_F;
	class LSV_01_armed_base_F;
	class Quadbike_01_base_F;
	class VTOL_01_armed_base_F;
	class VTOL_01_infantry_base_F;
	class Heli_Light_01_dynamicLoadout_base_F;
	class Heli_Transport_03_base_F;
	class VTOL_01_vehicle_base_F;
	class Heli_Transport_03_unarmed_base_F;
	class Heli_Light_01_unarmed_base_F;
	class Truck_02_base_F;
	class MRAP_02_gmg_base_F;
	class MRAP_02_hmg_base_F;
	class LSV_02_unarmed_base_F;
	class LSV_02_armed_base_F;
	class LSV_02_AT_base_F;
	class Truck_03_base_F;
	class Heli_Light_02_dynamicLoadout_base_F;
	class Heli_Light_02_unarmed_base_F;
	class Heli_Transport_04_base_F;
	class Plane_Fighter_02_Base_F;
	class O_APC_Tracked_02_base_F;
	class APC_Wheeled_02_base_v2_F;
	class O_MBT_02_arty_base_F;
	class Boat_Armed_01_base_F;
	class Truck_02_Ammo_base_F;
	class Truck_02_fuel_base_F;
	class Truck_02_medical_base_F;
	class Truck_02_box_base_F;
	class Truck_02_transport_base_F;
	class Plane_CAS_02_dynamicLoadout_base_F;
	class MBT_04_cannon_base_F;
	class MBT_04_command_base_F;
	class O_MBT_02_base_F;
	class Heli_Attack_02_dynamicLoadout_base_F;
	class VTOL_02_infantry_dynamicLoadout_base_F;
	class VTOL_02_vehicle_dynamicLoadout_base_F;
	class RHS_L159_base;
	class RHS_L39_base;
	class RHS_AN2_Base;
	class I_APC_Wheeled_03_base_F;
	class I_APC_tracked_03_base_F;
	class LT_01_AA_base_F;
	class MRAP_03_hmg_base_F;
	class MRAP_03_base_F;
	class MRAP_03_gmg_base_F;
	class I_MBT_03_base_F;
	class Plane_Fighter_04_Base_F;
	class LT_01_cannon_base_F;
	class LT_01_scout_base_F;
	class LT_01_AT_base_F;
	class Heli_light_03_unarmed_base_F;
	class Heli_light_03_dynamicLoadout_base_F;
	class Van_02_medevac_base_F;
	class Van_02_vehicle_base_F;
	class I_E_APC_tracked_03_base_F;
	class Truck_02_MRL_base_F;
	class Offroad_01_military_base_F;
	class Offroad_01_military_comms_base_F;
	class Offroad_01_military_covered_base_F;
	class I_Plane_Fighter_03_dynamicLoadout_F;
	class B_Soldier_support_base_F;
	class B_Soldier_03_f;
	class B_Soldier_04_f;
	class B_Soldier_05_f;
	class B_Soldier_diver_base_F;
	class B_Soldier_recon_base;
	class B_Soldier_sniper_base_F;
	class B_Soldier_02_f;
	class B_ghillie_base_F;
	class B_W_Soldier_F;
	class O_Heli_Transport_04_black_F;
	class O_Heli_Transport_04_ammo_black_F;
	class O_Heli_Transport_04_fuel_black_F;
	class O_Heli_Transport_04_box_black_F;
	class O_Heli_Transport_04_bench_black_F;
	class O_Heli_Transport_04_medevac_black_F;
	class O_Heli_Transport_04_covered_black_F;
	class rhs_p37_turret_base;
	class rhs_prv13_turret_base;
	class O_Soldier_support_base_F;
	class O_Soldier_02_F;
	class O_Soldier_diver_base_F;
	class O_Soldier_recon_base;
	class O_Soldier_sniper_base_F;
	class O_ghillie_base_F;
	class O_A_soldier_base_F;
	class O_Soldier_Urban_base;
	class O_V_Soldier_base_F;
	class O_R_Soldier_Base_F;
	class O_R_Soldier_recon_base;
	class I_Soldier_MG_F;
	class I_Soldier_02_F;
	class I_Soldier_support_base_F;
	class I_Soldier_03_F;
	class I_Soldier_04_F;
	class I_Soldier_diver_base_F;
	class I_Soldier_sniper_base_F;
	class I_ghillie_base_F;
	class I_E_Soldier_base_F;
	class I_L_Soldier_Base_F;
	class Wheeled_APC_F;
	
	//Supply
	class Box_East_Ammo_F;
	class Box_East_Grenades_F;
	class Box_East_AmmoOrd_F;
	class Box_East_WpsLaunch_F;
	class Box_CSAT_Equip_F;
	class Box_East_Wps_F;
	class Box_East_WpsSpecial_F;
	class Box_IND_Ammo_F;
	class Box_AAF_Equip_F;
	class Box_IND_AmmoOrd_F;
	class Box_IND_Grenades_F;
	class Box_IND_WpsLaunch_F;
	class Box_IND_WpsSpecial_F;
	class Box_IND_Wps_F;
	class Box_EAF_Ammo_F;
	class Box_EAF_Grenades_F;
	class Box_EAF_AmmoOrd_F;
	class Box_EAF_WpsLaunch_F;
	class Box_EAF_Equip_F;
	class Box_EAF_Wps_F;
	class Box_EAF_WpsSpecial_F;
	class O_CargoNet_01_ammo_F;
	class I_CargoNet_01_ammo_F;
	class I_E_CargoNet_01_ammo_F;
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
	
	//class Pod_Heli_Transport_04_base_F;//Land_Pod_Heli_Transport_04_ammo_F,Land_Pod_Heli_Transport_04_box_F,Land_Pod_Heli_Transport_04_fuel_F,Land_Pod_Heli_Transport_04_repair_F
	//class Pod_Heli_Transport_04_crewed_base_F;//Land_Pod_Heli_Transport_04_bench_F,Land_Pod_Heli_Transport_04_covered_F,Land_Pod_Heli_Transport_04_medevac_F
	class Land_Pod_Heli_Transport_04_ammo_F;
	class Land_Pod_Heli_Transport_04_bench_F;
	class Land_Pod_Heli_Transport_04_box_F;
	class Land_Pod_Heli_Transport_04_covered_F;
	class Land_Pod_Heli_Transport_04_fuel_F;
	class Land_Pod_Heli_Transport_04_medevac_F;
	class Land_Pod_Heli_Transport_04_repair_F;
	
	//ADD_ZEUS
	class Land_Pod_Heli_Transport_04_ammo_black_F : Land_Pod_Heli_Transport_04_ammo_F {
		scope = 2;
		scopeCurator = 2;
	};
	
	class Land_Pod_Heli_Transport_04_bench_black_F : Land_Pod_Heli_Transport_04_bench_F {
		scope = 2;
		scopeCurator = 2;
	};
	
	class Land_Pod_Heli_Transport_04_box_black_F : Land_Pod_Heli_Transport_04_box_F {
		scope = 2;
		scopeCurator = 2;
	};
	
	class Land_Pod_Heli_Transport_04_covered_black_F : Land_Pod_Heli_Transport_04_covered_F {
		scope = 2;
		scopeCurator = 2;
	};
	
	class Land_Pod_Heli_Transport_04_fuel_black_F : Land_Pod_Heli_Transport_04_fuel_F {
		scope = 2;
		scopeCurator = 2;
	};
	
	class Land_Pod_Heli_Transport_04_medevac_black_F : Land_Pod_Heli_Transport_04_medevac_F {
		scope = 2;
		scopeCurator = 2;
	};
	
	class Land_Pod_Heli_Transport_04_repair_black_F : Land_Pod_Heli_Transport_04_repair_F {
		scope = 2;
		scopeCurator = 2;
	};
	
	//REMOVE_ZEUS
	REMOVE_ZEUS(rhsgref_BRDM2,Wheeled_APC_F)
	REMOVE_ZEUS(I_Soldier_A_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_Soldier_AAR_F,I_Soldier_support_base_F)
	REMOVE_ZEUS(I_support_AMG_F,I_Soldier_support_base_F)
	REMOVE_ZEUS(I_support_AMort_F,I_Soldier_support_base_F)
	REMOVE_ZEUS(I_Soldier_AAT_F,I_Soldier_support_base_F)
	REMOVE_ZEUS(I_Soldier_AAA_F,I_Soldier_AAT_F)
	REMOVE_ZEUS(I_Soldier_AR_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_medic_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_crew_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_engineer_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_Soldier_exp_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_pilot_F,I_Soldier_04_F)
	REMOVE_ZEUS(I_Fighter_Pilot_F,I_pilot_F)
	REMOVE_ZEUS(I_Soldier_GL_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_support_GMG_F,I_Soldier_support_base_F)
	REMOVE_ZEUS(I_support_MG_F,I_Soldier_support_base_F)
	REMOVE_ZEUS(I_support_Mort_F,I_Soldier_support_base_F)
	REMOVE_ZEUS(I_helipilot_F,I_Soldier_03_F)
	REMOVE_ZEUS(I_helicrew_F,I_helipilot_F)
	REMOVE_ZEUS(I_Soldier_M_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_soldier_mine_F,I_Soldier_exp_F)
	REMOVE_ZEUS(I_Soldier_AA_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_Soldier_AT_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_officer_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_Officer_Parade_F,I_officer_F)
	REMOVE_ZEUS(I_Officer_Parade_Veteran_F,I_Officer_Parade_F)
	REMOVE_ZEUS(I_Soldier_repair_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_soldier_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_Soldier_LAT_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_Soldier_LAT2_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_Soldier_lite_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_Soldier_unarmed_F,I_soldier_F)
	REMOVE_ZEUS(I_Soldier_SL_F,I_Soldier_02_F)
	REMOVE_ZEUS(I_Survivor_F,I_soldier_F)
	REMOVE_ZEUS(I_Soldier_TL_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_soldier_UAV_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_soldier_UAV_06_F,I_soldier_UAV_F)
	REMOVE_ZEUS(I_soldier_UAV_06_medical_F,I_soldier_UAV_F)
	REMOVE_ZEUS(I_diver_F,I_Soldier_diver_base_F)
	REMOVE_ZEUS(I_diver_exp_F,I_Soldier_diver_base_F)
	REMOVE_ZEUS(I_diver_TL_F,I_Soldier_diver_base_F)
	REMOVE_ZEUS(I_Sniper_F,I_Soldier_sniper_base_F)
	REMOVE_ZEUS(I_ghillie_ard_F,I_ghillie_base_F)
	REMOVE_ZEUS(I_ghillie_lsh_F,I_ghillie_base_F)
	REMOVE_ZEUS(I_ghillie_sard_F,I_ghillie_base_F)
	REMOVE_ZEUS(I_Spotter_F,I_Soldier_sniper_base_F)
	REMOVE_ZEUS(I_Story_Colonel_F,I_officer_F)
	REMOVE_ZEUS(I_Captain_Hladas_F,I_officer_F)
	REMOVE_ZEUS(I_Story_Crew_F,I_crew_F)
	REMOVE_ZEUS(I_Story_Officer_01_F,I_officer_F)
	REMOVE_ZEUS(I_Soldier_VR_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_Protagonist_VR_F,I_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_A_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_AAR_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Support_AMG_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Support_AMort_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_AAA_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_AAT_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_AR_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_CBRN_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Medic_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Crew_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Engineer_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_Exp_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_GL_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Support_GMG_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Support_MG_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Support_Mort_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Helicrew_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Helipilot_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_soldier_M_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_MP_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Scientist_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Scientist_Unarmed_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_soldier_Mine_F,I_E_Soldier_Exp_F)
	REMOVE_ZEUS(I_E_Soldier_AA_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_AT_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Officer_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Officer_Parade_F,I_E_Officer_F)
	REMOVE_ZEUS(I_E_Officer_Parade_Veteran_F,I_E_Officer_Parade_F)
	REMOVE_ZEUS(I_E_Soldier_Pathfinder_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_RadioOperator_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_Repair_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_LAT_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_LAT2_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_lite_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_unarmed_F,I_E_Soldier_F)
	REMOVE_ZEUS(I_E_Soldier_universal_F,I_E_Soldier_F)
	REMOVE_ZEUS(I_E_Soldier_SL_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Survivor_F,I_E_Soldier_F)
	REMOVE_ZEUS(I_E_Soldier_TL_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_Soldier_UAV_F,I_E_Soldier_base_F)
	REMOVE_ZEUS(I_E_soldier_UAV_06_F,I_E_Soldier_UAV_F)
	REMOVE_ZEUS(I_E_soldier_UAV_06_medical_F,I_E_Soldier_UAV_F)
	REMOVE_ZEUS(I_E_soldier_UGV_02_Demining_F,I_E_Soldier_UAV_F)
	REMOVE_ZEUS(I_E_soldier_UGV_02_Science_F,I_E_Soldier_UAV_F)
	REMOVE_ZEUS(I_L_Criminal_SG_F,I_L_Soldier_Base_F)
	REMOVE_ZEUS(I_L_Criminal_SMG_F,I_L_Soldier_Base_F)
	REMOVE_ZEUS(I_L_Hunter_F,I_L_Soldier_Base_F)
	REMOVE_ZEUS(I_L_Looter_Rifle_F,I_L_Soldier_Base_F)
	REMOVE_ZEUS(I_L_Looter_Pistol_F,I_L_Soldier_Base_F)
	REMOVE_ZEUS(I_L_Looter_SG_F,I_L_Soldier_Base_F)
	REMOVE_ZEUS(I_L_Looter_SMG_F,I_L_Soldier_Base_F)
	REMOVE_ZEUS(O_Soldier_A_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_AAR_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_support_AMG_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_support_AMort_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_Soldier_AHAT_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_Soldier_AAT_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_Soldier_AAA_F,O_Soldier_AAT_F)
	REMOVE_ZEUS(O_Soldier_AR_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_medic_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_crew_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_engineer_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_soldier_exp_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_helipilot_F,O_Soldier_02_F)
	REMOVE_ZEUS(O_Pilot_F,O_helipilot_F)
	REMOVE_ZEUS(O_Fighter_Pilot_F,O_Pilot_F)
	REMOVE_ZEUS(O_Soldier_GL_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_support_GMG_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_support_MG_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_support_Mort_F,O_Soldier_support_base_F)
	REMOVE_ZEUS(O_HeavyGunner_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_helicrew_F,O_helipilot_F)
	REMOVE_ZEUS(O_soldier_M_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_soldier_mine_F,O_soldier_exp_F)
	REMOVE_ZEUS(O_Soldier_AA_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_AT_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_officer_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Officer_Parade_F,O_officer_F)
	REMOVE_ZEUS(O_Officer_Parade_Veteran_F,O_Officer_Parade_F)
	REMOVE_ZEUS(O_soldier_PG_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_soldier_repair_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_LAT_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_HAT_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_lite_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_unarmed_F,O_Soldier_F)
	REMOVE_ZEUS(O_Sharpshooter_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_SL_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Survivor_F,O_Soldier_F)
	REMOVE_ZEUS(O_Soldier_TL_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_soldier_UAV_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_soldier_UAV_06_F,O_soldier_UAV_F)
	REMOVE_ZEUS(O_soldier_UAV_06_medical_F,O_soldier_UAV_F)
	REMOVE_ZEUS(O_diver_F,O_Soldier_diver_base_F)
	REMOVE_ZEUS(O_diver_exp_F,O_Soldier_diver_base_F)
	REMOVE_ZEUS(O_diver_TL_F,O_Soldier_diver_base_F)
	REMOVE_ZEUS(O_recon_exp_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_recon_JTAC_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_recon_M_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_recon_medic_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_Pathfinder_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_recon_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_recon_LAT_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_recon_TL_F,O_Soldier_recon_base)
	REMOVE_ZEUS(O_sniper_F,O_Soldier_sniper_base_F)
	REMOVE_ZEUS(O_ghillie_ard_F,O_ghillie_base_F)
	REMOVE_ZEUS(O_ghillie_lsh_F,O_ghillie_base_F)
	REMOVE_ZEUS(O_ghillie_sard_F,O_ghillie_base_F)
	REMOVE_ZEUS(O_spotter_F,O_Soldier_sniper_base_F)
	REMOVE_ZEUS(O_Story_CEO_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Story_Colonel_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_A_soldier_F,O_A_soldier_base_F)
	REMOVE_ZEUS(O_A_soldier_TL_F,O_A_soldier_base_F)
	REMOVE_ZEUS(O_soldierU_A_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_AAR_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_AAA_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_AAT_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_AR_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_medic_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_engineer_U_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_exp_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_SoldierU_GL_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_Urban_HeavyGunner_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_M_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_AA_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_AT_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_repair_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_LAT_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_SoldierU_unarmed_F,O_soldierU_F)
	REMOVE_ZEUS(O_Urban_Sharpshooter_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_SoldierU_SL_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_soldierU_TL_F,O_Soldier_Urban_base)
	REMOVE_ZEUS(O_V_Soldier_Exp_hex_F,O_V_Soldier_base_F)
	REMOVE_ZEUS(O_V_Soldier_JTAC_hex_F,O_V_Soldier_base_F)
	REMOVE_ZEUS(O_V_Soldier_M_hex_F,O_V_Soldier_base_F)
	REMOVE_ZEUS(O_V_Soldier_hex_F,O_V_Soldier_base_F)
	REMOVE_ZEUS(O_V_Soldier_Medic_hex_F,O_V_Soldier_base_F)
	REMOVE_ZEUS(O_V_Soldier_LAT_hex_F,O_V_Soldier_base_F)
	REMOVE_ZEUS(O_V_Soldier_TL_hex_F,O_V_Soldier_base_F)
	REMOVE_ZEUS(O_Soldier_VR_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_Protagonist_VR_F,O_Soldier_base_F)
	REMOVE_ZEUS(O_T_Soldier_A_F,O_Soldier_A_F)
	REMOVE_ZEUS(O_T_Soldier_AAR_F,O_Soldier_AAR_F)
	REMOVE_ZEUS(O_T_Support_AMG_F,O_support_AMG_F)
	REMOVE_ZEUS(O_T_Support_AMort_F,O_support_AMort_F)
	REMOVE_ZEUS(O_T_Soldier_AHAT_F,O_Soldier_AHAT_F)
	REMOVE_ZEUS(O_T_Soldier_AAA_F,O_Soldier_AAA_F)
	REMOVE_ZEUS(O_T_Soldier_AAT_F,O_Soldier_AAT_F)
	REMOVE_ZEUS(O_T_Soldier_AR_F,O_Soldier_AR_F)
	REMOVE_ZEUS(O_T_Medic_F,O_medic_F)
	REMOVE_ZEUS(O_T_Crew_F,O_crew_F)
	REMOVE_ZEUS(O_T_Engineer_F,O_engineer_F)
	REMOVE_ZEUS(O_T_Soldier_Exp_F,O_soldier_exp_F)
	REMOVE_ZEUS(O_T_Soldier_GL_F,O_Soldier_GL_F)
	REMOVE_ZEUS(O_T_Support_GMG_F,O_support_GMG_F)
	REMOVE_ZEUS(O_T_Support_MG_F,O_support_MG_F)
	REMOVE_ZEUS(O_T_Support_Mort_F,O_support_Mort_F)
	REMOVE_ZEUS(O_T_Helicrew_F,O_helicrew_F)
	REMOVE_ZEUS(O_T_Helipilot_F,O_helipilot_F)
	REMOVE_ZEUS(O_T_Soldier_M_F,O_soldier_M_F)
	REMOVE_ZEUS(O_T_soldier_mine_F,O_T_Soldier_Exp_F)
	REMOVE_ZEUS(O_T_Soldier_AA_F,O_Soldier_AA_F)
	REMOVE_ZEUS(O_T_Soldier_AT_F,O_Soldier_AT_F)
	REMOVE_ZEUS(O_T_Officer_F,O_officer_F)
	REMOVE_ZEUS(O_T_Soldier_PG_F,O_soldier_PG_F)
	REMOVE_ZEUS(O_T_Pilot_F,O_Pilot_F)
	REMOVE_ZEUS(O_T_Soldier_Repair_F,O_soldier_repair_F)
	REMOVE_ZEUS(O_T_Soldier_F,O_Soldier_F)
	REMOVE_ZEUS(O_T_Soldier_LAT_F,O_Soldier_LAT_F)
	REMOVE_ZEUS(O_T_Soldier_HAT_F,O_Soldier_HAT_F)
	REMOVE_ZEUS(O_T_Soldier_unarmed_F,O_T_Soldier_F)
	REMOVE_ZEUS(O_T_Soldier_SL_F,O_Soldier_SL_F)
	REMOVE_ZEUS(O_T_Soldier_TL_F,O_Soldier_TL_F)
	REMOVE_ZEUS(O_T_Soldier_UAV_F,O_soldier_UAV_F)
	REMOVE_ZEUS(O_T_soldier_UAV_06_F,O_T_Soldier_UAV_F)
	REMOVE_ZEUS(O_T_soldier_UAV_06_medical_F,O_T_Soldier_UAV_F)
	REMOVE_ZEUS(O_T_Diver_F,O_diver_F)
	REMOVE_ZEUS(O_T_Diver_Exp_F,O_diver_exp_F)
	REMOVE_ZEUS(O_T_Diver_TL_F,O_diver_TL_F)
	REMOVE_ZEUS(O_T_Recon_Exp_F,O_recon_exp_F)
	REMOVE_ZEUS(O_T_Recon_JTAC_F,O_recon_JTAC_F)
	REMOVE_ZEUS(O_T_Recon_M_F,O_recon_M_F)
	REMOVE_ZEUS(O_T_Recon_Medic_F,O_recon_medic_F)
	REMOVE_ZEUS(O_T_Recon_F,O_recon_F)
	REMOVE_ZEUS(O_T_Recon_LAT_F,O_recon_LAT_F)
	REMOVE_ZEUS(O_T_Recon_TL_F,O_recon_TL_F)
	REMOVE_ZEUS(O_T_Sniper_F,O_sniper_F)
	REMOVE_ZEUS(O_T_Spotter_F,O_spotter_F)
	REMOVE_ZEUS(O_T_ghillie_tna_F,O_ghillie_base_F)
	REMOVE_ZEUS(O_V_Soldier_Exp_ghex_F,O_V_Soldier_Exp_hex_F)
	REMOVE_ZEUS(O_V_Soldier_JTAC_ghex_F,O_V_Soldier_JTAC_hex_F)
	REMOVE_ZEUS(O_V_Soldier_M_ghex_F,O_V_Soldier_M_hex_F)
	REMOVE_ZEUS(O_V_Soldier_ghex_F,O_V_Soldier_hex_F)
	REMOVE_ZEUS(O_V_Soldier_Medic_ghex_F,O_V_Soldier_Medic_hex_F)
	REMOVE_ZEUS(O_V_Soldier_LAT_ghex_F,O_V_Soldier_LAT_hex_F)
	REMOVE_ZEUS(O_V_Soldier_TL_ghex_F,O_V_Soldier_TL_hex_F)
	REMOVE_ZEUS(O_R_Soldier_AR_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_medic_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_soldier_exp_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_Soldier_GL_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_JTAC_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_soldier_M_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_Soldier_LAT_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_Soldier_TL_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_A_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_AR2_F,O_R_Soldier_AR_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_AR_F,O_R_Soldier_AR_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_Medic,O_R_medic_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_Engineer_F,O_R_Soldier_Base_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_GL_F,O_R_Soldier_GL_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_M2_F,O_R_soldier_M_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_LAT_F,O_R_Soldier_LAT_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_M_F,O_R_soldier_M_F)
	REMOVE_ZEUS(O_R_Patrol_Soldier_TL_F,O_R_Soldier_TL_F)
	REMOVE_ZEUS(O_R_recon_AR_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(O_R_recon_exp_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(O_R_recon_GL_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(O_R_recon_JTAC_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(O_R_recon_M_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(O_R_recon_medic_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(O_R_recon_LAT_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(O_R_recon_TL_F,O_R_Soldier_recon_base)
	REMOVE_ZEUS(B_Soldier_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Soldier_A_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_soldier_AAR_F,B_Soldier_support_base_F)
	REMOVE_ZEUS(B_support_AMG_F,B_Soldier_support_base_F)
	REMOVE_ZEUS(B_support_AMort_F,B_Soldier_support_base_F)
	REMOVE_ZEUS(B_soldier_AAT_F,B_Soldier_support_base_F)
	REMOVE_ZEUS(B_soldier_AAA_F,B_soldier_AAT_F)
	REMOVE_ZEUS(B_soldier_AR_F,B_Soldier_02_f)
	REMOVE_ZEUS(B_medic_F,B_Soldier_02_f)
	REMOVE_ZEUS(B_RangeMaster_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Competitor_F,B_RangeMaster_F)
	REMOVE_ZEUS(B_crew_F,B_Soldier_03_f)
	REMOVE_ZEUS(B_Helipilot_F,B_Soldier_04_f)
	REMOVE_ZEUS(B_Deck_Crew_F,B_Helipilot_F)
	REMOVE_ZEUS(B_engineer_F,B_Soldier_03_f)
	REMOVE_ZEUS(B_soldier_exp_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Pilot_F,B_Soldier_05_f)
	REMOVE_ZEUS(B_Fighter_Pilot_F,B_Pilot_F)
	REMOVE_ZEUS(B_Soldier_GL_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_support_GMG_F,B_Soldier_support_base_F)
	REMOVE_ZEUS(B_support_MG_F,B_Soldier_support_base_F)
	REMOVE_ZEUS(B_support_Mort_F,B_Soldier_support_base_F)
	REMOVE_ZEUS(B_HeavyGunner_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_helicrew_F,B_Helipilot_F)
	REMOVE_ZEUS(B_soldier_M_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_soldier_mine_F,B_soldier_exp_F)
	REMOVE_ZEUS(B_soldier_AA_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_soldier_AT_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_officer_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Officer_Parade_F,B_officer_F)
	REMOVE_ZEUS(B_Officer_Parade_Veteran_F,B_Officer_Parade_F)
	REMOVE_ZEUS(B_soldier_PG_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_soldier_repair_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_soldier_LAT_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_soldier_LAT2_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Soldier_lite_F,B_Soldier_03_f)
	REMOVE_ZEUS(B_Sharpshooter_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Soldier_SL_F,B_Soldier_03_f)
	REMOVE_ZEUS(B_Soldier_TL_F,B_Soldier_03_f)
	REMOVE_ZEUS(B_soldier_UAV_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_soldier_UAV_06_F,B_soldier_UAV_F)
	REMOVE_ZEUS(B_soldier_UAV_06_medical_F,B_soldier_UAV_F)
	REMOVE_ZEUS(B_soldier_UGV_02_Demining_F,B_soldier_UAV_F)
	REMOVE_ZEUS(B_soldier_UGV_02_Science_F,B_soldier_UAV_F)
	REMOVE_ZEUS(B_Patrol_Soldier_A_F,B_Soldier_A_F)
	REMOVE_ZEUS(B_Patrol_Soldier_AR_F,B_soldier_AR_F)
	REMOVE_ZEUS(B_Patrol_Medic_F,B_medic_F)
	REMOVE_ZEUS(B_Patrol_Engineer_F,B_engineer_F)
	REMOVE_ZEUS(B_Patrol_HeavyGunner_F,B_HeavyGunner_F)
	REMOVE_ZEUS(B_Patrol_Soldier_MG_F,B_soldier_AR_F)
	REMOVE_ZEUS(B_Patrol_Soldier_M_F,B_soldier_M_F)
	REMOVE_ZEUS(B_Patrol_Soldier_AT_F,B_soldier_AT_F)
	REMOVE_ZEUS(B_Patrol_Soldier_TL_F,B_Soldier_TL_F)
	REMOVE_ZEUS(B_Patrol_Soldier_UAV_F,B_soldier_UAV_F)
	REMOVE_ZEUS(B_diver_F,B_Soldier_diver_base_F)
	REMOVE_ZEUS(B_diver_exp_F,B_Soldier_diver_base_F)
	REMOVE_ZEUS(B_diver_TL_F,B_Soldier_diver_base_F)
	REMOVE_ZEUS(B_recon_exp_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_recon_JTAC_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_recon_M_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_recon_medic_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_recon_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_recon_LAT_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_Recon_Sharpshooter_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_recon_TL_F,B_Soldier_recon_base)
	REMOVE_ZEUS(B_sniper_F,B_Soldier_sniper_base_F)
	REMOVE_ZEUS(B_ghillie_ard_F,B_ghillie_base_F)
	REMOVE_ZEUS(B_ghillie_lsh_F,B_ghillie_base_F)
	REMOVE_ZEUS(B_ghillie_sard_F,B_ghillie_base_F)
	REMOVE_ZEUS(B_spotter_F,B_Soldier_sniper_base_F)
	REMOVE_ZEUS(B_CTRG_soldier_engineer_exp_F,B_Soldier_02_f)
	REMOVE_ZEUS(B_CTRG_soldier_M_medic_F,B_Soldier_03_f)
	REMOVE_ZEUS(B_Captain_Jay_F,B_Soldier_02_f)
	REMOVE_ZEUS(B_Story_Protagonist_F,B_Soldier_02_f)
	REMOVE_ZEUS(B_Story_Pilot_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_CTRG_soldier_AR_A_F,B_Soldier_03_f)
	REMOVE_ZEUS(B_Story_SF_Captain_F,B_Soldier_02_f)
	REMOVE_ZEUS(B_CTRG_soldier_GL_LAT_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_CTRG_Sharphooter_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Captain_Pettka_F,B_Soldier_02_f)
	REMOVE_ZEUS(B_Soldier_VR_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_Protagonist_VR_F,B_Soldier_base_F)
	REMOVE_ZEUS(B_T_Soldier_A_F,B_Soldier_A_F)
	REMOVE_ZEUS(B_T_Soldier_AAR_F,B_soldier_AAR_F)
	REMOVE_ZEUS(B_T_Support_AMG_F,B_support_AMG_F)
	REMOVE_ZEUS(B_T_Support_AMort_F,B_support_AMort_F)
	REMOVE_ZEUS(B_T_Soldier_AAA_F,B_soldier_AAA_F)
	REMOVE_ZEUS(B_T_Soldier_AAT_F,B_soldier_AAT_F)
	REMOVE_ZEUS(B_T_Soldier_AR_F,B_soldier_AR_F)
	REMOVE_ZEUS(B_T_Medic_F,B_medic_F)
	REMOVE_ZEUS(B_T_Crew_F,B_crew_F)
	REMOVE_ZEUS(B_T_Engineer_F,B_engineer_F)
	REMOVE_ZEUS(B_T_Soldier_Exp_F,B_soldier_exp_F)
	REMOVE_ZEUS(B_T_Soldier_GL_F,B_Soldier_GL_F)
	REMOVE_ZEUS(B_T_Support_GMG_F,B_support_GMG_F)
	REMOVE_ZEUS(B_T_Support_MG_F,B_support_MG_F)
	REMOVE_ZEUS(B_T_Support_Mort_F,B_support_Mort_F)
	REMOVE_ZEUS(B_T_Helicrew_F,B_helicrew_F)
	REMOVE_ZEUS(B_T_Helipilot_F,B_Helipilot_F)
	REMOVE_ZEUS(B_T_soldier_M_F,B_soldier_M_F)
	REMOVE_ZEUS(B_T_soldier_mine_F,B_T_Soldier_Exp_F)
	REMOVE_ZEUS(B_T_Soldier_AA_F,B_soldier_AA_F)
	REMOVE_ZEUS(B_T_Soldier_AT_F,B_soldier_AT_F)
	REMOVE_ZEUS(B_T_Officer_F,B_officer_F)
	REMOVE_ZEUS(B_T_Soldier_PG_F,B_soldier_PG_F)
	REMOVE_ZEUS(B_T_Pilot_F,B_Pilot_F)
	REMOVE_ZEUS(B_T_Soldier_Repair_F,B_soldier_repair_F)
	REMOVE_ZEUS(B_T_Soldier_LAT_F,B_soldier_LAT_F)
	REMOVE_ZEUS(B_T_Soldier_LAT2_F,B_soldier_LAT2_F)
	REMOVE_ZEUS(B_T_Soldier_SL_F,B_Soldier_SL_F)
	REMOVE_ZEUS(B_T_Soldier_TL_F,B_Soldier_TL_F)
	REMOVE_ZEUS(B_T_Soldier_UAV_F,B_soldier_UAV_F)
	REMOVE_ZEUS(B_T_soldier_UAV_06_F,B_T_Soldier_UAV_F)
	REMOVE_ZEUS(B_T_soldier_UAV_06_medical_F,B_T_Soldier_UAV_F)
	REMOVE_ZEUS(B_T_Diver_F,B_diver_F)
	REMOVE_ZEUS(B_T_Diver_Exp_F,B_diver_exp_F)
	REMOVE_ZEUS(B_T_Diver_TL_F,B_diver_TL_F)
	REMOVE_ZEUS(B_T_Recon_Exp_F,B_recon_exp_F)
	REMOVE_ZEUS(B_T_Recon_JTAC_F,B_recon_JTAC_F)
	REMOVE_ZEUS(B_T_Recon_M_F,B_recon_M_F)
	REMOVE_ZEUS(B_T_Recon_Medic_F,B_recon_medic_F)
	REMOVE_ZEUS(B_T_Recon_F,B_recon_F)
	REMOVE_ZEUS(B_T_Recon_LAT_F,B_recon_LAT_F)
	REMOVE_ZEUS(B_T_Recon_TL_F,B_recon_TL_F)
	REMOVE_ZEUS(B_T_Sniper_F,B_sniper_F)
	REMOVE_ZEUS(B_T_ghillie_tna_F,B_ghillie_base_F)
	REMOVE_ZEUS(B_T_Spotter_F,B_spotter_F)
	REMOVE_ZEUS(B_W_Soldier_A_F,B_Soldier_A_F)
	REMOVE_ZEUS(B_W_Soldier_AAR_F,B_soldier_AAR_F)
	REMOVE_ZEUS(B_W_Support_AMG_F,B_support_AMG_F)
	REMOVE_ZEUS(B_W_Support_AMort_F,B_support_AMort_F)
	REMOVE_ZEUS(B_W_Soldier_AAA_F,B_soldier_AAA_F)
	REMOVE_ZEUS(B_W_Soldier_AAT_F,B_soldier_AAT_F)
	REMOVE_ZEUS(B_W_Soldier_AR_F,B_soldier_AR_F)
	REMOVE_ZEUS(B_W_Soldier_CBRN_F,B_W_Soldier_F)
	REMOVE_ZEUS(B_W_Medic_F,B_medic_F)
	REMOVE_ZEUS(B_W_Crew_F,B_crew_F)
	REMOVE_ZEUS(B_W_Engineer_F,B_engineer_F)
	REMOVE_ZEUS(B_W_Soldier_Exp_F,B_soldier_exp_F)
	REMOVE_ZEUS(B_W_Soldier_GL_F,B_Soldier_GL_F)
	REMOVE_ZEUS(B_W_Support_GMG_F,B_support_GMG_F)
	REMOVE_ZEUS(B_W_Support_MG_F,B_support_MG_F)
	REMOVE_ZEUS(B_W_Support_Mort_F,B_support_Mort_F)
	REMOVE_ZEUS(B_W_Helicrew_F,B_helicrew_F)
	REMOVE_ZEUS(B_W_Helipilot_F,B_Helipilot_F)
	REMOVE_ZEUS(B_W_soldier_M_F,B_soldier_M_F)
	REMOVE_ZEUS(B_W_soldier_mine_F,B_W_Soldier_Exp_F)
	REMOVE_ZEUS(B_W_Soldier_AA_F,B_soldier_AA_F)
	REMOVE_ZEUS(B_W_Soldier_AT_F,B_soldier_AT_F)
	REMOVE_ZEUS(B_W_Officer_F,B_officer_F)
	REMOVE_ZEUS(B_W_RadioOperator_F,B_W_Soldier_F)
	REMOVE_ZEUS(B_W_Soldier_Repair_F,B_soldier_repair_F)
	REMOVE_ZEUS(B_W_Soldier_LAT_F,B_soldier_LAT_F)
	REMOVE_ZEUS(B_W_Soldier_LAT2_F,B_soldier_LAT2_F)
	REMOVE_ZEUS(B_W_Soldier_SL_F,B_Soldier_SL_F)
	REMOVE_ZEUS(B_W_Soldier_TL_F,B_Soldier_TL_F)
	REMOVE_ZEUS(B_W_Soldier_UAV_F,B_soldier_UAV_F)
	REMOVE_ZEUS(B_W_soldier_UGV_02_Demining_F,B_W_Soldier_UAV_F)
	REMOVE_ZEUS(B_W_soldier_UGV_02_Science_F,B_W_Soldier_UAV_F)
	REMOVE_ZEUS(I_Plane_Fighter_03_CAS_F,Plane_Fighter_03_base_F)
	REMOVE_ZEUS(I_Boat_Transport_01_F,Rubber_duck_base_F)
	REMOVE_ZEUS(I_Truck_02_MRL_F,Truck_02_MRL_base_F)
	REMOVE_ZEUS(I_APC_Wheeled_03_cannon_F,I_APC_Wheeled_03_base_F)
	REMOVE_ZEUS(I_APC_tracked_03_cannon_F,I_APC_tracked_03_base_F)
	REMOVE_ZEUS(I_LT_01_AA_F,LT_01_AA_base_F)
	REMOVE_ZEUS(I_E_Heli_light_03_dynamicLoadout_F,Heli_light_03_dynamicLoadout_base_F)
	REMOVE_ZEUS(I_E_Heli_light_03_unarmed_F,Heli_light_03_unarmed_base_F)
	REMOVE_ZEUS(I_MRAP_03_hmg_F,MRAP_03_hmg_base_F)
	REMOVE_ZEUS(I_Truck_02_ammo_F,Truck_02_Ammo_base_F)
	REMOVE_ZEUS(I_MRAP_03_F,MRAP_03_base_F)
	REMOVE_ZEUS(I_MRAP_03_gmg_F,MRAP_03_gmg_base_F)
	REMOVE_ZEUS(I_Truck_02_fuel_F,Truck_02_fuel_base_F)
	REMOVE_ZEUS(I_Plane_Fighter_03_AA_F,I_Plane_Fighter_03_CAS_F)
	REMOVE_ZEUS(I_MBT_03_cannon_F,I_MBT_03_base_F)
	REMOVE_ZEUS(I_Plane_Fighter_04_F,Plane_Fighter_04_Base_F)
	REMOVE_ZEUS(I_LT_01_cannon_F,LT_01_cannon_base_F)
	REMOVE_ZEUS(I_Plane_Fighter_03_Cluster_F,I_Plane_Fighter_03_dynamicLoadout_F)
	REMOVE_ZEUS(I_LT_01_scout_F,LT_01_scout_base_F)
	REMOVE_ZEUS(I_Plane_Fighter_04_Cluster_F,I_Plane_Fighter_04_F)
	REMOVE_ZEUS(I_LT_01_AT_F,LT_01_AT_base_F)
	REMOVE_ZEUS(I_Heli_light_03_unarmed_F,Heli_light_03_unarmed_base_F)
	REMOVE_ZEUS(I_Heli_Transport_02_F,Heli_Transport_02_base_F)
	REMOVE_ZEUS(I_Quadbike_01_F,Quadbike_01_base_F)
	REMOVE_ZEUS(I_Heli_light_03_dynamicLoadout_F,Heli_light_03_dynamicLoadout_base_F)
	REMOVE_ZEUS(I_Truck_02_covered_F,Truck_02_base_F)
	REMOVE_ZEUS(I_Truck_02_box_F,Truck_02_box_base_F)
	REMOVE_ZEUS(I_Truck_02_transport_F,Truck_02_transport_base_F)
	REMOVE_ZEUS(I_Boat_Armed_01_minigun_F,Boat_Armed_01_minigun_base_F)
	REMOVE_ZEUS(I_Truck_02_medical_F,Truck_02_medical_base_F)
	REMOVE_ZEUS(I_SDV_01_F,SDV_01_base_F)
	REMOVE_ZEUS(I_E_Offroad_01_covered_F,Offroad_01_military_covered_base_F)
	REMOVE_ZEUS(LOP_Offroad_cover_base,I_E_Offroad_01_covered_F)
	REMOVE_ZEUS(I_E_Quadbike_01_F,Quadbike_01_base_F)
	REMOVE_ZEUS(I_E_Van_02_medevac_F,Van_02_medevac_base_F)
	REMOVE_ZEUS(I_E_Van_02_vehicle_F,Van_02_vehicle_base_F)
	REMOVE_ZEUS(I_E_Van_02_transport_F,Van_02_transport_base_F)
	REMOVE_ZEUS(I_E_Van_02_transport_MP_F,Van_02_transport_base_F)
	REMOVE_ZEUS(I_E_Truck_02_Ammo_F,Truck_02_Ammo_base_F)
	REMOVE_ZEUS(I_E_Truck_02_fuel_F,Truck_02_fuel_base_F)
	REMOVE_ZEUS(I_E_Truck_02_Medical_F,Truck_02_medical_base_F)
	REMOVE_ZEUS(I_E_Truck_02_Box_F,Truck_02_box_base_F)
	REMOVE_ZEUS(I_E_Truck_02_transport_F,Truck_02_transport_base_F)
	REMOVE_ZEUS(I_E_Truck_02_F,Truck_02_base_F)
	REMOVE_ZEUS(I_E_APC_tracked_03_cannon_F,I_E_APC_tracked_03_base_F)
	REMOVE_ZEUS(I_E_Truck_02_MRL_F,Truck_02_MRL_base_F)
	REMOVE_ZEUS(I_E_Offroad_01_F,Offroad_01_military_base_F)
	REMOVE_ZEUS(I_E_Offroad_01_comms_F,Offroad_01_military_comms_base_F)
	REMOVE_ZEUS(rhs_l159_CDF,RHS_L159_base)
	REMOVE_ZEUS(rhs_l159_CDF_CAP,rhs_l159_CDF)
	REMOVE_ZEUS(rhs_l159_CDF_CAS,rhs_l159_CDF)
	REMOVE_ZEUS(rhs_l159_CDF_plamen,rhs_l159_CDF)
	REMOVE_ZEUS(rhs_l39_cdf,RHS_L39_base)
	REMOVE_ZEUS(rhsgref_cdf_mig29s,rhs_mig29s_base)
	REMOVE_ZEUS(rhsgref_cdf_2s1_at,rhs_2s1tank_at_base)
	REMOVE_ZEUS(RHS_AN2,RHS_AN2_Base)
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman_akm,rhsgref_cdf_reg_rifleman_m70)
	REMOVE_ZEUS(O_Truck_02_covered_F,Truck_02_base_F)
	REMOVE_ZEUS(O_MRAP_02_F,MRAP_02_base_F)
	REMOVE_ZEUS(O_MRAP_02_gmg_F,MRAP_02_gmg_base_F)
	REMOVE_ZEUS(O_MRAP_02_hmg_F,MRAP_02_hmg_base_F)
	REMOVE_ZEUS(O_LSV_02_unarmed_F,LSV_02_unarmed_base_F)
	REMOVE_ZEUS(O_LSV_02_armed_F,LSV_02_armed_base_F)
	REMOVE_ZEUS(O_LSV_02_AT_F,LSV_02_AT_base_F)
	REMOVE_ZEUS(O_Quadbike_01_F,Quadbike_01_base_F)
	REMOVE_ZEUS(O_Truck_03_covered_F,Truck_03_base_F)
	REMOVE_ZEUS(O_Heli_Light_02_dynamicLoadout_F,Heli_Light_02_dynamicLoadout_base_F)
	REMOVE_ZEUS(O_Heli_Light_02_unarmed_F,Heli_Light_02_unarmed_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_ammo_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_bench_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_box_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_fuel_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Plane_Fighter_02_F,Plane_Fighter_02_Base_F)
	REMOVE_ZEUS(O_Plane_Fighter_02_Cluster_F,O_Plane_Fighter_02_F)
	REMOVE_ZEUS(O_Plane_CAS_02_dynamicLoadout_F,Plane_CAS_02_dynamicLoadout_base_F)
	REMOVE_ZEUS(O_Plane_CAS_02_Cluster_F,O_Plane_CAS_02_dynamicLoadout_F)
	REMOVE_ZEUS(O_Truck_03_ammo_F,Truck_03_base_F)
	REMOVE_ZEUS(O_Truck_03_device_F,Truck_03_base_F)
	REMOVE_ZEUS(O_Truck_03_fuel_F,Truck_03_base_F)
	REMOVE_ZEUS(O_Truck_03_medical_F,Truck_03_base_F)
	REMOVE_ZEUS(O_Truck_03_repair_F,Truck_03_base_F)
	REMOVE_ZEUS(O_Truck_03_transport_F,Truck_03_base_F)
	REMOVE_ZEUS(O_APC_Tracked_02_AA_F,O_APC_Tracked_02_base_F)
	REMOVE_ZEUS(O_APC_Tracked_02_cannon_F,O_APC_Tracked_02_base_F)
	REMOVE_ZEUS(O_APC_Wheeled_02_rcws_v2_F,APC_Wheeled_02_base_v2_F)
	REMOVE_ZEUS(O_MBT_02_arty_F,O_MBT_02_arty_base_F)
	REMOVE_ZEUS(O_Boat_Transport_01_F,Rubber_duck_base_F)
	REMOVE_ZEUS(O_Lifeboat,Rescue_duck_base_F)
	REMOVE_ZEUS(O_Boat_Armed_01_hmg_F,Boat_Armed_01_base_F)
	REMOVE_ZEUS(O_Truck_02_Ammo_F,Truck_02_Ammo_base_F)
	REMOVE_ZEUS(O_Truck_02_fuel_F,Truck_02_fuel_base_F)
	REMOVE_ZEUS(O_Truck_02_medical_F,Truck_02_medical_base_F)
	REMOVE_ZEUS(O_Truck_02_box_F,Truck_02_box_base_F)
	REMOVE_ZEUS(O_Truck_02_transport_F,Truck_02_transport_base_F)
	REMOVE_ZEUS(O_Plane_Fighter_02_Stealth_F,Plane_Fighter_02_Base_F)
	REMOVE_ZEUS(O_SDV_01_F,SDV_01_base_F)
	REMOVE_ZEUS(O_MBT_04_cannon_F,MBT_04_cannon_base_F)
	REMOVE_ZEUS(O_MBT_04_command_F,MBT_04_command_base_F)
	REMOVE_ZEUS(O_MBT_02_cannon_F,O_MBT_02_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_medevac_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_repair_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Heli_Transport_04_covered_F,Heli_Transport_04_base_F)
	REMOVE_ZEUS(O_Heli_Attack_02_dynamicLoadout_F,Heli_Attack_02_dynamicLoadout_base_F)
	REMOVE_ZEUS(O_T_MBT_04_cannon_F,MBT_04_cannon_base_F)
	REMOVE_ZEUS(O_T_MBT_04_command_F,MBT_04_command_base_F)
	REMOVE_ZEUS(O_T_MBT_02_cannon_ghex_F,O_MBT_02_cannon_F)
	REMOVE_ZEUS(O_T_APC_Tracked_02_AA_ghex_F,O_APC_Tracked_02_AA_F)
	REMOVE_ZEUS(O_T_APC_Tracked_02_cannon_ghex_F,O_APC_Tracked_02_cannon_F)
	REMOVE_ZEUS(O_T_APC_Wheeled_02_rcws_v2_ghex_F,APC_Wheeled_02_base_v2_F)
	REMOVE_ZEUS(O_T_MBT_02_arty_ghex_F,O_MBT_02_arty_F)
	REMOVE_ZEUS(O_T_Boat_Transport_01_F,Rubber_duck_base_F)
	REMOVE_ZEUS(O_T_Lifeboat,O_Lifeboat)
	REMOVE_ZEUS(O_T_Boat_Armed_01_hmg_F,O_Boat_Armed_01_hmg_F)
	REMOVE_ZEUS(O_T_MRAP_02_ghex_F,MRAP_02_base_F)
	REMOVE_ZEUS(O_T_MRAP_02_gmg_ghex_F,MRAP_02_gmg_base_F)
	REMOVE_ZEUS(O_T_MRAP_02_hmg_ghex_F,MRAP_02_hmg_base_F)
	REMOVE_ZEUS(O_T_LSV_02_unarmed_F,LSV_02_unarmed_base_F)
	REMOVE_ZEUS(O_T_LSV_02_armed_F,LSV_02_armed_base_F)
	REMOVE_ZEUS(O_T_LSV_02_AT_F,LSV_02_AT_base_F)
	REMOVE_ZEUS(O_T_Quadbike_01_ghex_F,Quadbike_01_base_F)
	REMOVE_ZEUS(O_T_Truck_03_ammo_ghex_F,O_Truck_03_ammo_F)
	REMOVE_ZEUS(O_T_Truck_03_device_ghex_F,O_Truck_03_device_F)
	REMOVE_ZEUS(O_T_Truck_03_fuel_ghex_F,O_Truck_03_fuel_F)
	REMOVE_ZEUS(O_T_Truck_03_medical_ghex_F,O_Truck_03_medical_F)
	REMOVE_ZEUS(O_T_Truck_03_repair_ghex_F,O_Truck_03_repair_F)
	REMOVE_ZEUS(O_T_Truck_03_transport_ghex_F,O_Truck_03_transport_F)
	REMOVE_ZEUS(O_T_Truck_03_covered_ghex_F,O_Truck_03_covered_F)
	REMOVE_ZEUS(O_T_Truck_02_Ammo_F,Truck_02_Ammo_base_F)
	REMOVE_ZEUS(O_T_Truck_02_fuel_F,Truck_02_fuel_base_F)
	REMOVE_ZEUS(O_T_Truck_02_Medical_F,Truck_02_medical_base_F)
	REMOVE_ZEUS(O_T_Truck_02_Box_F,Truck_02_box_base_F)
	REMOVE_ZEUS(O_T_Truck_02_transport_F,Truck_02_transport_base_F)
	REMOVE_ZEUS(O_T_Truck_02_F,Truck_02_base_F)
	REMOVE_ZEUS(O_T_VTOL_02_infantry_dynamicLoadout_F,VTOL_02_infantry_dynamicLoadout_base_F)
	REMOVE_ZEUS(O_T_VTOL_02_vehicle_dynamicLoadout_F,VTOL_02_vehicle_dynamicLoadout_base_F)
	REMOVE_ZEUS(B_MBT_01_cannon_F,B_MBT_01_base_F)
	REMOVE_ZEUS(B_Heli_Attack_01_dynamicLoadout_F,Heli_Attack_01_dynamicLoadout_base_F)
	REMOVE_ZEUS(B_Heli_Transport_01_F,Heli_Transport_01_base_F)
	REMOVE_ZEUS(B_Plane_CAS_01_dynamicLoadout_F,Plane_CAS_01_dynamicLoadout_base_F)
	REMOVE_ZEUS(B_Plane_CAS_01_Cluster_F,B_Plane_CAS_01_dynamicLoadout_F)
	REMOVE_ZEUS(B_T_MBT_01_cannon_F,B_MBT_01_cannon_F)
	REMOVE_ZEUS(B_Plane_Fighter_01_F,Plane_Fighter_01_Base_F)
	REMOVE_ZEUS(B_Plane_Fighter_01_Cluster_F,B_Plane_Fighter_01_F)
	REMOVE_ZEUS(B_Plane_Fighter_01_Stealth_F,Plane_Fighter_01_Base_F)
	REMOVE_ZEUS(B_SDV_01_F,SDV_01_base_F)
	REMOVE_ZEUS(B_MBT_01_TUSK_F,B_MBT_01_cannon_F)
	REMOVE_ZEUS(B_APC_Tracked_01_AA_F,B_APC_Tracked_01_base_F)
	REMOVE_ZEUS(B_T_APC_Tracked_01_AA_F,B_APC_Tracked_01_AA_F)
	REMOVE_ZEUS(B_APC_Wheeled_01_cannon_F,B_APC_Wheeled_01_base_F)
	REMOVE_ZEUS(B_T_APC_Wheeled_01_cannon_F,B_APC_Wheeled_01_cannon_F)
	REMOVE_ZEUS(B_APC_Tracked_01_rcws_F,B_APC_Tracked_01_base_F)
	REMOVE_ZEUS(B_T_APC_Tracked_01_rcws_F,B_APC_Tracked_01_rcws_F)
	REMOVE_ZEUS(B_APC_Tracked_01_CRV_F,B_APC_Tracked_01_base_F)
	REMOVE_ZEUS(B_T_APC_Tracked_01_CRV_F,B_APC_Tracked_01_CRV_F)
	REMOVE_ZEUS(B_T_AFV_Wheeled_01_cannon_F,AFV_Wheeled_01_base_F)
	REMOVE_ZEUS(B_T_AFV_Wheeled_01_up_cannon_F,AFV_Wheeled_01_up_base_F)
	REMOVE_ZEUS(B_AFV_Wheeled_01_cannon_F,AFV_Wheeled_01_base_F)
	REMOVE_ZEUS(B_AFV_Wheeled_01_up_cannon_F,AFV_Wheeled_01_up_base_F)
	REMOVE_ZEUS(B_MBT_01_mlrs_F,B_MBT_01_mlrs_base_F)
	REMOVE_ZEUS(B_Boat_Transport_01_F,Rubber_duck_base_F)
	REMOVE_ZEUS(B_T_Boat_Transport_01_F,B_Boat_Transport_01_F)
	REMOVE_ZEUS(B_MBT_01_arty_F,B_MBT_01_arty_base_F)
	REMOVE_ZEUS(B_T_MBT_01_mlrs_F,B_MBT_01_mlrs_F)
	REMOVE_ZEUS(B_T_MBT_01_arty_F,B_MBT_01_arty_F)
	REMOVE_ZEUS(B_Boat_Armed_01_minigun_F,Boat_Armed_01_minigun_base_F)
	REMOVE_ZEUS(B_T_Boat_Armed_01_minigun_F,B_Boat_Armed_01_minigun_F)
	REMOVE_ZEUS(B_Lifeboat,Rescue_duck_base_F)
	REMOVE_ZEUS(B_T_Lifeboat,B_Lifeboat)
	REMOVE_ZEUS(B_Truck_01_transport_F,Truck_01_base_F)
	REMOVE_ZEUS(B_Truck_01_mover_F,B_Truck_01_transport_F)
	REMOVE_ZEUS(B_T_Truck_01_mover_F,B_Truck_01_mover_F)
	REMOVE_ZEUS(B_Truck_01_ammo_F,B_Truck_01_mover_F)
	REMOVE_ZEUS(B_T_Truck_01_ammo_F,B_Truck_01_ammo_F)
	REMOVE_ZEUS(B_T_Truck_01_cargo_F,Truck_01_cargo_base_F)
	REMOVE_ZEUS(B_Truck_01_cargo_F,Truck_01_cargo_base_F)
	REMOVE_ZEUS(B_Truck_01_box_F,B_Truck_01_mover_F)
	REMOVE_ZEUS(B_T_Truck_01_box_F,B_Truck_01_box_F)
	REMOVE_ZEUS(B_T_Truck_01_flatbed_F,Truck_01_flatbed_base_F)
	REMOVE_ZEUS(B_Truck_01_flatbed_F,Truck_01_flatbed_base_F)
	REMOVE_ZEUS(B_Truck_01_fuel_F,B_Truck_01_mover_F)
	REMOVE_ZEUS(B_T_Truck_01_fuel_F,B_Truck_01_fuel_F)
	REMOVE_ZEUS(B_Truck_01_medical_F,B_Truck_01_transport_F)
	REMOVE_ZEUS(B_T_Truck_01_medical_F,B_Truck_01_medical_F)
	REMOVE_ZEUS(B_Truck_01_Repair_F,B_Truck_01_mover_F)
	REMOVE_ZEUS(B_T_Truck_01_Repair_F,B_Truck_01_Repair_F)
	REMOVE_ZEUS(B_T_Truck_01_transport_F,B_Truck_01_transport_F)
	REMOVE_ZEUS(B_Truck_01_covered_F,B_Truck_01_transport_F)
	REMOVE_ZEUS(B_T_Truck_01_covered_F,B_Truck_01_covered_F)
	REMOVE_ZEUS(B_MRAP_01_F,MRAP_01_base_F)
	REMOVE_ZEUS(B_T_MRAP_01_F,B_MRAP_01_F)
	REMOVE_ZEUS(B_MRAP_01_gmg_F,MRAP_01_gmg_base_F)
	REMOVE_ZEUS(B_T_MRAP_01_gmg_F,B_MRAP_01_gmg_F)
	REMOVE_ZEUS(B_MRAP_01_hmg_F,MRAP_01_hmg_base_F)
	REMOVE_ZEUS(B_T_MRAP_01_hmg_F,B_MRAP_01_hmg_F)
	REMOVE_ZEUS(B_LSV_01_unarmed_F,LSV_01_unarmed_base_F)
	REMOVE_ZEUS(B_T_LSV_01_unarmed_F,LSV_01_unarmed_base_F)
	REMOVE_ZEUS(B_T_LSV_01_AT_F,LSV_01_AT_base_F)
	REMOVE_ZEUS(B_LSV_01_AT_F,LSV_01_AT_base_F)
	REMOVE_ZEUS(B_T_LSV_01_armed_F,LSV_01_armed_base_F)
	REMOVE_ZEUS(B_LSV_01_armed_F,LSV_01_armed_base_F)
	REMOVE_ZEUS(B_T_Quadbike_01_F,Quadbike_01_base_F)
	REMOVE_ZEUS(B_Quadbike_01_F,Quadbike_01_base_F)
	REMOVE_ZEUS(B_T_VTOL_01_armed_F,VTOL_01_armed_base_F)
	REMOVE_ZEUS(B_T_VTOL_01_infantry_F,VTOL_01_infantry_base_F)
	REMOVE_ZEUS(B_Heli_Light_01_dynamicLoadout_F,Heli_Light_01_dynamicLoadout_base_F)
	REMOVE_ZEUS(B_Heli_Transport_03_F,Heli_Transport_03_base_F)
	REMOVE_ZEUS(B_T_VTOL_01_vehicle_F,VTOL_01_vehicle_base_F)
	REMOVE_ZEUS(B_Heli_Transport_03_unarmed_F,Heli_Transport_03_unarmed_base_F)
	REMOVE_ZEUS(B_Heli_Light_01_F,Heli_Light_01_unarmed_base_F)
	REMOVE_ZEUS(B_T_MBT_01_TUSK_F,B_MBT_01_TUSK_F)
	REMOVE_ZEUS(rhsgref_cdf_b_t80u_tv,rhsgref_cdf_t80u_tv)
	REMOVE_ZEUS(rhsgref_cdf_b_t80uk_tv,rhsgref_cdf_t80uk_tv)
	REMOVE_ZEUS(B_CTRG_LSV_01_light_F,LSV_01_light_base_F)
	REMOVE_ZEUS(B_CTRG_Heli_Transport_01_sand_F,Heli_Transport_01_base_F)
	REMOVE_ZEUS(B_CTRG_Heli_Transport_01_tropic_F,Heli_Transport_01_base_F)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_arifleman_rpk,rhsgref_cdf_reg_arifleman_rpk)
	REMOVE_ZEUS(B_CTRG_Soldier_AR_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_Exp_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_JTAC_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_M_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_Medic_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_LAT2_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_LAT_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Soldier_TL_tna_F,B_CTRG_Soldier_F)
	REMOVE_ZEUS(B_CTRG_Miller_F,B_CTRG_Soldier_3_F)
	REMOVE_ZEUS(rhsgref_cdf_b_2s1_at,rhsgref_cdf_2s1_at)
	REMOVE_ZEUS(rhsgref_ins_specialist_aa,rhsgref_ins_reed)
	REMOVE_ZEUS(rhsgref_ins_commander,rhsgref_ins_reed)
	REMOVE_ZEUS(rhsgref_ins_machinegunner,rhsgref_ins_reed)
	REMOVE_ZEUS(rhsgref_ins_militiaman_mosin,rhsgref_ins_reed)
	REMOVE_ZEUS(rhsgref_ins_rifleman_akm,rhsgref_ins_reed)
	REMOVE_ZEUS(rhsgref_ins_rifleman_aksu,rhsgref_ins_reed)
	REMOVE_ZEUS(rhsgref_ins_grenadier_rpg,rhsgref_ins_uniform_izlom)
	REMOVE_ZEUS(rhsgref_ins_sniper,rhsgref_ins_uniform_izlom)
	REMOVE_ZEUS(rhsgref_ins_crew,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_medic,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_squadleader,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_pilot,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_rifleman,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_grenadier,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_rifleman_RPG26,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_saboteur,rhsgref_ins_uniform_specter)
	REMOVE_ZEUS(rhsgref_ins_engineer,rhsgref_ins_uniform_gorka_g)
	REMOVE_ZEUS(rhsgref_ins_spotter,rhsgref_ins_uniform_gorka_y)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_asst_mgun_m84,rhssaf_army_m10_para_asst_mgun_m84)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_asst_mgun_minimi,rhssaf_army_m10_para_asst_mgun_minimi)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_asst_spec_aa,rhssaf_army_m10_para_asst_spec_aa)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_asst_spec_at,rhssaf_army_m10_para_asst_spec_at)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_crew,rhssaf_army_m10_para_crew)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_engineer,rhssaf_army_m10_para_engineer)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_exp,rhssaf_army_m10_para_exp)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_medic,rhssaf_army_m10_para_medic)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_ft_lead,rhssaf_army_m10_para_ft_lead)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_gl_ag36,rhssaf_army_m10_para_gl_ag36)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_gl_m320,rhssaf_army_m10_para_gl_m320)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_mgun_m84,rhssaf_army_m10_para_mgun_m84)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_mgun_minimi,rhssaf_army_m10_para_mgun_minimi)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_sniper_m76,rhssaf_army_m10_para_sniper_m76)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_spec_aa,rhssaf_army_m10_para_spec_aa)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_spec_at,rhssaf_army_m10_para_spec_at)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_officer,rhssaf_army_m10_para_officer)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_repair,rhssaf_army_m10_para_repair)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_rifleman_ammo,rhssaf_army_m10_para_rifleman_ammo)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_rifleman_at,rhssaf_army_m10_para_rifleman_at)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_rifleman_hk416,rhssaf_army_m10_para_rifleman_hk416)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_rifleman_g36,rhssaf_army_m10_para_rifleman_g36)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_rifleman_m21,rhssaf_army_m10_para_rifleman_m21)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_sniper_m82a1,rhssaf_army_m10_para_sniper_m82a1)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_spotter,rhssaf_army_m10_para_spotter)
	REMOVE_ZEUS(rhssaf_army_o_m10_para_sq_lead,rhssaf_army_m10_para_sq_lead)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_asst_mgun,rhssaf_army_m10_digital_asst_mgun)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_asst_spec_aa,rhssaf_army_m10_digital_asst_spec_aa)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_asst_spec_at,rhssaf_army_m10_digital_asst_spec_at)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_crew_armored,rhssaf_army_m10_digital_crew_armored)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_crew,rhssaf_army_m10_digital_crew)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_engineer,rhssaf_army_m10_digital_engineer)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_exp,rhssaf_army_m10_digital_exp)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_medic,rhssaf_army_m10_digital_medic)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_ft_lead,rhssaf_army_m10_digital_ft_lead)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_gl,rhssaf_army_m10_digital_gl)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_mgun_m84,rhssaf_army_m10_digital_mgun_m84)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_sniper_m76,rhssaf_army_m10_digital_sniper_m76)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_spec_aa,rhssaf_army_m10_digital_spec_aa)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_spec_at,rhssaf_army_m10_digital_spec_at)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_officer,rhssaf_army_m10_digital_officer)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_repair,rhssaf_army_m10_digital_repair)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_rifleman_ammo,rhssaf_army_m10_digital_rifleman_ammo)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_rifleman_at,rhssaf_army_m10_digital_rifleman_at)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_rifleman_m21,rhssaf_army_m10_digital_rifleman_m21)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_rifleman_m70,rhssaf_army_m10_digital_rifleman_m70)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_spotter,rhssaf_army_m10_digital_spotter)
	REMOVE_ZEUS(rhssaf_army_o_m10_digital_sq_lead,rhssaf_army_m10_digital_sq_lead)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_asst_mgun,rhssaf_army_m93_oakleaf_summer_asst_mgun)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_asst_spec_aa,rhssaf_army_m93_oakleaf_summer_asst_spec_aa)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_asst_spec_at,rhssaf_army_m93_oakleaf_summer_asst_spec_at)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_crew,rhssaf_army_m93_oakleaf_summer_crew)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_engineer,rhssaf_army_m93_oakleaf_summer_engineer)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_exp,rhssaf_army_m93_oakleaf_summer_exp)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_medic,rhssaf_army_m93_oakleaf_summer_medic)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_ft_lead,rhssaf_army_m93_oakleaf_summer_ft_lead)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_gl,rhssaf_army_m93_oakleaf_summer_gl)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_mgun_m84,rhssaf_army_m93_oakleaf_summer_mgun_m84)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_sniper_m76,rhssaf_army_m93_oakleaf_summer_sniper_m76)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_spec_aa,rhssaf_army_m93_oakleaf_summer_spec_aa)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_spec_at,rhssaf_army_m93_oakleaf_summer_spec_at)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_officer,rhssaf_army_m93_oakleaf_summer_officer)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_repair,rhssaf_army_m93_oakleaf_summer_repair)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_rifleman_ammo,rhssaf_army_m93_oakleaf_summer_rifleman_ammo)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_rifleman_at,rhssaf_army_m93_oakleaf_summer_rifleman_at)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_rifleman_m21,rhssaf_army_m93_oakleaf_summer_rifleman_m21)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_rifleman_m70,rhssaf_army_m93_oakleaf_summer_rifleman_m70)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_spotter,rhssaf_army_m93_oakleaf_summer_spotter)
	REMOVE_ZEUS(rhssaf_army_o_m93_oakleaf_summer_sq_lead,rhssaf_army_m93_oakleaf_summer_sq_lead)
	REMOVE_ZEUS(rhssaf_airforce_o_pilot_mig29,rhssaf_airforce_pilot_mig29)
	REMOVE_ZEUS(rhssaf_airforce_o_pilot_transport_heli,rhssaf_airforce_pilot_transport_heli)
	REMOVE_ZEUS(rhsgref_ins_rifleman_aks74,rhsgref_ins_rifleman_aksu)
	REMOVE_ZEUS(rhsgref_cdf_b_reg_rifleman_akm,rhsgref_cdf_reg_rifleman_akm)
	REMOVE_ZEUS(RHS_AN2_B,RHS_AN2)
	REMOVE_ZEUS(rhsgref_cdf_b_mig29s,rhsgref_cdf_mig29s)
	REMOVE_ZEUS(rhsgref_cdf_b_su25,rhsgref_cdf_su25)
	REMOVE_ZEUS(rhs_2s1_at_tv,rhs_2s1tank_at_base)
	REMOVE_ZEUS(rhs_2s1_at_vmf,rhs_2s1_at_tv)
	REMOVE_ZEUS(LOP_AFR_Infantry_IED,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Corpsman,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_GL,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Rifleman_4,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Rifleman,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Rifleman_5,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Rifleman_2,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Rifleman_7,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_AR,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Rifleman_8,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_AT,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Marksman,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_Rifleman_6,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_AR_Asst,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Driver,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_SL,LOP_AFR_Base_IND)
	REMOVE_ZEUS(LOP_AFR_Infantry_AR_Asst_2,LOP_AFR_Infantry_AR_Asst)
	REMOVE_ZEUS(LOP_AFR_Infantry_AR_2,LOP_AFR_Infantry_AR)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_IED,LOP_AFR_Infantry_IED)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Corpsman,LOP_AFR_Infantry_Corpsman)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_GL,LOP_AFR_Infantry_GL)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Rifleman_4,LOP_AFR_Infantry_Rifleman_4)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Rifleman,LOP_AFR_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Rifleman_5,LOP_AFR_Infantry_Rifleman_5)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Rifleman_2,LOP_AFR_Infantry_Rifleman_2)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Rifleman_7,LOP_AFR_Infantry_Rifleman_7)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_AR_2,LOP_AFR_Infantry_AR_2)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Rifleman_8,LOP_AFR_Infantry_Rifleman_8)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_AR,LOP_AFR_Infantry_AR)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_AT,LOP_AFR_Infantry_AT)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Marksman,LOP_AFR_Infantry_Marksman)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Rifleman_6,LOP_AFR_Infantry_Rifleman_6)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_AR_Asst_2,LOP_AFR_Infantry_AR_Asst_2)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_AR_Asst,LOP_AFR_Infantry_AR_Asst)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_Driver,LOP_AFR_Driver)
	REMOVE_ZEUS(LOP_AFR_OPF_Infantry_SL,LOP_AFR_Infantry_SL)
	REMOVE_ZEUS(LOP_BH_Infantry_AR_Asst,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_Rifleman,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_Rifleman_lite,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_AT,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_Marksman,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_SL,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_IED,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_Corpsman,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_TL,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_GL,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_AR,LOP_BH_Infantry_base)
	REMOVE_ZEUS(LOP_BH_Infantry_Driver,LOP_BH_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_BH_Infantry_AR_2,LOP_BH_Infantry_AR)
	REMOVE_ZEUS(LOP_BH_Infantry_AR_Asst_2,LOP_BH_Infantry_AR_Asst)
	REMOVE_ZEUS(LOP_IRA_Infantry_IED,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_TL,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_Rifleman,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_Rifleman_lite,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_GL,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_Corpsman,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_AR_Asst,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_AR,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_AT,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_Marksman,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_SL,LOP_IRA_Infantry_base)
	REMOVE_ZEUS(LOP_IRA_Infantry_Rifleman_PM63,LOP_IRA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_IRA_Infantry_Rifleman_vz58,LOP_IRA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_IRA_Infantry_Driver,LOP_IRA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Engineer,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Corpsman,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_TL,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman_5,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_GL,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman_6,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman_4,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman_3,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman_7,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_AR_Asst,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_AR,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman_9,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Marksman,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_Rifleman_8,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_AT,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_SL,PO_ISIS_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_Engineer,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_Corpsman,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_GL,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_Rifleman,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_AT,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_Marksman,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_AR,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_AR_Asst,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_B_SL,PO_ISTS_Infantry_B_Base_IND)
	REMOVE_ZEUS(LOP_ISTS_Infantry_AR_Asst_2,LOP_ISTS_Infantry_AR_Asst)
	REMOVE_ZEUS(LOP_ISTS_Infantry_AR_2,LOP_ISTS_Infantry_AR)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Engineer,LOP_ISTS_Infantry_Engineer)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Corpsman,LOP_ISTS_Infantry_Corpsman)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_TL,LOP_ISTS_Infantry_TL)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman_5,LOP_ISTS_Infantry_Rifleman_5)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_GL,LOP_ISTS_Infantry_GL)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman_6,LOP_ISTS_Infantry_Rifleman_6)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman,LOP_ISTS_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman_4,LOP_ISTS_Infantry_Rifleman_4)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman_3,LOP_ISTS_Infantry_Rifleman_3)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman_7,LOP_ISTS_Infantry_Rifleman_7)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_AR_Asst_2,LOP_ISTS_Infantry_AR_Asst_2)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_AR_2,LOP_ISTS_Infantry_AR_2)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_AR_Asst,LOP_ISTS_Infantry_AR_Asst)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman_9,LOP_ISTS_Infantry_Rifleman_9)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_AR,LOP_ISTS_Infantry_AR)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Marksman,LOP_ISTS_Infantry_Marksman)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_Rifleman_8,LOP_ISTS_Infantry_Rifleman_8)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_AT,LOP_ISTS_Infantry_AT)
	REMOVE_ZEUS(LOP_ISTS_OPF_Infantry_SL,LOP_ISTS_Infantry_SL)
	REMOVE_ZEUS(LOP_NK_Infantry_AT_Asst,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_AT,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Corpsman,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Crewman,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Engineer,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Grenadier,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_MG,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_MG_Asst,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Marksman,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Pilot,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Rifleman,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_Rifleman_2,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_SL,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_NK_Infantry_TL,PO_NK_Infantry_Base)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Engineer,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Corpsman,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_AR,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_AR_Asst,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_SL,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_GL,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_AT,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Marksman,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman_2,PO_AM_Infantry_Base_OPF)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman_6,LOP_AM_OPF_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman_4,LOP_AM_OPF_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman_7,LOP_AM_OPF_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman_8,LOP_AM_OPF_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman_9,LOP_AM_OPF_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_OPF_Infantry_Rifleman_5,LOP_AM_OPF_Infantry_Rifleman_4)
	REMOVE_ZEUS(LOP_SYR_Infantry_AT_Asst,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_AT,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Corpsman,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Crewman,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Grenadier,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Engineer,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_MG,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_MG_Asst,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Marksman,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Pilot,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Rifleman,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_Rifleman_2,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_SL,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_SYR_Infantry_TL,PO_SYR_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Corpsman,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Crewman,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Engineer,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_GL,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_AT,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_AT_Asst,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_MG_2,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_MG,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_MG_Asst_2,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_MG_Asst,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Marksman,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Rifleman_3,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Rifleman_2,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Rifleman,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_SL,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_TL,PO_AA_Infantry_Base)
	REMOVE_ZEUS(LOP_AA_Police_Corpsman,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Police_MG,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Police_MG_Asst,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Police_Rifleman_2,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Police_Rifleman,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Police_Rifleman_3,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Police_SL,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Police_TL,PO_AA_Police_Base)
	REMOVE_ZEUS(LOP_AA_Infantry_Pilot,LOP_AA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_GRE_Infantry_AT_Asst,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_AT,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_Corpsman,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_Crewman,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_Engineer,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_MG,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_MG_Asst,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_Pilot,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_Rifleman,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_Rifleman_2,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_SL,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_GRE_Infantry_TL,PO_GRE_Infantry_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Corpsman,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Crewman,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Engineer,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_GL,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_AT,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_AT_Asst,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_MG_Asst,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Marksman,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Pilot,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Rifleman,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Rifleman_2,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_Rifleman_3,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_SL,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_MG,PO_IA_Infantry_D_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_MG_2,LOP_IA_Infantry_MG)
	REMOVE_ZEUS(LOP_IA_Infantry_MG_Asst_2,LOP_IA_Infantry_MG_Asst)
	REMOVE_ZEUS(LOP_IA_Infantry_Rifleman_4,LOP_IA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_IA_Infantry_Rifleman_6,LOP_IA_Infantry_Rifleman)
	REMOVE_ZEUS(PO_IA_Infantry_SF_Corpsman,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_AT,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_AT_Asst,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_MG,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_MG_Asst,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_Marksman,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_Mechanic,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_Operator,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_Operator_2,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_GL,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_SL,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(PO_IA_Infantry_SF_TL,PO_IA_Infantry_SF_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Corpsman,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Crewman,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Engineer,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_GL,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_AT,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_AT_Asst,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_SL,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_TL,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_MG,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_MG_Asst,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Marksman,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Rifleman_3,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Rifleman,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Rifleman_2,PO_IA_Infantry_W_Base)
	REMOVE_ZEUS(LOP_IA_Infantry_W_MG_2,LOP_IA_Infantry_W_MG)
	REMOVE_ZEUS(LOP_IA_Infantry_W_MG_Asst_2,LOP_IA_Infantry_W_MG_Asst)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Rifleman_4,LOP_IA_Infantry_W_Rifleman)
	REMOVE_ZEUS(LOP_IA_Infantry_W_Rifleman_6,LOP_IA_Infantry_W_Rifleman)
	REMOVE_ZEUS(LOP_Pesh_Infantry_Corpsman,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_SL,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_Engineer,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_GL,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_AT,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_MG,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_Marksman,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_Rifleman_4,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_Rifleman,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_Rifleman_2,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_Rifleman_3,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_Sniper,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_Infantry_TL,PO_PESH_Infantry_Base)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Corpsman,LOP_Pesh_Infantry_Corpsman)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_SL,LOP_PESH_Infantry_SL)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Engineer,LOP_PESH_Infantry_Engineer)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_GL,LOP_PESH_Infantry_GL)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_AT,LOP_PESH_Infantry_AT)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_MG,LOP_PESH_Infantry_MG)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Marksman,LOP_PESH_Infantry_Marksman)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Rifleman_4,LOP_PESH_Infantry_Rifleman_4)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Rifleman,LOP_PESH_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Rifleman_2,LOP_PESH_Infantry_Rifleman_2)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Rifleman_3,LOP_PESH_Infantry_Rifleman_3)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_Sniper,LOP_PESH_Infantry_Sniper)
	REMOVE_ZEUS(LOP_PESH_IND_Infantry_TL,LOP_PESH_Infantry_TL)
	REMOVE_ZEUS(LOP_IRAN_Infantry_pilot,rhs_pilot_base)
	REMOVE_ZEUS(LOP_IRAN_Infantry_JetPilot,LOP_IRAN_Infantry_pilot)
	REMOVE_ZEUS(LOP_AM_Infantry_Rifleman,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_SL,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_AR_Asst,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_AR,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_AT,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_Marksman,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_Engineer,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_Corpsman,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_GL,PO_AM_Infantry_Base_IND)
	REMOVE_ZEUS(LOP_AM_Infantry_Rifleman_6,LOP_AM_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_Infantry_Rifleman_4,LOP_AM_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_Infantry_Rifleman_7,LOP_AM_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_Infantry_Rifleman_8,LOP_AM_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_Infantry_Rifleman_9,LOP_AM_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AM_Infantry_Rifleman_5,LOP_AM_Infantry_Rifleman_4)
	REMOVE_ZEUS(LOP_PMC_Infantry_AA,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_AT_Asst,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_AT,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_EOD,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Marksman,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Rifleman_2,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_GL,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_MG_Asst,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_MG,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Rifleman_3,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Rifleman,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Corpsman,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Marksman_2,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Rifleman_4,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Engineer,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Crewman,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_Pilot,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_SL,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_TL,PO_PMC_Infantry_Base)
	REMOVE_ZEUS(LOP_PMC_Infantry_VIP,C_Marshal_F)
	REMOVE_ZEUS(LOP_PMC_Infantry_Cam,C_man_p_fugitive_F)
	REMOVE_ZEUS(LOP_PMC_Infantry_Press,C_journalist_F)
	REMOVE_ZEUS(LOP_TRK_Infantry_AT_Asst,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_AT,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_Corpsman,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_Crewman,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_Engineer,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_MG,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_MG_Asst,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_Marksman,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_Pilot,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_Rifleman,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_Rifleman_2,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_SL,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_TRK_Infantry_TL,PO_TRK_Infantry_Base)
	REMOVE_ZEUS(LOP_UKR_Infantry_pilot,rhs_pilot_base)
	REMOVE_ZEUS(LOP_UKR_Infantry_JetPilot,LOP_UKR_Infantry_pilot)
	REMOVE_ZEUS(LOP_UVF_Infantry_IED,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_TL,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_Rifleman,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_Rifleman_lite,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_GL,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_Corpsman,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_AR_Asst,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_AR,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_AT,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_Marksman,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_Rifleman_vz58,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_SL,LOP_UVF_Infantry_base)
	REMOVE_ZEUS(LOP_UVF_Infantry_Driver,LOP_UVF_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_UA_Infantry_Rifleman_2,I_soldier_F)
	REMOVE_ZEUS(LOP_UA_Infantry_Rifleman,I_soldier_F)
	REMOVE_ZEUS(LOP_UA_Infantry_Rifleman_3,I_soldier_F)
	REMOVE_ZEUS(LOP_UA_Infantry_Marksman,I_soldier_F)
	REMOVE_ZEUS(LOP_UA_Infantry_AT_Asst,I_Soldier_A_F)
	REMOVE_ZEUS(LOP_UA_Infantry_MG_Asst,I_Soldier_A_F)
	REMOVE_ZEUS(LOP_UA_Infantry_Corpsman,I_medic_F)
	REMOVE_ZEUS(LOP_UA_Infantry_Crewman,I_crew_F)
	REMOVE_ZEUS(LOP_UA_Infantry_Engineer,I_engineer_F)
	REMOVE_ZEUS(LOP_UA_Infantry_GL,I_Soldier_GL_F)
	REMOVE_ZEUS(LOP_UA_Infantry_AT,I_Soldier_AT_F)
	REMOVE_ZEUS(LOP_UA_Infantry_MG,I_Soldier_AR_F)
	REMOVE_ZEUS(LOP_UA_Officer,I_officer_F)
	REMOVE_ZEUS(LOP_UA_Infantry_Pilot,I_helipilot_F)
	REMOVE_ZEUS(LOP_UA_Infantry_SL,I_Soldier_SL_F)
	REMOVE_ZEUS(LOP_UA_Infantry_TL,I_Soldier_TL_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_GL,I_soldier_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_GL_2,I_soldier_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Marksman,I_soldier_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Rifleman,I_soldier_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Rifleman_2,I_soldier_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Rifleman_3,I_soldier_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Crewman,I_crew_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Pilot,I_crew_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_AT_Asst,I_Soldier_A_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_MG_Asst,I_Soldier_A_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_AT,I_Soldier_AT_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Corpsman,I_medic_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_Engineer,I_engineer_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_MG,I_Soldier_AR_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_SL,I_Soldier_SL_F)
	REMOVE_ZEUS(LOP_RACS_Infantry_TL,I_Soldier_TL_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_Rifleman,I_soldier_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_Marksman,I_soldier_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_Prizrak,I_soldier_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_GL_2,I_Soldier_GL_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_GL,I_Soldier_GL_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_SL,I_Soldier_SL_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_Engineer,I_engineer_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_AT,I_Soldier_AT_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_MG,I_Soldier_MG_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_Corpsman,I_medic_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_TL,I_Soldier_TL_F)
	REMOVE_ZEUS(LOP_NAPA_Infantry_Rifleman_3,LOP_NAPA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_NAPA_Infantry_Rifleman_2,LOP_NAPA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_NAPA_Infantry_MG_Asst,LOP_NAPA_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Marksman,I_soldier_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Rifleman,I_soldier_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_MG,I_Soldier_AR_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_MG_Asst,I_Soldier_AR_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Bardak,I_officer_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Commander,I_officer_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Corpsman,I_medic_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Crewman,I_crew_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Engineer,I_engineer_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_GL,I_Soldier_GL_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_AT,I_Soldier_AT_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Pilot,I_helipilot_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_SL,I_Soldier_SL_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_TL,I_Soldier_TL_F)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Rifleman_2,LOP_ChDKZ_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_ChDKZ_Infantry_Rifleman_3,LOP_ChDKZ_Infantry_Rifleman)
	REMOVE_ZEUS(LOP_AA_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_AA_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_AA_Offroad_Police,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_AA_Offroad_M2_Police,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_AA_MH9_armed,LOP_LB_Armed_Base)
	REMOVE_ZEUS(LOP_AA_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_AA_T34,LOP_T34_Base)
	REMOVE_ZEUS(LOP_AA_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_AA_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_CDF_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_CDF_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_CDF_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_CDF_UAZ_AGS,LOP_UAZ_AGS30_Base)
	REMOVE_ZEUS(LOP_CDF_UAZ_DshKM,LOP_UAZ_DSHKM_Base)
	REMOVE_ZEUS(LOP_CDF_UAZ_SPG,LOP_UAZ_SPG9_Base)
	REMOVE_ZEUS(LOP_CDF_KAMAZ_Ammo,LOP_KAMAZ_ammo_base)
	REMOVE_ZEUS(LOP_CDF_KAMAZ_Covered,LOP_KAMAZ_cov_base)
	REMOVE_ZEUS(LOP_CDF_KAMAZ_Fuel,LOP_KAMAZ_fuel_base)
	REMOVE_ZEUS(LOP_CDF_KAMAZ_Transport,LOP_KAMAZ_trans_base)
	REMOVE_ZEUS(LOP_CDF_KAMAZ_Repair,LOP_KAMAZ_rep_base)
	REMOVE_ZEUS(LOP_CDF_KAMAZ_Medical,LOP_KAMAZ_med_base)
	REMOVE_ZEUS(LOP_CDF_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_CDF_Ural,LOP_URAL_base)
	REMOVE_ZEUS(LOP_CDF_Ural_open,LOP_URAL_open_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Mover_D,LOP_HEMTT_mov_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Covered_D,LOP_HEMTT_cov_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Ammo_D,LOP_HEMTT_ammo_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Box_D,LOP_HEMTT_box_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Fuel_D,LOP_HEMTT_fuel_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Medical_D,LOP_HEMTT_med_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Repair_D,LOP_HEMTT_rep_base)
	REMOVE_ZEUS(LOP_GRE_HEMTT_Transport_D,LOP_HEMTT_trans_base)
	REMOVE_ZEUS(LOP_GRE_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_IA_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_IA_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_IA_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_IA_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_IA_T34,LOP_T34_Base)
	REMOVE_ZEUS(LOP_IA_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Mover_D,LOP_HEMTT_mov_base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Covered_D,LOP_HEMTT_cov_base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Ammo_D,LOP_HEMTT_ammo_base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Box_D,LOP_HEMTT_box_base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Fuel_D,LOP_HEMTT_fuel_base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Medical_D,LOP_HEMTT_med_base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Repair_D,LOP_HEMTT_rep_base)
	REMOVE_ZEUS(LOP_IA_HEMTT_Transport_D,LOP_HEMTT_trans_base)
	REMOVE_ZEUS(LOP_IA_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_PESH_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_PESH_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_PESH_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_PESH_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_PESH_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Mover_D,LOP_HEMTT_mov_base)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Covered_D,LOP_HEMTT_cov_base)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Ammo_D,LOP_HEMTT_ammo_base)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Box_D,LOP_HEMTT_box_base)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Fuel_D,LOP_HEMTT_fuel_base)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Medical_D,LOP_HEMTT_med_base)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Repair_D,LOP_HEMTT_rep_base)
	REMOVE_ZEUS(LOP_PESH_HEMTT_Transport_D,LOP_HEMTT_trans_base)
	REMOVE_ZEUS(LOP_PESH_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_AFR_OPF_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_AFR_OPF_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_AFR_OPF_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_AFR_OPF_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_AFR_OPF_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_AFR_OPF_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_AFR_OPF_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_AFR_OPF_T34,LOP_T34_Base)
	REMOVE_ZEUS(LOP_AFR_OPF_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_AFR_OPF_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_AFR_OPF_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_BH_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_BH_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_BH_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_BH_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_BH_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_BH_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_BH_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_BH_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_BH_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_ChDKZ_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_IRA_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_IRA_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_IRA_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_IRA_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_IRA_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_IRA_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_IRA_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_IRA_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_IRA_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_ISTS_OPF_T34,LOP_T34_Base)
	REMOVE_ZEUS(LOP_ISTS_OPF_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_SYR_Ural_open,LOP_URAL_open_base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_ISTS_OPF_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_AM_OPF_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_AM_OPF_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_AM_OPF_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_AM_OPF_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_SYR_KAMAZ_Fuel,LOP_KAMAZ_fuel_base)
	REMOVE_ZEUS(LOP_SYR_KAMAZ_Transport,LOP_KAMAZ_trans_base)
	REMOVE_ZEUS(LOP_NK_UAZ_AGS,LOP_UAZ_AGS30_Base)
	REMOVE_ZEUS(LOP_NK_UAZ_DshKM,LOP_UAZ_DSHKM_Base)
	REMOVE_ZEUS(LOP_NK_UAZ_SPG,LOP_UAZ_SPG9_Base)
	REMOVE_ZEUS(LOP_AM_OPF_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_SLA_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_NK_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_AM_OPF_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_SYR_UAZ_AGS,LOP_UAZ_AGS30_Base)
	REMOVE_ZEUS(LOP_NK_Ural,LOP_URAL_base)
	REMOVE_ZEUS(LOP_AM_OPF_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_SYR_UAZ_DshKM,LOP_UAZ_DSHKM_Base)
	REMOVE_ZEUS(LOP_NK_Ural_open,LOP_URAL_open_base)
	REMOVE_ZEUS(LOP_AM_OPF_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_AM_OPF_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_SYR_KAMAZ_Repair,LOP_KAMAZ_rep_base)
	REMOVE_ZEUS(LOP_ISTS_OPF_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_SYR_KAMAZ_Medical,LOP_KAMAZ_med_base)
	REMOVE_ZEUS(LOP_SYR_Ural,LOP_URAL_base)
	REMOVE_ZEUS(LOP_SYR_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_SYR_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_SYR_KAMAZ_Ammo,LOP_KAMAZ_ammo_base)
	REMOVE_ZEUS(LOP_SYR_KAMAZ_Covered,LOP_KAMAZ_cov_base)
	REMOVE_ZEUS(LOP_SYR_UAZ_SPG,LOP_UAZ_SPG9_Base)
	REMOVE_ZEUS(LOP_TKA_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_TKA_T34,LOP_T34_Base)
	REMOVE_ZEUS(LOP_TKA_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_AFR_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_AFR_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_AFR_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_AFR_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_NAPA_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_NAPA_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_AFR_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_AFR_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_AFR_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_AFR_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_AFR_T34,LOP_T34_Base)
	REMOVE_ZEUS(LOP_AFR_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_AFR_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_NAPA_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_NAPA_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_NAPA_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_IRAN_UAZ_AGS,LOP_UAZ_AGS30_Base)
	REMOVE_ZEUS(LOP_IRAN_UAZ_DshKM,LOP_UAZ_DSHKM_Base)
	REMOVE_ZEUS(LOP_IRAN_KAMAZ_Medical,LOP_KAMAZ_med_base)
	REMOVE_ZEUS(LOP_IRAN_Ural,LOP_URAL_base)
	REMOVE_ZEUS(LOP_IRAN_Ural_open,LOP_URAL_open_base)
	REMOVE_ZEUS(LOP_IRAN_UAZ_SPG,LOP_UAZ_SPG9_Base)
	REMOVE_ZEUS(LOP_IRAN_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_IRAN_KAMAZ_Ammo,LOP_KAMAZ_ammo_base)
	REMOVE_ZEUS(LOP_IRAN_KAMAZ_Covered,LOP_KAMAZ_cov_base)
	REMOVE_ZEUS(LOP_IRAN_KAMAZ_Transport,LOP_KAMAZ_trans_base)
	REMOVE_ZEUS(LOP_IRAN_KAMAZ_Fuel,LOP_KAMAZ_fuel_base)
	REMOVE_ZEUS(LOP_IRAN_KAMAZ_Repair,LOP_KAMAZ_rep_base)
	REMOVE_ZEUS(LOP_ISTS_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_ISTS_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_ISTS_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_ISTS_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_PESH_IND_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_ISTS_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Mover_D,LOP_HEMTT_mov_base)
	REMOVE_ZEUS(LOP_ISTS_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_ISTS_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_ISTS_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_ISTS_T34,LOP_T34_Base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Transport_D,LOP_HEMTT_trans_base)
	REMOVE_ZEUS(LOP_ISTS_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_PESH_IND_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_ISTS_T55,LOP_T55_Base)
	REMOVE_ZEUS(LOP_PESH_IND_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_PESH_IND_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_PESH_IND_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_PESH_IND_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_AM_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_AM_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Covered_D,LOP_HEMTT_cov_base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Ammo_D,LOP_HEMTT_ammo_base)
	REMOVE_ZEUS(LOP_AM_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Box_D,LOP_HEMTT_box_base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Fuel_D,LOP_HEMTT_fuel_base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Medical_D,LOP_HEMTT_med_base)
	REMOVE_ZEUS(LOP_PESH_IND_HEMTT_Repair_D,LOP_HEMTT_rep_base)
	REMOVE_ZEUS(LOP_AM_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_AM_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_AM_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_AM_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_AM_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_AM_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_PMC_Van_Cargo,LOP_Van_Cargo_base)
	REMOVE_ZEUS(LOP_PMC_Van_Trans,LOP_Van_Trans_base)
	REMOVE_ZEUS(LOP_PMC_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_PMC_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_PMC_SUV,LOP_SUV_base)
	REMOVE_ZEUS(LOP_PMC_MH9_armed,LOP_LB_Armed_Base)
	REMOVE_ZEUS(LOP_PMC_M900,LOP_LB_Civil_Base)
	REMOVE_ZEUS(LOP_PMC_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_RACS_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_RACS_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_RACS_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_RACS_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_RACS_MH9_armed,LOP_LB_Armed_Base)
	REMOVE_ZEUS(LOP_RACS_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_TRK_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_TRK_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Mover_D,LOP_HEMTT_mov_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Covered_D,LOP_HEMTT_cov_base)
	REMOVE_ZEUS(LOP_UKR_KAMAZ_Ammo,LOP_KAMAZ_ammo_base)
	REMOVE_ZEUS(LOP_UKR_KAMAZ_Covered,LOP_KAMAZ_cov_base)
	REMOVE_ZEUS(LOP_UKR_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_UKR_KAMAZ_Fuel,LOP_KAMAZ_fuel_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Ammo_D,LOP_HEMTT_ammo_base)
	REMOVE_ZEUS(LOP_UKR_KAMAZ_Transport,LOP_KAMAZ_trans_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Box_D,LOP_HEMTT_box_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Fuel_D,LOP_HEMTT_fuel_base)
	REMOVE_ZEUS(LOP_UKR_KAMAZ_Repair,LOP_KAMAZ_rep_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Medical_D,LOP_HEMTT_med_base)
	REMOVE_ZEUS(LOP_UKR_KAMAZ_Medical,LOP_KAMAZ_med_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Repair_D,LOP_HEMTT_rep_base)
	REMOVE_ZEUS(LOP_TRK_HEMTT_Transport_D,LOP_HEMTT_trans_base)
	REMOVE_ZEUS(LOP_UKR_Ural,LOP_URAL_base)
	REMOVE_ZEUS(LOP_UVF_Offroad_AT,LOP_Offroad_AT_base)
	REMOVE_ZEUS(LOP_UVF_Static_DSHKM,rhs_DSHKM_ins)
	REMOVE_ZEUS(LOP_UKR_Ural_open,LOP_URAL_open_base)
	REMOVE_ZEUS(LOP_UVF_Truck,LOP_Truck_base)
	REMOVE_ZEUS(LOP_UKR_UAZ_SPG,LOP_UAZ_SPG9_Base)
	REMOVE_ZEUS(LOP_UVF_Offroad_M2,LOP_Offroad_M2_base)
	REMOVE_ZEUS(LOP_UKR_UAZ_AGS,LOP_UAZ_AGS30_Base)
	REMOVE_ZEUS(LOP_UKR_UAZ_DshKM,LOP_UAZ_DSHKM_Base)
	REMOVE_ZEUS(LOP_UVF_Landrover_M2,LOP_LandRover_mg_base)
	REMOVE_ZEUS(LOP_UVF_Landrover_SPG9,LOP_LandRover_spg9_base)
	REMOVE_ZEUS(LOP_UVF_Nissan_PKM,LOP_Nissan_PKM_base)
	REMOVE_ZEUS(LOP_UVF_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(LOP_UVF_Landrover,LOP_LandRover_base_02)
	REMOVE_ZEUS(LOP_UN_Offroad,LOP_Offroad_base)
	REMOVE_ZEUS(rhs_bmk_t,rhs_bmk_t_base)
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman_lite,rhsgref_cdf_reg_base)
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman_rpg75,rhsgref_cdf_reg_base)
	REMOVE_ZEUS(rhsgref_cdf_reg_rifleman,rhsgref_cdf_reg_base)
	REMOVE_ZEUS(rhsgref_cdf_reg_grenadier,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_squadleader,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_specialist_aa,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_grenadier_rpg,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_reg_crew,rhsgref_cdf_reg_rifleman)
	REMOVE_ZEUS(rhsgref_cdf_air_pilot,rhsgref_cdf_reg_crew)
	REMOVE_ZEUS(rhsgref_cdf_b_air_pilot,rhsgref_cdf_air_pilot)
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
	REMOVE_ZEUS(rhsusf_m1165a1_gmv_m134d_m240_socom_d,rhsusf_M1165A1_GMV_SAG2_M134D_M240_base)
	REMOVE_ZEUS(rhsusf_m1165a1_gmv_m2_m240_socom_d,rhsusf_M1165A1_GMV_SAG2_M2_M240_base)
	REMOVE_ZEUS(rhsusf_m1165a1_gmv_mk19_m240_socom_d,rhsusf_M1165A1_GMV_SAG2_Mk19_M240_base)
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
	REMOVE_ZEUS(rhs_t15_tv,rhs_t15_base)
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
	REMOVE_ZEUS(rhsgref_ins_2s1,rhs_2s1tank_base)
	REMOVE_ZEUS(rhsgref_ins_2s1_at,rhs_2s1tank_at_base)
	REMOVE_ZEUS(rhsgref_BRDM2_ins,rhsgref_BRDM2)
	REMOVE_ZEUS(rhsgref_BRDM2_ATGM_ins,rhsgref_BRDM2_ATGM)
	REMOVE_ZEUS(rhsgref_BRDM2UM_ins,rhsgref_BRDM2UM)
	REMOVE_ZEUS(rhsgref_BRDM2_HQ_ins,rhsgref_BRDM2_HQ)
	REMOVE_ZEUS(rhsgref_ins_kraz255b1_flatbed,rhs_kraz255b1_flatbed_base)
	REMOVE_ZEUS(rhsgref_ins_kraz255b1_cargo_open,rhs_kraz255b1_cargo_open_base)
	REMOVE_ZEUS(rhsgref_ins_kraz255b1_fuel,rhs_kraz255b1_fuel_base)
	REMOVE_ZEUS(rhsgref_ins_zil131,rhs_zil131_base)
	REMOVE_ZEUS(rhsgref_ins_zil131_flatbed_cover,rhs_zil131_flatbed_cover_base)
	REMOVE_ZEUS(rhsgref_ins_zil131_open,rhs_zil131_open_base)
	REMOVE_ZEUS(rhsgref_ins_zil131_flatbed,rhs_zil131_flatbed_base)
	REMOVE_ZEUS(rhsgref_ins_DSHKM,rhs_DSHKM_base)
	REMOVE_ZEUS(rhsgref_ins_DSHKM_Mini_TriPod,rhs_DSHkM_Mini_TriPod_base)
	REMOVE_ZEUS(rhssaf_airforce_o_l_18,rhssaf_airforce_l_18)
	REMOVE_ZEUS(rhssaf_airforce_o_l_18_101,rhssaf_airforce_l_18_101)
	REMOVE_ZEUS(rhssaf_army_o_2s1,rhssaf_army_2s1)
	REMOVE_ZEUS(rhssaf_army_o_m1025_olive_m2,rhssaf_m1025_olive_m2)
	REMOVE_ZEUS(rhssaf_army_o_m1025_olive,rhssaf_m1025_olive)
	REMOVE_ZEUS(rhssaf_army_o_m998_olive_2dr_fulltop,rhssaf_m998_olive_2dr_fulltop)
	REMOVE_ZEUS(rhssaf_army_o_m998_olive_2dr_halftop,rhssaf_m998_olive_2dr_halftop)
	REMOVE_ZEUS(rhssaf_army_o_m1151_olive,rhssaf_m1151_olive)
	REMOVE_ZEUS(rhssaf_army_o_m1151_olive_pkm,rhssaf_m1151_olive_pkm)
	REMOVE_ZEUS(rhssaf_army_o_m1152_olive,rhssaf_m1152_olive)
	REMOVE_ZEUS(rhssaf_army_o_m1152_tcv_olive,rhssaf_m1152_TCV_olive)
	REMOVE_ZEUS(rhssaf_army_o_m1152_rsv_olive,rhssaf_m1152_rsv_olive)
	REMOVE_ZEUS(rhssaf_army_o_kraz255b1_flatbed,rhssaf_army_kraz255b1_flatbed)
	REMOVE_ZEUS(rhssaf_army_o_kraz255b1_pmp,rhssaf_army_kraz255b1_pmp)
	REMOVE_ZEUS(rhsgref_ins_arifleman_rpk,rhsgref_ins_uniform_izlom)
	
	//change faction
	class rhs_p37_turret_vpvo : rhs_p37_turret_base {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
	};
	
	class rhs_prv13_turret_vpvo : rhs_prv13_turret_base {
		faction = "SFPD_RHS_OPFOR_WOODLAND_Faction";
	};
	
	class B_W_Static_Designator_01_F : Static_Designator_01_base_F {
		faction = "SFPD_BLUFOR_WOODLAND_Faction";
	};
	
	class B_Ship_MRLS_01_F : B_Ship_MRLS_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_Ship_Gun_01_F : B_Ship_Gun_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_SAM_System_01_F : SAM_System_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_Mortar_01_F : Mortar_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_AAA_System_01_F : AAA_System_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_Static_Designator_01_F : Static_Designator_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class ACE_B_SpottingScope : ACE_SpottingScopeObject {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_GMG_01_F : GMG_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_GMG_01_high_F : GMG_01_high_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_GMG_01_A_F : GMG_01_A_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_HMG_01_F : HMG_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_HMG_01_high_F : HMG_01_high_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_HMG_01_A_F : HMG_01_A_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_static_AT_F : AT_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_SAM_System_02_F : SAM_System_02_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UAV_06_F : UAV_06_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UAV_06_medical_F : UAV_06_medical_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UAV_01_F : UAV_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UGV_02_Demining_F : UGV_02_Demining_Base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UGV_02_Science_F : UGV_02_Science_Base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UAV_05_F : UAV_05_Base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UGV_01_F : UGV_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UGV_01_rcws_F : UGV_01_rcws_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_UAV_02_F : UAV_02_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		scopeCurator = 0;
	};
	
	class B_UAV_02_CAS_F : UAV_02_CAS_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		scopeCurator = 0;
	};
	
	class B_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		scopeCurator = 2;
	};
	
	class CBA_B_InvisibleTarget : B_TargetSoldier {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class CBA_B_InvisibleTargetVehicle : CBA_B_InvisibleTarget {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class CBA_B_InvisibleTargetAir : CBA_B_InvisibleTargetVehicle {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_Radar_System_01_F : Radar_System_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class ace_dragon_staticAssembled : ace_dragon_staticBase {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_SAM_System_03_F : SAM_System_03_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_static_AA_F : AA_01_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
		crew = "SFPD_BLUFOR_DESERT_Rifleman";
	};
	
	class B_T_UAV_03_dynamicLoadout_F : UAV_03_dynamicLoadout_base_F {
		faction = "SFPD_BLUFOR_DESERT_Faction";
	};
	
	class B_T_UGV_01_olive_F : UGV_01_base_F {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
	};
	
	class B_T_UGV_01_rcws_olive_F : UGV_01_rcws_base_F {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
	};
	
	class B_T_Static_AA_F : B_static_AA_F {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
		crew = "SFPD_BLUFOR_JUNGLE_Rifleman";
	};
	
	class B_T_Static_AT_F : B_static_AT_F {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
		crew = "SFPD_BLUFOR_JUNGLE_Rifleman";
	};
	
	class B_T_Mortar_01_F : B_Mortar_01_F {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
		crew = "SFPD_BLUFOR_JUNGLE_Rifleman";
	};
	
	class ACE_B_T_SpottingScope : ACE_SpottingScopeObject {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
		crew = "SFPD_BLUFOR_JUNGLE_Rifleman";
	};
	
	class B_T_GMG_01_F : B_GMG_01_F {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
		crew = "SFPD_BLUFOR_JUNGLE_Rifleman";
	};
	
	class B_T_HMG_01_F : B_HMG_01_F {
		faction = "SFPD_BLUFOR_JUNGLE_Faction";
		crew = "SFPD_BLUFOR_JUNGLE_Rifleman";
	};
	
	class O_T_UAV_04_CAS_F : UAV_04_base_F {
		faction = "SFPD_OPFOR_JUNGLE_Faction";
	};
	
	class O_T_UGV_01_ghex_F : UGV_01_base_F {
		faction = "SFPD_OPFOR_JUNGLE_Faction";
	};
	
	class O_T_UGV_01_rcws_ghex_F : UGV_01_rcws_base_F {
		faction = "SFPD_OPFOR_JUNGLE_Faction";
	};
	
	class ACE_O_T_SpottingScope : ACE_SpottingScopeObject {
		faction = "SFPD_OPFOR_JUNGLE_Faction";
		crew = "SFPD_OPFOR_JUNGLE_Rifleman";
	};
	
	class CBA_O_InvisibleTarget : O_TargetSoldier {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class CBA_O_InvisibleTargetVehicle : CBA_O_InvisibleTarget {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class CBA_O_InvisibleTargetAir : CBA_O_InvisibleTargetVehicle {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_static_AA_F : AA_01_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_static_AT_F : AT_01_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_Mortar_01_F : Mortar_01_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_Radar_System_02_F : Radar_System_02_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_Static_Designator_02_F : Static_Designator_02_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_SAM_System_04_F : SAM_System_04_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class ACE_O_SpottingScope : ACE_SpottingScopeObject {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_GMG_01_F : GMG_01_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_GMG_01_high_F : GMG_01_high_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_GMG_01_A_F : GMG_01_A_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_HMG_01_F : HMG_01_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_HMG_01_high_F : HMG_01_high_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		crew = "SFPD_OPFOR_DESERT_Rifleman";
	};
	
	class O_HMG_01_A_F : HMG_01_A_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UGV_02_Demining_F : UGV_02_Demining_Base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UAV_06_F : UAV_06_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UAV_06_medical_F : UAV_06_medical_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UGV_02_Science_F : UGV_02_Science_Base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UAV_01_F : UAV_01_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UGV_01_F : UGV_01_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UGV_01_rcws_F : UGV_01_rcws_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
	};
	
	class O_UAV_02_F : UAV_02_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		scopeCurator = 0;
	};
	
	class O_UAV_02_CAS_F : UAV_02_CAS_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		scopeCurator = 0;
	};
	
	class O_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F {
		faction = "SFPD_OPFOR_DESERT_Faction";
		scopeCurator = 2;
	};
	
	class I_UGV_02_Science_F : UGV_02_Science_Base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_UGV_01_F : UGV_01_base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_UGV_01_rcws_F : UGV_01_rcws_base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_UAV_06_F : UAV_06_base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_UAV_06_medical_F : UAV_06_medical_base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_UAV_01_F : UAV_01_base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_UGV_02_Demining_F : UGV_02_Demining_Base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_UAV_02_F : UAV_02_base_F {
		faction = "SFPD_AAF_Faction";
		scopeCurator = 0;
	};
	
	class I_UAV_02_CAS_F : UAV_02_CAS_base_F {
		faction = "SFPD_AAF_Faction";
		scopeCurator = 0;
	};
	
	class I_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F {
		faction = "SFPD_AAF_Faction";
		scopeCurator = 2;
	};
	
	class CBA_I_InvisibleTarget : I_TargetSoldier {
		faction = "SFPD_AAF_Faction";
	};
	
	class CBA_I_InvisibleTargetVehicle : CBA_I_InvisibleTarget {
		faction = "SFPD_AAF_Faction";
	};
	
	class CBA_I_InvisibleTargetAir : CBA_I_InvisibleTargetVehicle {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_HMG_02_F : HMG_02_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_HMG_02_high_F : HMG_02_high_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_static_AA_F : AA_01_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_static_AT_F : AT_01_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_Mortar_01_F : Mortar_01_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class ACE_I_SpottingScope : ACE_SpottingScopeObject {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_GMG_01_A_F : GMG_01_A_base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_HMG_01_F : HMG_01_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_HMG_01_high_F : HMG_01_high_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_HMG_01_A_F : HMG_01_A_base_F {
		faction = "SFPD_AAF_Faction";
	};
	
	class I_GMG_01_F : GMG_01_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_GMG_01_high_F : GMG_01_high_base_F {
		faction = "SFPD_AAF_Faction";
		crew = "SFPD_AAF_Rifleman";
	};
	
	class I_E_UAV_06_F : UAV_06_base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_UAV_06_medical_F : UAV_06_medical_base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_UAV_01_F : UAV_01_base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_UGV_02_Demining_F : UGV_02_Demining_Base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_UGV_02_Science_F : UGV_02_Science_Base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_UGV_01_F : UGV_01_base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_UGV_01_rcws_F : UGV_01_rcws_base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_Radar_System_01_F : Radar_System_01_base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_SAM_System_03_F : SAM_System_03_base_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_GMG_01_A_F : I_GMG_01_A_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_HMG_01_A_F : I_HMG_01_A_F {
		faction = "SFPD_LDF_Faction";
	};
	
	class I_E_HMG_02_F : HMG_02_base_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_HMG_02_high_F : HMG_02_high_base_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_Mortar_01_F : I_Mortar_01_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_Static_AA_F : I_static_AA_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_Static_AT_F : I_static_AT_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_GMG_01_F : I_GMG_01_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_GMG_01_high_F : I_GMG_01_high_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_HMG_01_F : I_HMG_01_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	class I_E_HMG_01_high_F : I_HMG_01_high_F {
		faction = "SFPD_LDF_Faction";
		crew = "SFPD_LDF_Rifleman";
	};
	
	
	//civilian
	class RHS_Mi8t_civilian;
	class RHS_Mi8amt_civilian;
	class SFPD_RHS_CIV_DESERT_MI8T: RHS_Mi8t_civilian {
		scope = 2;
		scopeCurator = 2;
	};
	class SFPD_RHS_CIV_DESERT_MI8AMT: RHS_Mi8amt_civilian {
		scope = 2;
		scopeCurator = 2;
	};
	class SFPD_RHS_CIV_DESERT_AN2: RHS_AN2 {
		scope = 2;
		scopeCurator = 2;
		side = 3;
		faction = "CIV_F";
		crew = "C_man_1_1_F";
	};
	class RHS_Ural_Civ_01;
	class SFPD_RHS_Ural_Civ_01: RHS_Ural_Civ_01 {
		scope = 2;
		scopeCurator = 2;
	};
	class RHS_Ural_Open_Civ_01;
	class SFPD_RHS_Ural_Open_Civ_01: RHS_Ural_Open_Civ_01 {
		scope = 2;
		scopeCurator = 2;
	};
	class RHS_Ural_Civ_03;
	class SFPD_RHS_Ural_Civ_03: RHS_Ural_Civ_03 {
		scope = 2;
		scopeCurator = 2;
	};
	class RHS_Ural_Open_Civ_03;
	class SFPD_RHS_Ural_Open_Civ_03: RHS_Ural_Open_Civ_03 {
		scope = 2;
		scopeCurator = 2;
	};
	class RHS_Ural_Civ_02;
	class SFPD_RHS_Ural_Civ_02: RHS_Ural_Civ_02 {
		scope = 2;
		scopeCurator = 2;
	};
	class RHS_Ural_Open_Civ_02;
	class SFPD_RHS_Ural_Open_Civ_02: RHS_Ural_Open_Civ_02 {
		scope = 2;
		scopeCurator = 2;
	};
	
	//Gendarme
	class B_GEN_Soldier_F;
	class B_GEN_Commander_F;
	class Offroad_01_civil_base_F;
	class SFPD_BLUFOR_GEN: B_GEN_Soldier_F {
		faction = "BLU_GEN_F";
		displayName = "Gendarme";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"SFPD_MP5","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"SFPD_MP5","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {SIX_TIMES(30Rnd_9x21_Mag_SMG_02),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",THREE_TIMES(ACE_M84)};
		respawnMagazines[] = {SIX_TIMES(30Rnd_9x21_Mag_SMG_02),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",THREE_TIMES(ACE_M84)};
		linkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F",BASIC_LINKED_BLUE};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "U_B_GEN_Soldier_F";
	};
	class SFPD_BLUFOR_GEN_Commander: B_GEN_Commander_F {
		faction = "BLU_GEN_F";
		displayName = "Gendarmerie Commander";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"SFPD_MP5","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"SFPD_MP5","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {SIX_TIMES(30Rnd_9x21_Mag_SMG_02),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",THREE_TIMES(ACE_M84)};
		respawnMagazines[] = {SIX_TIMES(30Rnd_9x21_Mag_SMG_02),"16Rnd_9x21_Mag","16Rnd_9x21_Mag",THREE_TIMES(ACE_M84)};
		linkedItems[] = {"V_TacVest_gen_F","H_Beret_gen_F",BASIC_LINKED_BLUE};
		respawnLinkedItems[] = {"V_TacVest_gen_F","H_Beret_gen_F",BASIC_LINKED_BLUE};
		items[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		respawnItems[] = {BASIC_ITEMS,TEN_TIMES(ACE_quikclot)};
		uniformClass = "U_B_GEN_Commander_F";
	};
	class B_GEN_Offroad_01_gen_F : Offroad_01_civil_base_F {
		crew = "SFPD_BLUFOR_GEN";
	};
	class B_GEN_Offroad_01_comms_F : Offroad_01_military_comms_base_F {
		crew = "SFPD_BLUFOR_GEN";
	};
	class B_GEN_Offroad_01_covered_F : Offroad_01_military_covered_base_F {
		crew = "SFPD_BLUFOR_GEN";
	};
	class B_GEN_Van_02_vehicle_F : Van_02_vehicle_base_F {
		crew = "SFPD_BLUFOR_GEN";
	};
	class B_GEN_Van_02_transport_F : Van_02_transport_base_F {
		crew = "SFPD_BLUFOR_GEN";
	};
	
	class Strategic;
	class House_EP1;
	class Land_Jbad_Ind_FuelStation_Feed;
	class Land_A_FuelStation_Feed: Strategic {
		transportFuel = 0;
		ace_refuel_hooks[] = {{-0.3,0.0,-0.05}};
		ace_refuel_fuelCargo = -10;
	};
	class Land_Ind_FuelStation_Feed_EP1: House_EP1 {
		transportFuel = 0;
		ace_refuel_hooks[] = {{-0.3,0.0,-0.05}};
		ace_refuel_fuelCargo = -10;
	};
	class Land_FuelStation_Feed_PMC: Strategic {
		transportFuel = 0;
		ace_refuel_hooks[] = {{-0.3,0.0,-0.05}};
		ace_refuel_fuelCargo = -10;
	};
	class Jbad_Ind_FuelStation_Feed: Land_Jbad_Ind_FuelStation_Feed {
		transportFuel = 0;
		ace_refuel_hooks[] = {{-0.3,0.0,-0.05}};
		ace_refuel_fuelCargo = -10;
	};

#include "CfgVehicles\NATO\units.hpp"
#include "CfgVehicles\NATO\backpack.hpp"
#include "CfgVehicles\NATO\vehicles.hpp"
#include "CfgVehicles\NATO\supply.hpp"

#include "CfgVehicles\CSAT\units.hpp"
#include "CfgVehicles\CSAT\backpack.hpp"
#include "CfgVehicles\CSAT\vehicles.hpp"
#include "CfgVehicles\CSAT\supply.hpp"

#include "CfgVehicles\AAF\units.hpp"
#include "CfgVehicles\AAF\backpack.hpp"
#include "CfgVehicles\AAF\vehicles.hpp"
#include "CfgVehicles\AAF\supply.hpp"

#include "CfgVehicles\LDF\units.hpp"
#include "CfgVehicles\LDF\backpack.hpp"
#include "CfgVehicles\LDF\vehicles.hpp"
#include "CfgVehicles\LDF\supply.hpp"

#include "CfgVehicles\REBEL\units.hpp"
#include "CfgVehicles\REBEL\backpack.hpp"
#include "CfgVehicles\REBEL\vehicles.hpp"
#include "CfgVehicles\REBEL\supply.hpp"

#include "CfgVehicles\RHS_US\units.hpp"
#include "CfgVehicles\RHS_US\backpack.hpp"
#include "CfgVehicles\RHS_US\vehicles.hpp"
#include "CfgVehicles\RHS_US\supply.hpp"

#include "CfgVehicles\RHS_RU\units.hpp"
#include "CfgVehicles\RHS_RU\backpack.hpp"
#include "CfgVehicles\RHS_RU\vehicles.hpp"
#include "CfgVehicles\RHS_RU\supply.hpp"

#include "CfgVehicles\RHS_SAV\units.hpp"
#include "CfgVehicles\RHS_SAV\backpack.hpp"
#include "CfgVehicles\RHS_SAV\vehicles.hpp"
#include "CfgVehicles\RHS_SAV\supply.hpp"

#include "CfgVehicles\RHS_IRAQ\units.hpp"
#include "CfgVehicles\RHS_IRAQ\backpack.hpp"
#include "CfgVehicles\RHS_IRAQ\vehicles.hpp"
#include "CfgVehicles\RHS_IRAQ\supply.hpp"

#include "CfgVehicles\RHS_INS\units.hpp"
#include "CfgVehicles\RHS_INS\backpack.hpp"
#include "CfgVehicles\RHS_INS\vehicles.hpp"
#include "CfgVehicles\RHS_INS\supply.hpp"

};

class ace_csw_groups {
	class CBRN_1Rnd_82mm_Mo_Chemical_Type0 {
		CBRN_1Rnd_82mm_Mo_Chemical_Type0 = 1;
	};
	class CBRN_1Rnd_82mm_Mo_Chemical_Type1 {
		CBRN_1Rnd_82mm_Mo_Chemical_Type1 = 1;
	};
	class CBRN_1Rnd_82mm_Mo_Chemical_Type2 {
		CBRN_1Rnd_82mm_Mo_Chemical_Type2 = 1;
	};
};

class cfgWeapons {
	class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    class ace_csw_staticHMGCarry: Launcher_Base_F {
        class WeaponSlotsInfo;
    };

    //Tripods:
    class ace_csw_m3CarryTripod: Launcher_Base_F {//US HMG
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
	
    class ace_csw_m3CarryTripodLow: ace_csw_m3CarryTripod {//US HMG
		
    };

    class ace_csw_kordCarryTripod: Launcher_Base_F {//RU HMG
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class ace_csw_kordCarryTripodLow: ace_csw_kordCarryTripod {//RU HMG
		
    };

    class ace_csw_sag30CarryTripod: Launcher_Base_F {//RU GMG
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
	
    class ace_csw_m220CarryTripod: Launcher_Base_F {//TOW
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class ace_csw_spg9CarryTripod: Launcher_Base_F {//SPG9
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 66;
        };
    };

    class ace_csw_carryMortarBaseplate: Launcher_Base_F {//MORT
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 66;
        };
    };

    class ace_csw_staticMortarCarry: Launcher_Base_F {//MORT
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 66;
        };
    };
	
	//AAF
	class ace_csw_staticM2ShieldCarry: ace_csw_staticHMGCarry {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
	
	//usf3
	class ace_compat_rhs_usf3_m2_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 110;
        };
    };
	
	class ace_compat_rhs_usf3_mk19_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 110;
        };
    };

    class ace_compat_rhs_usf3_tow_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 110;
        };
    };
	
	//afrf3
	class ace_compat_rhs_afrf3_nsv_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 110;
        };
    };

    class ace_compat_rhs_afrf3_kord_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 110;
        };
    };
	
    class ace_compat_rhs_afrf3_ags30_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 110;
        };
    };

    class ace_compat_rhs_afrf3_spg9_carry: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 66;
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
            mass = 110;
        };
    };
	
	//helmet
	class rhsusf_opscore_01;
	class rhsusf_ihadss: rhsusf_opscore_01 {
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	
	//Launchers
    class launch_Titan_base: Launcher_Base_F {
        class WeaponSlotsInfo;
    };
    class launch_O_Titan_F: launch_Titan_base {
        class WeaponSlotsInfo;
    };
	
	class launch_RPG7_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
	};
	
	class launch_RPG32_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
	};
	
	class launch_MRAWS_base_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
	};
	
	class launch_NLAW_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 176;
        };
	};
	
	class launch_Vorona_base_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 176;
        };
	};
	
	class launch_Titan_short_base: launch_Titan_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 220;
        };
	};
	
	class rhs_weap_M136: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
	};
	
	class rhs_weap_m72a7: rhs_weap_M136 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 66;
        };
	};
	
	class rhs_weap_rpg7: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
	};
	
	class rhs_weap_maaws: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
	};
	
	class rhs_weap_fgm148: launch_O_Titan_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 220;
        };
	};
	
	//Weapons
	class arifle_MX_F;
	class arifle_MX_GL_F;
	class LMG_03_F;
	class srifle_DMR_03_tan_F;
	class srifle_DMR_02_sniper_F;
	class SMG_03C_TR_khaki;
	class MMG_02_black_F;
	class hgun_P07_blk_F;
	class arifle_MXC_F;
	class srifle_LRR_camo_F;
	class arifle_SPAR_01_snd_F;
	class arifle_SPAR_01_khk_F;
	class arifle_SPAR_01_GL_khk_F;
	class arifle_SPAR_02_khk_F;
	class arifle_SPAR_03_khk_F;
	class srifle_DMR_02_camo_F;
	class SMG_03C_TR_black;
	class srifle_LRR_tna_F;
	class arifle_AK12_F;
	class arifle_AK12_GL_F;
	class arifle_MX_Black_F;
	class arifle_MX_GL_Black_F;
	class arifle_Katiba_F;
	class arifle_Katiba_GL_F;
	class LMG_Zafir_F;
	class srifle_DMR_01_F;
	class srifle_DMR_05_hex_F;
	class MMG_01_hex_F;
	class arifle_Katiba_C_F;
	class hgun_Rook40_F;
	class srifle_GM6_camo_F;
	class arifle_ARX_hex_F;
	class arifle_MXC_Black_F;
	class hgun_Pistol_heavy_01_F;
	class arifle_MX_khk_F;
	class arifle_MX_GL_khk_F;
	class arifle_Mk20_F;
	class arifle_CTAR_ghex_F;
	class arifle_CTAR_GL_ghex_F;
	class arifle_CTARS_ghex_F;
	class srifle_DMR_07_ghex_F;
	class srifle_DMR_05_blk_F;
	class MMG_01_tan_F;
	class srifle_GM6_ghex_F;
	class arifle_ARX_ghex_F;
	class arifle_Mk20C_F;
	class hgun_ACPC2_F;
	class arifle_Mk20_GL_F;
	class LMG_Mk200_F;
	class srifle_DMR_06_olive_F;
	class arifle_MXC_khk_F;
	class srifle_DMR_03_woodland_F;
	class arifle_MSBS65_camo_F;
	class arifle_MSBS65_GL_camo_F;
	class arifle_MSBS65_UBS_camo_F;
	class LMG_Mk200_black_F;
	class arifle_MSBS65_Mark_camo_F;
	class arifle_AK12_lush_F;
	class arifle_AK12_GL_lush_F;
	class arifle_RPK12_lush_F;
	class arifle_AK12U_lush_F;
	class arifle_AK12_arid_F;
	class arifle_AK12_GL_arid_F;
	class arifle_RPK12_arid_F;
	class arifle_AK12U_arid_F;
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
	class arifle_RPK12_F;
	class rhs_weap_asval_grip;
	class rhs_weap_t5000;
	class srifle_GM6_F;
	class rhs_weap_svdp_wd_npz;
	class rhs_weap_svdp_npz;
	class rhs_weap_g36kv;
	class rhs_weap_g36kv_ag36;
	class rhs_weap_minimi_para_railed;
	class rhs_weap_m14_rail_wd;
	class rhs_weap_akm;
	class rhs_weap_akm_gp25;
	class rhs_weap_svds_npz;
	class rhs_weap_ak74;
	class rhs_weap_m38_rail;
	class rhs_weap_aks74;
	class rhs_weap_m16a4_imod;
	
	class rhs_pkp_base;
    class rhs_weap_pkp: rhs_pkp_base {
		ACE_Overheating_allowSwapBarrel = 1;
    };
	
	class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {"ACE_CTS2Muzzle","ACE_CTS3Muzzle"};
        class ThrowMuzzle;
        class ACE_CTS2Muzzle: ThrowMuzzle {
            magazines[] = {"ACE_CTS2"};
        };
        class ACE_CTS3Muzzle: ThrowMuzzle {
            magazines[] = {"ACE_CTS3"};
        };
    };
	
	class SMG_05_F;
	class SFPD_MP5: SMG_05_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Holosight_smg_blk_F";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
        };
    };
	
	//Vests
	class rhsusf_spc_rifleman;
	class rhsusf_spc_iar: rhsusf_spc_rifleman {
		class ItemInfo {
			_generalMacro = "VestItem";
			armor = 20;
			author = "Bohemia Interactive";
			containerClass = "Supply160";
			descriptionShort = "Armor Level IV";
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			mass = 120;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_iar";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 22;
					PassThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 22;
					PassThrough = 0.2;
				};
			};
		};
	};
	class rhsusf_spc_squadleader: rhsusf_spc_rifleman {
		class ItemInfo {
			_generalMacro = "VestItem";
			armor = 20;
			author = "Bohemia Interactive";
			containerClass = "Supply140";
			descriptionShort = "Armor Level IV";
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			mass = 100;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 22;
					PassThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 22;
					PassThrough = 0.2;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_base;
	class rhsusf_iotv_ucp_Teamleader: rhsusf_iotv_ucp_base {
		class ItemInfo {
			_generalMacro = "VestItem";
			armor = 20;
			author = "Bohemia Interactive";
			containerClass = "Supply150";
			descriptionShort = "Armor Level IV";
			hiddenSelections[] = {"camo","camob","camo1","camo2"};
			mass = 140;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Teamleader";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 22;
					PassThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 22;
					PassThrough = 0.2;
				};
			};
		};
	};
	class rhsusf_spcs_ocp_rifleman;
	class rhsusf_spcs_ucp_rifleman: rhsusf_spcs_ocp_rifleman {
		class ItemInfo {
			_generalMacro = "VestItem";
			armor = 20;
			author = "Bohemia Interactive";
			containerClass = "Supply140";
			descriptionShort = "Armor Level IV";
			hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa","rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"};
			mass = 100;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 22;
					PassThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 22;
					PassThrough = 0.2;
				};
			};
		};
	};
	
	class rhs_6b23_6sh92_vog_headset;
	class rhs_6b23_ML_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset {
		class ItemInfo {
			_generalMacro = "VestItem";
			author = "Bohemia Interactive";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 80;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_headset";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 18;
					PassThrough = 0.2;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 18;
					PassThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 18;
					PassThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 18;
					PassThrough = 0.2;
				};
			};
		};
	};
	class rhs_6b23_digi_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset {
		class ItemInfo {
			_generalMacro = "VestItem";
			author = "Bohemia Interactive";
			containerClass = "Supply100";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 75;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";
			uniformType = "Default";

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 18;
					PassThrough = 0.2;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 18;
					PassThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 18;
					PassThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 18;
					PassThrough = 0.2;
				};
			};
		};
	};
	class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz;
	class fsg_vest_4: rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz {
		class ItemInfo {
			_generalMacro = "VestItem";
			author = "Bohemia Interactive";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 75;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_radio_spetsnaz";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 18;
					PassThrough = 0.2;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 18;
					PassThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 18;
					PassThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 18;
					PassThrough = 0.2;
				};
			};
		};
	};
	
	class rhssaf_balistic_vest_base;
	class rhssaf_vest_md99_digital_rifleman: rhssaf_balistic_vest_base {
		class ItemInfo {
			_generalMacro = "VestItem";
			author = "Bohemia Interactive";
			containerClass = "Supply90";
			hiddenSelections[] = {"camo","pouches"};
			mass = 70;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					PassThrough = 0.3;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 16;
					PassThrough = 0.3;
				};
			};
		};
	};
	
	
	//Uniforms
    class UniformItem; 
    class ItemCore;
    class HeadgearItem;
	
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_wdl_f;
	class U_B_T_Soldier_F;
	class U_O_CombatUniform_ocamo;
	class U_O_R_Gorka_01_camo_F;
	class U_O_T_Soldier_F;
	class U_I_CombatUniform;
	class U_I_E_Uniform_01_F;
	class rhs_uniform_FROG01_d;
	class rhs_uniform_FROG01_wd;
	class rhs_uniform_cu_ucp;
	class rhs_uniform_mflora_patchless;
	class rhs_uniform_vkpo_gloves_alt;
	class rhssaf_uniform_m10_digital;
	class LOP_U_IA_Fatigue_02_slv;
	class Uniform_Base;
	class U_B_FullGhillie_lsh;
	
	class SFPD_BLUFOR_DESERT_Medic_Uniform : U_B_CombatUniform_mcam {
		displayName = "Combat Fatigues Medic (MTP)";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_BLUFOR_DESERT_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_BLUFOR_WOODLAND_Medic_Uniform : U_B_CombatUniform_mcam_wdl_f {
		displayName = "Combat Fatigues Medic (Woodland)";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_BLUFOR_WOODLAND_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_BLUFOR_JUNGLE_Medic_Uniform : U_B_T_Soldier_F {
		displayName = "Combat Fatigues Medic (Tropic)";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_BLUFOR_JUNGLE_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_OPFOR_DESERT_Medic_Uniform : U_O_CombatUniform_ocamo {
		displayName = "Fatigues Medic (Hex) [CSAT]";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_OPFOR_DESERT_Medic";
			containerClass = "Supply40";
			mass = 80;
		}
	};
	
	class SFPD_OPFOR_WOODLAND_Medic_Uniform : U_O_R_Gorka_01_camo_F {
		displayName = "Granit-T Suit Medic";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_OPFOR_WOODLAND_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_OPFOR_JUNGLE_Medic_Uniform : U_O_T_Soldier_F {
		displayName = "Fatigues Medic (Green Hex) [CSAT]";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_OPFOR_JUNGLE_Medic";
			containerClass = "Supply40";
			mass = 80;
		}
	};
	
	class SFPD_AAF_Medic_Uniform : U_I_CombatUniform {
		displayName = "Combat Fatigues Medic [AAF]";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_AAF_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	class SFPD_LDF_Medic_Uniform : U_I_E_Uniform_01_F {
		displayName = "Combat Fatigues Medic [LDF]";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_LDF_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	//RHS
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
	
	class SFPD_RHS_OPFOR_WOODLAND_Medic_Uniform : rhs_uniform_vkpo_gloves_alt {
		displayName = "VKPO Medic (Gloves/Alt.)";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_OPFOR_WOODLAND_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
	// TODO
	/*class SFPD_RHS_SAV_WOODLAND_Medic_Uniform : rhssaf_uniform_m10_digital {
		displayName = "M10 Medic (Digital)";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_SAV_WOODLAND_Medic";
			containerClass = "Supply60";
			mass = 40;
		}
	};*/
	
	class SFPD_RHS_IRAQ_WOODLAND_Medic_Uniform : LOP_U_IA_Fatigue_02_slv {
		displayName = "Combat Uniform Medic (Iraqi/M81/Rolled Up)";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "SFPD_RHS_IRAQ_WOODLAND_Medic";
			containerClass = "Supply40";
			mass = 40;
		}
	};
	
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
	
	//Weapon

#include "CfgWeapons\NATO.hpp"

#include "CfgWeapons\CSAT.hpp"

#include "CfgWeapons\AAF.hpp"

#include "CfgWeapons\LDF.hpp"

#include "CfgWeapons\REBEL.hpp"

#include "CfgWeapons\RHS_US.hpp"

#include "CfgWeapons\RHS_RU.hpp"

#include "CfgWeapons\RHS_SAV.hpp"

#include "CfgWeapons\RHS_IRAQ.hpp"

#include "CfgWeapons\RHS_INS.hpp"

};

class cfgGroups {
	class West {
		name = "BLUFOR";
		side = 3;
	};
	
	class East {
		name = "OPFOR";
		side = 3;
	};
	
	class Indep {
		name = "Independent";
		side = 3;
	};

	class SFPD_West {
		name = "BLUFOR";
		side = 1;
#include "CfgGroups\NATO.hpp"

#include "CfgGroups\RHS_US.hpp"
	};
	
	class SFPD_East {
		name = "OPFOR";
		side = 0;
#include "CfgGroups\CSAT.hpp"

#include "CfgGroups\RHS_RU.hpp"
	};
	
	class SFPD_Indep {
		name = "Independent";
		side = 2;
#include "CfgGroups\AAF.hpp"

#include "CfgGroups\LDF.hpp"

#include "CfgGroups\REBEL.hpp"

#include "CfgGroups\RHS_SAV.hpp"

#include "CfgGroups\RHS_IRAQ.hpp"

#include "CfgGroups\RHS_INS.hpp"
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