#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_Flag_00_Flag_F",
            "Cav_Flag_00_Banner_F",
            "Cav_Flag_01_Flag_F",
            "Cav_Flag_01_Banner_F",
            "Cav_Flag_02_Flag_F",
            
            "Cav_Flag_bravo_2_flag_F",
            "Cav_Flag_bravo_2_banner_F",
            "Cav_Flag_charlie_1_flag_F",
            "Cav_Flag_charlie_1_banner_F",
            "Cav_Flag_charlie_2_flag_F",
            "Cav_Flag_charlie_2_banner_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(main,cavmodteam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
