class ACE_Medical_Actions
{
	class Basic
	{
		class Morphine;
		
		class Adenosine: Morphine
		{
			displayName = "Inject Adenosine";
			displayNameProgress = "Injecting Adenosine...";
			items[] = {"ACE_adenosine"};
			litter[] = { {"All", "", {"ACE_MedicalLitter_adenosine"}} };
		};
	};
};