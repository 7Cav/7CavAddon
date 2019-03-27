#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_B_PlatoonSergeant_2_5_F",
            "Cav_B_B_PlatoonLeader_2_6_F",
            "Cav_B_B_PlatoonMedic_2_7_F",
            "Cav_B_B_SquadLeader_1_1_F",
            "Cav_B_B_SquadLeader_1_2_F",
            "Cav_B_B_SquadLeader_1_3_F",
            "Cav_B_B_SquadLeader_1_4_F",
            "Cav_B_B_SquadLeader_2_1_F",
            "Cav_B_B_SquadLeader_2_2_F",
            "Cav_B_B_SquadLeader_2_3_F",
            "Cav_B_B_SquadLeader_2_4_F",
            "Cav_B_B_Ifv_Commander_B_1_F",
            "Cav_B_B_Ifv_Commander_B_2_F",
            "Cav_B_B_Ifv_Commander_B_3_F",
            "Cav_B_B_Ifv_Commander_B_4_F",

            // Groups
            "Cav_B_B_Viking_5_HQ",
            "Cav_B_B_Viking_6_HQ",
            "Cav_B_B_Viking_7_HQ",
            "Cav_B_B_Viking_1_Squad",
            "Cav_B_B_Viking_2_Squad",
            "Cav_B_B_Viking_3_Squad",
            "Cav_B_B_Viking_4_Squad",
            "Cav_B_B_Viking_1_WithCrew_Squad",
            "Cav_B_B_Viking_2_WithCrew_Squad",
            "Cav_B_B_Viking_3_WithCrew_Squad",
            "Cav_B_B_Viking_4_WithCrew_Squad",
            "Cav_B_B_Banshee_1_Squad",
            "Cav_B_B_Banshee_2_Squad",
            "Cav_B_B_Banshee_3_Squad",
            "Cav_B_B_Banshee_4_Squad"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common",
            
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