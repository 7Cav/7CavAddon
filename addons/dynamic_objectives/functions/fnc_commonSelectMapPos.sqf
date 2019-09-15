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

params ["_codeSuccess","_codeFail"];

if (!isNil QGVAR(mapClickId)) then {removeMissionEventHandler ["MapSingleClick", GVAR(mapClickId)]};
if (!isNil QGVAR(mapEventId)) then {removeMissionEventHandler ["Map", GVAR(mapEventId)]};

GVAR(selectedMapPos) = nil;
GVAR(selectMapPosCodeSuccess) = _codeSuccess;
GVAR(selectMapPosCodeFail) = _codeFail;

GVAR(mapEventId) = addMissionEventHandler ["Map", {
    params ["_mapIsOpened", "_mapIsForced"];
    if(!_mapIsOpened) then {
        removeMissionEventHandler ["MapSingleClick", GVAR(mapClickId)];
        GVAR(mapClickId) = nil;
        removeMissionEventHandler ["Map", GVAR(mapEventId)];
        GVAR(mapEventId) = nil;
        LOG("User cancelled map select");
        GVAR(selectedMapPos) = [];
        [] call GVAR(selectMapPosCodeFail);
        GVAR(selectMapPosCodeFail) = nil;
    };
}];

GVAR(mapClickId) = addMissionEventHandler ["MapSingleClick", {
    removeMissionEventHandler ["MapSingleClick", GVAR(mapClickId)];
    GVAR(mapClickId) = nil;
    removeMissionEventHandler ["Map", GVAR(mapEventId)];
    GVAR(mapEventId) = nil;
    LOG_1("User selected map pos: %1",_this#1);
    //params ["_units", "_pos", "_alt", "_shift"];
    [] call GVAR(selectMapPosCodeSuccess);
    GVAR(selectMapPosCodeSuccess) = nil;
    openMap false;
    GVAR(selectedMapPos) = _this#1;
}];

openMap true;
hint "Select a location";
