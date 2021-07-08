#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (hasInterface) then {
    [player, "Respawn", {
        if (call FUNC(allowApplication)) then {
            private _texture = call FUNC(getTexture);
            player setObjectTextureGlobal [3, _texture];
        };
    }] call CBA_fnc_addBISEventHandler;

    [player, "InventoryClosed", {
        if (call FUNC(allowApplication)) then {
            private _texture = call FUNC(getTexture);
            player setObjectTextureGlobal [3, _texture];
        };
    }] call CBA_fnc_addBISEventHandler;

    ["ace_arsenal_displayClosed", {
        if (call FUNC(allowApplication)) then {
            private _texture = call FUNC(getTexture);
            player setObjectTextureGlobal [3, _texture];
        };
    }] call CBA_fnc_addEventHandler;
};

ADDON = true;

