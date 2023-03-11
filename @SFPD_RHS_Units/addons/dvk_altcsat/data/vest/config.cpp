class CfgPatches
{
	class dvk_altcsat_vest_c
	{
		units[]={};
		weapons[]={"dvk_vest_csat_black", "dvk_tacv_csat_des", "dvk_tacv_csat_jun"};
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
	class H_MilCap_ghex_F;
	class H_Cap_brn_SPECOPS;
	class V_TacVest_khk;
	class V_TacVest_blk;
	class V_TacVest_oli;
	
	class dvk_tacv_csat_des: V_TacVest_khk
	{
		author="Davik";
		_generalMacro="dvk_tacv_csat_des";
		scope=2;
		displayName="Tactical Vest (Hex)";
		picture="\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\vest\tacv_des.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\dvk_altcsat\data\vest\tacv.rvmat"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply100";
			hiddenSelections[]={"Camo"};
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	
	//vest balck
	class dvk_vest_csat_black: V_TacVest_blk
	{
		author="Davik";
		_generalMacro="dvk_vest_csat_black";
		scope=2;
		displayName="Tactical Vest (CSAT Black)";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\vest\tacv_b.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\dvk_altcsat\data\vest\tacv.rvmat"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply100";
			hiddenSelections[]={"Camo"};
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	
		//vest green
	class dvk_vest_csat_jun: V_TacVest_oli
	{
		author="Davik";
		_generalMacro="dvk_vest_csat_jun";
		scope=2;
		displayName="Tactical Vest (Green Hex)";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\vest\tacv_j.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\dvk_altcsat\data\vest\tacv.rvmat"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply100";
			hiddenSelections[]={"Camo"};
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	
	
	
	// vest altis
		class SFPD_V_HarnessO_brn: V_TacVestIR_blk
	{
		author="Davik"; scope=2;
		displayName="Modular Carrier Lite (Hex)";
		picture = "\dvk_altcsat\data\ui\ui_vest_mm_a.paa"
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\vest\nvest_des.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
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
	
			class SFPD_V_HarnessOGL_brn: V_TacVestIR_blk
	{
		author="Davik"; scope=2;
		displayName="Modular Carrier GL Rig (Hex)";
		picture = "\dvk_altcsat\data\ui\ui_vest_h_a.paa"
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\vest\nvest_des.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			hiddenSelections[]={"Camo", "Camo2"};
			containerClass="Supply160";
			mass=100;
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


//vest tanoa
		class SFPD_V_HarnessO_ghex_F: SFPD_V_HarnessO_brn
	{
		author="Davik"; scope=2;
		displayName="Modular Carrier Lite (Green Hex)";
		picture = "\dvk_altcsat\data\ui\ui_vest_mm_t.paa"
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\vest\nvest_jung.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			hiddenSelections[]={"Camo", "Camo2"};
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
	
			class SFPD_V_HarnessOGL_ghex_F: SFPD_V_HarnessOGL_brn
	{
		author="Davik"; scope=2;
		displayName="Modular Carrier GL Rig (Green Hex)";
		picture = "\dvk_altcsat\data\ui\ui_vest_h_t.paa"
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\vest\nvest_jung.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			hiddenSelections[]={"Camo", "Camo2"};
			containerClass="Supply160";
			mass=100;
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
//vest urban
		class SFPD_V_HarnessO_gry: SFPD_V_HarnessO_brn
	{
		author="Davik"; scope=2;
		displayName="Modular Carrier Lite (Grey)";
		picture = "\dvk_altcsat\data\ui\ui_vest_mm_u.paa"
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\vest\nvest_urb.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
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
	
			class SFPD_V_HarnessOGL_gry: SFPD_V_HarnessOGL_brn
	{
		author="Davik"; scope=2;
		displayName="Modular Carrier GL Rig (Grey)";
		picture = "\dvk_altcsat\data\ui\ui_vest_h_u.paa"
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dvk_altcsat\data\vest\nvest_urb.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			hiddenSelections[]={"Camo", "Camo2"};
			containerClass="Supply160";
			mass=100;
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