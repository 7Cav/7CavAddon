
class CfgVehicles {
    class B_Soldier_base_F;
    class CavMod_B_base_F : B_Soldier_base_F {
        _generalMacro = "CavMod_B_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(Rifleman_Display);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_base_F.jpg);

        role="Rifleman";

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
    };

    class CavMod_B_Charlie_base_F : CavMod_B_base_F {
        _generalMacro = "CavMod_B_Charlie_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(Rifleman_Display);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_base_F.jpg);
        
        company = "Charlie";
        platoon = -1;
    };

    class CavMod_B_Charlie_Rifleman_F : CavMod_B_Charlie_base_F {
        _generalMacro = "CavMod_B_Charlie_Rifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Charlie_Rifleman_Display);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_Charlie_Rifleman_F.jpg);

        editorSubcategory = "CavMod_EdSubcat_Personnel_Charlie";
        
        uniformClass = "rhs_uniform_cu_ocp_1stcav";

        weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};

        magazines[] = {
            MULT_OBJ_3(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_30Rnd_556x45_M855A1_Stanag)
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
};
