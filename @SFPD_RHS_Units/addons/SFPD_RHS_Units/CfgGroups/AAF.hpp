		class SFPD_AAF_Faction {
			name = "[SFPD] AAF";
			class Infantry {
				name = "Infantry";
				class SFPD_AAF_GROUP_FT {
					name = "Fire Team";
					side = 2;
					faction = "SFPD_AAF_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_AAF_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_AAF_AT";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_AAF_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_AAF_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
				};
				class SFPD_AAF_GROUP_SQUAD {
					name = "Squad";
					side = 2;
					faction = "SFPD_AAF_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_AAF_Leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_AAF_Medic";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "SFPD_AAF_Rifleman";
						rank = "PRIVATE";
						position[] = {3.2,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "SFPD_AAF_LMG";
						rank = "PRIVATE";
						position[] = {4.8,0,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "SFPD_AAF_Rifleman";
						rank = "PRIVATE";
						position[] = {6.4,0,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "SFPD_AAF_Medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "SFPD_AAF_AT";
						rank = "PRIVATE";
						position[] = {9.6,0,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "SFPD_AAF_Marksman";
						rank = "PRIVATE";
						position[] = {11.2,0,0};
					};
				};
				class SFPD_AAF_GROUP_Patrol {
					name = "Patrol";
					side = 2;
					faction = "SFPD_AAF_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0 {
						side = 2;
						vehicle = "SFPD_AAF_Rifleman_light";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "SFPD_AAF_Rifleman_light";
						rank = "PRIVATE";
						position[] = {1.6,0,0};
					};
					
				};
			};
		};