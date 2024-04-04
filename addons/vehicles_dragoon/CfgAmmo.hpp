class CfgAmmo {
    class B_30mm_HE;
    class B_30mm_HE_Tracer_Red;
    class cav_B_30mm_HEI_Tracer_Red: B_30mm_HE_Tracer_Red {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 378;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 181;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        ace_vehicle_damage_incendiary = 0.3;
        indirectHitRange = 4;
        indirectHit = 8;
    };
    // TODO: FCS Air Burst
    class cav_B_30mm_HEAB_Tracer_Red: B_30mm_HE_Tracer_Red {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        deflecting = 0;
        indirectHitRange = 2;
        indirectHit = 6;
        airbursting = 1;
        ABSubmun = "cav_B_30mm_HEAB_Helper";
    };
    class cav_B_30mm_HEAB_Helper: B_30mm_HE {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2843;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        indirectHitRange = 2;
        indirectHit = 6;
        simulation = "shotRocket";
        timeToLive = 0;
    };
};