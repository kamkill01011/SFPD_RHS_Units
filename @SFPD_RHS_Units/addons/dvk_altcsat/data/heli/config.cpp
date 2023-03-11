class CfgPatches
{
	class dvk_altcsat_air_c
	{
		requiredVersion=1;
		author="Davik";
		version=1;
		units[]=
		{"DVK_PLAAF_ORCA_U", "DVK_PLA_ORCA_A"};
		requiredAddons[]={};
	};
};

class CfgVehicles
{
class O_Heli_Light_02_unarmed_F;
class O_Heli_Light_02_dynamicLoadout_F;

		class DVK_PLAAF_ORCA_U: O_Heli_Light_02_unarmed_F // Orca (unarmed)
	{
		author="Davik";
		_generalMacro="DVK_PLAAF_ORCA_U";
		side=0;
		faction="OPF_T_F";
		forceInGarage=1;
		scope=2;
		crew="O_T_Helipilot_F";
		typicalCargo[]={"O_T_Helipilot_F", "O_T_Helipilot_F"};		
		textureList[] = {};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\heli\orca_plaaf.paa"
		};
	};

		class DVK_PLA_ORCA_A: O_Heli_Light_02_dynamicLoadout_F // Orca (armed)
	{
		author="Davik";
		_generalMacro="DVK_PLA_ORCA_A";
		side=0;
		faction="OPF_T_F";
		forceInGarage=1;
		scope=2;
		crew="O_T_Helipilot_F";
		typicalCargo[]={"O_T_Helipilot_F", "O_T_Helipilot_F"};	
		textureList[] = {};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\heli\orca_pla.paa"
		};
	};

};