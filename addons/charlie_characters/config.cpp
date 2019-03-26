#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_Charlie_base_F",
            "Cav_B_Charlie_Weap_base_F",

            "Cav_B_C_PlatoonSergeant_F",
            "Cav_B_C_PlatoonLeader_F",
            "Cav_B_C_PlatoonMedic_F",
            "Cav_B_C_SquadLeader_F",

            "Cav_B_C_Alpha_FireTeamLeader_F",
            "Cav_B_C_Alpha_AutomaticRifleman_F",
            "Cav_B_C_Alpha_Grenadier_F",
            "Cav_B_C_Alpha_Rifleman_F",
            "Cav_B_C_Alpha_RiflemanAT_F",
            "Cav_B_C_Alpha_RiflemanLAT_F",
            "Cav_B_C_Alpha_CombatLifeSaver_F",

            "Cav_B_C_Bravo_FireTeamLeader_F",
            "Cav_B_C_Bravo_AutomaticRifleman_F",
            "Cav_B_C_Bravo_Grenadier_F",
            "Cav_B_C_Bravo_Rifleman_F",
            "Cav_B_C_Bravo_RiflemanAT_F",
            "Cav_B_C_Bravo_RiflemanLAT_F",
            "Cav_B_C_Bravo_CombatLifeSaver_F",

            "Cav_B_C_Weap_SquadLeader_F",
            "Cav_B_C_Weap_Alpha_FireTeamLeader_F",
            "Cav_B_C_Weap_Alpha_AutomaticRifleman_F",
            "Cav_B_C_Weap_Alpha_Grenadier_F",
            "Cav_B_C_Weap_Alpha_Rifleman_F",
            "Cav_B_C_Weap_Alpha_RiflemanAT_F",
            "Cav_B_C_Weap_Alpha_RiflemanLAT_F",
            "Cav_B_C_Weap_Alpha_CombatLifeSaver_F",
            "Cav_B_C_Weap_Bravo_FireTeamLeader_F",
            "Cav_B_C_Weap_Bravo_AutomaticRifleman_F",
            "Cav_B_C_Weap_Bravo_Grenadier_F",
            "Cav_B_C_Weap_Bravo_Rifleman_F",
            "Cav_B_C_Weap_Bravo_RiflemanAT_F",
            "Cav_B_C_Weap_Bravo_RiflemanLAT_F",
            "Cav_B_C_Weap_Bravo_CombatLifeSaver_F",

            // Groups
            "Cav_B_C_Bandit_Squad",
            "Cav_B_C_Misfit_Squad",
            "Cav_B_C_Havoc_Squad"

        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Brostrom.A (Evul)", "Poentis.K"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEditorSubcategories.hpp"