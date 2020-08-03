class cfgWeapons {
    class ItemCore;
    class HeadgearItem;
    
    class Cav_Beret_Mar_F : ItemCore {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory="EdCat_Equipment";
        editorSubcategory="EdSubcat_Hats";
        weaponPoolAvailable = 1;
        displayName = CSTRING(beret_mar);
        author = "Richards.D";
        picture = QPATHTOF(Data\UI\icon_h_beret02_ca.paa);
        model = QPATHTOF(headgear_beret02);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(Data\Maroon_BeretArmyUSA\headgear_beret02_co.paa)
        };
        
        class ItemInfo : HeadgearItem {
            mass = 5;
            uniformmodel = QPATHTOF(headgear_beret02);
            modelSides[] = {3, 1};
            armor = 0;
            passThrough = 0.95;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(Data\Maroon_BeretArmyUSA\headgear_beret02_co.paa)
            };
        };
    };
    
    class Cav_Beret_Blk_F : ItemCore {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory="EdCat_Equipment";
        editorSubcategory="EdSubcat_Hats";
        weaponPoolAvailable = 1;
        displayName = CSTRING(beret_blk);
        author = "Richards.D";
        picture = QPATHTOF(Data\UI\icon_h_beret02_ca.paa);
        model = QPATHTOF(headgear_beret02);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(Data\Maroon_BeretArmyUSA\headgear_beret03_co.paa)
        };
        
        class ItemInfo : HeadgearItem {
            mass = 5;
            uniformmodel = QPATHTOF(headgear_beret02);
            modelSides[] = {3, 1};
            armor = 0;
            passThrough = 0.95;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(Data\Maroon_BeretArmyUSA\headgear_beret03_co.paa)
            };
        };
    };
    
    class Cav_JMCap_Blk_F : ItemCore {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory="EdCat_Equipment";
        editorSubcategory="EdSubcat_Hats";
        weaponPoolAvailable = 1;
        displayName = CSTRING(jmcap_blk);
        author = "Richards.D";
        picture = QPATHTOF(Data\UI\icon_H_Cap_blk_CA.paa);
        model = QPATHTOF(capb);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(Data\BlackJumpMaster\capb_black_co.paa)
        };
        
        class ItemInfo : HeadgearItem {
            mass = 5;
            uniformmodel = QPATHTOF(capb);
            modelSides[] = {3, 1};
            armor = 0;
            passThrough = 0.95;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(Data\BlackJumpMaster\capb_black_co.paa)
            };
        };
    };
    
    class Cav_RngrCap_Blk_F : ItemCore {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory="EdCat_Equipment";
        editorSubcategory="EdSubcat_Hats";
        weaponPoolAvailable = 1;
        displayName = CSTRING(rngrcap_blk);
        author = "Richards.D";
        picture = QPATHTOF(Data\UI\icon_H_Cap_blk_CA.paa);
        model = QPATHTOF(capb);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(Data\BlackJumpMaster\capb_black_ranger_co.paa)
        };
        
        class ItemInfo : HeadgearItem {
            mass = 5;
            uniformmodel = QPATHTOF(capb);
            modelSides[] = {3, 1};
            armor = 0;
            passThrough = 0.95;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(Data\BlackJumpMaster\capb_black_ranger_co.paa)
            };
        };
    };
};
