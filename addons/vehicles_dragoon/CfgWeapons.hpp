class CfgWeapons {
    class CannonCore;
	class autocannon_Base_F: CannonCore {
		class player;
	};
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		displayName = "$STR_A3_GATLING_30MM_CTWS0";
		muzzles[] = {"HE","AP"};
		class HE: autocannon_Base_F
		{
			displayName = "$STR_A3_GATLING_30MM_CTWS0";
			magazines[] = {"140Rnd_30mm_MP_shells","140Rnd_30mm_MP_shells_Tracer_Red","140Rnd_30mm_MP_shells_Tracer_Green","140Rnd_30mm_MP_shells_Tracer_Yellow","78Rnd_30mm_MP_shells_Tracer_Red","78Rnd_30mm_HEI_shells_Tracer_Red"};
			magazineReloadTime = 40;
			class player: player
			{
				dispersion = 0.0018;
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "$STR_A3_GATLING_30MM_CTWS0";
			magazines[] = {"60Rnd_30mm_APFSDS_shells","60Rnd_30mm_APFSDS_shells_Tracer_Red","60Rnd_30mm_APFSDS_shells_Tracer_Green","60Rnd_30mm_APFSDS_shells_Tracer_Yellow","78Rnd_30mm_APFSDS_shells_Tracer_Red"};
			magazineReloadTime = 40;
			class player: player
			{
				dispersion = 0.00108;
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
	};
};