#include "script_component.hpp"

["CBA_settingsInitialized", {

    ["Cav_B_Soldier_base_F", "Init", {
        params ["_unit"];
        if (GVAR(enableAutomaticCallsignAssign)) then {
            [_unit] call FUNC(setUniqCallsign);
        };
        if (GVAR(enableAutomaticTeamAssign)) then {
            [_unit] call FUNC(setUnitTeam);
        };
    }, true, [], true] call CBA_fnc_addClassEventHandler;

}] call CBA_fnc_addEventHandler;