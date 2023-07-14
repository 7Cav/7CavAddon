class CfgVehicles {
    class APC_Wheeled_03_base_F;
    class I_APC_Wheeled_03_cannon_F;
    class cav_dragoon_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(cav_dragoon_base_F);
        author = ECSTRING(main,modteam);
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class EventHandlers;
        class TextureSources {
            class Blu_Woodland {
                displayName = CSTRING(Blu_Woodland);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\dragoon_01_ext_wd.paa),QPATHTOF(data\dragoon_02_ext_wd.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert {
                displayName = CSTRING(Blu_Desert);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\dragoon_01_ext_d.paa),QPATHTOF(data\dragoon_02_ext_d.paa),QPATHTOF(data\dragoon_turret_d.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Alpine {
                displayName = CSTRING(Blu_Alpine);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\dragoon_01_ext_wd.paa),QPATHTOF(data\dragoon_02_ext_wd.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Woodland_V1 {
                displayName = CSTRING(Blu_Woodland_V1);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v1\dragoon_01_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_02_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_turret_wd_v1.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Woodland_V2 {
                displayName = CSTRING(Blu_Woodland_V2);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v2\dragoon_01_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_02_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_turret_wd_v2.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Woodland_V3 {
                displayName = CSTRING(Blu_Woodland_V3);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v3\dragoon_01_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_02_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_turret_wd_v3.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Woodland_V4 {
                displayName = CSTRING(Blu_Woodland_V4);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v4\dragoon_01_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_02_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_turret_wd_v4.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Woodland_V5 {
                displayName = CSTRING(Blu_Woodland_V5);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v5\dragoon_01_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_02_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_turret_wd_v5.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Woodland_V6 {
                displayName = CSTRING(Blu_Woodland_V6);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v6\dragoon_01_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_02_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_turret_wd_v6.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Woodland_WH7 {
                displayName = CSTRING(Blu_Woodland_WH7);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\wh7\dragoon_01_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_02_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_turret_wd_wh7.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert_V1 {
                displayName = CSTRING(Blu_Desert_V1);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v1\dragoon_01_ext_d_v1.paa),QPATHTOF(data\v1\dragoon_02_ext_d_v1.paa),QPATHTOF(data\v1\dragoon_turret_d_v1.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert_V2 {
                displayName = CSTRING(Blu_Desert_V2);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v2\dragoon_01_ext_d_v2.paa),QPATHTOF(data\v2\dragoon_02_ext_d_v2.paa),QPATHTOF(data\v2\dragoon_turret_d_v2.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert_V3 {
                displayName = CSTRING(Blu_Desert_V3);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v3\dragoon_01_ext_d_v3.paa),QPATHTOF(data\v3\dragoon_02_ext_d_v3.paa),QPATHTOF(data\v3\dragoon_turret_d_v3.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert_V4 {
                displayName = CSTRING(Blu_Desert_V4);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v4\dragoon_01_ext_d_v4.paa),QPATHTOF(data\v4\dragoon_02_ext_d_v4.paa),QPATHTOF(data\v4\dragoon_turret_d_v4.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert_V5 {
                displayName = CSTRING(Blu_Desert_V5);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v5\dragoon_01_ext_d_v5.paa),QPATHTOF(data\v5\dragoon_02_ext_d_v5.paa),QPATHTOF(data\v5\dragoon_turret_d_v5.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert_V6 {
                displayName = CSTRING(Blu_Desert_V6);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v6\dragoon_01_ext_d_v6.paa),QPATHTOF(data\v6\dragoon_02_ext_d_v6.paa),QPATHTOF(data\v6\dragoon_turret_d_v6.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert_WH7 {
                displayName = CSTRING(Blu_Desert_WH7);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\wh7\dragoon_01_ext_d_wh7.paa),QPATHTOF(data\wh7\dragoon_02_ext_d_wh7.paa),QPATHTOF(data\wh7\dragoon_turret_d_wh7.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Arctic_V1 {
                displayName = CSTRING(Blu_Arctic_V1);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v1\dragoon_01_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_02_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_turret_wd_v1.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Arctic_V2 {
                displayName = CSTRING(Blu_Arctic_V2);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v2\dragoon_01_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_02_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_turret_wd_v2.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Arctic_V3 {
                displayName = CSTRING(Blu_Arctic_V3);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v3\dragoon_01_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_02_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_turret_wd_v3.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Arctic_V4 {
                displayName = CSTRING(Blu_Arctic_V4);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v4\dragoon_01_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_02_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_turret_wd_v4.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Arctic_V5 {
                displayName = CSTRING(Blu_Arctic_V5);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v5\dragoon_01_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_02_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_turret_wd_v5.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Arctic_V6 {
                displayName = CSTRING(Blu_Arctic_V6);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\v6\dragoon_01_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_02_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_turret_wd_v6.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Arctic_WH7 {
                displayName = CSTRING(Blu_Arctic_WH7);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\wh7\dragoon_01_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_02_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_turret_wd_wh7.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = ECSTRING(main,modteam);
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = ECSTRING(main,modteam);
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = ECSTRING(main,modteam);
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = ECSTRING(main,modteam);
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = ECSTRING(main,modteam);
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
    };
    class cav_dragoon_unarmed_base_F: cav_dragoon_base_F {
        supplyRadius = 10;
        attendant = 1;
        forceInGarage = 1;
        scope = 0;
        scopeCurator = 0;
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
        };
        textureList[] = {"Blu",1};
        class TextureSources {
            class Blu_Woodland {
                displayName = CSTRING(Blu_Woodland);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\atl\dragoon_01_ext_wd_atl.paa),QPATHTOF(data\atl\dragoon_02_ext_wd_atl.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Desert {
                displayName = CSTRING(Blu_Desert);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\atl\dragoon_01_ext_d_atl.paa),QPATHTOF(data\atl\dragoon_02_ext_d_atl.paa),QPATHTOF(data\dragoon_turret_d.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
            class Blu_Alpine {
                displayName = CSTRING(Blu_Alpine);
                author = ECSTRING(main,modteam);
                textures[] = {QPATHTOF(data\atl\dragoon_01_ext_wd_atl.paa),QPATHTOF(data\atl\dragoon_02_ext_wd_atl.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {"BLU_USA_7CAV_F"};
            };
        };
        driverCanSee = "4+8+2+32+16";
        gunnerCanSee = "4+2+8+32+16";
        weapons[] = {"TruckHorn","SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        class Turrets {};
        threat[] = {0,0,0};
    };
    class cav_dragoon_Unarmed_WD: cav_dragoon_unarmed_base_F {
        displayName = CSTRING(cav_dragoon_Unarmed_WD);
        author = ECSTRING(main,modteam);
        scope = 2;
        scopeCurator = 2;
        faction = "BLU_USA_7CAV_F";
        forceInGarage = 1;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "Cav_EdSubcat_vehicles_woodland";
        hiddenSelectionsTextures[] = {QPATHTOF(data\atl\dragoon_01_ext_wd_atl.paa),QPATHTOF(data\atl\dragoon_02_ext_wd_atl.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_Unarmed_D: cav_dragoon_unarmed_base_F {
        displayName = CSTRING(cav_dragoon_Unarmed_D);
        author = ECSTRING(main,modteam);
        scope = 2;
        scopeCurator = 2;
        faction = "BLU_USA_7CAV_F";
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "Cav_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\atl\dragoon_01_ext_d_atl.paa),QPATHTOF(data\atl\dragoon_02_ext_d_atl.paa),QPATHTOF(data\dragoon_turret_d.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_Unarmed_A: cav_dragoon_unarmed_base_F {
        displayName = CSTRING(cav_dragoon_Unarmed_A);
        author = ECSTRING(main,modteam);
        scope = 2;
        scopeCurator = 2;
        faction = "BLU_USA_7CAV_F";
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "Cav_EdSubcat_vehicles_arctic";
        
        hiddenSelectionsTextures[] = {QPATHTOF(data\atl\dragoon_01_ext_wd_atl.paa),QPATHTOF(data\atl\dragoon_02_ext_wd_atl.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_WD: cav_dragoon_base_F {
        scope = 2;
        scopeCurator = 2;
        faction = "BLU_USA_7CAV_F";
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "Cav_EdSubcat_vehicles_woodland";
        hiddenSelectionsTextures[] = {QPATHTOF(data\dragoon_01_ext_wd.paa),QPATHTOF(data\dragoon_02_ext_wd.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_WD_PA: cav_dragoon_WD {
        displayName = CSTRING(cav_dragoon_WD_PA);
        author = ECSTRING(main,modteam);
        scope = 0;
        scopeCurator = 0;

        forceInGarage = 0;
        thrustDelay = 0.3499999;
        brakeIdleSpeed = 1.78;
        waterLeakiness = 2.5;
        dampersBumpCoef = 4.5;
        terrainCoef = 1.5;
        turnCoef = 3;
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.3;
        accelAidForceYOffset = -1.5;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 30;
        antiRollbarSpeedMin = 15;
        antiRollbarSpeedMax = 65;
        enginePower = 385;
        maxSpeed = 120;
        peakTorque = 1457.5;
        idleRpm = 650;
        redRpm = 2600;
        maxOmega = 272.271;
        minOmega = 52.3599;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 2;
        dampingRateZeroThrottleClutchDisengaged = 0.05;
        torqueCurve[] = {{0,0},{0.163077,0.277015},{0.231154,0.614065},{0.306154,0.932247},{0.358846,1},{0.615,1},{0.973846,0.795026},{1.28192,0.227273}};
        changeGearMinEffectivity[] = {0.5,0.15,0.97,0.97,0.97,0.97,0.97,0.985};
        class complexGearbox {
            GearboxRatios[] = {"R1",-5.03,"N",0,"D1",3.49,"D2",1.86,"D3",1.41,"D4",1,"D5",0.75,"D6",0.65};
            TransmissionRatios[] = {"High",8};
            AmphibiousRatios[] = {"R1",-10,"N",0,"D1",30};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        switchTime = 0.1;
        latency = 1.4;
        clutchStrength = 35;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
    };
    class cav_dragoon_WD_V1: cav_dragoon_WD {
        displayName = CSTRING(cav_dragoon_WD_V1);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v1\dragoon_01_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_02_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_turret_wd_v1.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };
    class cav_dragoon_WD_V2: cav_dragoon_WD {
        displayName = CSTRING(cav_dragoon_WD_V2);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v2\dragoon_01_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_02_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_turret_wd_v2.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };
    class cav_dragoon_WD_V3: cav_dragoon_WD {
        displayName = CSTRING(cav_dragoon_WD_V3);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v3\dragoon_01_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_02_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_turret_wd_v3.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };
    class cav_dragoon_WD_V4: cav_dragoon_WD {
        displayName = CSTRING(cav_dragoon_WD_V4);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v4\dragoon_01_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_02_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_turret_wd_v4.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;

        class transportMagazines {};
        class transportWeapons {};
        class transportBackpacks {};
    };
    class cav_dragoon_WD_V5: cav_dragoon_WD {
        displayName = CSTRING(cav_dragoon_WD_V5);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v5\dragoon_01_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_02_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_turret_wd_v5.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 6;
    };
    class cav_dragoon_WD_V6: cav_dragoon_WD {
        displayName = CSTRING(cav_dragoon_WD_V6);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v6\dragoon_01_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_02_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_turret_wd_v6.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_WD_WH7: cav_dragoon_WD_V5 {
        displayName = CSTRING(cav_dragoon_WD_WH7);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\wh7\dragoon_01_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_02_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_turret_wd_wh7.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_D: cav_dragoon_base_F {
        scope = 2;
        scopeCurator = 2;
        faction = "BLU_USA_7CAV_F";
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "Cav_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\dragoon_01_ext_d.paa),QPATHTOF(data\dragoon_02_ext_d.paa),QPATHTOF(data\dragoon_turret_d.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_D_V1: cav_dragoon_D {
        forceInGarage = 0;
        displayName = CSTRING(cav_dragoon_D_V1);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v1\dragoon_01_ext_d_v1.paa),QPATHTOF(data\v1\dragoon_02_ext_d_v1.paa),QPATHTOF(data\v1\dragoon_turret_d_v1.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_D_V2: cav_dragoon_D {
        forceInGarage = 0;
        displayName = CSTRING(cav_dragoon_D_V2);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v2\dragoon_01_ext_d_v2.paa),QPATHTOF(data\v2\dragoon_02_ext_d_v2.paa),QPATHTOF(data\v2\dragoon_turret_d_v2.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_D_V3: cav_dragoon_D {
        forceInGarage = 0;
        displayName = CSTRING(cav_dragoon_D_V3);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v3\dragoon_01_ext_d_v3.paa),QPATHTOF(data\v3\dragoon_02_ext_d_v3.paa),QPATHTOF(data\v3\dragoon_turret_d_v3.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_D_V4: cav_dragoon_D {
        forceInGarage = 0;
        displayName = CSTRING(cav_dragoon_D_V4);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v4\dragoon_01_ext_d_v4.paa),QPATHTOF(data\v4\dragoon_02_ext_d_v4.paa),QPATHTOF(data\v4\dragoon_turret_d_v4.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        class transportMagazines{};
        class transportWeapons{};
        class transportBackpacks{};
    };
    class cav_dragoon_D_V5: cav_dragoon_D {
        forceInGarage = 0;
        displayName = CSTRING(cav_dragoon_D_V5);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v5\dragoon_01_ext_d_v5.paa),QPATHTOF(data\v5\dragoon_02_ext_d_v5.paa),QPATHTOF(data\v5\dragoon_turret_d_v5.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 6;
    };
    class cav_dragoon_D_V6: cav_dragoon_D {
        forceInGarage = 0;
        displayName = CSTRING(cav_dragoon_D_V6);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v6\dragoon_01_ext_d_v6.paa),QPATHTOF(data\v6\dragoon_02_ext_d_v6.paa),QPATHTOF(data\v6\dragoon_turret_d_v6.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_D_WH7: cav_dragoon_D_V5 {
        forceInGarage = 0;
        displayName = CSTRING(cav_dragoon_D_WH7);
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\wh7\dragoon_01_ext_d_wh7.paa),QPATHTOF(data\wh7\dragoon_02_ext_d_wh7.paa),QPATHTOF(data\wh7\dragoon_turret_d_wh7.paa),QPATHTOF(data\dragoon_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_A: cav_dragoon_base_F {
        scope = 2;
        scopeCurator = 2;
        faction = "BLU_USA_7CAV_F";
        forceInGarage = 1;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "Cav_EdSubcat_vehicles_arctic";
        hiddenSelectionsTextures[] = {QPATHTOF(data\dragoon_01_ext_wd.paa),QPATHTOF(data\dragoon_02_ext_wd.paa),QPATHTOF(data\dragoon_turret_wd.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };
    class cav_dragoon_A_V1: cav_dragoon_A {
        displayName = CSTRING(cav_dragoon_A_V1);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v1\dragoon_01_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_02_ext_wd_v1.paa),QPATHTOF(data\v1\dragoon_turret_wd_v1.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_A_V2: cav_dragoon_A {
        displayName = CSTRING(cav_dragoon_A_V2);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v2\dragoon_01_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_02_ext_wd_v2.paa),QPATHTOF(data\v2\dragoon_turret_wd_v2.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_A_V3: cav_dragoon_A {
        displayName = CSTRING(cav_dragoon_A_V3);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v3\dragoon_01_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_02_ext_wd_v3.paa),QPATHTOF(data\v3\dragoon_turret_wd_v3.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_A_V4: cav_dragoon_A {
        displayName = CSTRING(cav_dragoon_A_V4);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v4\dragoon_01_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_02_ext_wd_v4.paa),QPATHTOF(data\v4\dragoon_turret_wd_v4.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        class transportMagazines{};
        class transportWeapons{};
        class transportBackpacks{};
    };
    class cav_dragoon_A_V5: cav_dragoon_A {
        displayName = CSTRING(cav_dragoon_A_V5);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v5\dragoon_01_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_02_ext_wd_v5.paa),QPATHTOF(data\v5\dragoon_turret_wd_v5.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 6;
    };
    class cav_dragoon_A_V6: cav_dragoon_A {
        displayName = CSTRING(cav_dragoon_A_V6);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\v6\dragoon_01_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_02_ext_wd_v6.paa),QPATHTOF(data\v6\dragoon_turret_wd_v6.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class cav_dragoon_A_WH7: cav_dragoon_A_V5 {
        displayName = CSTRING(cav_dragoon_A_WH7);
        forceInGarage = 0;
        author = ECSTRING(main,modteam);
        hiddenSelectionsTextures[] = {QPATHTOF(data\wh7\dragoon_01_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_02_ext_wd_wh7.paa),QPATHTOF(data\wh7\dragoon_turret_wd_wh7.paa),QPATHTOF(data\dragoon_03_ext_wd.paa),QPATHTOF(data\camonet_arctic_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
};