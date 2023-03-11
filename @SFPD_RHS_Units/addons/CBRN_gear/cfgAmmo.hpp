class cfgAmmo
{
	class IEDLandSmall_Remote_Ammo;
	class CBRN_IEDLandSmall_Type1_Remote_Ammo: IEDLandSmall_Remote_Ammo
	{
		hit = 0;
		indirectHit = 0;
		
		CBRN_isPlacedExplosive = 1;
		CBRN_chemicalType = 1;
		CBRN_heightOfBurst = 3;
		CBRN_sprayWidth = 10;
		CBRN_lifetime = 60;
	};
	class CBRN_IEDLandSmall_Type1_Command_Ammo: CBRN_IEDLandSmall_Type1_Remote_Ammo{mineTrigger = "RemoteTrigger";};
	class CBRN_IEDLandSmall_Type1_Range_Ammo: CBRN_IEDLandSmall_Type1_Remote_Ammo{mineTrigger = "RangeTriggerShort";};
	
	class CBRN_IEDLandSmall_Type2_Remote_Ammo: CBRN_IEDLandSmall_Type1_Remote_Ammo
	{
		CBRN_chemicalType = 2;
	};
	class CBRN_IEDLandSmall_Type2_Command_Ammo: CBRN_IEDLandSmall_Type2_Remote_Ammo{mineTrigger = "RemoteTrigger";};
	class CBRN_IEDLandSmall_Type2_Range_Ammo: CBRN_IEDLandSmall_Type2_Remote_Ammo{mineTrigger = "RangeTriggerShort";};
	
	
	class IEDUrbanSmall_Remote_Ammo;
	class CBRN_IEDUrbanSmall_Type1_Remote_Ammo: IEDUrbanSmall_Remote_Ammo
	{
		hit = 0;
		indirectHit = 0;
		
		CBRN_isPlacedExplosive = 1;
		CBRN_chemicalType = 1;
		CBRN_heightOfBurst = 3;
		CBRN_sprayWidth = 10;
		CBRN_lifetime = 60;
	};
	class CBRN_IEDUrbanSmall_Type1_Command_Ammo: CBRN_IEDUrbanSmall_Type1_Remote_Ammo{mineTrigger = "RemoteTrigger";};
	class CBRN_IEDUrbanSmall_Type1_Range_Ammo: CBRN_IEDUrbanSmall_Type1_Remote_Ammo{mineTrigger = "RangeTriggerShort";};
	
	class CBRN_IEDUrbanSmall_Type2_Remote_Ammo:CBRN_IEDUrbanSmall_Type1_Remote_Ammo
	{
		CBRN_chemicalType = 2;
	};
	class CBRN_IEDUrbanSmall_Type2_Command_Ammo: CBRN_IEDUrbanSmall_Type2_Remote_Ammo{mineTrigger = "RemoteTrigger";};
	class CBRN_IEDUrbanSmall_Type2_Range_Ammo: CBRN_IEDUrbanSmall_Type2_Remote_Ammo{mineTrigger = "RangeTriggerShort";};
	
	class ClaymoreDirectionalMine_Remote_Ammo_Scripted;
	class CBRN_ClaymoreDirectionalMine_Remote_Ammo_Scripted_Fake: ClaymoreDirectionalMine_Remote_Ammo_Scripted
	{
		hit = 0;
		indirectHit = 0;
	};
    class SmokeShell;
    class CBRN_G_CS: SmokeShell {
		CBRN_isGrenade = 1;
		CBRN_chemicalType = 0;
		CBRN_heightOfBurst = 8;
		CBRN_sprayWidth = 8;
		CBRN_lifetime = 5;
		
        hit = 5;
        indirectHit = 4;
        indirectHitRange = 1.1;
        dangerRadiusHit = 50;
        suppressionRadiusHit = 18;
        deflecting = 20;
        timeToLive = 90;
        aiAmmoUsageFlags = "64"; // infantry
        effectsSmoke = "CBRN_CSEffect";
        whistleDist = 0;    // no BIS explosion effects
        whistleOnFire = 0;  // no BIS firing effects
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m7a3_cs\m7a3_cs";
    };
    class G_40mm_Smoke;//G_40mm_Smoke//F_40mm_Cir
    class CBRN_G_CS_GL: G_40mm_Smoke {
		CBRN_isGL = 1;
		CBRN_isProjectile = 1;
		CBRN_chemicalType = 0;
		CBRN_heightOfBurst = 8;
		CBRN_sprayWidth = 8;
		CBRN_lifetime = 5;
		
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 1.1;
        dangerRadiusHit = 50;
        suppressionRadiusHit = 18;
        deflecting = 20;
        timeToLive = 90;
        aiAmmoUsageFlags = "64"; // infantry
        effectsSmoke = "CBRN_CSEffect";
        whistleDist = 0;    // no BIS explosion effects
        whistleOnFire = 0;  // no BIS firing effects
		//model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m7a3_cs\m7a3_cs";
    };
};