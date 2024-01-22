class CfgWeapons {
	class CannonCore;
    class autocannon_Base_F: CannonCore {};
	class autocannon_30mm_CTWS: autocannon_Base_F {};
	class cav_dragoon_autocannon_base: autocannon_30mm_CTWS {
		class AP;
		class HE;
	};

	// TODO: Add to magazines when HEAB-T implemented "78Rnd_30mm_HEAB_shells_Tracer_Red"
	class cav_dragoon_autocannon_30mm_CTWS: cav_dragoon_autocannon_base {
		
		class AP: AP {
			magazines[] = {"78Rnd_30mm_APFSDS_shells_Tracer_Red"};
			magazineReloadTime = 1;
		 	class player;
			class close;
			class short;
			class medium;
			class far;
		};
		class HE: HE {
			magazines[] = {"78Rnd_30mm_MP_shells_Tracer_Red","78Rnd_30mm_HEI_shells_Tracer_Red", "78Rnd_30mm_HEABT_shells_Tracer_Red"};
			magazineReloadTime = 1;
			class player;
			class close;
			class short;
			class medium;
			class far;
		};
	};


	class MissileLauncher;
	class missiles_titan: MissileLauncher{};
	class cav_dragoon_missile_launcher: missiles_titan {
		scope = 2;
		displayName = CSTRING(cav_dragoon_missile_launcher);
		magazines[] = {"1Rnd_GAT_missiles"};
		magazineReloadTime = 60;
	};

    class MGunCore;
    class MGun: MGunCore {};
    class LMG_RCWS: MGun {};
    class LMG_coax: LMG_RCWS {};
    class LMG_coax_ext: LMG_coax {};
	class cav_dragoon_coax_base: LMG_coax_ext {
		scope=1;
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class cav_dragoon_coax: LMG_coax_ext {
		scope=2;
		displayName=CSTRING(cav_dragoon_coax);
		magazines[] = {"cav_mag_300Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red"};
	};
};