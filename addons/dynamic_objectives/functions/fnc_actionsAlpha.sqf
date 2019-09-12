#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Adds Alpha's actions to a control object.
 *
 * Arguments:
 * 0: Control Object <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_object] call FUNC(actionsAlpha);
 *
 * Public: No
 */

private _object = _this;

if (isNull _object) exitWith {ERROR_1("Object was null: %1",_this)};

LOG_1("Adding alpha actions: %1",_object);

// CAS Ranges
[_object,"Alpha - CAS Range (Easy)",{
    if(GETVAR(_this#0,GVAR(locationRandom),false)) then {
        LOG("Spawning CAS Range: Easy Random");
        private _pos = [];
        while {count _pos == 0} do {
            _pos = [] call BIS_fnc_randomPos;
        };
        [_pos,"Easy"] call FUNC(CASRange);
    } else {
        LOG("Spawning CAS Range: Easy Map Select");
        [{[_this#0,"Easy"] call FUNC(CASRange)}] call FUNC(selectMapPos);
    };
}] call FUNC(addAction);

[_object,"Alpha - CAS Range (Medium)",{
    if(GETVAR(_this#0,GVAR(locationRandom),false)) then {
        LOG("Spawning CAS Range: Medium Random");
        private _pos = [];
        while {count _pos == 0} do {
            _pos = [] call BIS_fnc_randomPos;
        };
        [_pos,"Medium"] call FUNC(CASRange);
    } else {
        LOG("Spawning CAS Range: Medium Map Select");
        [{[_this#0,"Medium"] call FUNC(CASRange)}] call FUNC(selectMapPos);
    };
}] call FUNC(addAction);

[_object,"Alpha - CAS Range (Hard)",{
    if(GETVAR(_this#0,GVAR(locationRandom),false)) then {
        LOG("Spawning CAS Range: Hard Random");
        private _pos = [];
        while {count _pos == 0} do {
            _pos = [] call BIS_fnc_randomPos;
        };
        [_pos,"Medium"] call FUNC(CASRange);
        [_pos,"Hard"] call FUNC(CASRange);
    } else {
        LOG("Spawning CAS Range: Hard Map Select");
        [{[_this#0,"Hard"] call FUNC(CASRange)}] call FUNC(selectMapPos);
    };
}] call FUNC(addAction);
