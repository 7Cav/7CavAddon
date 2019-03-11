#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Alpha first platoon
            //"Cav_Insignia_Alpha_1",
            //"Cav_Insignia_Alpha_1_A",
            //"Cav_Insignia_Alpha_1_B",
            "Cav_Insignia_Alpha_1_C",
            //"Cav_Insignia_Alpha_1_D",

            // Alpha second platoon
            "Cav_Insignia_Alpha_2",
            "Cav_Insignia_Alpha_2_A",
            "Cav_Insignia_Alpha_2_B",
            "Cav_Insignia_Alpha_2_C",
            //"Cav_Insignia_Alpha_2_D",


            // Bravo first platoon
            //"Cav_Insignia_Bravo_1",
            //"Cav_Insignia_Bravo_1_A",
            //"Cav_Insignia_Bravo_1_B",
            //"Cav_Insignia_Bravo_1_C",
            //"Cav_Insignia_Bravo_1_D",

            // Bravo second platoon
            "Cav_Insignia_Bravo_2",
            "Cav_Insignia_Bravo_2_1",
            //"Cav_Insignia_Bravo_2_2",
            //"Cav_Insignia_Bravo_2_3",
            //"Cav_Insignia_Bravo_2_4",
            

            // Charlie first platoon
            "Cav_Insignia_Charlie_1",
            "Cav_Insignia_Charlie_1_1",
            "Cav_Insignia_Charlie_1_2",
            "Cav_Insignia_Charlie_1_3",
            "Cav_Insignia_Charlie_1_4",

            // Charlie second platoon
            "Cav_Insignia_Charlie_2",
            "Cav_Insignia_Charlie_2_1",
            //"Cav_Insignia_Charlie_2_2",
            //"Cav_Insignia_Charlie_2_3",
            //"Cav_Insignia_Charlie_2_4",


            // Other Insignias
            "Cav_Insignia_Custom_Cav_7",
            "Cav_Insignia_Custom_Cav_7_m81",
            "Cav_Insignia_Custom_Cav_7_ocp",


            // Specialized
            "Cav_Insignia_Specialized_Airborne",
            "Cav_Insignia_Specialized_CLS",
            "Cav_Insignia_Specialized_Ranger",
            "Cav_Insignia_Specialized_FollowMe"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cavmod_main",
            "cavmod_common"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgUnitInsignia.hpp"
