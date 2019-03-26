class CfgAmmo {
	class BulletBase;
	class RocketBase;
	class Sh_125mm_APFSDS;

	class tf47_ammo_basic_penetrator : Sh_125mm_APFSDS {
		caliber=6.6666698;
		warheadName="HEAT";
		hit=290;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		deflecting=0;
		typicalSpeed=1000;
		timeToLive=0.0099999998;
		simulationStep=0.00050000002;
		airFriction=-0.5;
		whistleOnFire=0;
		whistleDist=0;
		submunitionConeType[]= {
			"randomcenter",
			30
		};
		submunitionAmmo="tf47_ammo_spall";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.40000001};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=200;
		deleteParentWhenTriggered=0;
		triggerTime=0.003;
		model="\A3\Weapons_f\empty";
	};
	class tf47_ammo_spall : BulletBase
	{
		caliber=16.6667;
		hit=10;
		indirectHit=0;
		indirectHitRange=0.15000001;
		typicalSpeed=200;
		deflecting=90;
		timeToLive=0.5;
	};
	class tf47_m3maaws_HEAT : RocketBase {	
		submunitionAmmo="tf47_ammo_maaws_HEAT_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=900;
		indirectHit=15;
		indirectHitRange=2.0999999;
		caliber=0.80000001;
	};
	class tf47_ammo_maaws_HEAT_penetrator : tf47_ammo_basic_penetrator {
		warheadName="TandemHEAT";
		hit=500;
		caliber=39.333309;
		explosive=0.64999998;
	};
	class tf47_m3maaws_HEAT_CS : RocketBase {
		submunitionAmmo="tf47_ammo_maaws_HEAT_CS_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		tf47_ammoSpeed=290;
		explosive=0.64999998;
		EffectFly="ArtilleryTrails";
		soundHit[]={
			"A3\Sounds_F\weapons\Rockets\explosion_missile_05",
			"db20",
			1,
			1200
		};
		soundFly[]={
			"A3\Sounds_F\weapons\Rockets\new_rocket_6",
			"db15",
			1,
			35
		};
		model="tf47_launchers\m3maaws\ammo_m3maaws.p3d";
		hit=270;
		indirectHit=15;
		indirectHitRange=2.0999999;
		caliber=0.80000001;
		cost=800;
		airFriction=0.0099999998;
		sideAirFriction=0;
		maxSpeed=290;
		initTime=0;
		thrustTime=0.1;
		thrust=0.1;
		fuseDistance=15;
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		effectsMissileInit="";
		effectsMissile="m3maaws_exhaust";
		simulationStep=0.02;
		airLock=0;
		irLock=0;
		timeToLive=25;
		maneuvrability=0;
		allowAgainstInfantry=0;
		class CamShakeExplode {
			power="(55*0.2)";
			duration="((round (55^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5 + 55^0.5)*8)";
		};
		class CamShakeHit {
			power=110;
			duration="((round (110^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire {
			power="(20^0.25)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((20^0.5)*8)";
		};
		class CamShakePlayerFire {
			power=0.1;
			duration=0.2;
			frequency=8;
			distance=1;
		};
		visibleFire=15;
		audibleFire=20;
	};
	class tf47_ammo_maaws_HEAT_CS_penetrator : tf47_ammo_basic_penetrator {
		hit=270;
		caliber=39.333309;
		explosive=0.64999998;
	};
	class tf47_m3maaws_HEDP: RocketBase {
		submunitionAmmo="tf47_ammo_maaws_HEDP_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		explosive=0.64999998;
	};
	class tf47_ammo_maaws_HEDP_penetrator : tf47_ammo_basic_penetrator {
		hit=300;
		caliber=11.6667;
		explosive=0.64999998;
		indirectHit=2;
		indirectHitRange=0.15000001;
	};
};
