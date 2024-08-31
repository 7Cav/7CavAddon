#include "..\script_component.hpp"
/*
 * Author: CPL.Brostrom.A
 * This teleports a target to a given marker or any other kind of object.
 * Z will always be 0 for MARKER, LOCATION and TASK.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Label text <STRING>
 * 2: Destination <MARKER/OBJECT/LOCATION/GROUP/TASK>
 *
 * Return Value:
 * ActionID
 *
 * Example:
 * [this,"Teleport - Airfield", Airstrip] call cav_mission_fnc_teleport
 * [this,"Teleport - Base", MyBase] call cav_mission_fnc_teleport
 * [this,"Teleport - Talon", "FOB_Talon"] call cav_mission_fnc_teleport
 * [this,"Teleport - Base", "respawn_west"] call cav_mission_fnc_teleport
 *
 * Public: Yes
 */

 params [
    ["_object", objNull, [objNull]],
    ["_action", "Teleport", [""]],
    ["_dest", nil, [objNull, grpNull, "", locationNull, taskNull, []]]
];

if (isNil "_dest") exitWith {
    ERROR_MSG_2("No valid destination given for teleporter %1 (Action named; %2).",_object,_action);
};

#ifdef DEBUG_MODE_NORMAL
    INFO_3("Teleporter action, named '%1', added to %2 with destination: %3.",_action,_object,_dest);
#endif

_object addAction [
    format["<t color='#C9FFC9'>%1</t>", _action], {
        params ["","","","_dest"];
        private _height = [0,0,0];

        switch (typeName _dest) do {
            case "OBJECT" : {
                _height = getPosASL _dest;
                _height = _height select 2;
            };
            case "GROUP" : {
                _height = getPosASL _dest;
                _height = _height select 2;
            };
            case "STRING" : {
                _height = _height select 2;
            };
            case "LOCATION" : {
                _height = _height select 2;
            };
            case "TASK" : {
                _height = _height select 2;
            };
            default {
                _height = _height select 2;
            };
        };
        
        [player, _dest] call CBA_fnc_setPos;
        [player, _height] call CBA_fnc_setHeight;
        titleText ["", "BLACK IN", 3];
        #ifdef DEBUG_MODE_NORMAL
            INFO_3("%1 have been teleportet to %2 at height %3.",name player,_dest,_height);
        #endif

    }, _dest, 1.5, true, true, "", "true", 10
];