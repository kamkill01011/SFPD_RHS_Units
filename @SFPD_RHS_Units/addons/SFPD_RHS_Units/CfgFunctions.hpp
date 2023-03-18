class KAM {
	class Kam_NBC {
		class Shower {
			file = "\SFPD_RHS_Units\handleOn.sqf";
			postInit = 1;
		};
		class ChemicalDetector {
			file = "\SFPD_RHS_Units\ChemicalDetector.sqf";
			postInit = 1;
		};
		class ContactDevice {
			file = "\SFPD_RHS_Units\ContactDevice.sqf";
			postInit = 1;
		};
		class Fatigue {
			file = "\SFPD_RHS_Units\NBC_Fatigue.sqf";
			postInit = 1;
		};
		class VivActions {
			file = "\SFPD_RHS_Units\vivActions.sqf";
			postInit = 1;
		};
		class CheckFuel {
			file = "\SFPD_RHS_Units\checkFuel.sqf";
			postInit = 1;
		};
		class VanActions {
			file = "\SFPD_RHS_Units\vanActions.sqf";
			postInit = 1;
		};
	};
	class K9 {
		file = "SFPD_RHS_Units\functions";
		class K9 {};
		class K9_drag {};
		class hcam_start {};
		class hcam_onLoad {};
		class showMedicalStatus {};
		class addDevice {};
		class addJammer {};
		class autoloaded {};
		class pontoonToEnd {};
		class pontoonToFloating {};
		class pontoonAttach {};
		class pontoonDetach {};
		class putBlindfoldOn {};
		class removeBlindfold {};
		class placeTent {};
		class fuelConsumption {};
		class handleVanGetOut {};
	};
};