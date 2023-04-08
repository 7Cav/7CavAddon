class CfgVehicles {
    class Cav_B_Soldier_base_F;
    class Cav_B_Bravo_Atlas_base_F : Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Bravo_Atlas_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = ECSTRING(common,trooper);
        author = ECSTRING(main,modteam);
        cavCompany = "Bravo";
        cavPlatoon = 3;

        editorSubcategory = "Cav_EdSubcat_Personnel_Bravo_Atlas";

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
    class Cav_B_B_Atlas_Medic_TeamLeader_F : Cav_B_Bravo_Atlas_base_F {
        _generalMacro = "Cav_B_B_Atlas_Medic_TeamLeader_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(medic_teamleader);
        author = ECSTRING(main,modteam);

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
    class Cav_B_B_Atlas_Medic_CombatMedic_F : Cav_B_Bravo_Atlas_base_F {
        _generalMacro = "Cav_B_B_Atlas_Medic_CombatMedic_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(medic_combatmedic);
        author = ECSTRING(main,modteam);
        

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

    class Cav_B_B_Atlas_Logistics_Officer_F : Cav_B_Bravo_Atlas_base_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_Officer_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_officer);
        author = ECSTRING(main,modteam);
        

        icon = "iconManOfficer";
    };
    class Cav_B_B_Atlas_Logistics_OpsOfficer_F : Cav_B_B_Atlas_Logistics_Officer_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_OpsOfficer_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_opsofficer);
        author = ECSTRING(main,modteam);
        
    };
    class Cav_B_B_Atlas_Logistics_OpsNCO_F : Cav_B_B_Atlas_Logistics_Officer_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_OpsNCO_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_opsnco);
        author = ECSTRING(main,modteam);
        
    };
    class Cav_B_B_Atlas_Logistics_TeamLeader_F : Cav_B_Bravo_Atlas_base_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_TeamLeader_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_teamleader);
        author = ECSTRING(main,modteam);
        

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
    class Cav_B_B_Atlas_Logistics_TeamMember_F : Cav_B_Bravo_Atlas_base_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_TeamMember_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_teammember);
        author = ECSTRING(main,modteam);
    };


    // Named
    class Cav_B_B_Atlas_Medic_TeamLeader_3_1_F : Cav_B_B_Atlas_Medic_TeamLeader_F {
        _generalMacro = "Cav_B_B_Atlas_Medic_TeamLeader_3_1_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(medic_teamleader_3_1);
        author = ECSTRING(main,modteam);
    };
    class Cav_B_B_Atlas_Medic_TeamLeader_3_2_F : Cav_B_B_Atlas_Medic_TeamLeader_F {
        _generalMacro = "Cav_B_B_Atlas_Medic_TeamLeader_3_2_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(medic_teamleader_3_2);
        author = ECSTRING(main,modteam);
    };

    class Cav_B_B_Atlas_Logistics_TeamLeader_3_3_F : Cav_B_B_Atlas_Logistics_TeamLeader_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_TeamLeader_3_3_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_teamleader_3_3);
        author = ECSTRING(main,modteam);
    };
    class Cav_B_B_Atlas_Logistics_TeamLeader_3_4_F : Cav_B_B_Atlas_Logistics_TeamLeader_F {
        _generalMacro = "Cav_B_B_Atlas_Medic_TeamLeader_3_4_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_teamleader_3_4);
        author = ECSTRING(main,modteam);
    };    

    class Cav_B_B_Atlas_Logistics_OpsNCO_3_5_F : Cav_B_B_Atlas_Logistics_OpsNCO_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_OpsNCO_3_5_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_opsnco_3_5);
        author = ECSTRING(main,modteam);
    };
    class Cav_B_B_Atlas_Logistics_OpsOfficer_3_6_F : Cav_B_B_Atlas_Logistics_OpsOfficer_F {
        _generalMacro = "Cav_B_B_Atlas_Logistics_OpsOfficer_3_6_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(logistics_opsofficer_3_6);
        author = ECSTRING(main,modteam);
    };
};