#include "../script_component.hpp"
/*
 * Author: WO1.Raynor.D
 * Spawns CAS objective around specified position. Designed to be called via FUNC(cmAddAction).
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
 * [_object,"A/1-7 Conditions",FUNC(aConditions)] call FUNC(cmAddAction);
 *
 * Public: No
 */

LOG_1("CASRange: %1",_this);
LOG(" ==== START");

params ["_target", "_caller", "_actionId", "_arguments"];
_arguments params [
    ["_actionText","",[""]]
];

private _vehicleTypes = ["Transport","APC","AAA"];

LOG(" ==== USER INPUT");
private _dialogResults = [
    "Dynamic Objectives - A/1-7 CAS Range",
    [
        ["Location", ["Random", "Map Select"]],
        ["Create Vehicle Crew", ["Yes", "No"]],
        ["Vehicle Type", _vehicleTypes],
        ["Marker Type", ["Full","Limited","None"]],
        ["Show Hint",["Yes","No"]]
    ]
] call Ares_fnc_showChooseDialog;

if (count _dialogResults == 0) exitWith {};

LOG_1("DialogResults: %1",_dialogResults);

// process dialog results
private _locationRandom = _dialogResults#0 isEqualTo 0;
private _addCrew = _dialogResults#1 isEqualTo 0;
private _vehicleType = _dialogResults#2;
private _markerType = _dialogResults#3;
private _showHint = _dialogResults#4 isEqualTo 0;

// create type list from selected difficulty
private _typeList = [];
switch (_vehicleType) do {
    case (0): { // Easy
        _typeList = [
            ["Transport",10]
        ];
    };
    case (1): { // Medium
        _typeList = [
            ["Transport",3],
            ["APC",7]
        ];
    };
    case (2): { // Hard
        _typeList = [
            ["Transport",2],
            ["APC",3],
            ["AAA",5]
        ];
    };
};

if(isNil QGVAR(objectives)) then {
    GVAR(objectives) = [];
};

private _thisRangeIndex = nil;
if(isNil QGVAR(index_casRange)) then {
    _thisRangeIndex = 1;
    GVAR(index_casRange) = _thisRangeIndex;
} else {
    _thisRangeIndex = GVAR(index_casRange) + 1;
    INC(GVAR(index_casRange));
};
publicVariable QGVAR(index_casRange);

// a flag for this specific range being busy
private _busyVar = format ["%1_%2",QGVAR(CasRangeBusy),_thisRangeIndex];
missionNamespace setVariable [_busyVar,true];

// Should have received something like "CAS Range %1 (Easy)" from the action arguments
private _objectiveText = format ["%1 %2 (%3)",_actionText,_thisRangeIndex,_vehicleTypes select _vehicleType];

// Subtitle for global hint later on
private _hintSubtitle = _actionText;

LOG_3("Spawning %1",_objectiveText);

/*
Down to business
It's in two main segments.
1. The first block gets the center of the objective, depending on user selection
2. The second block iterates the vehicle list after a position has been set
*/
LOG(" ==== LOCATION");
private _error = false;
if(_locationRandom) then { // random location, run right away
    private _pos = [] call FUNC(cmRandomPosition);
    if(count _pos == 0) then {
        _error = true;
    };
    GVAR(selectedMapPos) = _pos;
} else { // User map selection, wait for user
    GVAR(selectedMapPos) = nil;
    [
        {},
        compile format ["missionNamespace setVariable ['%1',false]",_busyVar]
    ] call FUNC(cmSelectMapPos);
};

if (_error) then {
    missionNamespace setVariable [_busyVar,false];
    hint "Unable to find suitable location, please try again or use map selection mode.";
} else {
    [{!isNil QGVAR(selectedMapPos)},{
        LOG(" ==== ASYNC");
        params ["_typeList","_callerName","_objectiveText","_addCrew","_thisRangeIndex","_hintSubtitle","_busyVar","_markerType","_showHint"];
        
        if(isNil QGVAR(selectedMapPos)) exitWith {
            ERROR("selectedMapPos was nil");
            missionNamespace setVariable [_busyVar,false];
        };
        if(count GVAR(selectedMapPos) == 0) exitWith {
            hint "Aborted objective creation";
            missionNamespace setVariable [_busyVar,false];
        };
        
        private _centerPos = GVAR(selectedMapPos);
        
        // start our range data array
        private _rangeData = [_objectiveText,_centerPos];
        
        LOG_2("Spawning CAS Range: %1 - %2",_centerPos,_typeList);
        
        // Show user hint
        if(_showHint) then {
            private _locDesc = [_centerPos] call FUNC(cmDescFromNearLoc);
            
            private _grid = [_centerPos] call FUNC(cmGridString);
            
            private _hintStr = "";
            private _hintArr = "";
            switch (_markerType) do {
                case (0): { // Full
                    _hintStr = "Check your maps, %1 has deployed a new objective:<br />%2<br /><br />Location: %3<br />(%4)";
                    _hintArr = [_callerName, _objectiveText,_grid,_locDesc];
                };
                case (1): { // Limited
                    _hintSubtitle = "Objective Deployed";
                    _hintStr = "Check your maps, %1 has deployed a new objective:<br /><br />Location: %2<br />(%3)";
                    _hintArr = [_callerName,_grid,_locDesc];
                };
                case (2): { // Limited
                    _hintSubtitle = "Objective Deployed";
                    _hintStr = "%1 has deployed a new objective at an undisclosed location.";
                    _hintArr = [_callerName];
                };
            };
            
            LOG_1("_locDesc: %1",_locDesc);
            [
                _hintSubtitle,
                _hintStr,
                _hintArr
            ] call FUNC(cmGlobalHint);
        };
        LOG(" ==== HINT");
        
        // Get our random vehicle list based on selected difficulty
        private _vehicles = ["alpha",_typeList] call FUNC(cmRandomVehicles);
        LOG_1("count _vehicles: %1",count _vehicles);
        
        private _radius = (count _vehicles * 12) max 50 min 100;
        LOG_1("_radius: %1",_radius);
        
        // create text and ellipse markers
        switch (_markerType) do {
            case (0): {
                private _markerText = createMarker [format ["mkr_%1_cas_text_%2",QUOTE(DOUBLES(ADDON,COMPONENT)),_thisRangeIndex], _centerPos];
                _markerText setMarkerType "mil_destroy";
                _markerText setMarkerColor "ColorRed";
                _markerText setMarkerText _objectiveText;
                
                private _markerCircle = createMarker [format ["mkr_%1_cas_ellipse_%2",QUOTE(DOUBLES(ADDON,COMPONENT)),_thisRangeIndex], _centerPos];
                _markerCircle setMarkerShape "ELLIPSE";
                _markerCircle setMarkerColor "ColorRed";
                _markerCircle setMarkerSize [_radius*1.5,_radius*1.5];
                
                _rangeData pushBack [_markerText,_markerCircle];
            };
            case (1): {
                private _marker = createMarker [format ["mkr_%1_cas_center_%2",QUOTE(DOUBLES(ADDON,COMPONENT)),_thisRangeIndex], _centerPos];
                _marker setMarkerType "mil_destroy";
                _marker setMarkerColor "ColorRed";
                _rangeData pushBack [_marker];
            };
            case (2): {
                LOG("Marker type none, no markers created");
                _rangeData pushBack [];
            };
        };
        
        // And we're off
        // Iterate vehicle list, find a good position, and drop it
        // Again look for low gradient positions and increase if needed
        LOG(" ==== FOREACH VEHICLE");
        private _result = [];
        private _spawnedVehicles = [];
        private _spawnedUnits = [];
        private _dir = random 360;
        private _errors = 0;
        {
            _vehicle = _x;
            private _vehPos = [];
            if(_forEachIndex == 0) then {
                _vehPos = _centerPos;
                LOG_1("Placing vehicle 0 at center: %1",_centerPos);
            } else {
                private _runCount = 0;
                private _gradient = 0.1;
                while {_runCount < 50} do {
                    INC(_runCount);
                    if(_runCount % 5 == 0) then {
                        _gradient = (_runCount / 50);
                        LOG_1("Vehicle %1: Trying gradient %2",_forEachIndex,_gradient);
                    };
                    private _testPos = [_centerPos, _radius * 0.3, _radius, 5, 0, _gradient, 0] call BIS_fnc_findSafePos;
                    private _posValid = true;
                    {
                        if(_testPos distance _x < 20) exitWith {_posValid = false};
                    } forEach _spawnedVehicles;
                    if(_posValid) exitWith {
                        _vehPos = _testPos;
                        LOG_3("Vehicle %1: Valid position found: %2 - runCount: %3",_forEachIndex,_vehPos,_runCount);
                    };
                };
            };
            
            if (count _vehPos == 0) then {
                ERROR_4("Vehicle %1: Unable to find suitable location: rad:%2 - pos:%3 - runCount:%4",_forEachIndex,_radius,_centerPos,_runCount);
                INC(_errors);
                
            } else {
                private _veh = createVehicle [_vehicle, _vehPos];
                if(_addCrew) then {
                    {_spawnedUnits pushBack _x} forEach units createVehicleCrew _veh;
                };
                _spawnedVehicles pushBack _veh;
                _veh setDir _dir;
            };
        } forEach _vehicles;
        
        if (_errors > 0) then {
            systemChat format ["Unable to find suitable location for %1 vehicles",_errors];
        };
        
        _rangeData pushBack _spawnedVehicles;
        _rangeData pushBack _spawnedUnits;
        
        // addCuratorEditableObjects is server only :P
        if(count _spawnedVehicles > 0) then {
            {
                [_x,[_spawnedVehicles,true]] remoteExec ['addCuratorEditableObjects',2,false];
            } foreach allCurators;
        };
        
        GVAR(objectives) pushBack _rangeData;
        publicVariable QGVAR(objectives);

        missionNamespace setVariable [_busyVar,false];
        LOG(" ==== DONE");
    },[_typeList,name _caller,_objectiveText,_addCrew,_thisRangeIndex,_hintSubtitle,_busyVar,_markerType,_showHint]] call CBA_fnc_waitUntilAndExecute;
};
