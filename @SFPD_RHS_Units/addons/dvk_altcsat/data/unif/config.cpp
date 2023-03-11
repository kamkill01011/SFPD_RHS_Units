class CfgPatches
{
	class dvk_altcsat_uniform_c
	{
		units[]={};
		weapons[]={"dvk_csat_iransf","dvk_csat_plasf","dvk_csat_plamc","dvk_iran_hpilot", "dvk_china_hpilot", "dvk_csat_inm_u"};
		requiredversion=1.62;
		author="Davik";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Exp"
		};
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
		
	//Altis
	//Officer
		class U_O_OfficerUniform_ocamo: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_officer_uniform";
		picture="\dvk_altcsat\data\ui\CSAT_IRN_fatigue_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_offa";
			containerClass="Supply40";
			mass=40;
		};
	};
	//fatigue
		class U_O_CombatUniform_ocamo: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Iran_Fatigues_hex";
		picture="\dvk_altcsat\data\ui\CSAT_IRN_fatigue_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_os";
			containerClass="Supply40";
			mass=40;
		};
	};
	//Iran marines
	class dvk_csat_inm_u: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_U_O_T_Soldier_F0";
		picture="\dvk_altcsat\data\ui\CSAT_IRN_fatigue_G_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_inm";
			containerClass="Supply40";
			mass=40;
		};
	};
	//sniper
	class U_O_GhillieSuit: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Ghillie_suit_Iran";
		picture="\A3\characters_f\data\ui\icon_U_ghillie_oucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_snipa";
			containerClass="Supply60";
			mass=40;
		};
	};
	//recon uniform (tank crew)
		class U_O_SpecopsUniform_ocamo: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Recon_fatigues_hex";
		picture="\dvk_altcsat\data\ui\CSAT_IRN_unif_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_oc";
			containerClass="Supply40";
			mass=40;
		};
	};
	//Helicopter crew uniform
	class dvk_iran_hpilot: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Pilot_coveralls_Iran";
		picture="\dvk_altcsat\data\ui\CSAT_IRN_hpilot_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\hp_iran.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_ohp";
			containerClass="Supply60";
			mass=40;
		};
	};
	
	
	//SpecOps uniform
		class dvk_csat_iransf: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Recon_fatigues_hex";
		picture="\dvk_altcsat\data\ui\CSAT_IRN_unif_sf_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_osr";
			containerClass="Supply40";
			mass=40;
		};
	};
	//Altis Urban
	//Fatigue
		class U_O_CombatUniform_oucamo: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Iran_fatigues_urban";
		picture="\dvk_altcsat\data\ui\CSAT_IRN_fatigue_G_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_osu";
			containerClass="Supply40";
			mass=40;
		};
	};
	//Tanoa
	//fatigue
		class U_O_T_Soldier_F: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_U_O_T_Soldier_F0";
		picture="\dvk_altcsat\data\ui\CSAT_CN_unif_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_ost";
			containerClass="Supply40";
			mass=40;
		};
	};
	//sniper tanoa
	class U_O_T_Sniper_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_O_T_Sniper_F0";
		picture="\A3\characters_f_exp\data\ui\icon_U_OT_sniper_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_snipt";
			containerClass="Supply40";
			mass=40;
		};
	};
	//officer
		class U_O_T_Officer_F: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_U_O_T_Officer_F0";
		picture="\dvk_altcsat\data\ui\CSAT_CN_fatigue_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\officer_tna_CO.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_offt";
			containerClass="Supply40";
			mass=40;
		};
	};
		//SpecOps uniform PLA
		class dvk_csat_plasf: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Recon_fatigues_hex";
		picture="\dvk_altcsat\data\ui\CSAT_CN_unif_sf_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_osrt";
			containerClass="Supply40";
			mass=40;
		};
	};
	//PLA marines
	class dvk_csat_plamc: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_U_O_T_Soldier_F0";
		picture="\dvk_altcsat\data\ui\CSAT_CN_navy_fatigue_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="dvk_omarine";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//PLA helicopter pilot
		class dvk_china_hpilot: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Pilot_coveralls_Iran";
		picture="\dvk_altcsat\data\ui\CSAT_CN_hpilot_ui.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\unif\hp_cn.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_Helipilot_F";
			containerClass="Supply60";
			mass=40;
		};
	};

};