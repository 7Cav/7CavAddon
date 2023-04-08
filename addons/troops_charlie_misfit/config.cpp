#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_C_PlatoonSergeant_Misfit_5_F",
            "Cav_B_C_PlatoonLeader_Misfit_6_F",
            "Cav_B_C_PlatoonMedic_Misfit_7_F",

            "Cav_B_C_SquadLeader_Misfit_1_F",
            "Cav_B_C_SquadLeader_Misfit_2_F",
            "Cav_B_C_SquadLeader_Misfit_3_F",
            "Cav_B_C_SquadLeader_Misfit_4_F",

            // Groups
            
            "Cav_B_C_Misfit_5_HQ",
            "Cav_B_C_Misfit_6_HQ",
            "Cav_B_C_Misfit_7_HQ",
            "Cav_B_C_Misfit_1_Squad",
            "Cav_B_C_Misfit_2_Squad",
            "Cav_B_C_Misfit_3_Squad",
            "Cav_B_C_Misfit_4_Squad"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common",
            
            "cav_troops_charlie"
        };
        author = ECSTRING(main,modteam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"