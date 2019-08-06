#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"Cav_m3maaws_HEAT_CS"};
        weapons[] = {"Cav_mag_20Rnd_556x45_M855A1_Stanag"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cav_main",
            "cav_common",

            "tf47_m3maaws",
            "cav_fix_tf47_m3maaws",
            "rhsusf_c_weapons"
        };
        author = ECSTRING(main,CavModTeam);
        authors[] = {"Grey.V", "Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
