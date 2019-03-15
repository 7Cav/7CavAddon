
class CfgVehicles {
    class B_Soldier_base_F;
    class CavMod_B_base_F : B_Soldier_base_F {
        _generalMacro = "CavMod_B_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_base_F.jpg);
        cavCompany = "";
        cavPlatoon = -1;

        role = "Rifleman";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 1;
        faction = "BLU_USA_7CAV_F";

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
            "rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
            "rhsusf\addons\rhsusf_infantry\data\patches\1CAV_ocp_co.paa"
        };

        uniformClass = "rhs_uniform_cu_ocp_1stcav";

        weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};

        magazines[] = {
            MULT_OBJ_12(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        respawnMagazines[] = {
            MULT_OBJ_12(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhsusf_iotv_ocp_Rifleman",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Rifleman",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };


    class CavMod_B_Bravo_base_F : CavMod_B_base_F {
        _generalMacro = "CavMod_B_Bravo_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_base_F.jpg);
        cavCompany = "Charlie";
        cavPlatoon = -1;

        editorSubcategory = "CavMod_EdSubcat_Personnel_Bravo";

        role = "Rifleman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };
    class CavMod_B_Bravo_Crew_base_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_Bravo_Crew_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_base_F.jpg);
        linkedItems[] = {
            "rhsusf_iotv_ocp_Rifleman",
            "rhsusf_cvc_helmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Rifleman",
            "rhsusf_cvc_helmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };


    class CavMod_B_Charlie_base_F : CavMod_B_base_F {
        _generalMacro = "CavMod_B_Charlie_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);
        cavCompany = "Charlie";
        cavPlatoon = -1;

        editorSubcategory = "CavMod_EdSubcat_Personnel_Charlie";

        role = "Rifleman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };
    class CavMod_B_Charlie_Weap_base_F : CavMod_B_base_F {
        _generalMacro = "CavMod_B_Charlie_Weap_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);
        cavCompany = "Charlie";
        cavPlatoon = -1;

        editorSubcategory = "CavMod_EdSubcat_Personnel_Weap_Charlie";

        role = "Rifleman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };


    // Bravo
    class CavMod_B_B_PlatoonSergeant_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_PlatoonSergeant_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_PlatoonSergeant);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class CavMod_B_B_PlatoonLeader_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_PlatoonLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class CavMod_B_B_PlatoonMedic_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_PlatoonMedic);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    class CavMod_B_B_Tank_Commander_F : CavMod_B_Bravo_Crew_base_F {
        _generalMacro = "CavMod_B_B_Tank_Commander_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Commander);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class CavMod_B_B_Tank_Driver_F : CavMod_B_Bravo_Crew_base_F {
        _generalMacro = "CavMod_B_B_Tank_Driver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Driver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class CavMod_B_B_Tank_Gunner_F : CavMod_B_Bravo_Crew_base_F {
        _generalMacro = "CavMod_B_B_Tank_Gunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Gunner);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class CavMod_B_B_Tank_Loader_F : CavMod_B_Bravo_Crew_base_F {
        _generalMacro = "CavMod_B_B_Tank_Loader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Tank_Loader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };

    class CavMod_B_B_Ifv_Commander_F : CavMod_B_Bravo_Crew_base_F {
        _generalMacro = "CavMod_B_B_Ifv_Commander_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Ifv_Commander);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class CavMod_B_B_Ifv_Driver_F : CavMod_B_Bravo_Crew_base_F {
        _generalMacro = "CavMod_B_B_Ifv_Driver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Ifv_Driver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class CavMod_B_B_Ifv_Gunner_F : CavMod_B_Bravo_Crew_base_F {
        _generalMacro = "CavMod_B_B_Ifv_Gunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Ifv_Gunner);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);


    class CavMod_B_B_SquadLeader_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_SquadLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";
    };


    class CavMod_B_B_Alpha_FireTeamLeader_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_Alpha_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_FireTeamLeader);
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
    };
    class CavMod_B_B_Alpha_AutomaticRifleman_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_Alpha_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        role = "MachineGunner";
        icon = "iconManMG";

        weapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};

        magazines[] = {
            MULT_OBJ_5(rhs_200rnd_556x45_M_SAW)
        };
        respawnMagazines[] = {
            MULT_OBJ_5(rhs_200rnd_556x45_M_SAW)
        };
    };
    class CavMod_B_B_Alpha_Grenadier_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_Alpha_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_Grenadier);
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
    };
    class CavMod_B_B_Alpha_Rifleman_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_Alpha_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class CavMod_B_B_Alpha_RiflemanAT_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_Alpha_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_B_Alpha_RiflemanLAT_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_Alpha_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_B_Alpha_CombatLifeSaver_F : CavMod_B_Bravo_base_F {
        _generalMacro = "CavMod_B_B_Alpha_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Alpha_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    class CavMod_B_B_Bravo_FireTeamLeader_F : CavMod_B_B_Alpha_FireTeamLeader_F {
        _generalMacro = "CavMod_B_B_Bravo_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class CavMod_B_B_Bravo_AutomaticRifleman_F : CavMod_B_B_Alpha_AutomaticRifleman_F {
        _generalMacro = "CavMod_B_B_Bravo_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        role = "MachineGunner";
        icon = "iconManMG";
    };
    class CavMod_B_B_Bravo_Grenadier_F : CavMod_B_B_Alpha_Grenadier_F {
        _generalMacro = "CavMod_B_B_Bravo_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class CavMod_B_B_Bravo_Rifleman_F : CavMod_B_B_Alpha_Rifleman_F {
        _generalMacro = "CavMod_B_B_Bravo_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);
    };
    class CavMod_B_B_Bravo_RiflemanAT_F : CavMod_B_B_Alpha_RiflemanAT_F {
        _generalMacro = "CavMod_B_B_Bravo_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_B_Bravo_RiflemanLAT_F : CavMod_B_B_Alpha_RiflemanLAT_F {
        _generalMacro = "CavMod_B_B_Bravo_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_B_Bravo_CombatLifeSaver_F : CavMod_B_B_Alpha_CombatLifeSaver_F {
        _generalMacro = "CavMod_B_B_Bravo_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(B_Bravo_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Bravo_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };



    // Charlie
    class CavMod_B_C_PlatoonSergeant_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_PlatoonSergeant_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_PlatoonSergeant);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class CavMod_B_C_PlatoonLeader_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_PlatoonLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    class CavMod_B_C_PlatoonMedic_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_PlatoonMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_PlatoonMedic);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    class CavMod_B_C_SquadLeader_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_SquadLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };


    class CavMod_B_C_Alpha_FireTeamLeader_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_Alpha_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_FireTeamLeader);
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
    class CavMod_B_C_Alpha_AutomaticRifleman_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_Alpha_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "MachineGunner";
        icon = "iconManMG";
        
        weapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};

        magazines[] = {
            MULT_OBJ_5(rhs_200rnd_556x45_M_SAW)
        };
        respawnMagazines[] = {
            MULT_OBJ_5(rhs_200rnd_556x45_M_SAW)
        };
    };
    class CavMod_B_C_Alpha_Grenadier_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_Alpha_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_Grenadier);
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
    class CavMod_B_C_Alpha_Rifleman_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_Alpha_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class CavMod_B_C_Alpha_RiflemanAT_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_Alpha_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Alpha_RiflemanLAT_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_Alpha_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Alpha_CombatLifeSaver_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_C_Alpha_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Alpha_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    class CavMod_B_C_Bravo_FireTeamLeader_F : CavMod_B_C_Alpha_FireTeamLeader_F {
        _generalMacro = "CavMod_B_C_Bravo_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";

        weapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
    };
    class CavMod_B_C_Bravo_AutomaticRifleman_F : CavMod_B_C_Alpha_AutomaticRifleman_F {
        _generalMacro = "CavMod_B_C_Bravo_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "MachineGunner";
        icon = "iconManMG";
    };
    class CavMod_B_C_Bravo_Grenadier_F : CavMod_B_C_Alpha_Grenadier_F {
        _generalMacro = "CavMod_B_C_Bravo_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class CavMod_B_C_Bravo_Rifleman_F : CavMod_B_C_Alpha_Rifleman_F {
        _generalMacro = "CavMod_B_C_Bravo_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class CavMod_B_C_Bravo_RiflemanAT_F : CavMod_B_C_Alpha_RiflemanAT_F {
        _generalMacro = "CavMod_B_C_Bravo_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Bravo_RiflemanLAT_F : CavMod_B_C_Alpha_RiflemanLAT_F {
        _generalMacro = "CavMod_B_C_Bravo_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Bravo_CombatLifeSaver_F : CavMod_B_C_Alpha_CombatLifeSaver_F {
        _generalMacro = "CavMod_B_C_Bravo_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Bravo_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    // Havoc
    class CavMod_B_C_Weap_SquadLeader_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_SquadLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };


    class CavMod_B_C_Weap_Alpha_FireTeamLeader_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_Alpha_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_FireTeamLeader);
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
    class CavMod_B_C_Weap_Alpha_AutomaticRifleman_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_Alpha_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "MachineGunner";
        icon = "iconManMG";
        
        weapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};

        magazines[] = {
            MULT_OBJ_5(rhs_200rnd_556x45_M_SAW)
        };
        respawnMagazines[] = {
            MULT_OBJ_5(rhs_200rnd_556x45_M_SAW)
        };
    };
    class CavMod_B_C_Weap_Alpha_Grenadier_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_Alpha_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_Grenadier);
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
    class CavMod_B_C_Weap_Alpha_Rifleman_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_Alpha_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class CavMod_B_C_Weap_Alpha_RiflemanAT_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_Alpha_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Weap_Alpha_RiflemanLAT_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_Alpha_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Weap_Alpha_CombatLifeSaver_F : CavMod_B_Charlie_Weap_base_F {
        _generalMacro = "CavMod_B_C_Weap_Alpha_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Alpha_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };


    class CavMod_B_C_Weap_Bravo_FireTeamLeader_F : CavMod_B_C_Weap_Alpha_FireTeamLeader_F {
        _generalMacro = "CavMod_B_C_Weap_Bravo_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_FireTeamLeader);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class CavMod_B_C_Weap_Bravo_AutomaticRifleman_F : CavMod_B_C_Weap_Alpha_AutomaticRifleman_F {
        _generalMacro = "CavMod_B_C_Weap_Bravo_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_AutomaticRifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "MachineGunner";
        icon = "iconManMG";
    };
    class CavMod_B_C_Weap_Bravo_Grenadier_F : CavMod_B_C_Weap_Alpha_Grenadier_F {
        _generalMacro = "CavMod_B_C_Weap_Bravo_Grenadier_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_Grenadier);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class CavMod_B_C_Weap_Bravo_Rifleman_F : CavMod_B_C_Weap_Alpha_Rifleman_F {
        _generalMacro = "CavMod_B_C_Weap_Bravo_Rifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_Rifleman);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class CavMod_B_C_Weap_Bravo_RiflemanAT_F : CavMod_B_C_Weap_Alpha_RiflemanAT_F {
        _generalMacro = "CavMod_B_C_Weap_Bravo_RiflemanAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_RiflemanAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Weap_Bravo_RiflemanLAT_F : CavMod_B_C_Weap_Alpha_RiflemanLAT_F {
        _generalMacro = "CavMod_B_C_Weap_Bravo_RiflemanLAT_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_RiflemanLAT);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class CavMod_B_C_Weap_Bravo_CombatLifeSaver_F : CavMod_B_C_Weap_Alpha_CombatLifeSaver_F {
        _generalMacro = "CavMod_B_C_Weap_Bravo_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(C_Weap_Bravo_CombatLifeSaver);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        role = "CombatLifeSaver";
        icon = "iconManMedic";
    };
};
