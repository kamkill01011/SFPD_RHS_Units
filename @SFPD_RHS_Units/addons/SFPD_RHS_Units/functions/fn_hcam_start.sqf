[] spawn {
	#define HCAM_UI_DISP (uiNamespace getVariable "hcam_ui_disp")
	#define HCAM_CTRL_PIP (uiNamespace getVariable "hcam_ctrl_pip")
	#define HCAM_CTRL_TITLE (uiNamespace getVariable "hcam_ctrl_title")
	#define HCAM_CTRL_BACK (uiNamespace getVariable "hcam_ctrl_back")
	#define HCAM_CTRL_FRONT (uiNamespace getVariable "hcam_ctrl_front")
	
	if (player getVariable ["hcam_active", false] || !hasInterface) exitWith {};
	
	_hcam_target = player getVariable ["dog", objNull];
	if (isNull _hcam_target) exitWith {};
	player setVariable ["hcam_target", _hcam_target];
	player setVariable ["hcam_active", true];
	player setVariable ["hcam_stop", false];
	
	_neck = "Sign_Sphere10cm_F" createVehicleLocal position player;
	_target = "Sign_Sphere10cm_F" createVehicleLocal position player;
	hideObject _neck; 
	hideObject _target; 
	_neck attachTo [_hcam_target,[0,0,0],"head"];
	_target attachTo [_neck,[0,4.8,0.3]];
	
	_hcam_cam = "camera" camCreate getPos _hcam_target;
	waitUntil {!(isNull _hcam_cam)};
	808 cutRsc ["RscHcamDialog", "PLAIN"];
	HCAM_CTRL_PIP ctrlsettext "#(argb,256,256,1)r2t(rendertarget0,1.0)";
	_hcam_cam attachTo [_neck,[0,-0.2,0.3]];
	_hcam_cam camSetFov 0.6;
	_hcam_cam camSetTarget _target;
	_hcam_cam camCommit 0;
	_hcam_cam cameraEffect ["INTERNAL", "BACK","rendertarget0"];
	HCAM_CTRL_PIP ctrlsettext "#(argb,256,256,1)r2t(rendertarget0,1.0)";
	
	while {!(isNull _hcam_cam)} do {
		if(player getVariable ["hcam_nvg", false]) then {
			"rendertarget0" setPiPEffect [1];
		} else {
			"rendertarget0" setPiPEffect [3, 1, 0.8, 1, 0.1, [0.3, 0.3, 0.3, -0.1], [1.0, 0.0, 1.0, 1.0], [0, 0, 0, 0]];
		};
		
		_own = _hcam_target getVariable ["own", objNull]; 
		if (player getVariable ["hcam_stop", false] || (_own != (vehicle _own))) then {
			_hcam_cam cameraEffect ["TERMINATE", "BACK"];
			camDestroy _hcam_cam;
			_hcam_cam = objNull;
		} else {
			sleep 0.1;
		};
	};
	
	808 cutFadeOut 0;
	deleteVehicle _neck;
	deleteVehicle _target;
	player setVariable ["hcam_active", false];
};