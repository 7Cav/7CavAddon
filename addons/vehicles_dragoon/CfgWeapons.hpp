class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
    };
    class autocannon_30mm_CTWS: autocannon_Base_F
    {
        class HE: autocannon_Base_F {};
        class AP: autocannon_Base_F {};
    };
    class cav_autocannon_30mm_CTWS: autocannon_30mm_CTWS
    {
        class HE: HE
        {
            magazines[] += {"cav_78Rnd_30mm_MP_shells_Tracer_Red","cav_78Rnd_30mm_HEI_shells_Tracer_Red"};
        };
        class AP: AP
        {
            magazines[] += {"cav_78Rnd_30mm_APFSDS_shells_Tracer_Red"};
        };
    };
    class missiles_titan;
    class cav_dragoon_missiles_AA: missiles_titan {
        displayName = CSTRING(cav_dragoon_missiles_AA);
        magazines[] = {"cav_2Rnd_fim92_missiles","rhs_fim92_mag"};
    };
    class LMG_coax_ext;
    class cav_dragoon_coax_m240: LMG_coax_ext {
        displayName = CSTRING(cav_dragoon_coax_m240);
        magazines[] += {"cav_mag_300Rnd_762x51_Belt_Red"};
    };
};