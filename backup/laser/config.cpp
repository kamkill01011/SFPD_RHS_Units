
class CfgPatches {
    class SFPD_RHS_Units_laser  {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"a3_characters_F"};
    };
};

class cfgWeapons {
	class InventoryFlashLightItem_Base_F;
	class acc_pointer_IR;
	class SFPD_acc_pointer: acc_pointer_IR {
		scope = 2;
		displayName = "Red laser";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {100,0,0};
				dotColor[] = {0,0,0};
				dotSize = 1;
				beamThickness = 0.0125;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	class SFPD_acc_pointer_color_1: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_color_1";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {250,0,0};
				dotColor[] = {0,0,0};
				dotSize = 2;
				beamThickness = 0.0125;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	class SFPD_acc_pointer_color_2: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_color_2";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {50,0,0};
				dotColor[] = {0,0,0};
				dotSize = 2;
				beamThickness = 0.0125;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	class SFPD_acc_pointer_color_3: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_color_3";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {25,0,0};
				dotColor[] = {0,0,0};
				dotSize = 2;
				beamThickness = 0.0125;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	
	class SFPD_acc_pointer_dot_1: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_dot_1";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {100,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 1;
				beamThickness = 0.0125;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	class SFPD_acc_pointer_dot_2: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_dot_2";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {100,0,0};
				dotColor[] = {5000,0,0};
				dotSize = 1;
				beamThickness = 0.0125;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	class SFPD_acc_pointer_dot_3: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_dot_3";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {100,0,0};
				dotColor[] = {1000,0,0};
				dotSize = 1;
				beamThickness = 0.0125;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	
	
	class SFPD_acc_pointer_beam_1: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_beam_1";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {100,0,0};
				dotColor[] = {0,0,0};
				dotSize = 2;
				beamThickness = 0.025;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	class SFPD_acc_pointer_beam_2: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_beam_2";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {100,0,0};
				dotColor[] = {0,0,0};
				dotSize = 2;
				beamThickness = 0.05;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
	class SFPD_acc_pointer_beam_3: acc_pointer_IR {
		scope = 2;
		displayName = "Red SFPD_acc_pointer_beam_3";
		class ItemInfo: InventoryFlashLightItem_Base_F {
			mass = 6;
			class Pointer {
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {100,0,0};
				dotColor[] = {0,0,0};
				dotSize = 2;
				beamThickness = 0.005;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
	};
};

class SlotInfo;
class PointerSlot: SlotInfo {
	compatibleItems[] += {
		"SFPD_acc_pointer",
		"SFPD_acc_pointer_beam_1","SFPD_acc_pointer_beam_3","SFPD_acc_pointer_beam_2",
		"SFPD_acc_pointer_color_1","SFPD_acc_pointer_color_2","SFPD_acc_pointer_color_3",
		"SFPD_acc_pointer_dot_1","SFPD_acc_pointer_dot_2","SFPD_acc_pointer_dot_3"
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
	class compatibleItems {
		/*ACE_acc_pointer_red = 1;
		ACE_acc_pointer_green = 1;
		ACE_acc_pointer_green_IR = 1;*/
		SFPD_acc_pointer = 1;
		SFPD_acc_pointer_beam_1 = 1;
		SFPD_acc_pointer_beam_2 = 1;
		SFPD_acc_pointer_beam_3 = 1;
		SFPD_acc_pointer_color_1 = 1;
		SFPD_acc_pointer_color_2 = 1;
		SFPD_acc_pointer_color_3 = 1;
		SFPD_acc_pointer_dot_1 = 1;
		SFPD_acc_pointer_dot_2 = 1;
		SFPD_acc_pointer_dot_3 = 1;
	};
};

class PointerSlot_Rail: PointerSlot {
	class compatibleItems {
		/*ACE_acc_pointer_red = 1;
		ACE_acc_pointer_green = 1;
		ACE_acc_pointer_green_IR = 1;*/
		SFPD_acc_pointer = 1;
		SFPD_acc_pointer_beam_1 = 1;
		SFPD_acc_pointer_beam_2 = 1;
		SFPD_acc_pointer_beam_3 = 1;
		SFPD_acc_pointer_color_1 = 1;
		SFPD_acc_pointer_color_2 = 1;
		SFPD_acc_pointer_color_3 = 1;
		SFPD_acc_pointer_dot_1 = 1;
		SFPD_acc_pointer_dot_2 = 1;
		SFPD_acc_pointer_dot_3 = 1;
	};
};
