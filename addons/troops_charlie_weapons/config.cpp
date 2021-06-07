#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
    "Cav_B_Bravo_Atlas_base_F",
    "Cav_B_B_Atlas_Medic_TeamLeader_F",
    "Cav_B_B_Atlas_Medic_CombatMedic_F",
    "Cav_B_B_Atlas_Logistics_Officer_F",
    "Cav_B_B_Atlas_Logistics_OpsOfficer_F",
    "Cav_B_B_Atlas_Logistics_OpsNCO_F",
    "Cav_B_B_Atlas_Logistics_TeamLeader_F",
    "Cav_B_B_Atlas_Logistics_TeamMember_F",
    "Cav_B_B_Atlas_Medic_TeamLeader_3_1_F",
    "Cav_B_B_Atlas_Medic_TeamLeader_3_2_F",
    "Cav_B_B_Atlas_Logistics_TeamLeader_3_3_F",
    "Cav_B_B_Atlas_Logistics_TeamLeader_3_4_F",
    "Cav_B_B_Atlas_Logistics_OpsNCO_3_5_F",
    "Cav_B_B_Atlas_Logistics_OpsOfficer_3_6_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
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