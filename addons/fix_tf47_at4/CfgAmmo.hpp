class CfgAmmo {
    class RocketBase;
    class BulletBase;
    class SubmunitionBase;
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
        submunitionConeType[]={
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
    class tf47_ammo_spall : BulletBase {
        caliber=16.6667;
        hit=10;
        indirectHit=0;
        indirectHitRange=0.15000001;
        typicalSpeed=200;
        deflecting=90;
        timeToLive=0.5;
    };
    class tf47_at4_m_HEAT : RocketBase {
        submunitionAmmo="tf47_ammo_M136_penetrator";
        submunitionDirectionType="SubmunitionModelDirection";
        submunitionInitialOffset[]={0,0,-0.2};
        submunitionParentSpeedCoef=0;
        submunitionInitSpeed=1000;
        triggerOnImpact=1;
        deleteParentWhenTriggered=0;
        hit=235;
        indirectHit=11;
        indirectHitRange=1.1;
        cost=200;
        caliber=0.80000001;
        whistleDist=4;
    };
    class tf47_ammo_M136_penetrator : tf47_ammo_basic_penetrator {
        hit=235;
        indirectHit=11;
        indirectHitRange=1.1;
        explosive=0.64999998;
        caliber=26.6667;
    };
    class tf47_at4_m_HEDP : tf47_at4_m_HEAT {
        submunitionAmmo="tf47_ammo_M136_hedp_penetrator";
        submunitionDirectionType="SubmunitionModelDirection";
        submunitionInitialOffset[]={0,0,-0.2};
        submunitionParentSpeedCoef=0;
        submunitionInitSpeed=1000;
        triggerOnImpact=1;
        deleteParentWhenTriggered=0;
        indirectHit=31;
        indirectHitRange=4.0999999;
        cost=200;
        explosive=0.64999998;
    };
    class tf47_ammo_M136_hedp_penetrator : tf47_ammo_M136_penetrator {
        hit=235;
        caliber=10;
    };
    class tf47_at4_m_HP: tf47_at4_m_HEAT {
        submunitionAmmo="tf47_ammo_M136_hp_penetrator";
        submunitionDirectionType="SubmunitionModelDirection";
        submunitionInitialOffset[]={0,0,-0.2};
        submunitionParentSpeedCoef=0;
        submunitionInitSpeed=1000;
        triggerOnImpact=1;
        deleteParentWhenTriggered=0;
        hit=245;
    };
    class tf47_ammo_M136_hp_penetrator: tf47_ammo_M136_penetrator {
        caliber=36.666698;
    };
};
