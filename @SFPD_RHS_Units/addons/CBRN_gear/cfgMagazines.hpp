class cfgMagazines
{	
	class IEDLandSmall_Remote_Mag;
	class CBRN_IEDLandSmall_Type1_Remote_Mag: IEDLandSmall_Remote_Mag
	{
		displayName = "Asphyxiant IED (Dug-In)";
		ammo = "CBRN_IEDLandSmall_Type1_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers {
            SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
            class Command {
                FuseTime = 0.5;
                ammo = "CBRN_IEDLandSmall_Type1_Command_Ammo";
            };
            class DeadmanSwitch: Command {};
            class Cellphone: Command {};
            class PressurePlate {
                displayName = "Pressure Plate";
                digDistance = 0;
                ammo = "CBRN_IEDLandSmall_Type1_Range_Ammo";
                pitch = 0;
            };
        };
	};
	class CBRN_IEDLandSmall_Type2_Remote_Mag: IEDLandSmall_Remote_Mag
	{
		displayName = "Nerve Agent IED (Dug-In)";
		ammo = "CBRN_IEDLandSmall_Type2_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers {
            SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
            class Command {
                FuseTime = 0.5;
                ammo = "CBRN_IEDLandSmall_Type2_Command_Ammo";
            };
            class DeadmanSwitch: Command {};
            class Cellphone: Command {};
            class PressurePlate {
                displayName = "Pressure Plate";
                digDistance = 0;
                ammo = "CBRN_IEDLandSmall_Type2_Range_Ammo";
                pitch = 0;
            };
        };
	};
	
	class IEDUrbanSmall_Remote_Mag;
	class CBRN_IEDUrbanSmall_Type1_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		displayName = "Asphyxiant IED (Urban)";
		ammo = "CBRN_IEDUrbanSmall_Type1_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		class ACE_Triggers {
            SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
            class Command {
                FuseTime = 0.5;
                ammo = "CBRN_IEDUrbanSmall_Type1_Command_Ammo";
            };
            class DeadmanSwitch: Command {};
            class Cellphone: Command {};
            class PressurePlate {
                displayName = "Pressure Plate";
                digDistance = 0;
                ammo = "CBRN_IEDUrbanSmall_Type1_Range_Ammo";
                pitch = 0;
            };
        };
	};
	class CBRN_IEDUrbanSmall_Type2_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		displayName = "Nerve Agent IED (Urban)";
		ammo = "CBRN_IEDUrbanSmall_Type2_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		class ACE_Triggers {
            SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
            class Command {
                FuseTime = 0.5;
                ammo = "CBRN_IEDUrbanSmall_Type2_Command_Ammo";
            };
            class DeadmanSwitch: Command {};
            class Cellphone: Command {};
            class PressurePlate {
                displayName = "Pressure Plate";
                digDistance = 0;
                ammo = "CBRN_IEDUrbanSmall_Type2_Range_Ammo";
                pitch = 0;
            };
        };
	};
    class SmokeShell;
    class CBRN_CS: SmokeShell {
        displayname = "CS gas grenade";
        descriptionShort = "CS gas hand grenade";
        displayNameShort = "CS grenade";
        ammo = "CBRN_G_CS";
        mass = 4;
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m7a3_cs\m7a3_cs";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m7a3_cs_ca.paa";
    };
    class UGL_FlareCIR_F;//1Rnd_Smoke_Grenade_shell//UGL_FlareCIR_F
    class CBRN_CS_GL: UGL_FlareCIR_F {
        displayname = "CS gas GL grenade";
        descriptionShort = "CS gas GL grenade";
        displayNameShort = "CS GL grenade";
        ammo = "CBRN_G_CS_GL";//
        mass = 4;
		//model = "\rhsusf\addons\rhsusf_weapons\grenades\m7a3_cs\m7a3_cs";
		//picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m7a3_cs_ca.paa";
    };
};