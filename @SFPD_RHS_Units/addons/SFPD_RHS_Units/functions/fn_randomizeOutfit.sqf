
params ["_u", "_f"];
//0: rebel, 1: taliban, 2: woodland, 3: winter

_hLists = [
	["h_bandanna_cbr", "h_bandanna_khk", "h_bandanna_sgg", "h_bandanna_sand", "h_bandanna_surfer", "h_bandanna_camo", "h_cap_surfer", "h_hat_camo", "h_hat_safari_olive_f", "h_shemag_olive", "h_shemagopen_tan", "h_shemagopen_khk"],
	["LOP_H_Turban_mask", "LOP_H_Turban", "LOP_H_Shemag_GRE", "LOP_H_Worker_cap"],
	["LOP_H_Shemag_GRE", "LOP_H_Shemag_OLV", "LOP_H_Shemag_TAN", "LOP_H_Shemag_BLK"],
	["rhssaf_booniehat_md2camo", "rhsgref_patrolcap_specter", "rhs_beanie_green"],
	["fsg_booniehat_snw", "rhs_beanie", "rhsgref_fieldcap_ttsko_urban"]
];
_uLists = [
	["U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_leader", "U_IG_Guerrilla_6_1", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F"],
	["LOP_U_AM_Fatigue_01", "LOP_U_AM_Fatigue_01_2", "LOP_U_AM_Fatigue_01_3", "LOP_U_AM_Fatigue_01_4", "LOP_U_AM_Fatigue_01_5", "LOP_U_AM_Fatigue_01_6", "LOP_U_AM_Fatigue_02", "LOP_U_AM_Fatigue_02_2", "LOP_U_AM_Fatigue_02_3", "LOP_U_AM_Fatigue_02_4", "LOP_U_AM_Fatigue_02_5", "LOP_U_AM_Fatigue_02_6", "LOP_U_AM_Fatigue_03", "LOP_U_AM_Fatigue_03_2", "LOP_U_AM_Fatigue_03_3", "LOP_U_AM_Fatigue_03_4", "LOP_U_AM_Fatigue_03_5", "LOP_U_AM_Fatigue_03_6", "LOP_U_AM_Fatigue_04", "LOP_U_AM_Fatigue_04_2", "LOP_U_AM_Fatigue_04_3", "LOP_U_AM_Fatigue_04_4", "LOP_U_AM_Fatigue_04_5", "LOP_U_AM_Fatigue_04_6"],
	["LOP_U_ISTS_Fatigue_12", "LOP_U_ISTS_Fatigue_10", "LOP_U_ISTS_Fatigue_14", "LOP_U_ISTS_Fatigue_05"],
	["LOP_U_BH_Fatigue_GUE_M81_OLV", "LOP_U_UA_Fatigue_04", "LOP_U_IRA_Fatigue_DPM_GNSW", "LOP_U_BH_Fatigue_GUE_FWDL"],
	["rhsgref_uniform_reed", "rhsgref_uniform_ttsko_urban", "rhsgref_uniform_para_ttsko_urban", "rhsgref_uniform_para_ttsko_oxblood", "rhsgref_uniform_reed", "rhsgref_uniform_ttsko_urban"]
];
_vLists = [
	["V_BandollierB_rgr", "V_Chestrig_khk", "V_BandollierB_oli", "V_Chestrig_rgr", "V_Chestrig_blk", "V_Chestrig_oli", "V_BandollierB_cbr", "V_BandollierB_khk", "V_BandollierB_ghex_F", "V_BandollierB_blk"],
	[],
	["LOP_V_6Sh92_WDL", "LOP_V_6Sh92_CDF", "LOP_V_Chestrig_Kamysh", "LOP_V_6Sh92_OLV"],
	["LOP_V_6Sh92_CDF", "LOP_V_Chestrig_Kamysh", "LOP_V_6Sh92_WDL", "LOP_V_6Sh92_OLV"],
	["V_TacChestrig_grn_F"]
];

_u addHeadgear (selectRandom (_hLists # _f));

_ui = uniformItems _u;
_u forceAddUniform (selectRandom (_uLists # _f));
{_u addItemToUniform _x} forEach _ui;

_vi = vestItems _u;
_u addVest (selectRandom (_vLists # _f));
{_u addItemToVest _x} forEach _vi;
