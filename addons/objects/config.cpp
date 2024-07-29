#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_Poster_Small_Enlist_Today_F",
            "Cav_Poster_Big_Enlist_Today_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common",
            "cav_textures"
        };
        author = ECSTRING(Main,ModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(Main,Url);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
