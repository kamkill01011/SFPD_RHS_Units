#include "CustomControlClasses.h"


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

class ArmaOSDialog: RscTestModule {
	idd = 1337;
	onload = "_this call zeus_fnc_setDeviceObjectExit;";
	class Controls: Controls {
		class ControlMain: ControlMain {};
		class ControlFrame: ControlFrame {
			font = "EtelkaMonospacePro";
			text = "Arma OS";
		};
		class ControlText2Input: ControlText {
			idc = 104;
			x = 0
			y = KAM_Y * 8;
			w = 0.9;
			font = "EtelkaMonospacePro";
			text = "";
		};
		class ControlOK: ControlOK {};
		class ControlLabel1Man: ControlLabel {
			y = KAM_Y * 1;
			w = 0.9;
			h = KAM_H * 4;
			style = 16;
			lineSpacing = 1;
			font = "EtelkaMonospacePro";
			text = "ls         = list directory content\ncd <DIR>   = change directory\ncd ..      = change to C:/ directory\ncat <FILE> = show file content";
		};
		class ControlLabel2Path: ControlLabel {
			idc = 205;
			y = KAM_Y * 7.5;
			w = 0.9;
			font = "EtelkaMonospacePro";
			text = "C:/";
		};
		class ControlLabel3Result: ControlLabel {
			idc = 206;
			y = KAM_Y * 3.5;
			w = 0.9;
			h = KAM_H * 8;
			style = 16;
			lineSpacing = 1;
			font = "EtelkaMonospacePro";
			text = "C:/>login\n##############################################\n#                                 ____       #\n#     /\                         / __ \      #\n#    /  \   _ __ _ __ ___   __ _| |  | |___  #\n#   / /\ \ | '__| '_ ` _ \ / _` | |  | / __| #\n#  / ____ \| |  | | | | | | (_| | |__| \__ \ #\n# /_/    \_\_|  |_| |_| |_|\__,_|\____/|___/ #\n#                                            #\n##############################################";

		};
	};
};

/*
##############################################
#                                 ____       #
#     /\                         / __ \      #
#    /  \   _ __ _ __ ___   __ _| |  | |___  #
#   / /\ \ | '__| '_ ` _ \ / _` | |  | / __| #
#  / ____ \| |  | | | | | | (_| | |__| \__ \ #
# /_/    \_\_|  |_| |_| |_|\__,_|\____/|___/ #
#                                            #
##############################################
*/

