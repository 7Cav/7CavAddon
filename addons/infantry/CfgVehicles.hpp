class CfgVehicles {
    class B_Soldier_base_F;
    class Cav_B_Soldier_base_F: B_Soldier_base_F {
        _generalMacro = "Cav_B_Soldier_base_F";
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(trooper);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_base_F.jpg);

        cav_regimentName = "7th Cavalry";
        cav_regiment = 7;
        cav_battalion = 1;
        cav_company = "";
        cav_platoon = -1;
        cav_squad = -1;

        icon = "iconMan";
        role = "Rifleman";

        genericNames = "EnglishMen";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 1;
        faction = "cav_blu_usa_f";

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
            "rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
            "rhsusf\addons\rhsusf_infantry\data\patches\1CAV_ocp_co.paa"
        };

        uniformClass = "rhs_uniform_cu_ocp_1stcav";

        backpack = "";

        weapons[] = {"rhs_m4a1_grip_compm4","Throw","Put"};
        respawnWeapons[] = {"rhs_m4a1_grip_compm4","Throw","Put"};

        magazines[] = {
            MULT_OBJ_10(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell)
        };
        respawnMagazines[] = {
            MULT_OBJ_10(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools)
        };
        linkedItems[] = {
            "rhsusf_ach_helmet_ocp",
            "rhsusf_iotv_ocp_Rifleman",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_ach_helmet_ocp",
            "rhsusf_iotv_ocp_Rifleman",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_Officer_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Officer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Officer_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";

        weapons[] = {"rhs_weap_m16a4_grip_acog","Throw","Put"};
    };

    class Cav_B_JTAC_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_JTAC_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_JTAC_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };
    class Cav_B_TACP_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_TACP_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_TACP_F);
        author = ECSTRING(Main,ModTeam);
        
        icon = "iconManOfficer";
    };

    class Cav_B_PlatoonSergeant_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_PlatoonSergeant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_PlatoonSergeant_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };
    class Cav_B_PlatoonLeader_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_PlatoonLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };


    class Cav_B_Rifleman_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Rifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Rifleman_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_B_SquadLeader_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_SquadLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManLeader";
    };
    class Cav_B_FireTeamLeader_F: Cav_B_SquadLeader_F {
        _generalMacro = "Cav_B_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_FireTeamLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManLeader";
    };

    class Cav_B_AutomaticRifleman_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_AutomaticRifleman_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"rhs_weap_m249_light_L_elcan","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_light_L_elcan","Throw","Put"};
        backpack = "rhsusf_assault_eagleaiii_ocp_ar";
        magazines[] = {
            MULT_OBJ_2(rhsusf_100Rnd_556x45_soft_pouch),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_100Rnd_556x45_soft_pouch),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools)
        };
        linkedItems[] = {
            "rhsusf_ach_helmet_ocp",
            "rhsusf_spcs_ocp_saw",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_ach_helmet_ocp",
            "rhsusf_spcs_ocp_saw",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_AssistantAutomaticRifleman_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_AssistantAutomaticRifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_AssistantAutomaticRifleman_F);
        author = ECSTRING(Main,ModTeam);

        role = "Assistant";

        backpack = "rhsusf_assault_eagleaiii_ocp_ar"; \

        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_Machinegunner_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Machinegunner_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Machinegunner_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"rhs_weap_m240B","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m240B","Throw","Put"};
        backpack = "rhsusf_assault_eagleaiii_ocp_ar";
        magazines[] = {
            MULT_OBJ_3(rhsusf_100Rnd_762x51_m62_tracer)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhsusf_100Rnd_762x51_m62_tracer)
        };
        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_AssistantMachineGunner_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_AssistantMachineGunner_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_AssistantMachineGunner_F);
        author = ECSTRING(Main,ModTeam);

        role = "Assistant";

        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_Grenadier_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Grenadier_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Grenadier_F);
        author = ECSTRING(Main,ModTeam);

        role = "Grenadier";

        weapons[] = {"rhs_m4a1_m320_acog","Throw","Put"};
        respawnWeapons[] = {"rhs_m4a1_m320_acog","Throw","Put"};
        backpack = "rhsusf_assault_eagleaiii_ocp_ar";
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_6(rhs_mag_M433_HEDP),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_6(rhs_mag_M433_HEDP),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools)
        };
        linkedItems[] = {
            "rhsusf_ach_helmet_ocp",
            "rhsusf_spcs_ocp_grenadier",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_ach_helmet_ocp",
            "rhsusf_spcs_ocp_grenadier",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    // AT
    class Cav_B_RiflemanLAT_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_RiflemanLAT_F);
        author = ECSTRING(Main,ModTeam);

        role = "MissileSpecialist";

        weapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_M136","Throw","Put"};
        respawnWeapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_M136","Throw","Put"};
    };

    class Cav_B_RiflemanAT_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_RiflemanAT_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_RiflemanAT_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManAT";
        role = "MissileSpecialist";

        weapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_smaw_green","Throw","Put"};
        respawnWeapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_smaw_green","Throw","Put"};
        backpack = "rhsusf_assault_eagleaiii_ocp_maaws";
        
    };
    class Cav_B_RiflemanATAssistant_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_RiflemanATAssistant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_RiflemanATAssistant_F);
        author = ECSTRING(Main,ModTeam);

        role = "Assistant";

        backpack = "rhsusf_assault_eagleaiii_ocp_maaws";
    };

    class Cav_B_RiflemanAA_F : Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_RiflemanAA_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_RiflemanAA_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManAT";
        role = "MissileSpecialist";

        weapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_fim92","Throw","Put"};
        respawnWeapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_fim92","Throw","Put"};
        backpack = "rhsusf_assault_eagleaiii_coy_aa";
    };
    class Cav_B_RiflemanAAAssistant_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_RiflemanAAAssistant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_RiflemanAAAssistant_F);
        author = ECSTRING(Main,ModTeam);
        
        backpack = "rhsusf_assault_eagleaiii_coy_aa";
    };

    class Cav_B_RiflemanATR_F : Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_RiflemanATR_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_RiflemanATR_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManAT";
        role = "MissileSpecialist";

        weapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_fgm148","Throw","Put"};
        respawnWeapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_fgm148","Throw","Put"};
        backpack = "rhsusf_assault_eagleaiii_ocp_at";
    };
    class Cav_B_RiflemanATRAssistant_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_RiflemanATRAssistant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_RiflemanATRAssistant_F);
        author = ECSTRING(Main,ModTeam);

        backpack = "rhsusf_assault_eagleaiii_ocp_at";
    };

    class Cav_B_Sniper_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Sniper_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Sniper_F);
        author = ECSTRING(Main,ModTeam);

        role = "Marksman";
    };
    class Cav_B_Spotter_F: Cav_B_Sniper_F {
        _generalMacro = "Cav_B_Spotter_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Spotter_F);
        author = ECSTRING(Main,ModTeam);

        role = "Marksman";
    };
    class Cav_B_Marksman_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Marksman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Marksman_F);
        author = ECSTRING(Main,ModTeam);

        role = "Marksman";
    };

    // Engineers
    class Cav_B_Engineer_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Engineer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Engineer_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManEngineer";
        role = "Sapper";

    };

    // Medical personal
    class Cav_B_PlatoonMedic_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_PlatoonMedic_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";

        trait = "Medic";

        backpack = "rhsusf_assault_eagleaiii_coy_medic";
    };
    class Cav_B_Medic_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Medic_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Medic_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";

        trait = "Medic";

        backpack = "rhsusf_assault_eagleaiii_coy_medic";
    };
    class Cav_B_Surgeon_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Surgeon_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Surgeon_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";

        trait = "Medic";

        backpack = "rhsusf_assault_eagleaiii_coy_medic";
    };
    class Cav_B_CombatLifeSaver_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_CombatLifeSaver_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";

        trait = "Medic";

        backpack = "rhsusf_assault_eagleaiii_coy_medic";
    };


    // Crew
    class Cav_B_Crew_base_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Crew_base_F";
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(trooper);
        author = ECSTRING(Main,ModTeam);

        role = "Crewman";

        weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        backpack = "";
        magazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellBlue),
            MULT_OBJ_1(SmokeShellYellow)
        };
        respawnMagazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellBlue),
            MULT_OBJ_1(SmokeShellYellow)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad)
        };
        linkedItems[] = {
            "rhsusf_cvc_green_helmet",
            "rhsusf_iotv_ocp_Repair",
            "rhsusf_shemagh_gogg_tan",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_cvc_green_helmet",
            "rhsusf_iotv_ocp_Repair",
            "rhsusf_shemagh_gogg_tan",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    // Crew - IFV/APC
    class Cav_B_IFV_Crew_F: Cav_B_Crew_base_F {
        _generalMacro = "Cav_B_IFV_Crew_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_IFV_Crew_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_IFV_Commander_F: Cav_B_IFV_Crew_F {
        _generalMacro = "Cav_B_IFV_Commander_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_IFV_Commander_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_IFV_Gunner_F: Cav_B_IFV_Crew_F {
        _generalMacro = "Cav_B_IFV_Gunner_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_IFV_Gunner_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_IFV_Driver_F: Cav_B_IFV_Crew_F {
        _generalMacro = "Cav_B_IFV_Driver_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_IFV_Driver_F);
        author = ECSTRING(Main,ModTeam);
    };

    // Crew - Armor
    class Cav_B_Armor_Crew_F: Cav_B_Crew_base_F {
        _generalMacro = "Cav_B_Armor_Crew_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Armor_Crew_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_Armor_Commander_F: Cav_B_Armor_Crew_F {
        _generalMacro = "Cav_B_Armor_Commander_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Armor_Commander_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_Armor_Gunner_F: Cav_B_Armor_Crew_F {
        _generalMacro = "Cav_B_Armor_Gunner_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Armor_Gunner_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_Armor_Driver_F: Cav_B_Armor_Crew_F {
        _generalMacro = "Cav_B_Armor_Driver_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Armor_Driver_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_Armor_Loader_F: Cav_B_Armor_Crew_F {
        _generalMacro = "Cav_B_Armor_Loader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Armor_Loader_F);
        author = ECSTRING(Main,ModTeam);
    };



    // Air - Fixed-Wings
    class Cav_B_Pilot_base_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_Pilot_base_F";
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(trooper);

        ACE_GForceCoef = 0.55;
    };

    class Cav_B_Pilot_F: Cav_B_Pilot_base_F {
        _generalMacro = "Cav_B_Pilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Pilot_F);

        uniformClass = "U_B_HeliPilotCoveralls";
        weapons[] = {"rhsusf_weap_m9","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};
        backpack = "";
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_15Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_15Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad),
            MULT_OBJ_1(rhsusf_ANPVS_14)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad),
            MULT_OBJ_1(rhsusf_ANPVS_14)
        };
        linkedItems[] = {
            "RHS_jetpilot_usaf",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "RHS_jetpilot_usaf",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class Cav_B_CoPilot_F: Cav_B_Pilot_F {
        _generalMacro = "Cav_B_CoPilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_CoPilot_F);
    };

    class Cav_B_PlanePilotLite_F: Cav_B_Pilot_base_F {
        _generalMacro = "Cav_B_PlanePilotLite_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_PlanePilotLite_F);

        weapons[] = {"rhsusf_weap_m9","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};
        backpack = "";
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_15Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_15Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad),
            MULT_OBJ_1(rhsusf_ANPVS_14)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad),
            MULT_OBJ_1(rhsusf_ANPVS_14)
        };
        linkedItems[] = {
            "H_Cap_headphones",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "H_Cap_headphones",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class Cav_B_PlaneCoPilotLite_F: Cav_B_PlanePilotLite_F {
        _generalMacro = "Cav_B_PlaneCoPilotLite_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_PlaneCoPilotLite_F);
    };
    class Cav_B_PlaneCrewLite_F: Cav_B_PlanePilotLite_F {
        _generalMacro = "Cav_B_PlaneCrewLite_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_PlaneCrewLite_F);
    };


    // Air - Helicopters
    class Cav_B_HelicopterPilot_base_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_HelicopterPilot_base_F";
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(trooper);

        ACE_GForceCoef = 0.55;

        weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        backpack = "";
        magazines[] = {
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellBlue),
            MULT_OBJ_1(SmokeShellYellow)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellBlue),
            MULT_OBJ_1(SmokeShellYellow)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad)
        };
        linkedItems[] = {
            "rhsusf_hgu56p_visor_black",
            "rhsusf_spcs_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_hgu56p_visor_black",
            "rhsusf_spcs_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_HelicopterPilot_F: Cav_B_HelicopterPilot_base_F {
        _generalMacro = "Cav_B_HelicopterPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterPilot_F);
    };
    class Cav_B_HelicopterCoPilot_F: Cav_B_HelicopterPilot_F {
        _generalMacro = "Cav_B_HelicopterCoPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterCoPilot_F);
    };
    class Cav_B_HelicopterCrew_F: Cav_B_HelicopterPilot_F {
        _generalMacro = "Cav_B_HelicopterCrew_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterCrew_F);

        linkedItems[] = {
            "rhsusf_hgu56p_visor_mask_black",
            "rhsusf_spcs_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_hgu56p_visor_mask_black",
            "rhsusf_spcs_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_HelicopterAttackPilot_F: Cav_B_HelicopterPilot_base_F {
        _generalMacro = "Cav_B_HelicopterAttackPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterAttackPilot_F);

        items[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad),
            MULT_OBJ_1(rhsusf_ANPVS_14)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(acex_intelitems_notepad),
            MULT_OBJ_1(rhsusf_ANPVS_14)
        };
        linkedItems[] = {
            "rhsusf_ihadss",
            "rhsusf_spcs_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_ihadss",
            "rhsusf_spcs_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class Cav_B_HelicopterAttackCoPilot_F: Cav_B_HelicopterAttackPilot_F {
        _generalMacro = "Cav_B_HelicopterAttackCoPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterAttackCoPilot_F);
    };

    // Independent
    class Cav_I_Soldier_base_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_I_Soldier_base_F";

        side = 2;
        faction = "cav_ind_usa_f";
    };

    class Cav_I_Officer_F: Cav_I_Soldier_base_F {
        _generalMacro = "Cav_I_Officer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_Officer_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };

    class Cav_I_PlatoonSergeant_F: Cav_I_Officer_F {
        _generalMacro = "Cav_I_PlatoonSergeant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_PlatoonSergeant_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };
    class Cav_I_PlatoonLeader_F: Cav_I_Officer_F {
        _generalMacro = "Cav_I_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_PlatoonLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };


    class Cav_I_Rifleman_F: Cav_I_Soldier_base_F {
        _generalMacro = "Cav_I_Rifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_Rifleman_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_I_SquadLeader_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_SquadLeader_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_I_FireTeamLeader_F: Cav_I_SquadLeader_F {
        _generalMacro = "Cav_I_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_FireTeamLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManLeader";
    };

    class Cav_I_AutomaticRifleman_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_AutomaticRifleman_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManLeader";
        role = "MachineGunner";

        weapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};

        magazines[] = {
            MULT_OBJ_3(rhs_200rnd_556x45_M_SAW)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_200rnd_556x45_M_SAW)
        };
        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_I_AssistantAutomaticRifleman_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_AssistantAutomaticRifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_AssistantAutomaticRifleman_F);
        author = ECSTRING(Main,ModTeam);

        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_I_Machinegunner_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_Machinegunner_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_Machinegunner_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManLeader";
        role = "MachineGunner";

        weapons[] = {"rhs_weap_m240B","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m240B","Throw","Put"};

        magazines[] = {
            MULT_OBJ_3(rhsusf_100Rnd_762x51_m62_tracer)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhsusf_100Rnd_762x51_m62_tracer)
        };
        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_I_AssistantMachinegunner_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_AssistantMachineGunner_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_AssistantMachineGunner_F);
        author = ECSTRING(Main,ModTeam);

        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_I_Grenadier_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_Grenadier_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_Grenadier_F);
        author = ECSTRING(Main,ModTeam);
    };

    // AT
    class Cav_I_RiflemanLAT_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_RiflemanLAT_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_I_RiflemanAT_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_RiflemanAT_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_RiflemanAT_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManAT";
    };
    class Cav_I_RiflemanATAssistant_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_RiflemanATAssistant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_RiflemanATAssistant_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_I_RiflemanAA_F : Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_RiflemanAA_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_RiflemanAA_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManAT";
    };
    class Cav_I_RiflemanAAAssistant_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_RiflemanAAAssistant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_RiflemanAAAssistant_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_I_RiflemanATR_F : Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_RiflemanATR_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_RiflemanATR_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManAT";
    };
    class Cav_I_RiflemanATRAssistant_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_RiflemanATRAssistant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_RiflemanATRAssistant_F);
        author = ECSTRING(Main,ModTeam);
    };


    // Medical personal
    class Cav_I_PlatoonMedic_F: Cav_I_Officer_F {
        _generalMacro = "Cav_I_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_PlatoonMedic_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";

        trait = "Medic";
    };
    class Cav_I_Medic_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_Medic_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_Medic_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";

        trait = "Medic";
    };
    class Cav_I_CombatLifeSaver_F: Cav_I_Rifleman_F {
        _generalMacro = "Cav_I_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_I_CombatLifeSaver_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";

        trait = "Medic";
    };


    // Specialized Kits
    class Cav_B_MissionController_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_MissionController_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_MissionController_F);
        author = ECSTRING(Main,ModTeam);
    };
};