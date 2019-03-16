#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "CavMod_B_base_F",

            "CavMod_B_Bravo_base_F",
            "CavMod_B_Charlie_base_F",
            "CavMod_B_Charlie_Weap_base_F",

            // Bravo
            "CavMod_B_B_PlatoonSergeant_F",
            "CavMod_B_B_PlatoonLeader_F",
            "CavMod_B_B_PlatoonMedic_F",

            "CavMod_B_B_Tank_Commander_F",
            "CavMod_B_B_Tank_Driver_F",
            "CavMod_B_B_Tank_Gunner_F",
            "CavMod_B_B_Tank_Loader_F",
            "CavMod_B_B_Ifv_Commander_F",
            "CavMod_B_B_Ifv_Driver_F",
            "CavMod_B_B_Ifv_Gunner_F",

            "CavMod_B_B_SquadLeader_F",

            "CavMod_B_B_Alpha_FireTeamLeader_F",
            "CavMod_B_B_Alpha_AutomaticRifleman_F",
            "CavMod_B_B_Alpha_Grenadier_F",
            "CavMod_B_B_Alpha_Rifleman_F",
            "CavMod_B_B_Alpha_RiflemanAT_F",
            "CavMod_B_B_Alpha_RiflemanLAT_F",
            "CavMod_B_B_Alpha_CombatLifeSaver_F",

            "CavMod_B_B_Bravo_FireTeamLeader_F",
            "CavMod_B_B_Bravo_AutomaticRifleman_F",
            "CavMod_B_B_Bravo_Grenadier_F",
            "CavMod_B_B_Bravo_Rifleman_F",
            "CavMod_B_B_Bravo_RiflemanAT_F",
            "CavMod_B_B_Bravo_RiflemanLAT_F",
            "CavMod_B_B_Bravo_CombatLifeSaver_F",

            // Charlie
            "CavMod_B_C_PlatoonSergeant_F",
            "CavMod_B_C_PlatoonLeader_F",
            "CavMod_B_C_PlatoonMedic_F",

            "CavMod_B_C_SquadLeader_F",
            
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

            // Bravo
            "CavMod_B_B_Viking_Squad",
            "CavMod_B_B_Viking_WithCrew_Squad",
            "CavMod_B_B_Banshee_Squad",

            // Charlie
            "CavMod_B_C_Bandit_Squad",
            "CavMod_B_C_Misfit_Squad",
            "CavMod_B_C_Havoc_Squad"

        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cavmod_main",
            "cavmod_common"
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