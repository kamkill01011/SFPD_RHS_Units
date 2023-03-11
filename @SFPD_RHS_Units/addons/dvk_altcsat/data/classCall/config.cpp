class CfgPatches
{
	class dvk_altcsat_classcall_c
	{
		units[]={"dvk_os","dvk_oc","dvk_ost","dvk_oct","dvk_osu","dvk_osr","dvk_osrt","dvk_omarine","dvk_ohp","dvk_to199", "dvk_ou_light", "dvk_snipa", "dvk_snipt", "dvk_offa", "dvk_offt", "dvk_inm", "dvk_attb_csat"};
		weapons[]={};
		author="Davik";
		requiredversion=1.62;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Exp"
		};
	};
};


class CfgVehicles
{
	class O_Soldier_base_F;
	class O_Soldier_Urban_base;
	class O_Soldier_F;
	class O_T_Soldier_F;
	class O_soldierU_F;
	class O_Soldier_02_F;
	class O_helicrew_F;
	class O_Plane_CAS_02_dynamicLoadout_F;
	class O_A_soldier_base_F;
	class O_Soldier_sniper_base_F;
	class O_T_Sniper_F;
	class I_E_Uniform_01_F;
	class I_officer_F;
	class I_soldier_F;
	class I_Sniper_F;
	class O_Boat_Armed_01_hmg_F;
	
	
	//Altis
	//to-199
	class dvk_to199: O_Plane_CAS_02_dynamicLoadout_F
	{
		scope=1;
	};
	//attack boat
	class dvk_attb_csat: O_Boat_Armed_01_hmg_F
	{
		scope=1;
	};
	//fatigue army
		class dvk_os: I_E_Uniform_01_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "insigna", "flag"};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\iran_top.paa",
			"\dvk_altcsat\data\unif\csat_altis.paa",
			"\dvk_altcsat\data\unif\guanti.paa"
		};
	};
		//sniper altis
		class dvk_snipa: I_Sniper_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
		hiddenSelections[]={"Camo", "camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\unif\csat_altis.paa", "\A3\Characters_F\Common\Data\ghillie_3_ca.paa"};
	};
	// tank crew
	class O_crew_F: O_Soldier_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_crew_F.jpg";
		_generalMacro="O_crew_F";
		scope=2;
		displayName="$STR_B_crew_F0";
		uniformClass="U_O_CombatUniform_ocamo";	//new unif
		weapons[]=
		{
			"arifle_Katiba_C_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Katiba_C_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		camouflage=1.6;
		linkedItems[]=
		{
			"V_TacVest_brn",
			"H_Tank_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_brn",
			"H_Tank_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		cost=93000;
		role="Crewman";
	};

	
	
	
	
	//old fatigue tank crew
	class dvk_oc: I_soldier_F
	{
		author="Davik";
		side=0;
		scope=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\csat_altis.paa"
		};
	};



	//tanoa
	class dvk_ost: I_E_Uniform_01_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "insigna", "flag"};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\csat_tna_top.paa",
			"\dvk_altcsat\data\unif\csat_tna.paa",
			"\dvk_altcsat\data\unif\guanti.paa",
			"\dvk_altcsat\data\patch\pla_patch.paa"
		};
	};
	//sniper tanoa
		class dvk_snipt: I_Sniper_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
		hiddenSelections[]={"Camo", "camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\unif\csat_tna.paa", "\A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};
	};
	//tanoa tank crew
	class O_T_Crew_F: O_crew_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Crew_F.jpg";
		_generalMacro="O_T_Crew_F";
		faction="OPF_T_F";
		genericNames="ChineseMen";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		uniformClass="U_O_T_Soldier_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
			"\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
		};
		weapons[]=
		{
			"arifle_CTAR_blk_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_CTAR_blk_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		linkedItems[]=
		{
			"H_HelmetCrew_O_ghex_F",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		respawnLinkedItems[]=
		{
			"H_HelmetCrew_O_ghex_F",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		DLC="Expansion";
	};
	
	class dvk_oct: I_soldier_F
	{
		author="Davik";
		side=0;
		scope=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\csat_tna.paa"
		};
	};	
	// urban
	
	class dvk_osu: I_E_Uniform_01_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "insigna", "flag"};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\iran_para_top.paa",
			"\dvk_altcsat\data\unif\iran_para_bottom.paa",
			"\dvk_altcsat\data\unif\guanti.paa"
		};
	};
	//ufficiale Iran
	class O_officer_F: O_Soldier_base_F
	{
		author="Davik";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural="$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound="veh_infantry_officer_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_officer_F.jpg";
		_generalMacro="O_officer_F";
		model="\A3\characters_F\OPFOR\o_officer.p3d";
		modelSides[]={0,3};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\officer_hex_co.paa"
		};
		scope=2;
		displayName="$STR_B_officer_F0";
		uniformClass="U_O_OfficerUniform_ocamo";
		identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_officer"
		};
		weapons[]=
		{
			"arifle_Katiba_C_ACO_F",
			"hgun_Pistol_heavy_02_Yorris_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Katiba_C_ACO_F",
			"hgun_Pistol_heavy_02_Yorris_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		cost=250000;
		camouflage=1.6;
		icon="iconManOfficer";
		role="Rifleman";
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"DVK_altcsat_cap_irano",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Rangemaster_belt",
			"DVK_altcsat_cap_irano",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	
	
	//ufficiale PLA
	class O_T_Officer_F: O_officer_F
	{
		author="Davik";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Officer_F.jpg";
		_generalMacro="O_T_Officer_F";
		faction="OPF_T_F";
		genericNames="ChineseMen";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian",
			"NoGlasses"
		};
		uniformClass="U_O_T_Officer_F";
		weapons[]=
		{
			"arifle_CTAR_blk_ACO_F",
			"hgun_Pistol_heavy_02_Yorris_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_CTAR_blk_ACO_F",
			"hgun_Pistol_heavy_02_Yorris_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		linkedItems[]=
		{
			"H_MilCap_ghex_F",
			"V_Rangemaster_belt",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_MilCap_ghex_F",
			"V_Rangemaster_belt",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		model="\A3\characters_F\OPFOR\o_officer.p3d";
		modelSides[]={0,3};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\officer_tna_CO.paa"
		};
		DLC="Expansion";
	};
	
	//SpecOps Iran
	class O_Soldier_recon_base: O_Soldier_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_SF_s"
				};
				speechPlural[]=
				{
					"veh_infantry_SF_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound="veh_infantry_SF_s";
		_generalMacro="O_Soldier_recon_base";
		scope=0;
		displayName="$STR_B_Soldier_recon_base0";
		vehicleClass="MenRecon";
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		role="Rifleman";
		camouflage=0.60000002;
		detectSkill=18;
		linkedItems[]=
		{
			"V_HarnessO_brn",
			"H_HelmetSpecO_ocamo",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessO_brn",
			"H_HelmetSpecO_ocamo",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		uniformClass="dvk_csat_iransf";
	};
	//Iran heli pilot
	class O_helipilot_F: O_Soldier_02_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_pilot_s"
				};
				speechPlural[]=
				{
					"veh_infantry_pilot_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_helipilot_F.jpg";
		_generalMacro="O_helipilot_F";
		scope=2;
		displayName="$STR_B_helipilot_F0";
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		uniformClass="dvk_iran_hpilot";
		weapons[]=
		{
			"SMG_02_ACO_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_02_ACO_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow",
			"Chemlight_red",
			"Chemlight_red"
		};
		cost=93000;
		role="Crewman";
		camouflage=2;
	};
	//jet pilot Iran (serve per ristabilire l'uniforme da pilota, ereditata direttamente dal pilota dell'elicottero)
		class O_Pilot_F: O_helipilot_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Pilot_F.jpg";
		_generalMacro="O_Pilot_F";
		displayName="$STR_B_Pilot_F0";
		uniformClass="U_O_PilotCoveralls"; //fixed
		linkedItems[]=
		{
			"H_PilotHelmetFighter_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetFighter_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red"
		};
		backpack="B_Parachute";
		cost=93000;
		role="Crewman";
	};
	
		// Altis specOps
		class dvk_osr : I_E_Uniform_01_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\iran_sf_top.paa",
			"\dvk_altcsat\data\unif\iran_sf.paa",
			"\dvk_altcsat\data\unif\guanti.paa"
		};
	};
	
	// PLA specOps
		class dvk_osrt : I_E_Uniform_01_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\plasf_top.paa",
			"\dvk_altcsat\data\unif\plasf_bot.paa",
			"\dvk_altcsat\data\unif\guanti.paa"
		};
	};
		//PLA marines
	class dvk_omarine: I_E_Uniform_01_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "insigna", "flag"};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\plamc_top.paa",
			"\dvk_altcsat\data\unif\plamc_bottom.paa",
			"\dvk_altcsat\data\unif\guanti.paa",
			"\dvk_altcsat\data\patch\pla_navy.paa"
		};
	};
	
	
		//heli pilot Iran
	
		class dvk_ohp: O_helipilot_F
	{
		scope=1;
		model="\A3\Characters_F\Common\coveralls.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\hp_iran.paa"
		};
	};
	
	//heli pilot PLA
	class O_T_Helipilot_F: O_helipilot_F
	{
		author="Davik";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Helipilot_F.jpg";
		_generalMacro="O_T_Helipilot_F";
		genericNames="ChineseMen";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		faction="OPF_T_F";
		model="\A3\Characters_F\Common\coveralls.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\hp_cn.paa"
		};
		uniformClass="dvk_china_hpilot"; //new uniform
		weapons[]=
		{
			"SMG_02_ACO_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_02_ACO_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow",
			"Chemlight_red",
			"Chemlight_red"
		};
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		DLC="Expansion";
	};
	
	//heli crew PLA
	class O_T_Helicrew_F: O_helicrew_F
	{
		author="Davik";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Helicrew_F.jpg";
		_generalMacro="O_T_Helicrew_F";
		faction="OPF_T_F";
		genericNames="ChineseMen";
		uniformClass="dvk_china_hpilot"; //new uniform
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian",
			"G_CIVIL_male"
		};
		weapons[]=
		{
			"arifle_CTAR_blk_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_CTAR_blk_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow",
			"Chemlight_red",
			"Chemlight_red"
		};
		linkedItems[]=
		{
			"H_CrewHelmetHeli_O",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		respawnLinkedItems[]=
		{
			"H_CrewHelmetHeli_O",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		DLC="Expansion";
	};
	
	//Altis light rifleman
		class O_Soldier_lite_F: O_Soldier_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_lite_F.jpg";
		_generalMacro="O_Soldier_lite_F";
		scope=2;
		displayName="$STR_B_Soldier_lite_F0";
		weapons[]=
		{
			"arifle_Katiba_ACO_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Katiba_C_ACO_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		camouflage=1.2;
		linkedItems[]=
		{
			"V_BandollierB_khk",
			"dvk_altcsat_beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"dvk_atlcsat_nvg_hidden"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_khk",
			"dvk_altcsat_beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"dvk_atlcsat_nvg_hidden"
		};
		role="Rifleman";
	};
	
	//urban light rifleman
	class dvk_ou_light: O_Soldier_lite_F
	{
		scope=2;
		author="Davik";
		editorSubcategory="EdSubcat_Personnel_Camo_Urban";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_F.jpg";
		uniformClass="U_O_CombatUniform_oucamo";
		linkedItems[]=
		{
			"V_BandollierB_blk",
			"dvk_altcsat_beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"dvk_atlcsat_nvg_hidden"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_blk",
			"dvk_altcsat_beret",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"dvk_atlcsat_nvg_hidden"
		};
	};
	
	//unif off Iran
	class dvk_offa: I_officer_F
	{
		author="Davik";
		side=0;
		scope=1;
		model="\A3\characters_f_beta\INDEP\ia_officer.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insigna"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\irn_off.paa",
			"\dvk_altcsat\data\unif\csat_altis.paa"
		};
	};
		
	//unif off pla
	class dvk_offt: I_officer_F
	{
		author="Davik";
		side=0;
		scope=1;
		model="\A3\characters_f_beta\INDEP\ia_officer.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insigna"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\pla_o.paa",
			"\dvk_altcsat\data\unif\csat_tna.paa"
		};
	};
		
	//navy unif Iran
		class dvk_inm: I_E_Uniform_01_F
	{
		author="Davik";
		side=0;
		scope=1;
		model = "\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "insigna", "flag"};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\iran_m_top.paa",
			"\dvk_altcsat\data\unif\iran_m_bot.paa",
			"\dvk_altcsat\data\unif\guanti.paa"
		};
	};
		
};