#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OPF_CAV_RAF_F",
            "OPF_CAV_TEAMLEADER",
            "OPF_CAV_GREN",
            "OPF_CAV_GUNNER",
            "OPF_CAV_RIFLEAT",
            "OPF_CAV_RIFLEAA",
            "OPF_CAV_SQDM",
            "OPF_CAV_MEDIC",
            "OPF_CAV_CREWMAN",
            "OPF_CAV_PILOT",
            "OPF_CAV_T80",
            "OPF_CAV_T72",
            "OPF_CAV_ZSU",
            "OPF_CAV_BTR80",
            "OPF_CAV_BMD",
            "OPF_CAV_BMP2D",
            "OPF_CAV_TIGER",
            "OPF_CAV_GAZ_C",
            "OPF_CAV_KA60",
            "OPF_CAV_KAUNARMED",
            "OPF_CAV_AA",
            "OPF_CAV_CAS",
            "OPF_CAV_GAZ_AMMO",
            "OPF_CAV_URAL_FUEL",
            "OPF_CAV_URAL_REPAIR",
            "OPF_CAV_KAMAZ",
            "OPF_CAV_BOAT",
            "OPF_CAV_2S1",
            "OPF_CAV_UAZ",
            "OPF_CAV_SPEC_R",
            "OPF_CAV_SPEC_G",
            "OPF_CAV_SPECOP_GU",
            "OPF_CAV_SPEC_SN",
            "OPF_CAV_SPEC_AT",
            "OPF_CAV_SPECOP_Rifleman"
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
