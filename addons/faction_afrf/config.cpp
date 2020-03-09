#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OPF_AFRF_KA60",
            "OPF_AFRF_KA60_UNARMED",
            "OPF_AFRF_PILOT",
            "OPF_AFRF_T80",
            "OPF_AFRF_CREWMAN",
            "OPF_AFRF_RIFLEMAN",
            "OPF_AFRF_KAMAZ",
            "OPF_AFRF_URAL_FUEL",
            "OPF_AFRF_URAL_REPAIR",
            "OPF_AFRF_GAZ_AMMO",
            "OPF_AFRF_GREN",
            "OPF_AFRF_GUNNER",
            "OPF_AFRF_LEADER",
            "OPF_AFRF_SPECOP_RIFLE",
            "OPF_AFRF_SPECOP_GREN",
            "OPF_AFRF_SPECOP_GUNNER",
            "OPF_AFRF_SPECOP_SNIPER",
            "OPF_AFRF_SPECOP_MARKSMAN",
            "OPF_AFRF_SQDM",
            "OPF_AFRF_RIFLEMAN_AT",
            "OPF_AFRF_GAZ_UNARMED",
            "OPF_AFRF_GAZ_ARMED",
            "OPF_AFRF_BTR80",
            "OPF_AFRF_BTR80A",
            "OPF_AFRF_BMD",
            "OPF_AFRF_BMP",
            "OPF_AFRF_BOAT",
            "OPF_AFRF_ZSU",
            "OPF_AFRF_AA_PLANE",
            "OPF_AFRF_CASPLANE",
            "OPF_AFRF_2S1"
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
