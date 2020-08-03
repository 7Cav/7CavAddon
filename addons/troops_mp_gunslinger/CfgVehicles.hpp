class CfgVehicles {
    class Cav_B_base_F;
    class Cav_B_MP_Gunslinger_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_MP_Gunslinger_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(common,trooper);
        author = ECSTRING(main,cavmodteam);
        cavCompany = "";
        cavPlatoon = 0;

        editorSubcategory = "Cav_EdSubcat_Personnel_MP_Gunslinger";

        role = "Rifleman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
        linkedItems[] = {
            "rhsusf_spcs_ocp_rifleman_alt",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_rifleman_alt",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_Gunslinger_Officer_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_Officer_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_officer);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_PlatoonLead_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_PlatoonLead_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_platoonlead);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_PlatoonMedic_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_platoonmedic);
        author = ECSTRING(main,cavmodteam);
        
        role = "CombatLifeSaver";
        icon = "iconManMedic";

        linkedItems[] = {
            "rhsusf_spcs_ocp_medic",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_medic",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_Gunslinger_SquadLeader_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_squadleader);
        author = ECSTRING(main,cavmodteam);

        icon = "iconManLeader";

        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};

        magazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };
        respawnMagazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };

        linkedItems[] = {
            "rhsusf_spcs_ocp_teamleader_alt",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Teamleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_Gunslinger_TeamLead_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_TeamLead_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_teamlead);
        author = ECSTRING(main,cavmodteam);

        icon = "iconManLeader";

        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};

        magazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };
        respawnMagazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };

        linkedItems[] = {
            "rhsusf_spcs_ocp_teamleader_alt",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Teamleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_Gunslinger_TeamLead_320_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_TeamLead_320_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_teamlead_320);
        author = ECSTRING(main,cavmodteam);

        icon = "iconManLeader";

        weapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};

        magazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };
        respawnMagazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };

        linkedItems[] = {
            "rhsusf_spcs_ocp_teamleader_alt",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Teamleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_Gunslinger_AutomaticRifleman_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_automaticrifleman);
        author = ECSTRING(main,cavmodteam);

        role = "MachineGunner";
        icon = "iconManMG";

        weapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};

        magazines[] = {
            MULT_OBJ_3(rhs_200rnd_556x45_M_SAW)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_200rnd_556x45_M_SAW)
        };
        linkedItems[] = {
            "rhsusf_spcs_ocp_machinegunner",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_machinegunner",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_Gunslinger_Grenadier_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_grenadier);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Rifleman_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_rifleman);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_CombatLifeSaver_F : Cav_B_MP_Gunslinger_base_F {
        _generalMacro = "Cav_B_Gunslinger_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_combatlifesaver);
        author = ECSTRING(main,cavmodteam);

        role = "CombatLifeSaver";
        icon = "iconManMedic";

        linkedItems[] = {
            "rhsusf_spcs_ocp_medic",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_medic",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    // Team Named
    class Cav_B_Gunslinger_Alpha_TeamLead_F : Cav_B_Gunslinger_TeamLead_F {
        _generalMacro = "Cav_B_Gunslinger_Alpha_TeamLead_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_alpha_teamlead);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Alpha_TeamLead_320_F : Cav_B_Gunslinger_TeamLead_320_F {
        _generalMacro = "Cav_B_Gunslinger_Alpha_TeamLead_320_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_alpha_teamlead_320);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Alpha_AutomaticRifleman_F : Cav_B_Gunslinger_AutomaticRifleman_F {
        _generalMacro = "Cav_B_Gunslinger_Alpha_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_alpha_automaticrifleman);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Alpha_Grenadier_F : Cav_B_Gunslinger_Grenadier_F {
        _generalMacro = "Cav_B_Gunslinger_Alpha_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_alpha_grenadier);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Alpha_Rifleman_F : Cav_B_Gunslinger_Rifleman_F {
        _generalMacro = "Cav_B_Gunslinger_Alpha_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_alpha_rifleman);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Alpha_CombatLifeSaver_F : Cav_B_Gunslinger_CombatLifeSaver_F {
        _generalMacro = "Cav_B_Gunslinger_Alpha_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_alpha_combatlifesaver);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Bravo_TeamLead_F : Cav_B_Gunslinger_TeamLead_F {
        _generalMacro = "Cav_B_Gunslinger_Bravo_TeamLead_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_bravo_teamlead);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Bravo_TeamLead_320_F : Cav_B_Gunslinger_TeamLead_320_F {
        _generalMacro = "Cav_B_Gunslinger_Bravo_TeamLead_320_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_bravo_teamlead_320);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Bravo_AutomaticRifleman_F : Cav_B_Gunslinger_AutomaticRifleman_F {
        _generalMacro = "Cav_B_Gunslinger_Bravo_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_bravo_automaticrifleman);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Bravo_Grenadier_F : Cav_B_Gunslinger_Grenadier_F {
        _generalMacro = "Cav_B_Gunslinger_Bravo_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_bravo_grenadier);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Bravo_Rifleman_F : Cav_B_Gunslinger_Rifleman_F {
        _generalMacro = "Cav_B_Gunslinger_Bravo_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_bravo_rifleman);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_Bravo_CombatLifeSaver_F : Cav_B_Gunslinger_CombatLifeSaver_F {
        _generalMacro = "Cav_B_Gunslinger_Bravo_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_bravo_combatlifesaver);
        author = ECSTRING(main,cavmodteam);
    };

    // Named
    class Cav_B_Gunslinger_SquadLeader_2_1_F : Cav_B_Gunslinger_SquadLeader_F {
        _generalMacro = "Cav_B_Gunslinger_SquadLeader_2_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_squadleader_2_1);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_SquadLeader_2_2_F : Cav_B_Gunslinger_SquadLeader_F {
        _generalMacro = "Cav_B_Gunslinger_SquadLeader_2_2_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_squadleader_2_2);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_SquadLeader_2_3_F : Cav_B_Gunslinger_SquadLeader_F {
        _generalMacro = "Cav_B_Gunslinger_SquadLeader_2_3_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_squadleader_2_3);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_SquadLeader_2_4_F : Cav_B_Gunslinger_SquadLeader_F {
        _generalMacro = "Cav_B_Gunslinger_SquadLeader_2_4_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_squadleader_2_4);
        author = ECSTRING(main,cavmodteam);
    };
    
    class Cav_B_Gunslinger_PlatoonLead_2_5_F : Cav_B_Gunslinger_PlatoonLead_F {
        _generalMacro = "Cav_B_Gunslinger_PlatoonLead_2_5_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_platoonlead_2_5);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_PlatoonLead_2_6_F : Cav_B_Gunslinger_PlatoonLead_F {
        _generalMacro = "Cav_B_Gunslinger_PlatoonLead_2_6_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_platoonlead_2_6);
        author = ECSTRING(main,cavmodteam);
    };
    class Cav_B_Gunslinger_PlatoonMedic_2_7_F : Cav_B_Gunslinger_PlatoonMedic_F {
        _generalMacro = "Cav_B_Gunslinger_PlatoonMedic_2_7_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(gunslinger_platoonmedic_2_7);
        author = ECSTRING(main,cavmodteam);
    };
};