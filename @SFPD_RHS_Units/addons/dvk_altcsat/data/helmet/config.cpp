class CfgPatches
{
	class dvk_altcsat_headg
	{
		units[]={};
		weapons[]={"DVK_altcsat_cap_irano", "dvk_altcsat_h_plamc", "DVK_altcsat_cap_plan", "DVK_altcsat_jh_plasf", "dvk_altcsat_beret", "dvk_altcsat_beret_g", "dvk_altcsat_beret_r"};
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
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Vest_Base;
	class Vest_Camo_Base;
	class NVGoggles;
	class V_TacVestIR_blk;
	class H_Cap_brn_SPECOPS;
	class H_HelmetB_light_black;
	class H_HelmetCrew_B;
	class H_Booniehat_oli;
	class HelmetBase;
	class H_Beret_ocamo;

	
	class dvk_altcsat_beret_r: H_Beret_ocamo //basco csat rosso
	{
		scope=2;
		weaponPoolAvailable=1;
		author="Davik";
		picture="\dvk_altcsat\data\helmet\beret_r_ui.paa"
		model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\beret_r.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\dvk_altcsat\data\helmet\basco.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	
	class dvk_altcsat_beret_g: H_Beret_ocamo //basco csat verde
	{
		scope=2;
		weaponPoolAvailable=1;
		author="Davik";
		picture="\dvk_altcsat\data\helmet\beret_g_ui.paa"
		model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\beret_g.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\dvk_altcsat\data\helmet\basco.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class dvk_altcsat_beret: H_Beret_ocamo //basco csat nero
	{
		scope=2;
		weaponPoolAvailable=1;
		author="Davik";
		picture="\dvk_altcsat\data\helmet\beret_b_ui.paa"
		model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\beret_b.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\dvk_altcsat\data\helmet\basco.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	
	
		class H_MilCap_ocamo: HelmetBase
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="H_MilCap_ocamo";
		scope=2;
		displayName="$STR_A3_H_MilCap_ocamo0";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_ocamo_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\cap_patr_des.paa"
		};
		model="\A3\Characters_F\Common\cappatrol";
		class ItemInfo: HeadgearItem
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	
	
	class DVK_altcsat_jh_plasf: H_Booniehat_oli
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="H_Booniehat_oli";
		displayName="$STR_A3_H_Booniehat_oli0";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\junglehat_plasf.paa"
		};
	};
	
	//elmetto carristi Iran
		class H_HelmetCrew_O: H_HelmetCrew_B
	{
		author="Davik";
		_generalMacro="H_HelmetCrew_O";
		displayName="$STR_A3_H_HelmetCrew_O0";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			modelSides[]={0,3};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	
		//elmetto carristi PLA
	class H_HelmetCrew_O_ghex_F: H_HelmetCrew_O
	{
		author="Davik";
		_generalMacro="H_HelmetCrew_O";
		displayName="$STR_A3_CfgWeapons_H_HelmetCrew_O_ghex_F0";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			modelSides[]={0,3};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		};
	};
	
	//elmetto marines cinesi
	class dvk_altcsat_h_plamc: ItemCore
	{
		scope=2;
		displayName="$STR_A3_H_HelmetO_ocamo0";
		picture="\dvk_altcsat\data\ui\ui_helmet_n.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\plamc_h.paa"
		};
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			mass=30;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			allowedSlots[]={901,605};
		};
	};
	//cappello PLA
		class H_MilCap_ghex_F: H_MilCap_ocamo
	{
		author="Davik";
		_generalMacro="H_MilCap_ghex_F";
		displayName="$STR_A3_CfgWeapons_H_MilCap_ghex_F0";
		picture="\A3\Characters_F_Exp\Headgear\Data\UI\icon_H_MilCap_ghex_F_ca.paa";
		DLC="Expansion";
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\pla_cap.paa"
		};
	};
	
		//cappello PLA NAVY
	class DVK_altcsat_cap_plan: H_MilCap_ghex_F
	{
		author="Davik";
		displayName="$STR_A3_H_MilCap_blue0_boot";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\plan_cap.paa",
			""
		};
	};
	
		//cappello Iran off
	class DVK_altcsat_cap_irano: H_Cap_brn_SPECOPS
	{
		author="Davik";
		displayName="$STR_A3_H_Cap_brn_SPECOPS0_boot";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\cap_off.paa"
		};
	};
//elmetti altis
	class H_HelmetO_ocamo: ItemCore
	{
		scope=2;
		displayName="$STR_A3_H_HelmetO_ocamo0";
		picture="\dvk_altcsat\data\ui\ui_helmet_a.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\iran_dpm.paa"
		};
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			mass=30;
			modelSides[]={0,3};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			allowedSlots[]={901,605};
		};
	};
//elmetti leader altis
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo
	{
		scope=2;
		displayname="$STR_A3_H_HelmetLeaderO_ocamo0";
		picture="\dvk_altcsat\data\ui\ui_helmet_a.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\iran_dpm.paa"
		};
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			mass=50;
			modelSides[]={0,3};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			allowedSlots[]={901,605};
		};
	};
	//elmetto specOps Altis
	class H_HelmetSpecO_ocamo: H_HelmetO_ocamo
	{
		scope=2;
		author="Davik";
		displayName="$STR_A3_H_HelmetSpecO_ocamo0";
		picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_sand_ca.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		descriptionShort="$STR_A3_SP_AL_I";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\iran_light.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			allowedSlots[]={901,605};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	//elmetto SpecO nero
	class H_HelmetSpecO_blk: H_HelmetSpecO_ocamo
	{
		scope=2;
		author="Davik";
		displayName="$STR_A3_H_HelmetSpecO_blk0";
		picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_black_ca.paa";
		model = "\A3\Characters_F\Common\headgear_placeholder";
		descriptionShort="$STR_A3_SP_AL_I";
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\black_light.paa"
		};

		class ItemInfo: HeadgearItem
		{
			mass=15;
			uniformModel= "\A3\Characters_F\Common\headgear_placeholder";
			allowedSlots[]={901,605};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
//elmetti urban
	class H_HelmetLEaderO_oucamo: H_HelmetLeaderO_ocamo
	{
		scope=2;
		displayName="$STR_A3_H_HelmetLeaderO_mcamo_urban0";
		picture="\dvk_altcsat\data\ui\ui_helmet_u.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\iran_para.paa"
		};
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			mass=50;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			allowedSlots[]={901,605};
		};
	};
	
	class H_HelmetO_oucamo: H_HelmetO_ocamo
		{
		scope=2;
		displayName="$STR_A3_H_HelmetO_oucamo0";
		picture="\dvk_altcsat\data\ui\ui_helmet_u.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\iran_para.paa"
		};
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			mass=30;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			allowedSlots[]={901,605};
		};
	};
//elmetti tanoa
	class H_HelmetO_ghex_F: H_HelmetO_ocamo
	{
		displayName="$STR_A3_CfgWeapons_H_HelmetO_ghex_F0";
		picture="\dvk_altcsat\data\ui\ui_helmet_t.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\pla.paa"
		};
		scope=2;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			mass=30;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			allowedSlots[]={901,605};
		};
	};
	class H_HelmetLeaderO_ghex_F: H_HelmetO_ocamo
	{
		displayName="$STR_A3_CfgWeapons_H_HelmetLeaderO_ghex_F0";
		picture="\dvk_altcsat\data\ui\ui_helmet_t.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\pla.paa"
		};
		scope=2;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			mass=50;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			allowedSlots[]={901,605};
		};
	};
	//elmetto specOps Tanoa
	class H_HelmetSpecO_ghex_F: H_HelmetSpecO_ocamo
	{
		scope=2;
		author="Davik";
		picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_black_ca.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		descriptionShort="$STR_A3_SP_AL_I";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\helmet\csat_tna_hl.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			allowedSlots[]={901,605};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};


};