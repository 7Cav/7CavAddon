
class CfgVehicles {
    class Cav_B_base_F;
    class Cav_B_Alpha_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_Alpha_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Trooper);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);
        cavCompany = "Alpha";
        cavPlatoon = -1;

        editorSubcategory = "Cav_EdSubcat_Personnel_Alpha";

        role = "Crewman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";

        linkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
    };

    // Alpha
    class Cav_B_A_AirController_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_C_AirController_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_AirController);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManOfficer";
    };
    // Officers
    class Cav_B_A_Officer_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Officer_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Officer);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManOfficer";

        linkedItems[] = {
            "rhsusf_spcs_ocp",
            "rhsusf_patrolcap_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp",
            "rhsusf_patrolcap_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class Cav_B_A_JFO_F : Cav_B_A_Officer_F {
        _generalMacro = "Cav_B_A_JFO_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_JFO);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        icon = "iconManOfficer";

        linkedItems[] = {
            "rhsusf_spcs_ocp",
            "rhsusf_patrolcap_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhsusf_spcs_ocp",
            "rhsusf_patrolcap_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class Cav_B_A_Helicopter_Tra_Pilot_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Helicopter_Tra_Pilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Helicopter_Tra_Pilot);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_A_Helicopter_Tra_coPilot_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Helicopter_Tra_coPilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Helicopter_Tra_coPilot);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_A_Helicopter_Tra_CrewChief_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Helicopter_Tra_CrewChief_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Helicopter_Tra_CrewChief);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        linkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_visor_mask_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_visor_mask_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
    };
    class Cav_B_A_Helicopter_Tra_DoorGunner_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Helicopter_Tra_DoorGunner_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Helicopter_Tra_DoorGunner);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        linkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_visor_mask_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_visor_mask_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
    };


    class Cav_B_A_Helicopter_Att_Pilot_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Helicopter_Att_Pilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Helicopter_Att_Pilot);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
                
        linkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
    };
    class Cav_B_A_Helicopter_Att_coPilot_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Helicopter_Att_coPilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Helicopter_Att_coPilot);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        linkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_mbav_light",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
    };


    class Cav_B_A_Plane_Fighter_Pilot_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Plane_Fighter_Pilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Plane_Fighter_Pilot);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
        ACE_GForceCoef = 0.55;
        
        uniformClass = "U_B_PilotCoveralls";

        linkedItems[] = {
            "RHS_jetpilot_usaf",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "RHS_jetpilot_usaf",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
    };


    class Cav_B_A_Plane_Transport_Pilot_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Plane_Transport_Pilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Plane_Transport_Pilot);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
    class Cav_B_A_Plane_Transport_coPilot_F : Cav_B_Alpha_base_F {
        _generalMacro = "Cav_B_A_Plane_Transport_coPilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(A_Plane_Transport_coPilot);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);
    };
};
