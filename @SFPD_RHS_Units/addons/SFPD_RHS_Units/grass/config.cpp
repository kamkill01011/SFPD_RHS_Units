#define SCALE_MULT 0.6	//used for DefaultWorld. Change ALTIS_, STRATIS_, and TANOA_SCALE_MULT below instead.
#define ALTIS_SCALE_MULT 0.6
#define STRATIS_SCALE_MULT 0.6
#define TANOA_SCALE_MULT 0.6

//		uncomment the following to enable custom values. Not sure if they have any effect...
//#define MY_clutterGrid 2
//#define MY_clutterDist 150
//#define MY_noDetailDist 100
//#define MY_fullDetailDist 30

class CfgPatches
{
	class SFPD_RHS_Units_Low_Grass
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;

		//	if you want to include grass for another map, remember to add the addon class name(?) here
		requiredAddons[] = { "a3_map_tanoabuka","a3_map_altis","a3_map_stratis" };
	};
};

class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class DefaultClutter;
		class Clutter
		{
			class StrBigFallenBranches_pine : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class StrBigFallenBranches_pine02 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class StrBigFallenBranches_pine03 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class StrGrassGreenGroup : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.69999999;
				scaleMax = SCALE_MULT * 1;
			};
			class StrGrassDry : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.80000001;
				scaleMax = SCALE_MULT * 1.2;
			};
			class StrGrassDryGroup : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.64999998;
				scaleMax = SCALE_MULT * 1;
			};
			class StrGrassDryMediumGroup : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.80000001;
				scaleMax = SCALE_MULT * 1;
			};
			class StrThornKhakiSmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.5;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class StrThornKhakiBig : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.69999999;
				scaleMax = SCALE_MULT * 0.89999998;
			};
			class StrThornGreenSmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.5;
			};
			class StrThornGreenBig : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.69999999;
				scaleMax = SCALE_MULT * 0.89999998;
			};
			class StrThornGraySmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.5;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class StrThornGrayBig : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.80000001;
				scaleMax = SCALE_MULT * 1.2;
			};
			class StrPlantGreenShrub : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.60000002;
				scaleMax = SCALE_MULT * 1.1;
			};
			class StrPlantGermaderGroup : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.89999998;
				scaleMax = SCALE_MULT * 1.5;
			};
			class StrWeedBrownTallGroup : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.89999998;
				scaleMax = SCALE_MULT * 1.25;
			};
			class StrWeedGreenTall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.80000001;
				scaleMax = SCALE_MULT * 1.2;
			};
			class StrPlantMullein : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.69999999;
				scaleMax = SCALE_MULT * 1.15;
			};
			class StrThistlePurpleSmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.89999998;
				scaleMax = SCALE_MULT * 1.4;
			};
			class StrThistleSmallYellow : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.60000002;
				scaleMax = SCALE_MULT * 1.4;
			};
			class StrThistleYellowShrub : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.69999999;
				scaleMax = SCALE_MULT * 1.1;
			};
			class GrassTall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.60000002;
				scaleMax = SCALE_MULT * 1;
			};
			class GrassGreen : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.85000002;
				scaleMax = SCALE_MULT * 1;
				surfaceColor[] = { 0.43099999,0.47499999,0.26699999 };
			};
			class GrassDry : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.89999998;
			};
			class GrassBrushHighGreen : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.5;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class GrassBunchSmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.80000001;
			};
			class ThistleHighDead : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.40000001;
				scaleMax = SCALE_MULT * 0.80000001;
			};
			class ThistleHigh : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.60000002;
				scaleMax = SCALE_MULT * 1;
			};
			class ThistleSmallYellow : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.89999998;
			};
			class ThistleThornGreen : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 1;
			};
			class ThistleThornGreenSmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.40000001;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class ThistleThornBrown : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.5;
				scaleMax = SCALE_MULT * 1.2;
			};
			class ThistleThornBrownSmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.69999999;
			};
			class ThistleThornGray : DefaultClutter
			{
				scaleMin = SCALE_MULT * 1.1;
				scaleMax = SCALE_MULT * 1.4;
			};
			class ThistleThornDesert : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.40000001;
				scaleMax = SCALE_MULT * 1.4;
			};
			class PlantGreenSmall : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.5;
				scaleMax = SCALE_MULT * 1.1;
			};
			class FlowerCakile : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.60000002;
				scaleMax = SCALE_MULT * 0.80000001;
			};
			class FlowerLowYellow2 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.60000002;
				scaleMax = SCALE_MULT * 1;
			};
			class GrassCrookedDead : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.80000001;
				scaleMax = SCALE_MULT * 1.1;
			};
			class GrassTalltwo : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.75;
				scaleMax = SCALE_MULT * 1.15;
			};
			class GrassLong_DryBunch : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.89999998;
				scaleMax = SCALE_MULT * 1.2;
			};
			class GrassDesertGroupSoft : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.60000002;
				scaleMax = SCALE_MULT * 1.1;
			};
			class SeaWeed1 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.40000001;
				scaleMax = SCALE_MULT * 1;
			};
			class SeaWeed2 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 1;
			};
			class Coral1 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 1;
			};
			class Coral2 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 1;
			};
			class Coral3 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 0.5;
			};
			class Coral4 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.30000001;
				scaleMax = SCALE_MULT * 1;
			};
			class Coral5 : DefaultClutter
			{
				scaleMin = SCALE_MULT * 0.2;
				scaleMax = SCALE_MULT * 0.60000002;
			};
		};
	};
	class Altis : CAWorld
	{
		//class DefaultClutter;
		class clutter
		{
			class StrBigFallenBranches_pine : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class StrBigFallenBranches_pine02 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class StrBigFallenBranches_pine03 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class StrGrassGreenGroup : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.69999999;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class StrGrassDry : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.80000001;
				scaleMax = ALTIS_SCALE_MULT * 1.2;
			};
			class StrGrassDryGroup : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.64999998;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class StrGrassDryMediumGroup : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.80000001;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class StrThornKhakiSmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.5;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class StrThornKhakiBig : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.69999999;
				scaleMax = ALTIS_SCALE_MULT * 0.89999998;
			};
			class StrThornGreenSmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.5;
			};
			class StrThornGreenBig : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.69999999;
				scaleMax = ALTIS_SCALE_MULT * 0.89999998;
			};
			class StrThornGraySmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.5;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class StrThornGrayBig : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.80000001;
				scaleMax = ALTIS_SCALE_MULT * 1.2;
			};
			class StrPlantGreenShrub : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.60000002;
				scaleMax = ALTIS_SCALE_MULT * 1.1;
			};
			class StrPlantGermaderGroup : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.89999998;
				scaleMax = ALTIS_SCALE_MULT * 1.5;
			};
			class StrWeedBrownTallGroup : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.89999998;
				scaleMax = ALTIS_SCALE_MULT * 1.25;
			};
			class StrWeedGreenTall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.80000001;
				scaleMax = ALTIS_SCALE_MULT * 1.2;
			};
			class StrPlantMullein : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.69999999;
				scaleMax = ALTIS_SCALE_MULT * 1.15;
			};
			class StrThistlePurpleSmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.89999998;
				scaleMax = ALTIS_SCALE_MULT * 1.4;
			};
			class StrThistleSmallYellow : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.60000002;
				scaleMax = ALTIS_SCALE_MULT * 1.4;
			};
			class StrThistleYellowShrub : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.69999999;
				scaleMax = ALTIS_SCALE_MULT * 1.1;
			};
			class GrassTall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.60000002;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class GrassGreen : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.85000002;
				scaleMax = ALTIS_SCALE_MULT * 1;
				surfaceColor[] = { 0.43099999,0.47499999,0.26699999 };
			};
			class GrassDry : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.89999998;
			};
			class GrassBrushHighGreen : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.5;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class GrassBunchSmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.80000001;
			};
			class ThistleHighDead : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.40000001;
				scaleMax = ALTIS_SCALE_MULT * 0.80000001;
			};
			class ThistleHigh : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.60000002;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class ThistleSmallYellow : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.89999998;
			};
			class ThistleThornGreen : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class ThistleThornGreenSmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.40000001;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class ThistleThornBrown : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.5;
				scaleMax = ALTIS_SCALE_MULT * 1.2;
			};
			class ThistleThornBrownSmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.69999999;
			};
			class ThistleThornGray : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 1.1;
				scaleMax = ALTIS_SCALE_MULT * 1.4;
			};
			class ThistleThornDesert : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.40000001;
				scaleMax = ALTIS_SCALE_MULT * 1.4;
			};
			class PlantGreenSmall : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.5;
				scaleMax = ALTIS_SCALE_MULT * 1.1;
			};
			class FlowerCakile : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.60000002;
				scaleMax = ALTIS_SCALE_MULT * 0.80000001;
			};
			class FlowerLowYellow2 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.60000002;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class GrassCrookedDead : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.80000001;
				scaleMax = ALTIS_SCALE_MULT * 1.1;
			};
			class GrassTalltwo : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.75;
				scaleMax = ALTIS_SCALE_MULT * 1.15;
			};
			class GrassLong_DryBunch : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.89999998;
				scaleMax = ALTIS_SCALE_MULT * 1.2;
			};
			class GrassDesertGroupSoft : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.60000002;
				scaleMax = ALTIS_SCALE_MULT * 1.1;
			};
			class SeaWeed1 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.40000001;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class SeaWeed2 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class Coral1 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class Coral2 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class Coral3 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 0.5;
			};
			class Coral4 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.30000001;
				scaleMax = ALTIS_SCALE_MULT * 1;
			};
			class Coral5 : DefaultClutter
			{
				scaleMin = ALTIS_SCALE_MULT * 0.2;
				scaleMax = ALTIS_SCALE_MULT * 0.60000002;
			};
		};
		//clutterGrid = 1.2;
		//clutterDist = 90;
		//noDetailDist = 65;
		//fullDetailDist = 10;
#ifdef MY_clutterGrid
		clutterGrid = MY_clutterGrid;
#endif
#ifdef MY_clutterDist
		clutterDist = MY_clutterDist;
#endif
#ifdef MY_noDetailDist
		noDetailDist = MY_noDetailDist;
#endif
#ifdef MY_fullDetailDist
		fullDetailDist = MY_fullDetailDist;
#endif
	};
	class Stratis : CAWorld
	{
		//class DefaultClutter;
		class Clutter
		{
			class StrBigFallenBranches_pine : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class StrBigFallenBranches_pine02 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class StrBigFallenBranches_pine03 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class StrGrassGreenGroup : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.69999999;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class StrGrassDry : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.80000001;
				scaleMax = STRATIS_SCALE_MULT * 1.2;
			};
			class StrGrassDryGroup : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.64999998;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class StrGrassDryMediumGroup : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.80000001;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class StrThornKhakiSmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.5;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class StrThornKhakiBig : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.69999999;
				scaleMax = STRATIS_SCALE_MULT * 0.89999998;
			};
			class StrThornGreenSmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.5;
			};
			class StrThornGreenBig : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.69999999;
				scaleMax = STRATIS_SCALE_MULT * 0.89999998;
			};
			class StrThornGraySmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.5;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class StrThornGrayBig : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.80000001;
				scaleMax = STRATIS_SCALE_MULT * 1.2;
			};
			class StrPlantGreenShrub : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.60000002;
				scaleMax = STRATIS_SCALE_MULT * 1.1;
			};
			class StrPlantGermaderGroup : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.89999998;
				scaleMax = STRATIS_SCALE_MULT * 1.5;
			};
			class StrWeedBrownTallGroup : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.89999998;
				scaleMax = STRATIS_SCALE_MULT * 1.25;
			};
			class StrWeedGreenTall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.80000001;
				scaleMax = STRATIS_SCALE_MULT * 1.2;
			};
			class StrPlantMullein : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.69999999;
				scaleMax = STRATIS_SCALE_MULT * 1.15;
			};
			class StrThistlePurpleSmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.89999998;
				scaleMax = STRATIS_SCALE_MULT * 1.4;
			};
			class StrThistleSmallYellow : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.60000002;
				scaleMax = STRATIS_SCALE_MULT * 1.4;
			};
			class StrThistleYellowShrub : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.69999999;
				scaleMax = STRATIS_SCALE_MULT * 1.1;
			};
			class GrassTall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.60000002;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class GrassGreen : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.85000002;
				scaleMax = STRATIS_SCALE_MULT * 1;
				surfaceColor[] = { 0.43099999,0.47499999,0.26699999 };
			};
			class GrassDry : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.89999998;
			};
			class GrassBrushHighGreen : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.5;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class GrassBunchSmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.80000001;
			};
			class ThistleHighDead : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.40000001;
				scaleMax = STRATIS_SCALE_MULT * 0.80000001;
			};
			class ThistleHigh : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.60000002;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class ThistleSmallYellow : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.89999998;
			};
			class ThistleThornGreen : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class ThistleThornGreenSmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.40000001;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class ThistleThornBrown : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.5;
				scaleMax = STRATIS_SCALE_MULT * 1.2;
			};
			class ThistleThornBrownSmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.69999999;
			};
			class ThistleThornGray : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 1.1;
				scaleMax = STRATIS_SCALE_MULT * 1.4;
			};
			class ThistleThornDesert : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.40000001;
				scaleMax = STRATIS_SCALE_MULT * 1.4;
			};
			class PlantGreenSmall : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.5;
				scaleMax = STRATIS_SCALE_MULT * 1.1;
			};
			class FlowerCakile : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.60000002;
				scaleMax = STRATIS_SCALE_MULT * 0.80000001;
			};
			class FlowerLowYellow2 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.60000002;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class GrassCrookedDead : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.80000001;
				scaleMax = STRATIS_SCALE_MULT * 1.1;
			};
			class GrassTalltwo : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.75;
				scaleMax = STRATIS_SCALE_MULT * 1.15;
			};
			class GrassLong_DryBunch : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.89999998;
				scaleMax = STRATIS_SCALE_MULT * 1.2;
			};
			class GrassDesertGroupSoft : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.60000002;
				scaleMax = STRATIS_SCALE_MULT * 1.1;
			};
			class SeaWeed1 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.40000001;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class SeaWeed2 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class Coral1 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class Coral2 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class Coral3 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 0.5;
			};
			class Coral4 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.30000001;
				scaleMax = STRATIS_SCALE_MULT * 1;
			};
			class Coral5 : DefaultClutter
			{
				scaleMin = STRATIS_SCALE_MULT * 0.2;
				scaleMax = STRATIS_SCALE_MULT * 0.60000002;
			};
		};
		//clutterGrid = 1.5;
		//clutterDist = 125;
		//noDetailDist = 65;
		//fullDetailDist = 15;
#ifdef MY_clutterGrid
		clutterGrid = MY_clutterGrid;
#endif
#ifdef MY_clutterDist
		clutterDist = MY_clutterDist;
#endif
#ifdef MY_noDetailDist
		noDetailDist = MY_noDetailDist;
#endif
#ifdef MY_fullDetailDist
		fullDetailDist = MY_fullDetailDist;
#endif
	};

	class Tanoa : CAWorld {
		class clutter {

			class c_forest_BiglLeaves : DefaultClutter {
				scaleMax = 1.4 * TANOA_SCALE_MULT;
				scaleMin = 0.5 * TANOA_SCALE_MULT;
				};
			class c_forest_BiglLeaves2 : DefaultClutter {
				scaleMax = 1.4 * TANOA_SCALE_MULT;
				scaleMin = 0.5 * TANOA_SCALE_MULT;
				};
			class c_forest_fern : DefaultClutter {
				scaleMax = 1.65 * TANOA_SCALE_MULT;
				scaleMin = 0.8 * TANOA_SCALE_MULT;
				};
			class c_forest_roots : DefaultClutter {
				scaleMax = 2.2 * TANOA_SCALE_MULT;
				scaleMin = 0.4 * TANOA_SCALE_MULT;
				};
			class c_forest_violet_leaves : DefaultClutter {
				scaleMax = 1.05 * TANOA_SCALE_MULT;
				scaleMin = 0.7 * TANOA_SCALE_MULT;
				};
			class c_forest_violet_leaves2 : DefaultClutter {
				scaleMax = 1.15 * TANOA_SCALE_MULT;
				scaleMin = 0.5 * TANOA_SCALE_MULT;
				};
			class c_forest_violet_single : DefaultClutter {
				scaleMax = 1.1 * TANOA_SCALE_MULT;
				scaleMin = 0.9 * TANOA_SCALE_MULT;
				};
			class c_Grass_leaf_big : DefaultClutter {
				scaleMax = 1.4 * TANOA_SCALE_MULT;
				scaleMin = 0.5 * TANOA_SCALE_MULT;
				};
			class c_Grass_Leaves_coltsfoot : DefaultClutter {
				scaleMax = 1.4 * TANOA_SCALE_MULT;
				scaleMin = 0.5 * TANOA_SCALE_MULT;
				};
			class c_Grass_mimosa : DefaultClutter {
				scaleMax = 1.3 * TANOA_SCALE_MULT;
				scaleMin = 0.4 * TANOA_SCALE_MULT;
				};
			class c_Grass_nettle : DefaultClutter {
				scaleMax = 1.6 * TANOA_SCALE_MULT;
				scaleMin = 0.8 * TANOA_SCALE_MULT;
				};
			class c_Grass_short_bunch : DefaultClutter {
				scaleMax = 1.5 * TANOA_SCALE_MULT;
				scaleMin = 1 * TANOA_SCALE_MULT;
				};
			class c_Grass_short_leaf : DefaultClutter {
				scaleMax = 1.6 * TANOA_SCALE_MULT;
				scaleMin = 1 * TANOA_SCALE_MULT;
				};
			class c_Grass_short_mimosa : DefaultClutter {
				scaleMax = 1.5 * TANOA_SCALE_MULT;
				scaleMin = 1 * TANOA_SCALE_MULT;
				};
			class c_Grass_short_nettle : DefaultClutter {
				scaleMax = 1.5 * TANOA_SCALE_MULT;
				scaleMin = 1 * TANOA_SCALE_MULT;
				};
			class c_Grass_short_small : DefaultClutter {
				scaleMax = 1.9 * TANOA_SCALE_MULT;
				scaleMin = 1 * TANOA_SCALE_MULT;
				};
			class c_GrassBunch_HI : DefaultClutter {
				scaleMax = 1.3 * TANOA_SCALE_MULT;
				scaleMin = 0.8 * TANOA_SCALE_MULT;
				};
			class c_GrassBunch_LO : DefaultClutter {
				scaleMax = 1.4 * TANOA_SCALE_MULT;
				scaleMin = 0.65 * TANOA_SCALE_MULT;
				};
			class c_GrassTropic : DefaultClutter {
				scaleMax = 1.4 * TANOA_SCALE_MULT;
				scaleMin = 0.65 * TANOA_SCALE_MULT;
				};
			class c_red_dirt_leaves : DefaultClutter {
				scaleMax = 1.2 * TANOA_SCALE_MULT;
				scaleMin = 1 * TANOA_SCALE_MULT;
				};
			class Coral1Exp : DefaultClutter {
				scaleMax = 1 * TANOA_SCALE_MULT;
				scaleMin = 0.3 * TANOA_SCALE_MULT;
				};
			class Coral2Exp : DefaultClutter {
				scaleMax = 1 * TANOA_SCALE_MULT;
				scaleMin = 0.3 * TANOA_SCALE_MULT;
				};
			class Coral3Exp : DefaultClutter {
				scaleMax = 1 * TANOA_SCALE_MULT;
				scaleMin = 0.3 * TANOA_SCALE_MULT;
				};
			class Coral4Exp : DefaultClutter {
				scaleMax = 1 * TANOA_SCALE_MULT;
				scaleMin = 0.3 * TANOA_SCALE_MULT;
				};
			class Coral5Exp : DefaultClutter {
				scaleMax = 1 * TANOA_SCALE_MULT;
				scaleMin = 0.2 * TANOA_SCALE_MULT;
				};
			class large_stones : DefaultClutter {
				scaleMax = 1 * TANOA_SCALE_MULT;
				scaleMin = 0.8 * TANOA_SCALE_MULT;
				};
			class mimosa : DefaultClutter {
				scaleMax = 1.5 * TANOA_SCALE_MULT;
				scaleMin = 1 * TANOA_SCALE_MULT;
				};
			class rock_stones : DefaultClutter {
				scaleMax = 1.18 * TANOA_SCALE_MULT;
				scaleMin = 0.2 * TANOA_SCALE_MULT;
				};
			class SeaWeed1Exp : DefaultClutter {
				scaleMax = 1 * TANOA_SCALE_MULT;
				scaleMin = 0.25 * TANOA_SCALE_MULT;
				};
		};
		//no previous data for following data
#ifdef MY_clutterGrid
		clutterGrid = MY_clutterGrid;
#endif
#ifdef MY_clutterDist
		clutterDist = MY_clutterDist;
#endif
#ifdef MY_noDetailDist
		noDetailDist = MY_noDetailDist;
#endif
#ifdef MY_fullDetailDist
		fullDetailDist = MY_fullDetailDist;
#endif
	};
};