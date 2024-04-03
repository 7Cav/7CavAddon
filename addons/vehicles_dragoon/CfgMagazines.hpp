class CfgMagazines {
    class 140Rnd_30mm_MP_shells_Tracer_Red;
    class cav_78Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells_Tracer_Red {
        displayName = CSTRING(cav_78Rnd_30mm_MP_shells_Tracer_Red);
        displayNameShort = CSTRING(cav_78Rnd_30mm_MP_shells_Tracer_Red_dispShort);
        displayNameMFDFormat = "MP-T";
        count=78;
    };
    class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
    class cav_78Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells_Tracer_Red {
        displayName = CSTRING(cav_78Rnd_30mm_APFSDS_shells_Tracer_Red);
        displayNameShort = CSTRING(cav_78Rnd_30mm_APFSDS_shells_Tracer_Red_dispShort);
        displayNameMFDFormat = "APFSDS-T";
        count=78;
    };
    class cav_78Rnd_30mm_HEI_shells_Tracer_Red: cav_78Rnd_30mm_MP_shells_Tracer_Red {
        ammo = "cav_B_30mm_HEI_Tracer_Red";
        displayNameMFDFormat = "HEI-T";
        displayName = CSTRING(cav_78Rnd_30mm_HEI_shells_Tracer_Red);
        displayNameShort = CSTRING(cav_78Rnd_30mm_HEI_shells_Tracer_Red_dispShort);
        initSpeed=1100;
    };
    class 4Rnd_Titan_long_missiles;
    class cav_2Rnd_fim92_missiles: 4Rnd_Titan_long_missiles {
        displayName = CSTRING(cav_2Rnd_fim92_missiles);
        displayNameShort = CSTRING(cav_2Rnd_fim92_missiles_dispShort);
        ammo = "rhs_ammo_fim92_missile";
        count=2;
    };
    // TODO: ACE FCS Air Burst Mags
    class cav_78Rnd_30mm_HEABT_shells_Tracer_Red: cav_78Rnd_30mm_MP_shells_Tracer_Red {
        ammo="cav_B_30mm_HEAB_Tracer_Red";
        displayNameMFDFormat="HEAB-T";
        displayName=CSTRING(cav_78Rnd_30mm_HEAB_shells_Tracer_Red);
        displayNameShort=CSTRING(cav_78Rnd_30mm_HEAB_shells_Tracer_Red_dispShort);
    };
    class 200Rnd_762x51_Belt_Red;
    class cav_mag_300Rnd_762x51_Belt_Red: 200Rnd_762x51_Belt_Red {
        ammo="B_762x51_Tracer_Red";
        displayName=CSTRING(cav_mag_300Rnd_762x51_Belt_Red);
        count=300;
    };
};