#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cav_main"};
        author = ECSTRING(Main,ModTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(Main,Url);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
