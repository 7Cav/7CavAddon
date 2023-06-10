#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_common",
            "cav_main",
            "cav_common"
        };
        author = ECSTRING(Main,ModTeam);
        authors[] = {"PiZZADOX"};
        url = ECSTRING(Main,Url);
        VERSION_CONFIG;

    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMovesBasic.hpp"
#include "CfgMovesMaleSdr.hpp"
