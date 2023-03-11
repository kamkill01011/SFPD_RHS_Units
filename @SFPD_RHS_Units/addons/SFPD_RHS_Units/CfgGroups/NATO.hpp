		class SFPD_BLUFOR_DESERT_Faction {
			name = "[SFPD] NATO (Desert)";
			class Infantry {
				name = "Infantry";
				class SFPD_BLUFOR_DESERT_GROUP_FT {
					name = "Fire Team";
					side = 1;
					faction = "SFPD_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_BLUFOR_DESERT_GROUP_SQUAD {
					name = "Squad";
					side = 1;
					faction = "SFPD_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Rifleman";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_AT";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Marksman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_BLUFOR_DESERT_GROUP_Patrol {
					name = "Patrol";
					side = 1;
					faction = "SFPD_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_BLUFOR_DESERT_GROUP_SFT {
					name = "Special Forces Team";
					side = 1;
					faction = "SFPD_BLUFOR_DESERT_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_DESERT_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
		
		class SFPD_BLUFOR_WOODLAND_Faction {
			name = "[SFPD] NATO (Woodland)";
			class Infantry {
				name = "Infantry";
				class SFPD_BLUFOR_WOODLAND_GROUP_FT {
					name = "Fire Team";
					side = 1;
					faction = "SFPD_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_BLUFOR_WOODLAND_GROUP_SQUAD {
					name = "Squad";
					side = 1;
					faction = "SFPD_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Marksman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_BLUFOR_WOODLAND_GROUP_Patrol {
					name = "Patrol";
					side = 1;
					faction = "SFPD_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_BLUFOR_WOODLAND_GROUP_SFT {
					name = "Special Forces Team";
					side = 1;
					faction = "SFPD_BLUFOR_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_WOODLAND_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};
		
		class SFPD_BLUFOR_JUNGLE_Faction {
			name = "[SFPD] NATO (Jungle)";
			class Infantry {
				name = "Infantry";
				class SFPD_BLUFOR_JUNGLE_GROUP_FT {
					name = "Fire Team";
					side = 1;
					faction = "SFPD_BLUFOR_JUNGLE_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_BLUFOR_JUNGLE_GROUP_SQUAD {
					name = "Squad";
					side = 1;
					faction = "SFPD_BLUFOR_JUNGLE_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Rifleman";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_AT";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Marksman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_BLUFOR_JUNGLE_GROUP_Patrol {
					name = "Patrol";
					side = 1;
					faction = "SFPD_BLUFOR_JUNGLE_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
				class SFPD_BLUFOR_JUNGLE_GROUP_SFT {
					name = "Special Forces Team";
					side = 1;
					faction = "SFPD_BLUFOR_JUNGLE_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_SF_Leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_SF_Grenadier";
						rank = "LIEUTENANT";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_SF_AT";
						rank = "LIEUTENANT";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "SFPD_BLUFOR_JUNGLE_SF_LMG";
						rank = "LIEUTENANT";
						position[] = {4.8,0,0};
					};
				};
			};
		};