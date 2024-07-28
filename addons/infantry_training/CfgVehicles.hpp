class CfgVehicles {
    class Cav_B_Soldier_base_F;
    class Cav_B_Training_base_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 1;
        scopeCurator = 0;

        cav_company = "training";
        cav_platoon = -1;
        cav_squad = -1;

        role = "Rifleman";
        icon = "iconMan";
        editorSubcategory = "Cav_EdSubcat_Infantry_Training";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};

        magazines[] = {};
        respawnMagazines[] = {};

        items[] = {};
        respawnItems[] = {};

        linkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class Cav_B_Training_Cadre_F: Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadre_F);

        linkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };

        icon = "iconManLeader";
    };
    class Cav_B_Training_Drill_Instructor_F: Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Drill_Instructor_F);
        
        linkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };

        icon = "iconManOfficer";
    };

    class Cav_B_Training_Cadet_F: Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Cadet_F);
        
        uniformClass = "rhs_uniform_cu_ocp";
    };

    class Cav_B_Training_Instructor_F: Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Instructor_F);
        
        linkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ACE_Vector",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };

        icon = "iconManOfficer";
    };
    class Cav_B_Training_Trainee_F: Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Trainee_F);
        
        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_patrolcap_ocp",
            "rhsusf_iotv_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class Cav_B_Training_Recruit_F: Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Training_Recruit_F);

        uniformClass = "rhs_uniform_cu_ocp";
        
        linkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
};