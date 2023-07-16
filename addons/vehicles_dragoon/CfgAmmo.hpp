class CfgAmmo {
	class B_30mm_HE;
	class B_30mm_HE_Tracer_Red;
	class cav_B_30mm_HEI_Tracer_Red: B_30mm_HE_Tracer_Red {
		ace_vehicle_damage_incendiary = 0.2;
		indirectHitRange = 5;
		indirectHit = 10;
	};
	// TODO: ACE FCS Air Burst
	// class cav_B_30mm_HEAB_Tracer_Red: B_30mm_HE_Tracer_Red {
	// 	ace_fcs_airburst = 1;
	// 	deflecting = 0;
	// 	fcsHelper = "cav_B_30mm_HEAB_Helper";
	// };
	// class cav_B_30mm_HEAB_Helper: B_30mm_HE {
	// 	indirectHitRange = 4;
    //     simulation = "shotRocket";
    //     timeToLive = 0;
	// };
};