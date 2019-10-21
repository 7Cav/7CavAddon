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

            "Cav_B_B_Scout_Platoon_Medic_2_7_F",
            "Cav_B_B_Scout_Team_Leader_2_1_F",
            "Cav_B_B_Scout_Team_Leader_2_2_F",
            "Cav_B_B_Scout_Team_Leader_2_3_F",
            "Cav_B_B_Scout_Team_Leader_2_4_F",

            "Cav_B_B_Ifv_Commander_B_1_F",
            "Cav_B_B_Ifv_Commander_B_2_F",
            "Cav_B_B_Ifv_Commander_B_3_F",
            "Cav_B_B_Ifv_Commander_B_4_F",

            "Cav_B_B_Tank_Commander_Saber_1_F",
            "Cav_B_B_Tank_Commander_Saber_2_F",
            "Cav_B_B_Tank_Commander_Saber_3_F",
            "Cav_B_B_Tank_Commander_Saber_4_F",

            "Cav_B_B_TeamLeader_Mustang_1_F",
            "Cav_B_B_TeamLeader_Mustang_2_F",
            
            "Cav_B_B_LogisticsOpsOfficer_Apollo_6_F",
            "Cav_B_B_LogisticsOpsNCO_Apollo_5_F",
            "Cav_B_B_LogisticTeamLeader_Apollo_1_F",
            "Cav_B_B_LogisticTeamLeader_Apollo_2_F",

            // Groups
            "Cav_B_B_Lancer_5_HQ",
            "Cav_B_B_Lancer_6_HQ",
            "Cav_B_B_Lancer_7_HQ",
            "Cav_B_B_Lancer_1_Squad",
            "Cav_B_B_Lancer_2_Squad",
            "Cav_B_B_Lancer_3_Squad",
            "Cav_B_B_Lancer_4_Squad",

            "Cav_B_B_Viking_5_HQ",
            "Cav_B_B_Viking_6_HQ",
            "Cav_B_B_Viking_7_HQ",
            "Cav_B_B_Viking_1_Squad",
            "Cav_B_B_Viking_2_Squad",
            "Cav_B_B_Viking_3_Squad",
            "Cav_B_B_Viking_4_Squad",

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