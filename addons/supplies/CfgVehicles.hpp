
class CfgVehicles {
    class B_CargoNet_01_ammo_F;
    class Cav_B_CargoNet_01_ammo_F : B_CargoNet_01_ammo_F {
        _generalMacro = "Cav_B_CargoNet_01_ammo_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(cargonet_01_ammo);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
            QPATHTOF(data\Ammobox_7CAV_co.paa)
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };

    class Box_NATO_Ammo_F;
    class Cav_Box_Ammo_F : Box_NATO_Ammo_F {
        _generalMacro = "Cav_Box_Ammo_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Ammo);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Ammobox_7CAV_co.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_mag_30Rnd_556x45_M855A1_Stanag,18);
            MACRO_ADDMAGAZINE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,18);
            MACRO_ADDMAGAZINE(rhsusf_200rnd_556x45_mixed_box,6);
            MACRO_ADDMAGAZINE(rhsusf_100Rnd_762x51_m62_tracer,4);
        };
        class TransportWeapons {
        };
    };

    class Box_NATO_Wps_F;
    class Cav_Box_Wps_F : Box_NATO_Wps_F {
        _generalMacro = "Cav_Box_Wps_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Wps);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Ammobox_7CAV_co.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
    class Box_NATO_Equip_F;
    class Cav_Box_Equip_F : Box_NATO_Equip_F {
        _generalMacro = "Cav_Box_Equip_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Equip);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Ammobox_7CAV_co.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
    class Box_NATO_AmmoOrd_F;
    class Cav_Box_AmmoOrd_F : Box_NATO_AmmoOrd_F {
        _generalMacro = "Cav_Box_AmmoOrd_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_AmmoOrd);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Ammobox_7CAV_co.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
    class Box_NATO_Grenades_F;
    class Cav_Box_Grenades_F : Box_NATO_Grenades_F {
        _generalMacro = "Cav_Box_Grenades_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Grenades);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Ammobox_7CAV_co.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(HandGrenade,10);
            MACRO_ADDMAGAZINE(SmokeShell,14);
            MACRO_ADDMAGAZINE(SmokeShellRed,3);
            MACRO_ADDMAGAZINE(SmokeShellBlue,3);
            MACRO_ADDMAGAZINE(SmokeShellGreen,3);
            MACRO_ADDMAGAZINE(SmokeShellOrange,3);
            MACRO_ADDMAGAZINE(SmokeShellYellow,3);
            MACRO_ADDMAGAZINE(SmokeShellPurple,3);
            MACRO_ADDMAGAZINE(B_IR_Grenade,4);
            MACRO_ADDMAGAZINE(ACE_M84,8);
        };
        class TransportWeapons {
        };
    };
    class Box_NATO_WpsLaunch_F;
    class Cav_Box_WpsLaunch_F : Box_NATO_WpsLaunch_F {
        _generalMacro = "Cav_Box_WpsLaunch_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_WpsLaunch);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Ammobox_7CAV_co.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
    class Box_NATO_WpsSpecial_F;
    class Cav_Box_WpsSpecial_F : Box_NATO_WpsSpecial_F {
        _generalMacro = "Cav_Box_WpsSpecial_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_WpsLaunch);
        author = ECSTRING(main,cavmodteam);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Ammobox_7CAV_co.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
    class B_supplyCrate_F;
    class Cav_B_supplyCrate_F : B_supplyCrate_F {
        _generalMacro = "Cav_B_supplyCrate_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(B_supplyCrate);
        author = ECSTRING(main,cavmodteam);
        
        /*class AttributeCategories {
            class Cav_Starter_Crate_Category  {
                displayName = CSTRING(StarterCrateSettings);
                collapsed = 1;

                class Cav_SC_Platoon_Type {
                    class Attributes  {
                        //--- Mandatory properties
                        displayName = "My Attribute"; // Name assigned to UI control class Title
                        tooltip = "Configure all the things!"; // Tooltip assigned to UI control class Title
                        property = "MyAttributeUniqueID"; // Unique config property name saved in SQM
                        control = "Edit"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes

                        // Expression called when applying the attribute in Eden and at the scenario start
                        // The expression is called twice - first for data validation, and second for actual saving
                        // Entity is passed as _this, value is passed as _value
                        // %s is replaced by attribute config name. It can be used only once in the expression
                        // In MP scenario, the expression is called only on server.
                        expression = "_this setVariable ['%s',_value];";

                        // Expression called when custom property is undefined yet (i.e., when setting the attribute for the first time)
                        // Entity (unit, group, marker, comment etc.) is passed as _this
                        // Returned value is the default value
                        // Used when no value is returned, or when it's of other type than NUMBER, STRING or ARRAY
                        // Custom attributes of logic entities (e.g., modules) are saved always, even when they have default value
                        defaultValue = "42";

                        //--- Optional properties
                        unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                        validate = "number"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
                        condition = "object"; // Condition for attribute to appear (see the table below)
                        typeName = "NUMBER"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
                    };
                };
            };
        }; */
        
        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
};
