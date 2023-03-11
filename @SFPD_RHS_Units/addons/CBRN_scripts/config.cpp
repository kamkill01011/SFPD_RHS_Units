class CfgPatches
{
	class CBRN_scripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_common","cba_events", "ace_medical"};
	};
};


class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class EventHandlers {
			class CBRN_AI_Exposure_Effect {
				fired = "_u = _this # 0;if (isPlayer _u) exitWith {};if ((primaryWeapon _u) != (_this # 1)) exitWith {};if (!(_u getVariable ['CBRN_isCurrentlyExposed', false])) exitWith {};_u action ['WeaponOnBack', _u];";
			};
		};
	};
};

#include "cfgFunctions.hpp"
#include "XEH_postInit.hpp"
#include "XEH_init.hpp"
#include "XEH_preInit.hpp"
#include "XEH_firedMan.hpp"
#include "cfg3Den.hpp"