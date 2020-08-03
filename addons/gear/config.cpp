#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "Cav_Beret_Mar_F",
            "Cav_Beret_Blk_F",
            "Cav_JMCap_Blk_F",
            "Cav_RngrCap_Blk_F"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(main,cavmodteam);
        authors[] = {"Brostrom.A (Evul)", "Richards.D"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
