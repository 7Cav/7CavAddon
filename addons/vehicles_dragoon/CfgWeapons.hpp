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
            magazines[] += {"78Rnd_30mm_MP_shells_Tracer_Red","78Rnd_30mm_HEI_shells_Tracer_Red"};
        };
        class AP: AP
        {
            magazines[] += {"78Rnd_30mm_APFSDS_shells_Tracer_Red"};
        };
    };
    class missiles_titan;
    class cav_dragoon_missiles_AA: missiles_titan {
        magazines[] = {"4Rnd_Titan_long_missiles"};
    };
};