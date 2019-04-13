#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_A_AirController_Pegasus_1_F",
            "Cav_B_A_AirController_Pegasus_2_F",
            "Cav_B_A_JFO_Infidel_1_F",
            "Cav_B_A_JFO_Infidel_2_F",
            "Cav_B_A_Helicopter_Tra_Pilot_B1_F",
            "Cav_B_A_Helicopter_Tra_Pilot_B2_F",
            "Cav_B_A_Helicopter_Tra_Pilot_B3_F",
            "Cav_B_A_Helicopter_Tra_Pilot_B4_F",
            "Cav_B_A_Helicopter_Tra_Pilot_B5_F",
            "Cav_B_A_Helicopter_Tra_Pilot_B6_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raider_1_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raider_2_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raider_3_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raider_4_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raven_1_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raven_2_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raven_3_F",
            "Cav_B_A_Helicopter_Att_Pilot_Raven_4_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_2_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_3_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_4_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_5_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_6_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_7_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_8_F",
            "Cav_B_A_Plane_Fighter_Pilot_Hog_9_F",
            "Cav_B_A_Plane_Transport_Pilot_Titan_1_F",
            "Cav_B_A_Plane_Transport_Pilot_Titan_2_F",
            "Cav_B_A_Plane_Transport_Pilot_Titan_3_F",
            "Cav_B_A_Plane_Transport_Pilot_Titan_4_F",

            // Groups
            "Cav_B_A_Buffalo_Team",
            "Cav_B_A_Raven_Team",
            "Cav_B_A_Hog_Team",
            "Cav_B_A_Titan_Team"

        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common",

            "cav_alpha_characters"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"