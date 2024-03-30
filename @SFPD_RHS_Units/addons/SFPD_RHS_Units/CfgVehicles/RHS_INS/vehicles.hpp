	// Taliban
	class SFPD_RHS_TALIBAN_DESERT_UAZ_MG: rhsgref_ins_g_uaz_dshkm_chdkz {
		SFPD_VEHICLES_CFG(SFPD_RHS_TALIBAN_DESERT_Faction,SFPD_RHS_TALIBAN_DESERT_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_TALIBAN_DESERT_UAZ: rhsgref_ins_g_uaz {
		SFPD_VEHICLES_CFG(SFPD_RHS_TALIBAN_DESERT_Faction,SFPD_RHS_TALIBAN_DESERT_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_TALIBAN_DESERT_UAZ_open: rhsgref_ins_g_uaz_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_TALIBAN_DESERT_Faction,SFPD_RHS_TALIBAN_DESERT_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_TALIBAN_DESERT_UAZ_AT: rhsgref_ins_g_uaz_spg9 {
		SFPD_VEHICLES_CFG(SFPD_RHS_TALIBAN_DESERT_Faction,SFPD_RHS_TALIBAN_DESERT_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_TALIBAN_DESERT_Ural: rhsgref_ins_g_ural_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_TALIBAN_DESERT_Faction,SFPD_RHS_TALIBAN_DESERT_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	// ISIS
	class SFPD_RHS_INDEP_UAZ_MG: rhsgref_ins_g_uaz_dshkm_chdkz {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_UAZ: rhsgref_ins_g_uaz {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_UAZ_open: rhsgref_ins_g_uaz_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_UAZ_AT: rhsgref_ins_g_uaz_spg9 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_Ural: rhsgref_ins_g_ural_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_gaz66_ammo: rhsgref_ins_g_gaz66_ammo {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_kraz255b1_fuel: rhsgref_ins_g_kraz255b1_fuel {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_zil: rhsgref_ins_g_zil131 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_zil_open: rhsgref_ins_g_zil131_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_zil_flatbed: rhsgref_ins_g_zil131_flatbed {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BRDM2_TEMP: rhsgref_BRDM2_ins_g {
		class HitPoints;
	};
	class SFPD_RHS_INDEP_BRDM2: SFPD_RHS_INDEP_BRDM2_TEMP {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
		BRDM_HIT_POINTS
	};
	
	class SFPD_RHS_INDEP_BRDM2_ATGM_TEMP: rhsgref_BRDM2_ATGM_ins_g {
		class HitPoints;
	};
	class SFPD_RHS_INDEP_BRDM2_ATGM: SFPD_RHS_INDEP_BRDM2_ATGM_TEMP {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
		BRDM_HIT_POINTS
	};
	
	class SFPD_RHS_INDEP_BRDM2_HQ_TEMP: rhsgref_BRDM2_HQ_ins_g {
		class HitPoints;
	};
	class SFPD_RHS_INDEP_BRDM2_HQ: SFPD_RHS_INDEP_BRDM2_HQ_TEMP {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
		BRDM_HIT_POINTS
	};
	
	class SFPD_RHS_INDEP_BRDM2UM_TEMP: rhsgref_BRDM2UM_ins_g {
		class HitPoints;
	};
	class SFPD_RHS_INDEP_BRDM2UM: SFPD_RHS_INDEP_BRDM2UM_TEMP {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
		BRDM_HIT_POINTS
	};
	
	class SFPD_RHS_INDEP_Ural_Zu23: rhsgref_ins_g_ural_Zu23 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BTR60: rhsgref_ins_g_btr60 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BMD1: rhsgref_ins_g_bmd1 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_BMD2: rhsgref_ins_g_bmd2 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_ZSU23: rhsgref_ins_g_zsu234 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_T55: LOP_AFR_T55 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_T72: rhsgref_ins_g_t72ba {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_Static_D30: rhsgref_ins_g_d30 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_Static_DSHKM: rhsgref_ins_g_DSHKM {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_Static_DSHKM_mini: rhsgref_ins_g_DSHKM_Mini_TriPod {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_Static_ZU23: rhsgref_ins_g_ZU23 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_Static_SPG9: rhsgref_ins_g_SPG9 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_Static_AGS30: rhsgref_ins_g_AGS30_TriPod {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_M1025_Black: LOP_ISTS_M1025_D {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Black_ISIS)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_M1025_M2_Black: LOP_ISTS_M1025_W_M2 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_Faction,SFPD_RHS_INDEP_Black_ISIS)
		SFPD_RHS_INDEP_Transport
	};
	
	//Woodland
	class SFPD_RHS_INDEP_WOODLAND_UAZ_MG: rhsgref_ins_g_uaz_dshkm_chdkz {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_UAZ: rhsgref_ins_g_uaz {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_UAZ_open: rhsgref_ins_g_uaz_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_UAZ_AT: rhsgref_ins_g_uaz_spg9 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Ural: rhsgref_ins_g_ural_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_gaz66_amm: rhsgref_ins_g_gaz66_ammo {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_kraz255b1_fuel: rhsgref_ins_g_kraz255b1_fuel {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_zil: rhsgref_ins_g_zil131 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_zil_open: rhsgref_ins_g_zil131_open {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_zil_flatbed: rhsgref_ins_g_zil131_flatbed {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BRDM2: rhsgref_BRDM2_ins_g {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BRDM2_ATGM: rhsgref_BRDM2_ATGM_ins_g {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BRDM2_HQ: rhsgref_BRDM2_HQ_ins_g {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BRDM2UM: rhsgref_BRDM2UM_ins_g {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Ural_Zu23: rhsgref_ins_g_ural_Zu23 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BTR60: rhsgref_ins_g_btr60 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BMD1: rhsgref_ins_g_bmd1 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_BMD2: rhsgref_ins_g_bmd2 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_ZSU23: rhsgref_ins_g_zsu234 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_T55: LOP_AFR_T55 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_T72: rhsgref_ins_g_t72ba {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_RHS_INDEP_Transport
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_D30: rhsgref_ins_g_d30 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_DSHKM: rhsgref_ins_g_DSHKM {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_DSHKM_mini: rhsgref_ins_g_DSHKM_Mini_TriPod {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_ZU23: rhsgref_ins_g_ZU23 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_SPG9: rhsgref_ins_g_SPG9 {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};
	
	class SFPD_RHS_INDEP_WOODLAND_Static_AGS30: rhsgref_ins_g_AGS30_TriPod {
		SFPD_VEHICLES_CFG(SFPD_RHS_INDEP_WOODLAND_Faction,SFPD_RHS_INDEP_WOODLAND_Rifleman)
		SFPD_VEHICLES_EMPTY_CARGO
	};