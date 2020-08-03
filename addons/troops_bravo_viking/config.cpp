#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Cav_B_Bravo_Scout_base_F",
            "Cav_B_B_Scout_Officer_F",
            "Cav_B_B_Scout_PlatoonLead_F",
            "Cav_B_B_Scout_PlatoonMedic_F",
            "Cav_B_B_Scout_SquadLeader_F",
            "Cav_B_B_Scout_TeamLead_F",
            "Cav_B_B_Scout_TeamLead_320_F",
            "Cav_B_B_Scout_AutomaticRifleman_F",
            "Cav_B_B_Scout_Grenadier_F",
            "Cav_B_B_Scout_Rifleman_F",
            "Cav_B_B_Scout_CombatLifeSaver_F",
            "Cav_B_B_Scout_Crew_F",
            "Cav_B_B_Scout_Gunner_F",
            "Cav_B_B_Scout_Driver_F",
            "Cav_B_B_Scout_Alpha_TeamLead_F",
            "Cav_B_B_Scout_Alpha_TeamLead_320_F",
            "Cav_B_B_Scout_Alpha_AutomaticRifleman_F",
            "Cav_B_B_Scout_Alpha_Grenadier_F",
            "Cav_B_B_Scout_Alpha_Rifleman_F",
            "Cav_B_B_Scout_Alpha_CombatLifeSaver_F",
            "Cav_B_B_Scout_Bravo_TeamLead_F",
            "Cav_B_B_Scout_Bravo_TeamLead_320_F",
            "Cav_B_B_Scout_Bravo_AutomaticRifleman_F",
            "Cav_B_B_Scout_Bravo_Grenadier_F",
            "Cav_B_B_Scout_Bravo_Rifleman_F",
            "Cav_B_B_Scout_Bravo_CombatLifeSaver_F",
            "Cav_B_B_Scout_SquadLeader_2_1_F",
            "Cav_B_B_Scout_SquadLeader_2_2_F",
            "Cav_B_B_Scout_SquadLeader_2_3_F",
            "Cav_B_B_Scout_SquadLeader_2_4_F",
            "Cav_B_B_Scout_PlatoonLead_2_5_F",
            "Cav_B_B_Scout_PlatoonLead_2_6_F",
            "Cav_B_B_Scout_PlatoonMedic_2_7_F",
            "Cav_B_B_Scout_Team_Leader_F",
            "Cav_B_B_Scout_Trooper_F",
            "Cav_B_B_Scout_Platoon_Medic_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(main,cavmodteam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"