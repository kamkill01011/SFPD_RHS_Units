class CfgPatches
{
	class dvk_altcsat_vanillaunif_c
	{
		units[]={"dvk_csat_uv_urban", "dvk_csat_uv_tanoa", "dvk_csat_uv_sfa", "dvk_csat_uv_plan", "dvk_csat_uv_sft", "dvk_csat_uv_inavy"};
		weapons[]={"dvk_csat_uv_urban_u", "dvk_csat_uv_tanoa_u", "dvk_csat_uv_sfa_u", "dvk_csat_uv_plan_u", "dvk_csat_uv_sft_u", "dvk_csat_uv_inavy_u", "dvk_csat_uv_jun", "dvk_csat_uv_urban", "dvk_csat_uv_altis", "dvk_csat_heavyv_altis", "dvk_csat_heavyv_urban", "dvk_csat_heavyv_jun"};
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
	class I_soldier_F;
	
	class dvk_csat_uv_inavy: I_soldier_F
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
			"\dvk_altcsat\data\unif\iran_m_bot.paa"
		};
	};
	
	class dvk_csat_uv_urban: I_soldier_F
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
			"\dvk_altcsat\data\unif\iran_para_bottom.paa"
		};
	};
	
	class dvk_csat_uv_tanoa: I_soldier_F
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
			"\dvk_altcsat\data\vanilla_equip\pla_van.paa"
		};
	};
	
	class dvk_csat_uv_sfa: I_soldier_F
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
			"\dvk_altcsat\data\unif\iran_sf.paa"
		};
	};
	
		class dvk_csat_uv_plan: I_soldier_F
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
			"\dvk_altcsat\data\vanilla_equip\plamc_van.paa"
		};
	};
	
		class dvk_csat_uv_sft: I_soldier_F
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
			"\dvk_altcsat\data\vanilla_equip\plasf_van.paa"
		};
	};
	

};

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class V_TacVestIR_blk;
	class VestItem;
	class V_PlateCarrierIAGL_dgtl;
	
	class dvk_csat_uv_inavy_u: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Recon_fatigues_hex";
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
			uniformClass="dvk_csat_uv_inavy";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class dvk_csat_uv_urban_u: Uniform_Base
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
			uniformClass="dvk_csat_uv_urban";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class dvk_csat_uv_tanoa_u: Uniform_Base
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
			uniformClass="dvk_csat_uv_tanoa";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class dvk_csat_uv_sfa_u: Uniform_Base
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
			uniformClass="dvk_csat_uv_sfa";
			containerClass="Supply40";
			mass=40;
		};
	};

		class dvk_csat_uv_plan_u: Uniform_Base
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_Recon_fatigues_hex";
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
			uniformClass="dvk_csat_uv_plan";
			containerClass="Supply40";
			mass=40;
		};
	};
	

		class dvk_csat_uv_sft_u: Uniform_Base
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
			uniformClass="dvk_csat_uv_sft";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// vest altis
		class dvk_csat_uv_altis: V_TacVestIR_blk
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_V_HarnessOSpec_brn0";
		picture="\dvk_altcsat\data\ui\ui_vest_l_a.paa";
		Model="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\dvk_altcsat\data\vest\van_vest_des.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			hiddenSelections[]={"Camo"};
			containerClass="Supply160";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	//vest light urban
			class dvk_csat_uv_urban: V_TacVestIR_blk
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_V_HarnessOSpec_gry0";
		picture="\dvk_altcsat\data\ui\ui_vest_l_u.paa";
		Model="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\dvk_altcsat\data\vest\van_vest_urb.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			hiddenSelections[]={"Camo"};
			containerClass="Supply160";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	//vest light tanoa
	class dvk_csat_uv_jun: V_TacVestIR_blk
	{
		author="Davik";
		scope=2;
		displayName="$STR_A3_V_PlateCarrier1_rgr0";
		picture="\dvk_altcsat\data\ui\ui_vest_l_t.paa";
		Model="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\dvk_altcsat\data\vest\van_vest_jun.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			hiddenSelections[]={"Camo"};
			containerClass="Supply160";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	
//***********************************************************************************************

//vest vanilla heavy altis
class dvk_csat_heavyv_altis: V_PlateCarrierIAGL_dgtl
	{
		author="Davik";
		_generalMacro="dvk_csat_heavyv_altis";
		scope=2;
		displayName="GA Carrier GL Rig (Hex)";
		picture="\dvk_altcsat\data\ui\ui_vest_m_a.paa";
		model="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		descriptionShort="$STR_A3_SP_ER";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\vest\van_vest_des.paa",
			"\dvk_altcsat\data\vanilla_equip\heavyv_des.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply160";
			mass=100;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	
//vest vanilla heavy urban
class dvk_csat_heavyv_urban: V_PlateCarrierIAGL_dgtl
	{
		author="Davik";
		_generalMacro="dvk_csat_heavyv_urban";
		scope=2;
		displayName="GA Carrier GL Rig (Grey)";
		picture="\dvk_altcsat\data\ui\ui_vest_m_u.paa";
		model="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		descriptionShort="$STR_A3_SP_ER";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\vest\van_vest_urb.paa",
			"\dvk_altcsat\data\vanilla_equip\heavyv_urb.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply160";
			mass=100;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};

//vest vanilla heavy jungle
class dvk_csat_heavyv_jun: V_PlateCarrierIAGL_dgtl
	{
		author="Davik";
		_generalMacro="dvk_csat_heavyv_jun";
		scope=2;
		displayName="GA Carrier GL Rig (Green Hex)";
		picture="\dvk_altcsat\data\ui\ui_vest_m_t.paa";
		model="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		descriptionShort="$STR_A3_SP_ER";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\vest\van_vest_jun.paa",
			"\dvk_altcsat\data\vanilla_equip\heavyv_jun.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply160";
			mass=100;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	
	
	
};