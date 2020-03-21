#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OPF_GREN_RIFLEMAN",
            "OPF_GREN_GREN",
            "OPF_GREN_GUNNER",
            "OPF_GREN_LEADER",
            "OPF_GREN_SQDM",
            "OPF_GREN_CREWMAN",
            "OPF_GREN_PILOT",
            "OPF_GREN_SPECOP_RIFLE",
            "OPF_GREN_SPECOP_GREN",
            "OPF_GREN_SPECOP_GUNNER",
            "OPF_GREN_SPECOP_LR_SNIPER",
            "OPF_GREN_SPECOP_SNIPER",
            "OPF_GREN_BMD",
            "OPF_GREN_BTR60",
            "OPF_GREN_BRDM_ARMED",
            "OPF_GREN_BRDM_AT",
            "OPF_GREN_ROVER_50",
            "OPF_GREN_ROVER_AT",
            "OPF_GREN_TANK",
            "OPF_GREN_WILDCAT",
            "OPF_GREN_WILDCAT_UNARMED",
            "OPF_GREN_AA_PLANE",
            "OPF_GREN_CAS_PLANE",
            "OPF_GREN_TRUCK_AMMO",
            "OPF_GREN_TRUCK_FUEL",
            "OPF_GREN_TRUCK_REPAIR",
            "OPF_GREN_ZSU",
            "OPF_GREN_KAMAZ",
            "OPF_GREN_ARTILLERY",
            "OPF_GREN_BOAT"
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