#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_Training_base_F",
            "Cav_B_Training_Cadet_F",
            "Cav_B_Training_Cadre_F",
            "Cav_B_Training_DrillInstructor_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(Main,ModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(Main,Url);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"