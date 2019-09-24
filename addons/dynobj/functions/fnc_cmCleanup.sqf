#include "../script_component.hpp"
/*
 * Author: WO1.Raynor.D
 * Cleans up objectives. To be called via addAction.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Caller <OBJECT>
 * 2: Action ID <NUMBER>
 * 3: Arguments <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_object,"Objective Cleanup",FUNC(cmCleanup)] call FUNC(cmAddAction);
 *
 * Public: No
 */

params ["_target", "_caller", "_actionId", "_arguments"];

private _object = _target;

private _activeObjectives = GVAR(objectives) select {count _x > 0};
private _activeObjectivesStr = _activeObjectives apply {_x#0};
_activeObjectivesStr pushBack "ALL";

LOG_1("_activeObjectivesStr: %1",_activeObjectivesStr);

private _dialogResults = [
    "Dynamic Objectives - Objective Cleanup",
    [
        ["Objective to cleanup", _activeObjectivesStr, 0]
    ]
] call Ares_fnc_showChooseDialog;

if (count _dialogResults == 0) exitWith {};

LOG_1("DialogResults: %1",_dialogResults);

private _selectedObjName = _activeObjectivesStr select _dialogResults#0;

{
    if(_selectedObjName == "ALL" || _selectedObjName == _x#0) then {
        _x params [
            "_objectiveName",
            "_centerPos",
            "_markers",
            ["_spawnedVehicles",[]],
            ["_spawnedUnits",[]],
            ["_spawnedModules",[]]
        ];

        LOG_1("_markers: %1",_markers);
        {
            deleteMarker _x;
        } forEach _markers;

        {
            private _veh = _x;
            if(!isNil "_veh") then {
                if(!isNull _veh) then {
                    {_veh deleteVehicleCrew _x} forEach crew _veh;
                    deleteVehicle _veh;
                };
            };
        } forEach _spawnedVehicles;

        {
            if(!isNil "_x") then {
                if(!isNull _x) then {
                    deleteVehicle _x;
                };
            };
        } forEach _spawnedUnits + _spawnedModules;



        GVAR(objectives) set [_forEachIndex,[]];
    };
    if(_selectedObjName != "ALL") exitWith {};
} forEach GVAR(objectives);

publicVariable QGVAR(objectives);
