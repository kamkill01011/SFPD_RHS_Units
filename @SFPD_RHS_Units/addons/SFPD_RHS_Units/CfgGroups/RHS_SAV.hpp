		class SFPD_RHS_SAV_WOODLAND_Faction {
			name = "[SFPD RHS] SAV";
			class Infantry {
				name = "Infantry";
				class SFPD_RHS_SAV_WOODLAND_GROUP_FT {
					name = "Fire Team";
					side = 2;
					faction = "SFPD_RHS_SAV_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_RHS_SAV_WOODLAND_GROUP_SQUAD {
					name = "Squad";
					side = 2;
					faction = "SFPD_RHS_SAV_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Rifleman";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_AT";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Marksman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_RHS_SAV_WOODLAND_GROUP_Patrol {
					name = "Patrol";
					side = 2;
					faction = "SFPD_RHS_SAV_WOODLAND_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_RHS_SAV_WOODLAND_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
				};
			};
		};
