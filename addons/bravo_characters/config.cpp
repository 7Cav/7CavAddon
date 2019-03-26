#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_Bravo_base_F",
            "Cav_B_Bravo_Crew_base_F",

            "Cav_B_B_PlatoonSergeant_F",
            "Cav_B_B_PlatoonLeader_F",
            "Cav_B_B_PlatoonMedic_F",
            "Cav_B_B_Tank_Commander_F",
            "Cav_B_B_Tank_Driver_F",
            "Cav_B_B_Tank_Gunner_F",
            "Cav_B_B_Tank_Loader_F",
            "Cav_B_B_Ifv_Commander_F",
            "Cav_B_B_Ifv_Driver_F",
            "Cav_B_B_Ifv_Gunner_F",
            "Cav_B_B_SquadLeader_F",

            "Cav_B_B_Alpha_FireTeamLeader_F",
            "Cav_B_B_Alpha_AutomaticRifleman_F",
            "Cav_B_B_Alpha_Grenadier_F",
            "Cav_B_B_Alpha_Rifleman_F",
            "Cav_B_B_Alpha_RiflemanAT_F",
            "Cav_B_B_Alpha_RiflemanLAT_F",
            "Cav_B_B_Alpha_CombatLifeSaver_F",
            "Cav_B_B_Bravo_FireTeamLeader_F",
            "Cav_B_B_Bravo_AutomaticRifleman_F",
            "Cav_B_B_Bravo_Grenadier_F",
            "Cav_B_B_Bravo_Rifleman_F",
            "Cav_B_B_Bravo_RiflemanAT_F",
            "Cav_B_B_Bravo_RiflemanLAT_F",
            "Cav_B_B_Bravo_CombatLifeSaver_F",

            // Groups
            "Cav_B_B_Viking_Squad",
            "Cav_B_B_Viking_WithCrew_Squad",
            "Cav_B_B_Banshee_Squad"

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