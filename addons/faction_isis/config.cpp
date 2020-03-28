#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OPF_CAV_Squadleader",
            "OPF_CAV_TeamLeader",
            "OPF_CAV_RifleAT",
            "OPF_CAV_Medic",
            "OPF_CAV_Gren",
            "OPF_CAV_Gunner",
            "OPF_CAV_Crewman",
            "OPF_CAV_Pilot",
            "OPF_CAV_SpecopRifleman",
            "OPF_CAV_SpecopGren",
            "OPF_CAV_SpecopGunner",
            "OPF_CAV_SpecopSniper",
            "OPF_CAV_SpecopSquadLeader",
            "OPF_CAV_SpecopTeamLeader",
            "OPF_CAV_BMP",
            "OPF_CAV_BTR",
            "OPF_CAV_UAZArmed",
            "OPF_CAV_UAZSPG",
            "OPF_CAV_GunTruck",
            "OPF_CAV_GAZAmmo",
            "OPF_CAV_UralFuel",
            "OPF_CAV_UralRepair",
            "OPF_CAV_UAZTransport",
            "OPF_CAV_TankDestroyer",
            "OPF_CAV_BM21",
            "OPF_CAV_WildCat",
            "OPF_CAV_WildcatUnarmed",
            "OPF_CAV_CasPlane",
            "OPF_CAV_AAPlane",
            "OPF_CAV_BMPHeavy",
            "OPF_CAV_Boat"
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