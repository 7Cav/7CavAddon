class CfgMagazines {
	class 1Rnd_Leaflets_West_F;
	class Cav_1Rnd_Leaflets_Enlist_F: 1Rnd_Leaflets_West_F {
        author = ECSTRING(main,cavmodteam);
		leafletClass = "Cav_Enlist";
	};

	class Pylon_1Rnd_Leaflets_West_F;
	class Cav_Pylon_1Rnd_Leaflets_Enlist_F: Pylon_1Rnd_Leaflets_West_F {
		displayName = CSTRING(Cav_Pylon_1Rnd_Leaflets_Enlist_F);
		leafletClass = "Cav_Enlist";
	};
};