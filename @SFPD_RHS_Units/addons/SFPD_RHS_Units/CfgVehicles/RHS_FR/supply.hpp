
	class SFPD_RHS_FR_Ammo: Box_NATO_Ammo_F {
        displayname = "[SFPD RHS] FR Ammo";
        scope = 2;
		class TransportMagazines {
			SFPD_SUPPLY_AMMO(rhs_mag_30Rnd_556x45_M855A1_PMAG,SFPD_RHS_rhsusf_200rnd_556x45_tracer_box,5,rhsusf_mag_17Rnd_9x19_JHP,rhsusf_20Rnd_762x51_SR25_m118_special_Mag,rhsusf_5Rnd_300winmag_xm2010)
        };
		class TransportWeapons {};
		class TransportItems {};
    };
	
	class SFPD_RHS_FR_Weapons: Box_NATO_Wps_F {
        displayname = "[SFPD RHS] FR Weapons";
        scope = 2;
		class TransportMagazines {};
		class TransportWeapons {
			SFPD_SUPPLY_WEAPONS(SFPD_RHS_HK416_Default,SFPD_RHS_HK416_GL_Default,SFPD_RHS_M249_Default_FR,SFPD_RHS_Glock17,SFPD_RHS_WINTER_MK11_Default)
            TRANSPORT_WEAPONS(SFPD_RHS_WOODLAND_MK11_Default,2)
		};
		class TransportItems {};
		class TransportBackpacks {};
    };