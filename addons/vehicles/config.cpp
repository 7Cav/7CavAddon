#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "cavmod_Charlie_m1025_d_m2_f",
            "cavmod_Charlie_m1025_d_Mk19_f",
            "cavmod_Charlie_m1025_d_f",
            "cavmod_Charlie_m1043_d_m2_f",
            "cavmod_Charlie_m1043_d_mk19_f",
            "cavmod_Charlie_m1043_d_f",
            "cavmod_Charlie_m1045_d_f",
            "cavmod_Charlie_m998_d_2dr_fulltop_f",
            "cavmod_Charlie_m998_d_2dr_halftop_f",
            "cavmod_Charlie_m998_d_2dr_f",
            "cavmod_Charlie_m998_d_4dr_fulltop_f",
            "cavmod_Charlie_m998_d_4dr_halftop_f",
            "cavmod_Charlie_m998_d_4dr_f",
            "cavmod_Charlie_m966_d_f",
            "cavmod_Charlie_m1025_w_m2_f",
            "cavmod_Charlie_m1025_w_Mk19_f",
            "cavmod_Charlie_m1025_w_f",
            "cavmod_Charlie_m1043_w_m2_f",
            "cavmod_Charlie_m1043_w_mk19_f",
            "cavmod_Charlie_m1043_w_f",
            "cavmod_Charlie_m1045_w_f",
            "cavmod_Charlie_m998_w_2dr_fulltop_f",
            "cavmod_Charlie_m998_w_2dr_halftop_f",
            "cavmod_Charlie_m998_w_2dr_f",
            "cavmod_Charlie_m998_w_4dr_fulltop_f",
            "cavmod_Charlie_m998_w_4dr_halftop_f",
            "cavmod_Charlie_m998_w_4dr_f",
            "cavmod_Charlie_m966_w_f"
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

#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
