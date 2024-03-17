		class SFPD_RHS_TALIBAN_DESERT_Faction {
			name = "[SFPD RHS] Taliban";
			class Infantry {
				name = "Infantry";
				SFPD_GROUP_FT_CFG(2,SFPD_RHS_TALIBAN_DESERT_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_TALIBAN_DESERT_Rifleman,SFPD_RHS_TALIBAN_DESERT_Rifleman,SFPD_RHS_TALIBAN_DESERT_AT,SFPD_RHS_TALIBAN_DESERT_MG)
				SFPD_GROUP_SQUAD_CFG(2,SFPD_RHS_TALIBAN_DESERT_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_TALIBAN_DESERT_Rifleman,SFPD_RHS_TALIBAN_DESERT_Rifleman,SFPD_RHS_TALIBAN_DESERT_Rifleman,SFPD_RHS_TALIBAN_DESERT_AT,SFPD_RHS_TALIBAN_DESERT_MG,SFPD_RHS_TALIBAN_DESERT_Rifleman,SFPD_RHS_TALIBAN_DESERT_Rifleman,SFPD_RHS_TALIBAN_DESERT_Marksman)
				
				class SFPD_RHS_TALIBAN_DESERT_GROUP_RT {
					name = "Rifle Team";
					side = 2;
					faction = "SFPD_RHS_TALIBAN_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					SFPD_GROUP_UNIT0_CFG(2,SFPD_RHS_TALIBAN_DESERT_Rifleman,SERGEANT)
					SFPD_GROUP_UNIT1_CFG(2,SFPD_RHS_TALIBAN_DESERT_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT2_CFG(2,SFPD_RHS_TALIBAN_DESERT_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT3_CFG(2,SFPD_RHS_TALIBAN_DESERT_Rifleman,PRIVATE)
				};
			};
		};
		
		class SFPD_RHS_INDEP_DESERT_Faction {
			name = "[SFPD RHS] ISIS (Desert)";
			class Infantry {
				name = "Infantry";
				SFPD_GROUP_FT_CFG(2,SFPD_RHS_INDEP_DESERT_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_INDEP_Rifleman,SFPD_RHS_INDEP_Rifleman,SFPD_RHS_INDEP_AT,SFPD_RHS_INDEP_MG)
				SFPD_GROUP_SQUAD_CFG(2,SFPD_RHS_INDEP_DESERT_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_INDEP_Rifleman,SFPD_RHS_INDEP_Rifleman,SFPD_RHS_INDEP_Rifleman,SFPD_RHS_INDEP_AT,SFPD_RHS_INDEP_MG,SFPD_RHS_INDEP_Rifleman,SFPD_RHS_INDEP_Rifleman,SFPD_RHS_INDEP_Marksman)
				
				class SFPD_RHS_INDEP_DESERT_GROUP_RT {
					name = "Rifle Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					SFPD_GROUP_UNIT0_CFG(2,SFPD_RHS_INDEP_Rifleman,SERGEANT)
					SFPD_GROUP_UNIT1_CFG(2,SFPD_RHS_INDEP_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT2_CFG(2,SFPD_RHS_INDEP_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT3_CFG(2,SFPD_RHS_INDEP_Rifleman,PRIVATE)
				};
				
				class SFPD_RHS_INDEP_DESERT_GROUP_SFT {
					name = "Black ISIS Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					SFPD_GROUP_UNIT0_CFG(2,SFPD_RHS_INDEP_Black_ISIS,LIEUTENANT)
					SFPD_GROUP_UNIT1_CFG(2,SFPD_RHS_INDEP_Black_ISIS,LIEUTENANT)
					SFPD_GROUP_UNIT2_CFG(2,SFPD_RHS_INDEP_Black_ISIS,LIEUTENANT)
					SFPD_GROUP_UNIT3_CFG(2,SFPD_RHS_INDEP_Black_ISIS,LIEUTENANT)
				};
			};
		};

		class SFPD_RHS_INDEP_WOODLAND_Faction {
			name = "[SFPD RHS] Insurgents (Woodland)";
			class Infantry {
				name = "Infantry";
				SFPD_GROUP_FT_CFG(2,SFPD_RHS_INDEP_WOODLAND_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_INDEP_WOODLAND_Rifleman,SFPD_RHS_INDEP_WOODLAND_Rifleman,SFPD_RHS_INDEP_WOODLAND_AT,SFPD_RHS_INDEP_WOODLAND_MG)
				SFPD_GROUP_SQUAD_CFG(2,SFPD_RHS_INDEP_WOODLAND_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_INDEP_WOODLAND_Rifleman,SFPD_RHS_INDEP_WOODLAND_Rifleman,SFPD_RHS_INDEP_WOODLAND_Rifleman,SFPD_RHS_INDEP_WOODLAND_AT,SFPD_RHS_INDEP_WOODLAND_MG,SFPD_RHS_INDEP_WOODLAND_Rifleman,SFPD_RHS_INDEP_WOODLAND_Rifleman,SFPD_RHS_INDEP_WOODLAND_Marksman)
				
				class SFPD_RHS_INDEP_WOODLAND_GROUP_RT {
					name = "Rifle Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					SFPD_GROUP_UNIT0_CFG(2,SFPD_RHS_INDEP_WOODLAND_Rifleman,SERGEANT)
					SFPD_GROUP_UNIT1_CFG(2,SFPD_RHS_INDEP_WOODLAND_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT2_CFG(2,SFPD_RHS_INDEP_WOODLAND_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT3_CFG(2,SFPD_RHS_INDEP_WOODLAND_Rifleman,PRIVATE)
				};
			};
		};

		class SFPD_RHS_INDEP_WINTER_Faction {
			name = "[SFPD RHS] Insurgents (Winter)";
			class Infantry {
				name = "Infantry";
				SFPD_GROUP_FT_CFG(2,SFPD_RHS_INDEP_WINTER_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_INDEP_WINTER_Rifleman,SFPD_RHS_INDEP_WINTER_Rifleman,SFPD_RHS_INDEP_WINTER_AT,SFPD_RHS_INDEP_WINTER_MG)
				SFPD_GROUP_SQUAD_CFG(2,SFPD_RHS_INDEP_WINTER_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_RHS_INDEP_WINTER_Rifleman,SFPD_RHS_INDEP_WINTER_Rifleman,SFPD_RHS_INDEP_WINTER_Rifleman,SFPD_RHS_INDEP_WINTER_AT,SFPD_RHS_INDEP_WINTER_MG,SFPD_RHS_INDEP_WINTER_Rifleman,SFPD_RHS_INDEP_WINTER_Rifleman,SFPD_RHS_INDEP_WINTER_Marksman)
				
				class SFPD_RHS_INDEP_WINTER_GROUP_RT {
					name = "Rifle Team";
					side = 2;
					faction = "SFPD_RHS_INDEP_WINTER_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					SFPD_GROUP_UNIT0_CFG(2,SFPD_RHS_INDEP_WINTER_Rifleman,SERGEANT)
					SFPD_GROUP_UNIT1_CFG(2,SFPD_RHS_INDEP_WINTER_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT2_CFG(2,SFPD_RHS_INDEP_WINTER_Rifleman,PRIVATE)
					SFPD_GROUP_UNIT3_CFG(2,SFPD_RHS_INDEP_WINTER_Rifleman,PRIVATE)
				};
			};
		};