		class SFPD_REBEL_Faction {
			name = "[SFPD] Rebel";
			class Infantry {
				name = "Infantry";
				SFPD_GROUP_SQUAD_CFG(2,SFPD_REBEL_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_REBEL_Rifleman_AKM,SFPD_REBEL_Rifleman_AKS,SFPD_REBEL_Rifleman_TRG,SFPD_REBEL_Rifleman_AKM,SFPD_REBEL_Shotgun,SFPD_REBEL_AT_TRG,SFPD_REBEL_LMG,SFPD_REBEL_Marksman)
				SFPD_GROUP_PATROL_CFG(2,SFPD_REBEL_Faction,\A3\ui_f\data\map\markers\nato\n_inf.paa,SFPD_REBEL_Rifleman_AKS,SFPD_REBEL_Rifleman_AKS)
				
				class SFPD_REBEL_GROUP_RIFLE_SQUAD {
					name = "Rifle Squad";
					side = 2;
					faction = "SFPD_REBEL_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					SFPD_GROUP_UNIT0_CFG(2,SFPD_REBEL_Rifleman_AKM,SERGEANT)
					SFPD_GROUP_UNIT1_CFG(2,SFPD_REBEL_Rifleman_AKS,PRIVATE)
					SFPD_GROUP_UNIT2_CFG(2,SFPD_REBEL_Rifleman_TRG,PRIVATE)
					SFPD_GROUP_UNIT3_CFG(2,SFPD_REBEL_Rifleman_AKM,PRIVATE)
					SFPD_GROUP_UNIT4_CFG(2,SFPD_REBEL_Rifleman_AKS,PRIVATE)
					SFPD_GROUP_UNIT5_CFG(2,SFPD_REBEL_Rifleman_TRG,PRIVATE)
					SFPD_GROUP_UNIT6_CFG(2,SFPD_REBEL_Rifleman_AKM,PRIVATE)
					SFPD_GROUP_UNIT7_CFG(2,SFPD_REBEL_Rifleman_AKS,PRIVATE)
				};
			};
		};