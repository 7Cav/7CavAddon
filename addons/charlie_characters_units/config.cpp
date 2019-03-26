#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_C_PlatoonSergeant_1_5_F",
            "Cav_B_C_PlatoonLeader_1_6_F",
            "Cav_B_C_PlatoonMedic_1_7_F",
            "Cav_B_C_PlatoonSergeant_2_5_F",
            "Cav_B_C_PlatoonLeader_2_6_F",
            "Cav_B_C_PlatoonMedic_2_7_F",
            "Cav_B_C_SquadLeader_1_1_F",
            "Cav_B_C_SquadLeader_1_2_F",
            "Cav_B_C_SquadLeader_1_3_F",
            "Cav_B_C_SquadLeader_1_4_F",
            "Cav_B_C_SquadLeader_2_1_F",
            "Cav_B_C_SquadLeader_2_2_F",
            "Cav_B_C_SquadLeader_2_3_F",
            "Cav_B_C_SquadLeader_2_4_F",
            "Cav_B_C_Weap_SquadLeader_H_1_F",

            // Groups
            "Cav_B_C_Bandit_5_HQ",
            "Cav_B_C_Bandit_6_HQ",
            "Cav_B_C_Bandit_7_HQ",
            "Cav_B_C_Bandit_1_Squad",
            "Cav_B_C_Bandit_2_Squad",
            "Cav_B_C_Bandit_3_Squad",
            "Cav_B_C_Bandit_4_Squad",
            "Cav_B_C_Misfit_5_HQ",
            "Cav_B_C_Misfit_6_HQ",
            "Cav_B_C_Misfit_7_HQ",
            "Cav_B_C_Misfit_1_Squad",
            "Cav_B_C_Misfit_2_Squad",
            "Cav_B_C_Misfit_3_Squad",
            "Cav_B_C_Misfit_4_Squad",
            "Cav_B_C_Havoc_1_Squad"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common",
            "cav_charlie_characters"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"