class CfgVehicles {
    class Cav_B_base_F;
    class Cav_B_Bravo_Scout_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_Bravo_Scout_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = ECSTRING(common,trooper);
        author = ECSTRING(Main,ModTeam);
        cavCompany = "Bravo";
        cavPlatoon = 2;

        editorSubcategory = "Cav_EdSubcat_Personnel_Bravo_Viking";

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

    class Cav_B_B_Scout_Officer_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_Officer_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_officer);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_PlatoonLead_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_PlatoonLead_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_platoonlead);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_PlatoonMedic_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_platoonmedic);
        author = ECSTRING(Main,ModTeam);
        
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

    class Cav_B_B_Scout_SquadLeader_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_squadleader);
        author = ECSTRING(Main,ModTeam);

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
    class Cav_B_B_Scout_TeamLead_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_TeamLead_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_teamlead);
        author = ECSTRING(Main,ModTeam);

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
    class Cav_B_B_Scout_TeamLead_320_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_TeamLead_320_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_teamlead_320);
        author = ECSTRING(Main,ModTeam);

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
    class Cav_B_B_Scout_AutomaticRifleman_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_automaticrifleman);
        author = ECSTRING(Main,ModTeam);

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
    class Cav_B_B_Scout_Grenadier_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_grenadier);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Rifleman_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_rifleman);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_CombatLifeSaver_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_combatlifesaver);
        author = ECSTRING(Main,ModTeam);

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

    class Cav_B_B_Scout_Crew_F : Cav_B_Bravo_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_Crew_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_crew);
        author = ECSTRING(Main,ModTeam);
        
        linkedItems[] = {
            "rhsusf_spcs_ocp_crewman",
            "rhsusf_cvc_helmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_crewman",
            "rhsusf_cvc_helmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_B_Scout_Gunner_F : Cav_B_B_Scout_Crew_F {
        _generalMacro = "Cav_B_B_Scout_Gunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_gunner);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Driver_F : Cav_B_B_Scout_Crew_F {
        _generalMacro = "Cav_B_B_Scout_Driver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_driver);
        author = ECSTRING(Main,ModTeam);
    };

    // Team Named
    class Cav_B_B_Scout_Alpha_TeamLead_F : Cav_B_B_Scout_TeamLead_F {
        _generalMacro = "Cav_B_B_Scout_Alpha_TeamLead_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_alpha_teamlead);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Alpha_TeamLead_320_F : Cav_B_B_Scout_TeamLead_320_F {
        _generalMacro = "Cav_B_B_Scout_Alpha_TeamLead_320_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_alpha_teamlead_320);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Alpha_AutomaticRifleman_F : Cav_B_B_Scout_AutomaticRifleman_F {
        _generalMacro = "Cav_B_B_Scout_Alpha_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_alpha_automaticrifleman);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Alpha_Grenadier_F : Cav_B_B_Scout_Grenadier_F {
        _generalMacro = "Cav_B_B_Scout_Alpha_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_alpha_grenadier);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Alpha_Rifleman_F : Cav_B_B_Scout_Rifleman_F {
        _generalMacro = "Cav_B_B_Scout_Alpha_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_alpha_rifleman);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Alpha_CombatLifeSaver_F : Cav_B_B_Scout_CombatLifeSaver_F {
        _generalMacro = "Cav_B_B_Scout_Alpha_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_alpha_combatlifesaver);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Bravo_TeamLead_F : Cav_B_B_Scout_TeamLead_F {
        _generalMacro = "Cav_B_B_Scout_Bravo_TeamLead_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_bravo_teamlead);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Bravo_TeamLead_320_F : Cav_B_B_Scout_TeamLead_320_F {
        _generalMacro = "Cav_B_B_Scout_Bravo_TeamLead_320_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_bravo_teamlead_320);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Bravo_AutomaticRifleman_F : Cav_B_B_Scout_AutomaticRifleman_F {
        _generalMacro = "Cav_B_B_Scout_Bravo_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_bravo_automaticrifleman);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Bravo_Grenadier_F : Cav_B_B_Scout_Grenadier_F {
        _generalMacro = "Cav_B_B_Scout_Bravo_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_bravo_grenadier);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Bravo_Rifleman_F : Cav_B_B_Scout_Rifleman_F {
        _generalMacro = "Cav_B_B_Scout_Bravo_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_bravo_rifleman);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_Bravo_CombatLifeSaver_F : Cav_B_B_Scout_CombatLifeSaver_F {
        _generalMacro = "Cav_B_B_Scout_Bravo_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_bravo_combatlifesaver);
        author = ECSTRING(Main,ModTeam);
    };

    // Named
    class Cav_B_B_Scout_SquadLeader_2_1_F : Cav_B_B_Scout_SquadLeader_F {
        _generalMacro = "Cav_B_B_Scout_SquadLeader_2_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_squadleader_2_1);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_SquadLeader_2_2_F : Cav_B_B_Scout_SquadLeader_F {
        _generalMacro = "Cav_B_B_Scout_SquadLeader_2_2_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_squadleader_2_2);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_SquadLeader_2_3_F : Cav_B_B_Scout_SquadLeader_F {
        _generalMacro = "Cav_B_B_Scout_SquadLeader_2_3_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_squadleader_2_3);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_SquadLeader_2_4_F : Cav_B_B_Scout_SquadLeader_F {
        _generalMacro = "Cav_B_B_Scout_SquadLeader_2_4_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_squadleader_2_4);
        author = ECSTRING(Main,ModTeam);
    };
    
    class Cav_B_B_Scout_PlatoonLead_2_5_F : Cav_B_B_Scout_PlatoonLead_F {
        _generalMacro = "Cav_B_B_Scout_PlatoonLead_2_5_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_platoonlead_2_5);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_PlatoonLead_2_6_F : Cav_B_B_Scout_PlatoonLead_F {
        _generalMacro = "Cav_B_B_Scout_PlatoonLead_2_6_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_platoonlead_2_6);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_B_Scout_PlatoonMedic_2_7_F : Cav_B_B_Scout_PlatoonMedic_F {
        _generalMacro = "Cav_B_B_Scout_PlatoonMedic_2_7_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(b_scout_platoonmedic_2_7);
        author = ECSTRING(Main,ModTeam);
    };


    // Depricated
    class Cav_B_B_Scout_Team_Leader_F : Cav_B_B_Scout_TeamLead_F {
        _generalMacro = "Cav_B_B_Scout_Team_Leader_F";
        scope = 1;
        scopeCurator = 0;
    };
    class Cav_B_B_Scout_Trooper_F : Cav_B_B_Scout_Rifleman_F {
        _generalMacro = "Cav_B_B_Scout_Trooper_F";
        scope = 1;
        scopeCurator = 0;
    };
    class Cav_B_B_Scout_Platoon_Medic_F : Cav_B_B_Scout_PlatoonMedic_F {
        _generalMacro = "Cav_B_B_Scout_Platoon_Medic_F";
        scope = 1;
        scopeCurator = 0;
    };
};