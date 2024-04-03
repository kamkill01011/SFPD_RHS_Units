//#include "CustomControlClasses.h"

#define KAM_X_lABEL 0.0
#define KAM_X_CTRL 0.2
#define KAM_Y 0.1
#define KAM_W_lABEL 0.2
#define KAM_W_CTRL 0.8
#define KAM_H 0.05

class RscTestModule {
	idd = 1338;
	//onUnload = "_this call zeus_fnc_TestExit;";
	class Controls {
		class ControlMain {
			type = 0;
			idc = -1;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.9};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class ControlFrame {
			type = 0;
			idc = -1;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			style = 64;
			text = "Test Module";
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class ControlOK {
			type = 1;
			idc = -1;
			x = 0.9;
			y = 0.9;
			w = 0.1;
			h = 0.1;
			style = 0;
			text = "OK";
			borderSize = 0;
			colorBackground[] = {0,0,0,1};
			colorBackgroundActive[] = {0.102,0.102,0.102,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,1,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "closeDialog 1;";
			shadow = 0;
		};
		class ControlComboBox {
			type = 4;
			idc = 101;
			x = KAM_X_CTRL;
			y = KAM_Y * 1;
			w = KAM_W_CTRL;
			h = KAM_H;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {0,0,0,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,1,1,1};
			colorSelectBackground[] = {0.5,0.5,0.5,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.5;
			class ComboScrollBar {
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
			class Items {
				class Item0 {
					text = "CS Gas";
					value = 0;
					default = 1;
				};
				class Item1 {
					text = "Asphyxiant Gas";
					value = 1;
				};
				class Item2 {
					text = "Nerve Agent";
					value = 2;
				};
			};
		};
		class ControlSlider {
			type = 43;
			idc = 102;
			x = KAM_X_CTRL;
			y = KAM_Y * 2;
			w = KAM_W_CTRL;
			h = KAM_H;
			style = 1024;
			arrowEmpty = "\A3\ui_f\data\GUI\Cfg\Slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\Cfg\Slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\GUI\Cfg\Slider\border_ca.paa";
			color[] = {1,1,1,1};
			colorActive[] = {1,1,1,1};
			thumb = "\A3\ui_f\data\GUI\Cfg\Slider\thumb_ca.paa";
			onSliderPosChanged = "params ['_ctrl', '_newValue']; _ctrl ctrlSetTooltip format ['%1', _newValue];";
			onLoad = "params ['_ctrl', '_cfg']; _ctrl sliderSetRange [getNumber (_cfg >> 'KAM_MIN'), getNumber (_cfg >> 'KAM_MAX')]; _ctrl sliderSetPosition (getNumber (_cfg >> 'KAM_SEL')); _ctrl ctrlSetTooltip format ['%1', getNumber (_cfg >> 'KAM_SEL')];";
			KAM_MIN = 0;
			KAM_SEL = 5;
			KAM_MAX = 10;
		};
		class ControlText {
			type = 2;
			idc = 103;
			x = KAM_X_CTRL;
			y = KAM_Y * 3;
			w = KAM_W_CTRL;
			h = KAM_H;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0,0,0,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			canModify = 1;
		};
		class ControlLabel {
			type = 0;
			idc = -1;
			x = KAM_X_LABEL;
			y = KAM_Y * 1;
			w = KAM_W_lABEL;
			h = KAM_H;
			style = 0;
			text = "Label 1";
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "Label 2";
		};
		class ControlLabel3: ControlLabel {
			y = KAM_Y * 3;
			text = "Label 3";
		};
	};
};

class RscAddCarKeyModule: RscTestModule {
	onUnload = "_this call zeus_fnc_addCarKeyExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "add car key";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "lockpick";
					data = "ACE_key_lockpick";
					default = 1;
				};
				class Item1 {
					text = "BLUFOR key";
					data = "ACE_key_west";
				};
				class Item2 {
					text = "OPFOR key";
					data = "ACE_key_east";
				};
				class Item3 {
					text = "INDEP key";
					data = "ACE_key_indp";
				};
				class Item4 {
					text = "CIVIL key";
					data = "ACE_key_civ";
				};
				class Item5 {
					text = "MASTER key";
					data = "ACE_key_master";
				};
			};
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "Key to add";
		};
	};
};

class RscAddK9Module: RscTestModule {
	onUnload = "_this call zeus_fnc_addK9Exit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "add K9";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "Yes";
					value = 1;
					default = 1;
				};
				class Item1 {
					text = "No";
					value = 0;
				};
			};
		};
		class ControlText: ControlText {
			idc = 103;
			y = KAM_Y * 2;
			text = "5";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "is AI";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "life";
		};
	};
};

class RscSetupArmaOsModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setupArmaOsExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "setup Arma Os";
		};
		class ControlOK: ControlOK {};
		class ControlText1: ControlText {
			idc = 103;
			y = KAM_Y * 1;
			text = "SECRET CODE: *1234*";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "data";
		};
	};
};

class RscSetDeviceObjectModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setDeviceObjectExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "set device object";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = -50;
			KAM_SEL = -20;
			KAM_MAX = -20;
		};
		class ControlText1: ControlText {
			idc = 103;
			y = KAM_Y * 2;
			text = "433.0";
		};
		class ControlText2: ControlText {
			idc = 104;
			y = KAM_Y * 3;
			text = "1000";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "strength [db]";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "frequency [Hz]";
		};
		class ControlLabel3: ControlLabel {
			y = KAM_Y * 3;
			text = "range [m]";
		};
	};
};

class RscSetJammerObjectModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setJammerObjectExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "set jammer object";
		};
		class ControlOK: ControlOK {};
		class ControlSlider1: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = 0;
			KAM_SEL = 1000;
			KAM_MAX = 10000;
		};
		class ControlSlider2: ControlSlider {
			idc = 103;
			y = KAM_Y * 2;
			KAM_MIN = 0;
			KAM_SEL = 0.1;
			KAM_MAX = 1;
		};
		class ControlSlider3: ControlSlider {
			idc = 104;
			y = KAM_Y * 3;
			KAM_MIN = 0;
			KAM_SEL = 0.9;
			KAM_MAX = 2;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "range [m]";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "min";
		};
		class ControlLabel3: ControlLabel {
			y = KAM_Y * 3;
			text = "max";
		};
	};
};

class RscSetContaminatedObjectModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setContaminatedObjectExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "set contaminated object";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = 0;
			KAM_SEL = 5;
			KAM_MAX = 10;
		};
		class ControlText: ControlText {
			idc = 103;
			y = KAM_Y * 2;
			text = "500";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "strength";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "range [m]";
		};
	};
};

class RscSpawnPermanentAreaModule: RscTestModule {
	onUnload = "_this call zeus_fnc_spawnPermanentAreaExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "spawn premanent area";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "CS Gas";
					value = 0;
					default = 1;
				};
				class Item1 {
					text = "Asphyxiant Gas";
					value = 1;
				};
				class Item2 {
					text = "Nerve Agent";
					value = 2;
				};
			};
		};
		class ControlText: ControlText {
			idc = 103;
			y = KAM_Y * 2;
			text = "100";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "gas type";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "radius [m]";
		};
	};
};

class RscSpawnTemporaryAreaModule: RscTestModule {
	onUnload = "_this call zeus_fnc_spawnTemporaryAreaExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "spawn temporary area";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "CS Gas";
					value = 0;
					default = 1;
				};
				class Item1 {
					text = "Asphyxiant Gas";
					value = 1;
				};
				class Item2 {
					text = "Nerve Agent";
					value = 2;
				};
			};
		};
		class ControlText1: ControlText {
			idc = 103;
			y = KAM_Y * 2;
			text = "20";
		};
		class ControlText2: ControlText {
			idc = 104;
			y = KAM_Y * 3;
			text = "120";
		};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 4;
			KAM_MIN = 0.1;
			KAM_SEL = 0.2;
			KAM_MAX = 0.4;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "gas type";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "radius [m]";
		};
		class ControlLabel3: ControlLabel {
			y = KAM_Y * 3;
			text = "duration [s]";
		};
		class ControlLabel4: ControlLabel {
			y = KAM_Y * 4;
			text = "thickness";
		};
	};
};

class RscAddInjuryModule: RscTestModule {
	onUnload = "_this call zeus_fnc_addInjuryExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "add injury";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "Head";
					data = "Head";
					default = 1;
				};
				class Item1 {
					text = "Body";
					data = "Body";
				};
				class Item2 {
					text = "Left Arm";
					data = "LeftArm";
				};
				class Item3 {
					text = "Right Arm";
					data = "RightArm";
				};
				class Item4 {
					text = "Left Leg";
					data = "LeftLeg";
				};
				class Item5 {
					text = "Right Leg";
					data = "RightLeg";
				};
			};
		};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 2;
			KAM_MIN = 0.1;
			KAM_SEL = 0.4;
			KAM_MAX = 3.0;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "body part";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "damage";
		};
	};
};

class RscApplyTourniquetModule: RscTestModule {
	onUnload = "_this call zeus_fnc_applyTourniquetExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "apply tourniquet";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "Left Arm";
					data = "LeftArm";
					default = 1;
				};
				class Item1 {
					text = "Right Arm";
					data = "RightArm";
				};
				class Item2 {
					text = "Left Leg";
					data = "LeftLeg";
				};
				class Item3 {
					text = "Right Leg";
					data = "RightLeg";
				};
			};
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "body part";
		};
	};
};

class RscLoiterModule: RscTestModule {
	onUnload = "_this call zeus_fnc_loiterExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "loiter";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = 500;
			KAM_SEL = 1000;
			KAM_MAX = 2000;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "altitude [m]";
		};
	};
};

class RscSetCanisterFuelModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setCanisterFuelExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "set canister fuel";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = 0;
			KAM_SEL = 10;
			KAM_MAX = 100;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "fuel [L]";
		};
	};
};

class RscGiveTracerModule: RscTestModule {
	onUnload = "_this call zeus_fnc_giveTracerExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "give tracer";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "WEST";
					value = 0;
				};
				class Item1 {
					text = "EAST";
					value = 1;
				};
				class Item2 {
					text = "INDEP";
					value = 2;
					default = 1;
				};
			};
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "side";
		};
	};
};

class RscGarbageSmallModule: RscTestModule {
	onUnload = "_this call zeus_fnc_garbageSmallExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "garbage small";
		};
		class ControlOK: ControlOK {};
		class ControlText: ControlText {
			idc = 103;
			y = KAM_Y * 1;
			text = "500";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "radius";
		};
	};
};

class RscGarbageBigModule: RscTestModule {
	onUnload = "_this call zeus_fnc_garbageBigExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "garbage big";
		};
		class ControlOK: ControlOK {};
		class ControlText: ControlText {
			idc = 103;
			y = KAM_Y * 1;
			text = "500";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "radius";
		};
	};
};

class RscGarbageCleanModule: RscTestModule {
	onUnload = "_this call zeus_fnc_garbageCleanExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "garbage clean";
		};
		class ControlOK: ControlOK {};
		class ControlText: ControlText {
			idc = 103;
			y = KAM_Y * 1;
			text = "500";
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "radius";
		};
	};
};

class RscAddIntelModule: RscTestModule {
	onUnload = "_this call zeus_fnc_addIntelExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "add intel";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				class Item0 {
					text = "USB flash drive";
					data = "FlashDisk";
					default = 1;
				};
				class Item1 {
					text = "Files";
					data = "Files";
				};
				class Item2 {
					text = "Folder";
					data = "DocumentsSecret";
				};
				class Item3 {
					text = "File (Top Secret)";
					data = "FilesSecret";
				};
				class Item4 {
					text = "Wallet";
					data = "Wallet_ID";
				};
				class Item5 {
					text = "Keys";
					data = "Keys";
				};
				class Item6 {
					text = "Smartphone";
					data = "SmartPhone";
				};
				class Item7 {
					text = "Mobile phone";
					data = "MobilePhone";
				};
				class Item8 {
					text = "Money (small)";
					data = "Money_bunch";
				};
				class Item9 {
					text = "Money (stack)";
					data = "Money_stack";
				};
			};
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "Item to add";
		};
	};
};

class RscSetBloodModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setBloodExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "set blood";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = 3.0;
			KAM_SEL = 5.2;
			KAM_MAX = 6.0;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "blood volume";
		};
	};
};

class RscSetSleepModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setSleepExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "set sleep";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = 0.0;
			KAM_SEL = 1.0;
			KAM_MAX = 7.0;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "days without sleep";
		};
	};
};

class RscCPZoneModule: RscTestModule {
	onUnload = "_this call zeus_fnc_CPZoneExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "CP Zone";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 101;
			y = KAM_Y * 1;
			KAM_MIN = 50;
			KAM_SEL = 200;
			KAM_MAX = 1000;
		};
		class ControlSlider2: ControlSlider {
			idc = 102;
			y = KAM_Y * 2;
			KAM_MIN = 1;
			KAM_SEL = 10;
			KAM_MAX = 50;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "radius";
		};
		class ControlLabel2: ControlLabel {
			y = KAM_Y * 2;
			text = "civilian count";
		};
	};
};

class RscSetStationFuelModule: RscTestModule {
	onUnload = "_this call zeus_fnc_setStationFuelExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "set station fuel";
		};
		class ControlOK: ControlOK {};
		class ControlSlider: ControlSlider {
			idc = 102;
			y = KAM_Y * 1;
			KAM_MIN = 0;
			KAM_SEL = 10;
			KAM_MAX = 1000;
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "fuel [L]";
		};
	};
};

#define WEAPON_DIALOG_ITEM(ID,TEXT,PICTURE) \
	class Item##ID { \
		value = ID; \
		text = TEXT; \
		picture = PICTURE; \
		colorPicture[] = {1,1,1,1}; \
	};

class RscAddWeaponModule: RscTestModule {
	onLoad = "_this call zeus_fnc_addWeaponInit;";
	onUnload = "_this call zeus_fnc_addWeaponExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			text = "add weapon";
		};
		class ControlOK: ControlOK {};
		class ControlComboBox: ControlComboBox {
			colorBackground[] = {0.25,0.25,0.25,1};
			colorSelect[] = {1,1,1,1};
			colorPicture[] = {1,1,1,1};
			colorPictureSelect[] = {1,1,1,1};
			colorPictureSelected[] = {1,1,1,1};
			idc = 101;
			y = KAM_Y * 1;
			class Items {
				WEAPON_DIALOG_ITEM(0,"Camera",				"\lxWS\weapons_f_lxWS\Camera\data\ui\gear_camera_CA.paa")
				WEAPON_DIALOG_ITEM(1,"Type 115",			"\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_blk_F_X_CA.paa")
				WEAPON_DIALOG_ITEM(2,"sawed-off",			"a3\Weapons_F_Enoch\Shotguns\HunterShotgun_01\Data\UI\gear_HunterShotgun_01_sawedoff_X_CA.paa")
				WEAPON_DIALOG_ITEM(3,"Ash-12",				"\lxRF\weapons_rf\Rifles\ASH12\data\ui\icon_arifle_ASH12_urban_RF_CA.paa")
				WEAPON_DIALOG_ITEM(4,"Ash-12 GL",			"\lxRF\weapons_rf\Rifles\ASH12\data\ui\icon_arifle_ASH12_GL_urban_RF_CA.paa")
				WEAPON_DIALOG_ITEM(5,"auto shotgun AA12",	"\lxWS\weapons_1_f_lxws\Shotguns\AA40\Data\ui\icon_sgun_aa40_lxWS_CA.paa")
				WEAPON_DIALOG_ITEM(6,"FAL",					"\lxWS\weapons_f_lxWS\Rifles\slr\Data\UI\icon_lxWS_arifle_SLR_X_CA.paa")
				WEAPON_DIALOG_ITEM(7,"FAL GL",				"\lxWS\weapons_f_lxWS\Rifles\Slr\data\ui\icon_lxWS_arifle_SLR_GL_X_CA.paa")
				WEAPON_DIALOG_ITEM(8,"Galil arm",			"\lxWS\weapons_f_lxWS\Rifles\Galat\Data\UI\icon_lxWS_arifle_Galat_F_X_CA.paa")
				WEAPON_DIALOG_ITEM(9,"GLX 160",				"\lxWS\weapons_1_f_lxws\Rifles\GLX\data\ui\icon_glaunch_GLX_lxWS_CA.paa")
				WEAPON_DIALOG_ITEM(10,"Velktor R5",			"\lxws\weapons_1_f_lxWS\rifles\VelkoR5\Data\UI\icon_arifle_VelkoR5_lxWS_CA.paa")
				WEAPON_DIALOG_ITEM(11,"Velktor R5 GL",		"\lxws\weapons_1_f_lxWS\rifles\VelkoR5\Data\UI\icon_arifle_VelkoR5_GL_lxWS_CA.paa")
				WEAPON_DIALOG_ITEM(12,"Vektor SS-77",		"\lxWS\weapons_1_f_lxws\Machineguns\s77\data\ui\icon_LMG_S77_lxWS_CA.paa")
				WEAPON_DIALOG_ITEM(13,"XMS",				"\lxWS\weapons_f_lxWS\Data\UI\XMS_Base_X_CA.paa")
				WEAPON_DIALOG_ITEM(14,"XMS GL",				"\lxWS\weapons_f_lxWS\Data\UI\XMS_GL_X_CA.paa")
				WEAPON_DIALOG_ITEM(15,"XMS SG",				"\lxWS\weapons_f_lxWS\Data\UI\XMS_SG_X_CA.paa")
				WEAPON_DIALOG_ITEM(16,"FAMAS",				"\ofrp_a3_weapons\rifles\famas\data\ui\ofrp_pic_famas_f1_x_ca.paa")
				WEAPON_DIALOG_ITEM(17,"FAMAS GL",			"\ofrp_a3_weapons\rifles\famas\data\ui\OFrP_pic_Famas_F1_GLM203_x_ca.paa")
				WEAPON_DIALOG_ITEM(18,"AKM",				"\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_akm_ca.paa")
				WEAPON_DIALOG_ITEM(19,"bolt rifle",			"\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m38_ca.paa")
				WEAPON_DIALOG_ITEM(20,"VHS-D2",				"\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_vhsd2_ct15x_ca.paa")
				WEAPON_DIALOG_ITEM(21,"VHS-D2 GL",			"\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_vhsd2_bg_ct15x_ca.paa")
				WEAPON_DIALOG_ITEM(22,"M32 MGL",			"\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m32_ca.paa")
				WEAPON_DIALOG_ITEM(23,"M590A1 shotgun",		"\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_M590_8RD_ca.paa")
				WEAPON_DIALOG_ITEM(24,"SCAR-H",				"\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_STD_ca.paa")
				WEAPON_DIALOG_ITEM(25,"FNX",				"a3\Weapons_F_Enoch\Pistols\Pistol_Heavy_01\Data\UI\gear_pistol_heavy_01_green_X_ca.paa")
				WEAPON_DIALOG_ITEM(26,"G19A",				"lxRF\weapons_rf\Pistols\Glock\data\ui\gear_glock_auto_x_ca.paa")
				WEAPON_DIALOG_ITEM(27,"G19A drum",			"lxRF\weapons_rf\Pistols\Glock\data\ui\gear_glock_auto_x_ca.paa")
				WEAPON_DIALOG_ITEM(28,"Deagle",				"\lxRF\weapons_rf\Pistols\DEagle\data\ui\gear_deagle_classic_ca.paa")
				WEAPON_DIALOG_ITEM(29,"Deagle gold",		"\lxRF\weapons_rf\Pistols\DEagle\data\ui\gear_deagle_gold_ca.paa")
				WEAPON_DIALOG_ITEM(30,"M320 GL",			"\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_M320_ca.paa")
			};
		};
		class ControlLabel1: ControlLabel {
			y = KAM_Y * 1;
			text = "Item to add";
		};
	};
};
