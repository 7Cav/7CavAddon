#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Gets a map position from user input.
 *
 * Arguments:
 * 0: Code to be executed on map click <CODE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [{hint str _this}] call FUNC(selectMapPos);
 *
 * Public: No
 */

params ["_code"];

if (!isNil QGVAR(mapClickId)) then {removeMissionEventHandler ["MapSingleClick", GVAR(mapClickId)]};
if (!isNil QGVAR(mapEventId)) then {removeMissionEventHandler ["Map", GVAR(mapEventId)]};

if(!IS_CODE(_code)) exitWith {ERROR("Code wasn't of type code")};
if(_code isEqualTo {}) exitWith {ERROR("Code was empty")};

GVAR(mapEventId) = addMissionEventHandler ["Map", {
    params ["_mapIsOpened", "_mapIsForced"];
    if(!_mapIsOpened) then {
        removeMissionEventHandler ["MapSingleClick", GVAR(mapClickId)];
        GVAR(mapClickId) = nil;
        removeMissionEventHandler ["Map", GVAR(mapEventId)];
        GVAR(mapEventId) = nil;
        LOG("User cancelled map select");
    };
}];

GVAR(mapClickId) = addMissionEventHandler ["MapSingleClick", {
    removeMissionEventHandler ["MapSingleClick", GVAR(mapClickId)];
    GVAR(mapClickId) = nil;
    removeMissionEventHandler ["Map", GVAR(mapEventId)];
    GVAR(mapEventId) = nil;
    LOG_1("User selected map pos: %1",_this#1);
    //params ["_units", "_pos", "_alt", "_shift"];
    GVAR(selectedMapPos) = _this#1;
    openMap false;

}];

openMap true;
hint "Select a location";

GVAR(selectedMapPos) = nil;

[{!isNil QGVAR(selectedMapPos) || !visibleMap},{
    params ["_code"];
    if(isNil QGVAR(selectedMapPos)) then {
        hint "Cancelled objective placement";
        LOG("Cancelling objective placement");
    } else {
        LOG_1("Returning map pos: %1",GVAR(selectedMapPos));
        [GVAR(selectedMapPos)] call _code;
    };
},[_code]] call CBA_fnc_waitUntilAndExecute;
