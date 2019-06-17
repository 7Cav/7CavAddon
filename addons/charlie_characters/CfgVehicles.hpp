
class CfgVehicles {
    class Cav_B_base_F;
    class Cav_B_Charlie_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_Charlie_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);
        cavCompany = "Charlie";
        cavPlatoon = -1;

        editorSubcategory = "Cav_EdSubcat_Personnel_Charlie";

        role = "Rifleman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };
    class Cav_B_Charlie_Weap_base_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_Charlie_Weap_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);

        editorSubcategory = "Cav_EdSubcat_Personnel_Weap_Charlie";

        role = "Rifleman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };

    // Charlie
    class Cav_B_C_Officer_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_Officer_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Officer);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class Cav_B_C_PlatoonSergeant_F : Cav_B_C_Officer_F {
        _generalMacro = "Cav_B_C_PlatoonSergeant_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_PlatoonSergeant);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_PlatoonLeader_F : Cav_B_C_Officer_F {
        _generalMacro = "Cav_B_C_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_PlatoonLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_PlatoonMedic_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_PlatoonMedic);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    class Cav_B_C_SquadLeader_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_SquadLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";

        linkedItems[] = {
            "rhsusf_iotv_ocp_Squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Squadleader",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };


    class Cav_B_C_FireTeamLeader_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

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
            "rhsusf_iotv_ocp_Teamleader",
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
    class Cav_B_C_AutomaticRifleman_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

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
    class Cav_B_C_Grenadier_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

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
            "rhsusf_iotv_ocp_Grenadier",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Grenadier",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_C_Rifleman_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_RiflemanAT_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class Cav_B_C_RiflemanLAT_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class Cav_B_C_CombatLifeSaver_F : Cav_B_Charlie_base_F {
        _generalMacro = "Cav_B_C_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
        linkedItems[] = {
            "rhsusf_iotv_ocp_Medic",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Medic",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };


    class Cav_B_C_Alpha_FireTeamLeader_F : Cav_B_C_FireTeamLeader_F {
        _generalMacro = "Cav_B_C_Alpha_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Alpha_AutomaticRifleman_F : Cav_B_C_AutomaticRifleman_F {
        _generalMacro = "Cav_B_C_Alpha_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Alpha_Grenadier_F : Cav_B_C_Grenadier_F {
        _generalMacro = "Cav_B_C_Alpha_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Alpha_Rifleman_F : Cav_B_C_Rifleman_F {
        _generalMacro = "Cav_B_C_Alpha_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Alpha_RiflemanAT_F : Cav_B_C_RiflemanAT_F {
        _generalMacro = "Cav_B_C_Alpha_RiflemanAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Alpha_RiflemanLAT_F : Cav_B_C_RiflemanLAT_F {
        _generalMacro = "Cav_B_C_Alpha_RiflemanLAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

    };
    class Cav_B_C_Alpha_CombatLifeSaver_F : Cav_B_C_CombatLifeSaver_F {
        _generalMacro = "Cav_B_C_Alpha_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };


    class Cav_B_C_Bravo_FireTeamLeader_F : Cav_B_C_FireTeamLeader_F {
        _generalMacro = "Cav_B_C_Bravo_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Bravo_AutomaticRifleman_F : Cav_B_C_AutomaticRifleman_F {
        _generalMacro = "Cav_B_C_Bravo_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Bravo_Grenadier_F : Cav_B_C_Grenadier_F {
        _generalMacro = "Cav_B_C_Bravo_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Bravo_Rifleman_F : Cav_B_C_Rifleman_F {
        _generalMacro = "Cav_B_C_Bravo_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Bravo_RiflemanAT_F : Cav_B_C_RiflemanAT_F {
        _generalMacro = "Cav_B_C_Bravo_RiflemanAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Bravo_RiflemanLAT_F : Cav_B_C_Alpha_RiflemanLAT_F {
        _generalMacro = "Cav_B_C_Bravo_RiflemanLAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Bravo_CombatLifeSaver_F : Cav_B_C_CombatLifeSaver_F {
        _generalMacro = "Cav_B_C_Bravo_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };


    // Havoc
    class Cav_B_C_Weap_SquadLeader_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_SquadLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_SquadLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };

    class Cav_B_C_Weap_FireTeamLeader_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

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
    };
    class Cav_B_C_Weap_AutomaticRifleman_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

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
    };
    class Cav_B_C_Weap_Grenadier_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

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
    };
    class Cav_B_C_Weap_Rifleman_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_RiflemanAT_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_RiflemanAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class Cav_B_C_Weap_RiflemanLAT_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_RiflemanLAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class Cav_B_C_Weap_CombatLifeSaver_F : Cav_B_Charlie_Weap_base_F {
        _generalMacro = "Cav_B_C_Weap_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };

    class Cav_B_C_Weap_Alpha_FireTeamLeader_F : Cav_B_C_Weap_FireTeamLeader_F {
        _generalMacro = "Cav_B_C_Weap_Alpha_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Alpha_AutomaticRifleman_F : Cav_B_C_Weap_AutomaticRifleman_F {
        _generalMacro = "Cav_B_C_Weap_Alpha_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Alpha_Grenadier_F : Cav_B_C_Weap_Grenadier_F {
        _generalMacro = "Cav_B_C_Weap_Alpha_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Alpha_Rifleman_F : Cav_B_C_Weap_Rifleman_F {
        _generalMacro = "Cav_B_C_Weap_Alpha_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Alpha_RiflemanAT_F : Cav_B_C_Weap_RiflemanAT_F {
        _generalMacro = "Cav_B_C_Weap_Alpha_RiflemanAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Alpha_RiflemanLAT_F : Cav_B_C_Weap_RiflemanLAT_F {
        _generalMacro = "Cav_B_C_Weap_Alpha_RiflemanLAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Alpha_CombatLifeSaver_F : Cav_B_C_Weap_CombatLifeSaver_F {
        _generalMacro = "Cav_B_C_Weap_Alpha_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };


    class Cav_B_C_Weap_Bravo_FireTeamLeader_F : Cav_B_C_Weap_FireTeamLeader_F {
        _generalMacro = "Cav_B_C_Weap_Bravo_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Bravo_AutomaticRifleman_F : Cav_B_C_Weap_AutomaticRifleman_F {
        _generalMacro = "Cav_B_C_Weap_Bravo_AutomaticRifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Bravo_Grenadier_F : Cav_B_C_Weap_Grenadier_F {
        _generalMacro = "Cav_B_C_Weap_Bravo_Grenadier_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Bravo_Rifleman_F : Cav_B_C_Weap_Rifleman_F {
        _generalMacro = "Cav_B_C_Weap_Bravo_Rifleman_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Bravo_RiflemanAT_F : Cav_B_C_Weap_RiflemanAT_F {
        _generalMacro = "Cav_B_C_Weap_Bravo_RiflemanAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Bravo_RiflemanLAT_F : Cav_B_C_Weap_RiflemanLAT_F {
        _generalMacro = "Cav_B_C_Weap_Bravo_RiflemanLAT_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weap_Bravo_CombatLifeSaver_F : Cav_B_C_Weap_CombatLifeSaver_F {
        _generalMacro = "Cav_B_C_Weap_Bravo_CombatLifeSaver_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
};