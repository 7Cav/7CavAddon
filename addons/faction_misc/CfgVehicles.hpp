class CfgVehicles {
    class rhsusf_army_bdu_erdl_uniform;
    class Cav_B_French_Soldier_F : rhsusf_army_bdu_erdl_uniform {
        _generalMacro = "Cav_B_French_Soldier_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(french_soldier);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_base_F.jpg);

        editorSubcategory = "EdSubcat_Personnel_Story";

        role = "Rifleman";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageFRE_F","Head_NATO","G_NATO_default"};

        side = 1;
        faction = "BLU_USA_7CAV_F";

        uniformClass = "rhs_uniform_bdu_erdl";

        weapons[] = {"rhs_weap_vhsd2","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_vhsd2","Throw","Put"};

        magazines[] = {
            MULT_OBJ_9(rhsgref_30rnd_556x45_vhs2)
        };
        respawnMagazines[] = {
            MULT_OBJ_9(rhsgref_30rnd_556x45_vhs2)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_PlateCarrier1_rgr_noflag_F",
            "rhsgref_helmet_pasgt_woodland_rhino",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "V_PlateCarrier1_rgr_noflag_F",
            "rhsgref_helmet_pasgt_woodland_rhino",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class Cav_B_French_Soldier_2_F : Cav_B_French_Soldier_F {
        _generalMacro = "Cav_B_French_Soldier_2_F";
        
        weapons[] = {"cav_weap_rhs_weap_hk416d145","Throw","Put"};
        respawnWeapons[] = {"cav_weap_rhs_weap_hk416d145","Throw","Put"};

        magazines[] = {
            MULT_OBJ_9(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        respawnMagazines[] = {
            MULT_OBJ_9(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
    };
    class rhsusf_army_acu_ocp_uniform;
    class Cav_B_British_Soldier_F : rhsusf_army_acu_ocp_uniform {
        _generalMacro = "Cav_B_British_Soldier_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(british_soldier);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_base_F.jpg);

        editorSubcategory = "EdSubcat_Personnel_Story";

        role = "Rifleman";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_default"};
        side = 1;
        faction = "BLU_USA_7CAV_F";

        uniformClass = "rhs_uniform_acu_ocp";

        weapons[] = {"arifle_SDAR_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","Throw","Put"};

        magazines[] = {
            MULT_OBJ_9(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        respawnMagazines[] = {
            MULT_OBJ_9(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_PlateCarrierL_CTRG",
            "rhsusf_ach_helmet_ocp_alt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "V_PlateCarrierL_CTRG",
            "rhsusf_ach_helmet_ocp_alt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
};