
class CfgVehicles {
    class Cav_B_base_F;
    class Cav_B_Training_base_F : Cav_B_base_F {
        _generalMacro = "Cav_B_Training_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Training);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);
        cavCompany = "Training";
        cavPlatoon = -1;

        editorSubcategory = "Cav_EdSubcat_Personnel_Training";

        role = "Rifleman";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };
    class Cav_B_Training_Cadet_F : Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_Cadet_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Cadet);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);

        editorSubcategory = "Cav_EdSubcat_Personnel_Weap_Charlie";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };
    class Cav_B_Training_Cadre_F : Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_Cadre_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Cadre);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);

        editorSubcategory = "Cav_EdSubcat_Personnel_Weap_Charlie";

        icon = "iconManLeader";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };
    class Cav_B_Training_DrillInstructor_F : Cav_B_Training_base_F {
        _generalMacro = "Cav_B_Training_Drill_Instructor_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(Drill_Instructor);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);

        editorSubcategory = "Cav_EdSubcat_Personnel_Weap_Charlie";

        icon = "iconManOfficer";

        uniformClass = "rhs_uniform_cu_ocp_1stcav";
    };
};