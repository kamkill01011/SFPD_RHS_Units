//[this, "FOUND"] call ArmaOS_fnc_installArmaOs;


params ["_object", "_data"];


_folderBin = createHashMap;
_folderUsr = createHashMap;
//_folderDev = createHashMap;
_folderMnt = createHashMap;
_folderTmp = createHashMap;
_folderSys = createHashMap;

_diskC = createHashMapFromArray [
	["bin/",_folderBin], 
	["usr/",_folderUsr], 
	//["dev/",_folderDev], 
	["mnt/",_folderMnt], 
	["tmp/",_folderTmp], 
	["sys/",_folderSys]
];

_folderBin set ["chown", "0x7aba08383ca02edba89d595ab202af6a"];
_folderBin set ["chmod", "0x06dffd70b08326526796b1e63ac4dbbb"];
//_folderBin set ["grep", "0x68d269461fdd1accf0f4dd0b5d220afc"];
//_folderBin set ["man", "0x7ad0709e7ae4779209bb86802741e5ea"];

_folderUsr set ["root", "0x05997c805b97c483ff02bc4e42fe4065"];
_folderUsr set ["user", "0x21e02024b10751e6176d7efd00896376"];
/*
_folderDev set ["console", "0x4bfbaa57cef9f0271b5875924c01c7c8"];
_folderDev set ["core", "0xa539ef161ffe51f919fd4651f3480e9b"];
_folderDev set ["autofs", "0x2861ece0baf14c86cf53c03904fec633"];
*/
_folderMnt set ["usb1", "0x29efe445bf67ee5fd3e53c3e0aa21cfa"];
_folderMnt set ["usb2", "0xb5f42b07b98c939ee56fe8c35ee12351"];
//_folderMnt set ["exHDD", "0x2f01da11ce31c433e0798349cb4f6a9d"];

//_folderTmp set ["a2b4", "0x93b47dbfd91e644cfac480a2c9319081"];
//_folderTmp set ["c9c9", "0x3cc9f30553f7016b719f195f08dc4d27"];
//_folderTmp set ["e560", "0x97b1b6947df1e4835974a13d4019d3a4"];
_folderTmp set ["f7a9", "0xe3cf1877aa9d48aef10a2e3c2890cfe1"];

_folderSys set ["boot", "0x7f39efdf1caf8a58f8cde27803073830"];
_folderSys set ["shutdown", "0x96d9763cc391e8d8fa027f18b389b74a"];

_selFolder = _diskC get (selectRandom (keys _diskC));
_selFile = _selFolder set [(selectRandom (keys _selFolder)), _data];

_object setvariable ["KAM_ArmaOS_fs", _diskC, true];


_action = ["ArmaOslogin","login","",{
	params ["_target", "_player", "_params"];
	[_player, _target] spawn ArmaOS_fnc_displayArmaOS;
},{true},{},[],[0,0,0],3] call ace_interact_menu_fnc_createAction;

[_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

