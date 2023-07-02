class SmokeShell;
class G_40mm_Smoke: SmokeShell {
    simulation = "shotSmoke";
    deflectionSlowDown = 0.1;
};
class rhs_g_vog25;
class rhs_g_vg40md_white: rhs_g_vog25 {
    simulation = "shotSmoke";
    deflectionSlowDown = 0.1;
};

class ShotDeployBase;
class Smoke_82mm_AMOS_White: ShotDeployBase {
    submunitionConeAngle = 5;
    submunitionConeType[] = {"poissondisc",5};
	triggerDistance = 100;
};
class SubmunitionBase;
class Smoke_120mm_AMOS_White: SubmunitionBase {
    submunitionConeAngle = 10;
    submunitionConeType[] = {"poissondisc",9};
};
class rhs_ammo_d462: Smoke_120mm_AMOS_White {
    submunitionConeAngle = 10;
    submunitionConeType[] = {"poissondisc",9};
	
	craterEffects = "ImpactEffectsMedium";
	deleteParentWhenTriggered = 1;
	explosionEffects = "ExplosionEffects";
	explosive = 1;
	hit = 300;
	indirectHit = 0;
	indirectHitRange = 8;
	soundHit[] = {"",316.228,1};
	SoundSetExplosion[] = {};
	submunitionAmmo = "SmokeShellArty";
	submunitionAutoleveling = 0;
	submunitionConeAngleHorizontal = 10;
	submunitionInitialOffset[] = {0,0,0};
	submunitionInitSpeed = 0;
	submunitionParentSpeedCoef = 1;
	suppressionRadiusHit = -1;
	triggerDistance = 100;
	triggerOnImpact = 0;
};
class rhs_ammo_53WD546U: Smoke_120mm_AMOS_White {
    submunitionConeAngle = 10;
    submunitionConeType[] = {"poissondisc",9};
	
	craterEffects = "ImpactEffectsMedium";
	deleteParentWhenTriggered = 1;
	explosionEffects = "ExplosionEffects";
	explosive = 1;
	hit = 300;
	indirectHit = 0;
	indirectHitRange = 8;
	soundHit[] = {"",316.228,1};
	SoundSetExplosion[] = {};
	submunitionAmmo = "SmokeShellArty";
	submunitionAutoleveling = 0;
	submunitionConeAngleHorizontal = 10;
	submunitionInitialOffset[] = {0,0,0};
	submunitionInitSpeed = 0;
	submunitionParentSpeedCoef = 1;
	suppressionRadiusHit = -1;
	triggerDistance = 100;
	triggerOnImpact = 0;
};

class SmokeShellArty: SmokeShell {
    effectsSmoke = "SmokeShellWhiteEffect";
};

/*class M_Mo_82mm_AT;
class M_Mo_82mm_AT_LG: M_Mo_82mm_AT {
    laserLock = 1;
	maneuvrability = 15;
	missileKeepLockedCone = 60;
	missileLockCone = 30;
	missileLockMaxDistance = 2000;
	missileLockMinDistance = 2;
	lockSeekRadius = 1000000;
}
class M_Mo_120mm_AT;
class M_Mo_120mm_AT_LG: M_Mo_120mm_AT {
    laserLock = 1;
	maneuvrability = 15;
	missileKeepLockedCone = 60;
	missileLockCone = 30;
	missileLockMaxDistance = 2000;
	missileLockMinDistance = 2;
	lockSeekRadius = 1000000;
}
class Sh_82mm_AMOS_LG;
class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG {
    submunitionAmmo = "Bo_GBU12_LGB";
	submunitionParentSpeedCoef = 0.01;
	triggerDistance = 700;
}*/

class ACE_G_CTS9;
class ACE_G_CTS2: ACE_G_CTS9 {
    ace_grenades_flashbangBangs = 2;
    ace_grenades_flashbangInterval = 0.7;
    ace_grenades_flashbangIntervalMaxDeviation = 0.1;
};
class ACE_G_CTS3: ACE_G_CTS2 {
    ace_grenades_flashbangBangs = 3;
};

class rhs_ammo_762x51_M80_Ball;
class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball {
    ACE_caliber = 3;
};
