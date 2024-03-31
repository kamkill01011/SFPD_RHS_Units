class VehicleMagazine;
class SmokeLauncherMag: VehicleMagazine {
	count=10;
};

class rhsusf_M130_CMFlare_Chaff_Magazine;
class rhsusf_M130_CMFlare_Chaff_Magazine_x4;
class rhs_ASO2_CMFlare_Chaff_Magazine;
class rhsusf_M130_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine {
	count=240;
};
class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4 {
	count=240;
};
class rhs_ASO2_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine {
	count=240;
};
class rhs_ASO2_CMFlare_Chaff_Magazine_x6: rhs_ASO2_CMFlare_Chaff_Magazine {
	count=240;
};
class rhs_UV26_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine_x4 {
	count=240;
};

class rhs_mag_3bm46_10;
class rhs_mag_3bk31_8;
class rhs_mag_3of26_6;
class rhs_mag_3bm46_8: rhs_mag_3bm46_10 {
	count=25;
};
class rhs_mag_3bk31_3: rhs_mag_3bk31_8 {
	count=5;
};
class rhs_mag_3of26_7: rhs_mag_3of26_6 {
	count=8;
};

class rhsusf_200rnd_556x45_mixed_box;
class SFPD_RHS_rhsusf_200rnd_556x45_tracer_box: rhsusf_200rnd_556x45_mixed_box {
	displayname = "200rnd M249 Box M855A1 (Tracer)";
	displaynameshort = "M855A1 (Tracer)";
	tracersevery = 1;
};

class CA_LauncherMagazine;
class rhs_fgm148_magazine_AT: CA_LauncherMagazine {
	mass = 110;
};

class HandGrenade;
class rhs_mag_m7a3_cs: HandGrenade {
	scope = 1;
};
class rhs_mag_mk84: HandGrenade {
	scope = 1;
};

class ACE_CTS9;
class ACE_CTS2: ACE_CTS9 {
    displayname = "CTS 7290 2-bang Flash Grenade";
    descriptionShort = "Also known as flashbang. Causes immediate flash blindness, deafness, tinnitus, and inner ear disturbance.";
    displayNameShort = "CTS 7290-2";
    ammo = "ACE_G_CTS2";
};
class ACE_CTS3: ACE_CTS9 {
    displayname = "CTS 7290 3-bang Flash Grenade";
    descriptionShort = "Also known as flashbang. Causes immediate flash blindness, deafness, tinnitus, and inner ear disturbance.";
    displayNameShort = "CTS 7290-3";
    ammo = "ACE_G_CTS3";
};

class 300Rnd_20mm_shells;
class PylonWeapon_300Rnd_20mm_shells: 300Rnd_20mm_shells {
	hardpoints[] += {"B_BOMB_PYLON", "RHS_HP_HELLFIRE_RACK"};
};
class rhs_mag_gau19_air_base;
class rhsusf_mag_gau19_melb_left: rhs_mag_gau19_air_base {
	hardpoints[] += {"RHS_HP_HELLFIRE_RACK"};
};
class rhs_mag_m134_pylon_base;
class rhs_mag_m134_pylon_3000: rhs_mag_m134_pylon_base {
	hardpoints[] += {"RHS_HP_HELLFIRE_RACK"};
};

class 450Rnd_127x108_Ball;
class rhs_mag_127x108mm_50: VehicleMagazine {
	count = 100;
};
class 50Rnd_127x108_Ball: 450Rnd_127x108_Ball {
	count = 100;
};
class ace_csw_50Rnd_127x108_mag: 50Rnd_127x108_Ball {
	mass = 55;
};
class 100Rnd_127x99_mag;
class ace_csw_100Rnd_127x99_mag: 100Rnd_127x99_mag {
	mass = 55;
};
class 100Rnd_127x99_mag_Tracer_Green;
class ace_csw_100Rnd_127x99_mag_green: 100Rnd_127x99_mag_Tracer_Green {
	mass = 55;
};
class 100Rnd_127x99_mag_Tracer_Red;
class ace_csw_100Rnd_127x99_mag_red: 100Rnd_127x99_mag_Tracer_Red {
	mass = 55;
};
class 100Rnd_127x99_mag_Tracer_Yellow;
class ace_csw_100Rnd_127x99_mag_yellow: 100Rnd_127x99_mag_Tracer_Yellow {
	mass = 55;
};
class RHS_48Rnd_40mm_MK19_M430A1;
class ace_compat_rhs_usf3_48Rnd_40mm_MK19_M430A1: RHS_48Rnd_40mm_MK19_M430A1 {
	mass = 110;
};
class RHS_mag_VOG30_30;
class ace_compat_rhs_afrf3_mag_VOG30_30: RHS_mag_VOG30_30 {
	mass = 110;
};
class rhs_mag_TOW2a;
class ace_compat_rhs_usf3_mag_TOW2A: rhs_mag_TOW2a {
	mass = 110;
};
class rhs_mag_9M131M;
class ace_compat_rhs_afrf3_mag_9M131M: rhs_mag_9M131M {
	mass = 110;
};
class rhs_mag_9m133;
class ace_compat_rhs_afrf3_mag_9m133: rhs_mag_9m133 {
	mass = 110;
};
class rhs_mag_9m133f;
class ace_compat_rhs_afrf3_mag_9m133f: rhs_mag_9m133f {
	mass = 110;
};


class RPG7_F;
class SFPD_RPG7_F: RPG7_F {
	displayname = "OK BOOMER";
	count = 50;
};
