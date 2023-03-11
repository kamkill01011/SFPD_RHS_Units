	class SFPD_RHS_INDEP_Ammo: Box_Syndicate_Ammo_F {
        displayname = "[SFPD RHS] Insurgents Ammo";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_30Rnd_545x39_7N6M_AK,50)
            TRANSPORT_MAGAZINES(rhs_100Rnd_762x54mmR_green,10)
            TRANSPORT_MAGAZINES(rhsgref_5Rnd_762x54_m38,20)
            TRANSPORT_MAGAZINES(rhs_mag_9x18_8_57N181S,10)
		};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_INDEP_Weapons: Box_Syndicate_Wps_F {
        displayname = "[SFPD RHS] Insurgents Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_aks74,5)
            TRANSPORT_WEAPONS(rhs_weap_ak74,5)
            TRANSPORT_WEAPONS(rhs_weap_m84,1)
            TRANSPORT_WEAPONS(rhs_weap_m38_rail,2)
            TRANSPORT_WEAPONS(rhs_weap_makarov_pm,5)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_INDEP_Explosives: Box_IED_Exp_F {
        displayname = "[SFPD RHS] Insurgents Explosives";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
            TRANSPORT_ITEMS(ACE_Cellphone,4)
            TRANSPORT_ITEMS(ACE_DeadManSwitch,4)
            TRANSPORT_ITEMS(IEDLandBig_Remote_Mag,5)
            TRANSPORT_ITEMS(IEDUrbanBig_Remote_Mag,5)
            TRANSPORT_ITEMS(IEDLandSmall_Remote_Mag,5)
            TRANSPORT_ITEMS(IEDUrbanSmall_Remote_Mag,5)
		};
		class TransportBackpacks {};
    };
	
	class SFPD_RHS_INDEP_Launchers: Box_Syndicate_WpsLaunch_F {
        displayname = "[SFPD RHS] Insurgents Launchers";
        scope = 2;
		class TransportMagazines {
            TRANSPORT_MAGAZINES(rhs_rpg7_PG7V_mag,15)
		};
		class TransportWeapons {
            TRANSPORT_WEAPONS(rhs_weap_rpg7,3)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };