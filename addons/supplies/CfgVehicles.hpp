
class CfgVehicles {
    //class B_CargoNet_01_ammo_F;
    //class B_supplyCrate_F;
    //class Box_NATO_Ammo_F;
    //class Box_NATO_AmmoOrd_F;
    //class Box_NATO_Equip_F;
    //class Box_NATO_Grenades_F;
    //class Box_NATO_Wps_F;
    //class Box_NATO_WpsLaunch_F;
    class Box_NATO_WpsSpecial_F;

    class Cav_Wps_Heavy_F : Box_NATO_WpsSpecial_F {
        _generalMacro = "Cav_Wps_Heavy_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(wps_heavy);
        author = ECSTRING(main,modteam);

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ace_compat_rhs_usf3_48Rnd_40mm_MK19_M430A1,15);
            MACRO_ADDMAGAZINE(ace_compat_rhs_usf3_mag_TOW2b_aero,6);
            MACRO_ADDMAGAZINE(ace_compat_rhs_usf3_mag_TOW2bb,3);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(ace_csw_m3CarryTripodLow,2);
            MACRO_ADDWEAPON(ace_compat_rhs_usf3_mk19_carry,2);
            MACRO_ADDWEAPON(ace_csw_m220CarryTripod,1);
            MACRO_ADDWEAPON(ace_compat_rhs_usf3_tow_carry,1);
        };
    };
};
