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
