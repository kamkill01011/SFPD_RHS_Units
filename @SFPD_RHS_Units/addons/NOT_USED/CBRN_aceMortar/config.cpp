class CfgPatches
{
	class CBRN_aceMortar
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_interaction", "ace_mk6mortar", "CBRN_vanillaMortar"};
	};
};

#include "cfgWeapons.hpp"
#include "cfgMagazines.hpp"
//#include "cfgVehicles.hpp"
#include "cfgFunctions.hpp"
#include "XEH_postInit.hpp"
