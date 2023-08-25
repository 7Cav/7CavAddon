class CfgVehicles {
    class Cav_B_Soldier_base_F;
    class Cav_B_Alpha_Company_base_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Alpha_Company_base_F";
        scope = 1;
        scopeCurator = 0;

        cav_company = "alpha";
        cav_platoon = -1;
        cav_squad = -1;

        role = "Rifleman";
        icon = "iconMan";
        editorSubcategory = "Cav_EdSubcat_Infantry_Alpha";

        ACE_GForceCoef = 0.55;

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

    class Cav_B_A_Officer_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);

        ACE_GForceCoef = 1;
    };

    class Cav_B_A_JTAC_F: Cav_B_A_Officer_F {
        _generalMacro = "Cav_B_A_JTAC_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_A_JTAC_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_A_TACP_F: Cav_B_A_Officer_F {
        _generalMacro = "Cav_B_A_TACP_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_A_TACP_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_B_A_Pilot_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };
    class Cav_B_A_CoPilot_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };

    class Cav_B_A_PilotLite_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };
    class Cav_B_A_CoPilotLite_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };
    class Cav_B_A_CrewLite_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };

    class Cav_B_A_HelicopterPilot_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };
    class Cav_B_A_HelicopterCrew_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };

    class Cav_B_A_HelicopterAttackPilot_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };
    class Cav_B_A_HelicopterAttackCoPilot_F: Cav_B_Alpha_Company_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);
    };
};