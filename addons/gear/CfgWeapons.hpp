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
	
	class UniformItem;
	
	class Cav_B_RRD_Parade_Uniform : ItemCore
	{
		author = "Dunn.W";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "Cavalry Officer Parade Uniform (Decorated)";
		picture = QPATHTOF(Data\UI\icon_h_RRDUniform.paa);
		class ItemInfo : UniformItem
		{
			uniformClass = Cav_B_RRD_Parade;
			containerClass = Supply40;
			mass = 40;
		};
		
	};
	
	class Cav_Stetson : ItemCore
	{
		author = "Richards.D";
		scope = 2; /// scope needs to be 2 to have a visible class
		scopeCurator = 2;
        scopeArsenal = 2;
		displayName  = "Cavarly Stetson"; /// how would the stuff be displayed in inventory and on ground
		picture = QPATHTOF(Data\UI\icon_h_stetson_ca.paa); /// this looks fairly similar
		model   = QPATHTOF(DAR_Stetson); /// what model does the cap use
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[] = {QPATHTOF(Data\RRD_Uniform\Stetson_co.paa)}; /// what texture is going to be used
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = QPATHTOF(DAR_Stetson);	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides
			hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[] = {QPATHTOF(Data\RRD_Uniform\Stetson_co.paa)};
		};
	};
};
