#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_Alpha_base_F",

            "Cav_B_A_AirController_F",
            "Cav_B_A_Officer_F",
            "Cav_B_A_JFO_F",
            
            "Cav_B_A_Helicopter_Tra_Pilot_F",
            "Cav_B_A_Helicopter_Tra_coPilot_F",
            "Cav_B_A_Helicopter_Tra_CrewChief_F",
            "Cav_B_A_Helicopter_Tra_DoorGunner_F",

            "Cav_B_A_Helicopter_Att_Pilot_F",
            "Cav_B_A_Helicopter_Att_coPilot_F",

            "Cav_B_A_Plane_Fighter_Pilot_F",
            
            "Cav_B_A_Plane_Transport_Pilot_F",
            "Cav_B_A_Plane_Transport_coPilot_F",

            // Groups
            "Cav_B_A_Buffalo_Team",
            "Cav_B_A_Raven_Team",
            "Cav_B_A_Raider_Team",
            "Cav_B_A_Hog_Team",
            "Cav_B_A_Titan_Team"

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
#include "CfgGroups.hpp"
#include "CfgEditorSubcategories.hpp"