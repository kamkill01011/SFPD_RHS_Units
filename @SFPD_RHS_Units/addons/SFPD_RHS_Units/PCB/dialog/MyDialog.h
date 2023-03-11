#include "CustomControlClasses.h"


class MyDialog
{
	idd = 1337;
	
	class ControlsBackground
	{
		
	};
	class Controls
	{
		class ControlMain
		{
			type = 0;
			idc = -1;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			style = 0x30;
			text = "SFPD_RHS_Units\PCB\dialog\PCBs\PCB.paa";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			
		};
		class ControlWire0
		{
			type = 1;
			idc = 10;
			x = 0.175;
			y = 0.25;
			w = 0.05;
			h = 0.05;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {1,0,0,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0,0.7,0.3,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0.7,0.3,1};
			colorFocused[] = {1,0,0,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"",0,0};
			soundEnter[] = {"",0,0};
			soundEscape[] = {"",0,0};
			soundPush[] = {"",0,0};
			onMouseButtonDown = "playSound 'wire_cut'; [0] spawn PCB_fnc_cutWire;";
			
		};
		class ControlWire1: ControlWire0
		{
			idc = 11;
			x = 0.275;
			onMouseButtonDown = "playSound 'wire_cut'; [1] spawn PCB_fnc_cutWire;";
			
		};
		class ControlWire2: ControlWire0
		{
			idc = 12;
			x = 0.375;
			onMouseButtonDown = "playSound 'wire_cut'; [2] spawn PCB_fnc_cutWire;";
			
		};
		class ControlWire3: ControlWire0
		{
			idc = 13;
			x = 0.575;
			onMouseButtonDown = "playSound 'wire_cut'; [3] spawn PCB_fnc_cutWire;";
			
		};
		class ControlWire4: ControlWire0
		{
			idc = 14;
			x = 0.675;
			onMouseButtonDown = "playSound 'wire_cut'; [4] spawn PCB_fnc_cutWire;";
			
		};
		class ControlWire5: ControlWire0
		{
			idc = 15;
			x = 0.775;
			onMouseButtonDown = "playSound 'wire_cut'; [5] spawn PCB_fnc_cutWire;";
			
		};
		class ControlIC0
		{
			type = 0;
			idc = 20;
			x = 0.15;
			y = 0.6;
			w = 0.25;
			h = 0.1;
			style = 0x2;
			text = "XXX";
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class ControlIC1: ControlIC0
		{
			idc = 21;
			x = 0.6;
			text = "XXX";
			
		};
	};
	
};
