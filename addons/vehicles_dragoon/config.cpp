#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "cav_dragoon_F",
            "cav_dragoon_Unarmed_F",
            "cav_dragoon_Unarmed_WD",
            "cav_dragoon_Unarmed_D",
            "cav_dragoon_Unarmed_A",
            "cav_dragoon_WD",
            "cav_dragoon_WD_PA",
            "cav_dragoon_WD_V1",
            "cav_dragoon_WD_V2",
            "cav_dragoon_WD_V3",
            "cav_dragoon_WD_V4",
            "cav_dragoon_WD_V5",
            "cav_dragoon_WD_V6",
            "cav_dragoon_WD_WH7",
            "cav_dragoon_D",
            "cav_dragoon_D_V1",
            "cav_dragoon_D_V2",
            "cav_dragoon_D_V3",
            "cav_dragoon_D_V4",
            "cav_dragoon_D_V5",
            "cav_dragoon_D_V6",
            "cav_dragoon_D_WH7",
            "cav_dragoon_A",
            "cav_dragoon_A_V1",
            "cav_dragoon_A_V2",
            "cav_dragoon_A_V3",
            "cav_dragoon_A_V4",
            "cav_dragoon_A_V5",
            "cav_dragoon_A_V6",
            "cav_dragoon_A_WH7"
        };
        weapons[] = {
            "cav_dragoon_coax",
            "cav_dragoon_autocannon_30mm_CTWS",
            "cav_dragoon_missile_launcher"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(main,modteam);
        authors[] = {"Narramoor.A"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
