class CfgMagazines {
    class CA_LauncherMagazine;
    class Cav_m3maaws_HEAT_CS : CA_LauncherMagazine {
        author = "Grey.V";
        scope = 2;
        displayName = CSTRING(HEAT_655_CS);
        model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
        picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
        initSpeed = 290;
        descriptionShort = CSTRING(HEAT_655_CS_Desc);
        displaynameshort = CSTRING(HEAT_655_CS_Short);
        ammo = "Cav_m3maaws_HEAT_CS";
        type = "2* 256";
        mass = 72.769997;
        ace_overpressure_priority = 99;
        ace_overpressure_angle= 50;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.69999999;
    };

    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class Cav_mag_20Rnd_556x45_M855A1_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
        displayName = CSTRING(20Rnd_556x45_M855A1_Stanag);
        displayNameShort = CSTRING(20Rnd_556x45_M855A1_Stanag_Short);
        descriptionShort = CSTRING(20Rnd_556x45_M855A1_Stanag_Desc);
        author = "Brostrom.A";
        count = 20;
        mass = 9.35;
    };
};