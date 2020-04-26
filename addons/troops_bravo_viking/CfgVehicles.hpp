class CfgVehicles {
    class Cav_B_Bravo_base_F;
    
    class Cav_B_Scout_base_F : Cav_B_Bravo_base_F {
        _generalMacro = "Cav_B_Scout_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);
        cavCompany = "Bravo";
        cavPlatoon = 2;

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

    class Cav_B_B_Scout_Officer_F : Cav_B_B_Scout_Trooper_F {
        _generalMacro = "Cav_B_B_Scout_Officer_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Officer);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Scout_PlatoonLead_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_PlatoonLead_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_PlatoonLead_F);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Scout_PlatoonMedic_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_PlatoonMedic_F);
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

    class Cav_B_B_Scout_SquadLeader_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_SquadLeader_F);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

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
    class Cav_B_B_Scout_TeamLead_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_TeamLead_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

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
    class Cav_B_B_Scout_TeamLead_320_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_TeamLead_320_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_TeamLead_320_F);
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
    class Cav_B_B_Scout_AutomaticRifleman_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_AutomaticRifleman_F);
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
    class Cav_B_B_Scout_Grenadier_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Grenadier_F);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Scout_Rifleman_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Rifleman_F);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Scout_CombatLifeSaver_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_CombatLifeSaver_F);
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

    class Cav_B_B_Scout_Crew_F : Cav_B_Scout_base_F {
        _generalMacro = "Cav_B_B_Scout_Crew_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Crew);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
        
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
        displayName = CSTRING(B_Scout_Gunner);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Scout_Driver_F : Cav_B_B_Scout_Crew_F {
        _generalMacro = "Cav_B_B_Scout_Driver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Driver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };

    class Cav_B_B_Scout_Team_Leader_F : Cav_B_B_Scout_TeamLead_F {                  // Depricated
        _generalMacro = "Cav_B_B_Scout_Team_Leader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Team_Leader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Scout_Trooper_F : Cav_B_B_Scout_Rifleman_F {                      // Depricated
        _generalMacro = "Cav_B_B_Scout_Trooper_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class Cav_B_B_Scout_Platoon_Medic_F : Cav_B_B_Scout_PlatoonMedic_F {            // Depricated
        _generalMacro = "Cav_B_B_Scout_Platoon_Medic_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(B_Scout_Platoon_Medic);
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
};