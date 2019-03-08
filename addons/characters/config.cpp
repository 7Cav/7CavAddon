#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "CavMod_B_base_F",

            "CavMod_B_Charlie_base_F",
            
            "CavMod_B_C_SquadLeader_F",
            "CavMod_B_C_Alpha_FireTeamLeader_F",
            "CavMod_B_C_Bravo_FireTeamLeader_F",
            "CavMod_B_C_Alpha_Rifleman_F",
            "CavMod_B_C_Bravo_Rifleman_F",

            "CavMod_B_Bandit_Squad",
            "CavMod_B_Bandit_1_1_Squad"
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