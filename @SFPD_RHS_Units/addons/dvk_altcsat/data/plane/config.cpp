class CfgPatches
{
	class dvk_altcsat_plane_c
	{
		requiredVersion=1;
		author="Davik";
		version=1;
		units[]=
		{"DVK_PLA_to199"};
		requiredAddons[]={};
	};
};

class CfgVehicles
{
	class dvk_to199;
	
	class O_Plane_CAS_02_dynamicLoadout_F: dvk_to199 // To-199 IRIAF
	{
		author="Davik";
		_generalMacro="DVK_PLA_to199";
		scope=2;
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\plane\fighter_1.paa",
			"\dvk_altcsat\data\plane\fighter_2.paa"
		};
	};

	class DVK_PLA_to199: O_Plane_CAS_02_dynamicLoadout_F // To-199 PLAAF
	{
		author="Davik";
		_generalMacro="DVK_PLA_to199";
		side=0;
		faction="OPF_T_F";
		forceInGarage=1;
		scope=2;
		crew="O_T_Pilot_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\dvk_altcsat\data\plane\to199_1.paa",
			"\dvk_altcsat\data\plane\to199_2.paa"
		};	
	};

};