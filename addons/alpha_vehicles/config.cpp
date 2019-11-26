#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_Alpha_AH64D",
            "Cav_Alpha_UH60M",
            "Cav_Alpha_UH60M2",
            "Cav_Alpha_UH60M_MEV2",
            "Cav_Alpha_CH_47F",
            "Cav_Alpha_C130J",
            "Cav_Alpha_A10"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
