class CfgVehicles {
    class Cav_B_base_F;
    class Cav_B_Charlie_Weapons_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_Charlie_Weapons_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = ECSTRING(common,trooper);
        author = ECSTRING(Main,ModTeam);
        cavCompany = "Charlie";
        cavPlatoon = 0;

        editorSubcategory = "Cav_EdSubcat_Personnel_Charlie_Weapons";

        role = "Rifleman";

        weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};

        magazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red),
            MULT_OBJ_2(rhs_mag_m67)
        };
        respawnMagazines[] = {
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red),
            MULT_OBJ_2(rhs_mag_m67)
        };

        uniformClass = "rhs_uniform_acu_oefcp";
        linkedItems[] = {
            "rhsusf_spcs_ocp_rifleman",
            "rhsusf_ach_helmet_camo_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp_rifleman",
            "rhsusf_ach_helmet_camo_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_C_Weapons_SquadLeader_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_SquadLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(squadleader);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };

    class Cav_B_C_Weapons_M240B_FireTeamLeader_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(m240b_fireteamleader);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class Cav_B_C_Weapons_M240B_Machinegunner_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_M240B_Machinegunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(m240b_machinegunner);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManMG";
    };
    class Cav_B_C_Weapons_M240B_MachinegunnerAmmoBearer_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_M240B_MachinegunnerAmmoBearer_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(m240b_machinegunnerammobearer);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };

    class Cav_B_C_Weapons_MAAWS_FireTeamLeader_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_MAAWS_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(maaws_fireteamleader);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class Cav_B_C_Weapons_MAAWS_MAAWSGunner_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_MAAWS_MAAWSGunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(maaws_maawsgunner);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManAT";
    };
    class Cav_B_C_Weapons_MAAWS_MAAWSAssistant_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_MAAWS_MAAWSAssistant_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(maaws_maawsassistant);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManMG";
    };
    
    class Cav_B_C_Weapons_Mortar_FireTeamLeader_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_Mortar_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(mortar_fireteamleader);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManLeader";
    };
    class Cav_B_C_Weapons_Mortar_M224_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_Mortar_M224_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(mortar_m224);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Mortar_Assistant_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_Mortar_Assistant_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(mortar_assistant);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Mortar_AutomaticRifleman_F : Cav_B_Charlie_Weapons_base_F {
        _generalMacro = "Cav_B_C_Weapons_Mortar_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(mortar_automaticrifleman);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManMG";
    };

    // Named
    class Cav_B_C_Weapons_SquadLeader_1_4_F : Cav_B_C_Weapons_SquadLeader_F {
        _generalMacro = "Cav_B_C_Weapons_SquadLeader_1_4_F ";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(squadleader_1_4);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

    };
    class Cav_B_C_Weapons_SquadLeader_2_4_F : Cav_B_C_Weapons_SquadLeader_F {
        _generalMacro = "Cav_B_C_Weapons_SquadLeader_2_4_F ";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(squadleader_2_4);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

    };

    class Cav_B_C_Weapons_Alpha_FireTeamLeader_F : Cav_B_C_Weapons_M240B_FireTeamLeader_F {
        _generalMacro = "Cav_B_C_Weapons_Alpha_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(alpha_fireteamleader);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Alpha_Trooper_2_F : Cav_B_C_Weapons_M240B_Machinegunner_F {
        _generalMacro = "Cav_B_C_Weapons_Alpha_Trooper_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(alpha_trooper_2);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Alpha_Trooper_3_F : Cav_B_C_Weapons_M240B_Machinegunner_F {
        _generalMacro = "Cav_B_C_Weapons_Alpha_Trooper_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(alpha_trooper_3);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Alpha_Trooper_4_F : Cav_B_C_Weapons_M240B_Machinegunner_F {
        _generalMacro = "Cav_B_C_Weapons_Alpha_Trooper_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(alpha_trooper_4);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };

    class Cav_B_C_Weapons_Bravo_FireTeamLeader_F : Cav_B_C_Weapons_M240B_FireTeamLeader_F {
        _generalMacro = "Cav_B_C_Weapons_Bravo_FireTeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(bravo_fireteamleader);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Bravo_Trooper_2_F : Cav_B_C_Weapons_M240B_Machinegunner_F {
        _generalMacro = "Cav_B_C_Weapons_Bravo_Trooper_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(bravo_trooper_2);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Bravo_Trooper_3_F : Cav_B_C_Weapons_M240B_Machinegunner_F {
        _generalMacro = "Cav_B_C_Weapons_Bravo_Trooper_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(bravo_trooper_3);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_C_Weapons_Bravo_Trooper_4_F : Cav_B_C_Weapons_M240B_Machinegunner_F {
        _generalMacro = "Cav_B_C_Weapons_Bravo_Trooper_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(bravo_trooper_4);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
};