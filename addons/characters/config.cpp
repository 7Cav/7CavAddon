#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "CavMod_B_base_F",
            "CavMod_B_Charlie_base_F",

            "CavMod_B_C_PlatoonSergeant_F",
            "CavMod_B_C_PlatoonLeader_F",
            "CavMod_B_C_PlatoonMedic_F",
            "CavMod_B_C_PlatoonSergeant_1_5_F",
            "CavMod_B_C_PlatoonLeader_1_6_F",
            "CavMod_B_C_PlatoonMedic_1_7_F",
            "CavMod_B_C_PlatoonSergeant_2_5_F",
            "CavMod_B_C_PlatoonLeader_2_6_F",
            "CavMod_B_C_PlatoonMedic_2_7_F",

            "CavMod_B_C_SquadLeader_F",
            "CavMod_B_C_SquadLeader_1_1_F",
            "CavMod_B_C_SquadLeader_1_2_F",
            "CavMod_B_C_SquadLeader_1_3_F",
            "CavMod_B_C_SquadLeader_1_4_F",
            "CavMod_B_C_SquadLeader_2_1_F",
            "CavMod_B_C_SquadLeader_2_2_F",
            "CavMod_B_C_SquadLeader_2_3_F",
            "CavMod_B_C_SquadLeader_2_4_F",
            
            "CavMod_B_C_Alpha_FireTeamLeader_F",
            "CavMod_B_C_Alpha_AutomaticRifleman_F",
            "CavMod_B_C_Alpha_Grenadier_F",
            "CavMod_B_C_Alpha_Rifleman_F",
            "CavMod_B_C_Alpha_RiflemanAT_F",
            "CavMod_B_C_Alpha_RiflemanLAT_F",
            "CavMod_B_C_Alpha_CombatLifeSaver_F",
            "CavMod_B_C_Bravo_FireTeamLeader_F",
            "CavMod_B_C_Bravo_AutomaticRifleman_F",
            "CavMod_B_C_Bravo_Grenadier_F",
            "CavMod_B_C_Bravo_Rifleman_F",
            "CavMod_B_C_Bravo_RiflemanAT_F",
            "CavMod_B_C_Bravo_RiflemanLAT_F",
            "CavMod_B_C_Bravo_CombatLifeSaver_F",
            
            // Groups
            "CavMod_B_C_Bandit_5_HQ",
            "CavMod_B_C_Bandit_6_HQ",
            "CavMod_B_C_Bandit_7_HQ",

            "CavMod_B_C_Bandit_Squad",
            "CavMod_B_C_Bandit_1_Squad",
            "CavMod_B_C_Bandit_2_Squad",
            "CavMod_B_C_Bandit_3_Squad",
            "CavMod_B_C_Bandit_4_Squad",

            "CavMod_B_C_Misfit_5_HQ",
            "CavMod_B_C_Misfit_6_HQ",
            "CavMod_B_C_Misfit_7_HQ",
            
            "CavMod_B_C_Misfit_Squad",
            "CavMod_B_C_Misfit_1_Squad",
            "CavMod_B_C_Misfit_2_Squad",
            "CavMod_B_C_Misfit_3_Squad",
            "CavMod_B_C_Misfit_4_Squad"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cavmod_main",
            "cavmod_common"
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