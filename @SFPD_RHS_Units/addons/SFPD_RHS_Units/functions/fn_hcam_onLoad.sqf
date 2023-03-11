_disp = _this select 0;
uiNamespace setVariable ["hcam_ui_disp", _disp];
uiNamespace setVariable ["hcam_ctrl_pip", _disp displayCtrl 0];
uiNamespace setVariable ["hcam_ctrl_title", _disp displayCtrl 1];
uiNamespace setVariable ["hcam_ctrl_back", _disp displayCtrl 2];
uiNamespace setVariable ["hcam_ctrl_front", _disp displayCtrl 3];
(_disp displayCtrl 0) ctrlSetText "#(argb,256,256,1)r2t(rendertarget0,1.0)";