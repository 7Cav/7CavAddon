#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_Scout_base_F",
            "Cav_B_B_Scout_Platoon_Medic_F",
            "Cav_B_B_Scout_Trooper_F",
            "Cav_B_B_Scout_Officer_F",
            "Cav_B_B_Scout_Team_Leader_F",
            "Cav_B_B_Scout_Crew_F",
            "Cav_B_B_Scout_Gunner_F",
            "Cav_B_B_Scout_Driver_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_bravo_characters"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEditorSubcategories.hpp"