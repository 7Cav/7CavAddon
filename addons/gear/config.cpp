#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_RRD_Parade"
        };
        weapons[] = {
            "Cav_Beret_Mar_F",
            "Cav_Beret_Blk_F",
            "Cav_JMCap_Blk_F",
            "Cav_RngrCap_Blk_F",
            "Cav_B_RRD_Parade_Uniform"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common",
            "A3_Characters_F_Aow"
        };
        author = ECSTRING(main,modteam);
        authors[] = {"Brostrom.A (Evul)", "Richards.D", "Dunn.W"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"