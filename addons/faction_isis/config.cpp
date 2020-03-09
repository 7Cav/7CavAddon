#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OPF_CAV_RIFLEMAN",
            "OPF_CAV_CIV_RIFLE",
            "OPF_CAV_SPECOP_RIFLE",
            "OPF_CAV_GREN",
            "OPF_CAV_CIV_GREN",
            "OPF_CAV_SPECOP_GREN",
            "OPF_CAV_GUNNER",
            "OPF_CAV_SPECOP_GUNNER",
            "OPF_CAV_SPECOP_LEADER",
            "OPF_CAV_SNIPER",
            "OPF_CAV_SPECOP_SNIPER",
            "OPF_CAV_SPECOP_LR_SNIPER",
            "OPF_CAV_CREWMAN",
            "OPF_CAV_PILOT",
            "OPF_CAV_JEEP_UNARMED",
            "OPF_CAV_JEEP_LMG",
            "OPF_CAV_JEEP_SPG",
            "OPF_CAV_ROVER_M2",
            "OPF_CAV_ROVER_SPG",
            "OPF_CAV_BRDM_UNARMED",
            "OPF_CAV_BRDM_127",
            "OPF_CAV_BRDM_AT",
            "OPF_CAV_BTR",
            "OPF_CAV_ZSU",
            "OPF_CAV_T55",
            "OPF_CAV_T34",
            "OPF_CAV_BMP",
            "OPF_CAV_M113",
            "OPF_CAV_LBA",
            "OPF_CAV_LBUA",
            "OPF_CAV_PLANE",
            "OPF_CAV_BM21",
            "OPF_CAV_AMMO",
            "OPF_CAV_FUEL",
            "OPF_CAV_REPAIR",
            "OPF_CAV_TRUCK_ARMED",
            "OPF_CAV_BOAT"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Brostrom.A (Evul)", "CPL.Citarelli.D"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"