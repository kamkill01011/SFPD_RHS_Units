class ARTeam
{
	name = "Autorifle Team";
	faction = "bonusUnits_CSF";
	icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
	side = 0;

	class Unit0
	{
		side = 0;
		vehicle = "O_CSF_Squadleader";
		rank = "CORPORAL";
		position[] = {0, 0, 0 };
	};
	class Unit1
	{
		side = 0;
		vehicle = "O_CSF_Autorifleman";
		rank = "PRIVATE";
		position[] = {5, -5, 0 };
	};
	class Unit2
	{
		side = 0;
		vehicle = "O_CSF_AssistAutorifleman";
		rank = "PRIVATE";
		position[] = {-5, -5, 0 };
	};
	class Unit3
	{
		side = 0;
		vehicle = "O_CSF_Rifleman";
		rank = "PRIVATE";
		position[] = {10, -10, 0 };
	};
};