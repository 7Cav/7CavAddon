#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_infantry",
            "cav_infantry_alpha",
            "cav_infantry_alpha_labeled",
            "cav_infantry_bravo",
            "cav_infantry_bravo_labeled",
            "cav_infantry_charlie",
            "cav_infantry_charlie_labeled",
            "cav_infantry_hq",
            "cav_infantry_training"
        };
        author = ECSTRING(Main,ModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(Main,Url);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
