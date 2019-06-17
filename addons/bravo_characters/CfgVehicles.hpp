class CfgVehicles {
    class Cav_B_base_F;
    class Cav_B_Bravo_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_Bravo_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_base_F.jpg);
        cavCompany = "Bravo";
        cavPlatoon = -1;

        editorSubcategory = "Cav_EdSubcat_Personnel_Bravo";

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
    class Cav_B_Bravo_Crew_base_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_Bravo_Crew_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_base_F.jpg);
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
    class Cav_B_Bravo_Logi_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_Bravo_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_base_F.jpg);
        cavCompany = "Bravo";
        cavPlatoon = -1;

        editorSubcategory = "Cav_EdSubcat_Personnel_Logi_Bravo";

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

    // Bravo
    class Cav_B_B_PlatoonSergeant_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_PlatoonSergeant_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_PlatoonSergeant);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class Cav_B_B_PlatoonLeader_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_PlatoonLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class Cav_B_B_PlatoonMedic_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_PlatoonMedic);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    class Cav_B_B_Tank_Commander_F : Cav_B_Bravo_Crew_base_F {
        _generalMacro = "Cav_B_B_Tank_Commander_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Commander);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class Cav_B_B_Tank_Driver_F : Cav_B_Bravo_Crew_base_F {
        _generalMacro = "Cav_B_B_Tank_Driver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Driver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Tank_Gunner_F : Cav_B_Bravo_Crew_base_F {
        _generalMacro = "Cav_B_B_Tank_Gunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Gunner);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Tank_Loader_F : Cav_B_Bravo_Crew_base_F {
        _generalMacro = "Cav_B_B_Tank_Loader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Loader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };

    class Cav_B_B_Ifv_Commander_F : Cav_B_Bravo_Crew_base_F {
        _generalMacro = "Cav_B_B_Ifv_Commander_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Ifv_Commander);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class Cav_B_B_Ifv_Driver_F : Cav_B_Bravo_Crew_base_F {
        _generalMacro = "Cav_B_B_Ifv_Driver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Ifv_Driver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Ifv_Gunner_F : Cav_B_Bravo_Crew_base_F {
        _generalMacro = "Cav_B_B_Ifv_Gunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Ifv_Gunner);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };


    class Cav_B_B_SquadLeader_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_SquadLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";

        linkedItems[] = {
            "rhsusf_spcs_ocp_squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_B_FireTeamLeader_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

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
    class Cav_B_B_AutomaticRifleman_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

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
    class Cav_B_B_Grenadier_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
        
        weapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};

        magazines[] = {
            MULT_OBJ_10(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };
        respawnMagazines[] = {
            MULT_OBJ_10(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_12(rhs_mag_M441_HE)
        };
        linkedItems[] = {
            "rhsusf_spcs_ocp_grenadier",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_grenadier",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_B_Rifleman_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_RiflemanAT_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class Cav_B_B_RiflemanLAT_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class Cav_B_B_CombatLifeSaver_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_B_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

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

    class Cav_B_B_Alpha_FireTeamLeader_F : Cav_B_B_FireTeamLeader_F {
        _generalMacro = "Cav_B_B_Alpha_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Alpha_AutomaticRifleman_F : Cav_B_B_AutomaticRifleman_F {
        _generalMacro = "Cav_B_B_Alpha_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Alpha_Grenadier_F : Cav_B_B_Grenadier_F {
        _generalMacro = "Cav_B_B_Alpha_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Alpha_Rifleman_F : Cav_B_B_Rifleman_F {
        _generalMacro = "Cav_B_B_Alpha_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Alpha_RiflemanAT_F : Cav_B_B_RiflemanAT_F {
        _generalMacro = "Cav_B_B_Alpha_RiflemanAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Alpha_RiflemanLAT_F : Cav_B_B_RiflemanLAT_F {
        _generalMacro = "Cav_B_B_Alpha_RiflemanLAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Alpha_CombatLifeSaver_F : Cav_B_B_CombatLifeSaver_F {
        _generalMacro = "Cav_B_B_Alpha_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };


    class Cav_B_B_Bravo_FireTeamLeader_F : Cav_B_B_FireTeamLeader_F {
        _generalMacro = "Cav_B_B_Bravo_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Bravo_AutomaticRifleman_F : Cav_B_B_AutomaticRifleman_F {
        _generalMacro = "Cav_B_B_Bravo_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Bravo_Grenadier_F : Cav_B_B_Grenadier_F {
        _generalMacro = "Cav_B_B_Bravo_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Bravo_Rifleman_F : Cav_B_B_Rifleman_F {
        _generalMacro = "Cav_B_B_Bravo_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Bravo_RiflemanAT_F : Cav_B_B_RiflemanAT_F {
        _generalMacro = "Cav_B_B_Bravo_RiflemanAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Bravo_RiflemanLAT_F : Cav_B_B_RiflemanLAT_F {
        _generalMacro = "Cav_B_B_Bravo_RiflemanLAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Bravo_CombatLifeSaver_F : Cav_B_B_CombatLifeSaver_F {
        _generalMacro = "Cav_B_B_Bravo_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };


    class Cav_B_B_TeamLeader_Mustang_F : Cav_B_Bravo_Logi_base_F {
        _generalMacro = "Cav_B_B_TeamLeader_Mustang_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_TeamLeader_Mustang);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";

        linkedItems[] = {
            "rhsusf_spcs_ocp_squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_B_Mustang_CombatMedic_F : Cav_B_Bravo_Logi_base_F {
        _generalMacro = "Cav_B_B_Mustang_CombatMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_CombatMedic_Mustang);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

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


    class Cav_B_B_LogisticsOpsOfficer_F : Cav_B_Bravo_Logi_base_F {
        _generalMacro = "Cav_B_B_LogisticsOpsOfficer_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_LogisticsOpsOfficer);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class Cav_B_B_LogisticsOpsNCO_F : Cav_B_Bravo_Logi_base_F {
        _generalMacro = "Cav_B_B_LogisticsOpsNCO_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_LogisticsOpsNCO);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };

    class Cav_B_B_LogisticTeamLeader_F : Cav_B_Bravo_Logi_base_F {
        _generalMacro = "Cav_B_B_LogisticTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_LogisticTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";

        linkedItems[] = {
            "rhsusf_spcs_ocp_squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_B_LogisticsTeamMember_F : Cav_B_Bravo_Logi_base_F {
        _generalMacro = "Cav_B_B_LogisticsTeamMember_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_LogisticsTeamMember);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };

};