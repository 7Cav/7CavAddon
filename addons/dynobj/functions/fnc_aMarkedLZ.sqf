#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Alpha's marked LZ. Designed to be called via FUNC(cmAddAction).
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Caller <OBJECT>
 * 2: Action ID <NUMBER>
 * 3: Arguments <ARRAY>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_object,"A/1-7 CAS Range",FUNC(aMarkedLZ)] call FUNC(cmAddAction);
 *
 * Public: No
 */

LOG_1("aMarkedLZ: %1",_this);
LOG(" ==== START");

params ["_target", "_caller", "_actionId","_arguments"];
_arguments params [
    ["_actionText","",[""]]
];

private _markerTypeList = ["Full","Limited","None"];

private _smokeList = ["None"] + (("configName _x isKindOf 'SmokeShell' && !(configName _x isKindOf 'Chemlight_base') && configName _x != 'SmokeShell' && configName _x find '_Infinite' > -1"
    configClasses (configFile >> 'CfgAmmo')) apply {configName _x});
LOG_1("Found %1 smokeshells",count _smokeList);

private _chemlightList = ["None"] + (("configName _x isKindOf 'Chemlight_base' && configName _x != 'Chemlight_base'"
    configClasses (configFile >> 'CfgAmmo')) apply {configName _x});
LOG_1("Found %1 chemlights",count _chemlightList);

private _helipadList = ["None"] + (("configName _x isKindOf 'Helipad_base_F' && configName _x != 'Helipad_base_F' && ((configName _x) find 'Helipad') > -1"
    configClasses (configFile >> 'CfgVehicles')) apply {configName _x});
LOG_1("Found %1 helipads",count _helipadList);

LOG(" ==== USER INPUT");
private _dialogResults = [
    "Dynamic Objectives - A/1-7 Marked LZ",
    [
        ["Name (leave blank for random)","",""],
        ["Location", ["Map Select", "Random"]],
        ["Map Mark",_markerTypeList],
        ["Show Hint",["Yes","No"]],
        ["Helipad",_helipadList],
        ["Smoke",_smokeList],
        ["Chemlight",_chemlightList]
    ]
] call Ares_fnc_showChooseDialog;

if (count _dialogResults == 0) exitWith {};

LOG_1("DialogResults: %1",_dialogResults);
private _lzName = _dialogResults#0;
private _locationRandom = (_dialogResults#1 == 1);
private _markerType = _dialogResults#2;
private _showHint = (_dialogResults#3 == 0);
private _selectedHelipad = _helipadList select _dialogResults#4;
private _selectedSmoke = _smokeList select _dialogResults#5;
private _selectedChemlight = _chemlightList select _dialogResults#6;

// if full marker, use given or random name
// otherwise, wait until we have a position to name it
if(_markerType == 0) then {
    if(_lzName == "") then {
        _lzName = [] call FUNC(cmRandomName);
    };
    _lzName = format ["LZ %1",_lzName];
};


LOG_1("_lzName: %1",_lzName);
LOG_1("_locationRandom: %1",_locationRandom);
LOG_1("_markerType: %1",_markerType);
LOG_1("_selectedHelipad: %1",_selectedHelipad);
LOG_1("_selectedSmoke: %1",_selectedSmoke);

if(isNil QGVAR(objectives)) then {
    GVAR(objectives) = [];
};

private _thisRangeIndex = nil;
if(isNil QGVAR(index_aMarkedLZ)) then {
    _thisRangeIndex = 1;
    GVAR(index_aMarkedLZ) = _thisRangeIndex;
} else {
    _thisRangeIndex = GVAR(index_aMarkedLZ) + 1;
    INC(GVAR(index_aMarkedLZ));
};
publicVariable QGVAR(index_aMarkedLZ);

// Should have received something like "CAS Range %1 (Easy)" from the action arguments
private _objectiveText = format ["%1 %2",_actionText,_thisRangeIndex];

// Subtitle for global hint later on
private _hintSubtitle = _actionText;

LOG(" ==== LOCATION");
private _error = false;
if(_locationRandom) then { // random location, run right away
    private _pos = [20] call FUNC(cmRandomPosition);
    if(count _pos == 0) then {
        _error = true;
    };
    GVAR(selectedMapPos) = _pos;
} else { // User map selection, wait for user
    GVAR(selectedMapPos) = nil;
    [] call FUNC(cmSelectMapPos);
};

if (_error) then {
    hint "Unable to find suitable location, please try again or use map selection mode.";
} else {
    [{!isNil QGVAR(selectedMapPos)},{
        LOG(" ==== ASYNC");
        params ["_lzName","_locationRandom","_markerType","_selectedHelipad","_selectedSmoke","_selectedChemlight","_showHint","_hintSubtitle","_objectiveText","_thisRangeIndex","_callerName"];
        
        if(isNil QGVAR(selectedMapPos)) exitWith {
            ERROR("selectedMapPos was nil");
        };
        if(count GVAR(selectedMapPos) == 0) exitWith {
            hint "Aborted objective creation";
        };
        
        private _centerPos = GVAR(selectedMapPos);
        
        if(_lzName == "") then {
            _lzName = [_centerPos] call FUNC(cmGridString);
        };
        
        private _rangeData = [format ["%1 (%2)",_objectiveText,_lzName],_centerPos];
        
        // Show user hint
        if(_showHint) then {
            private _locDesc = [_centerPos] call FUNC(cmDescFromNearLoc);
            
            private _grid = [_centerPos] call FUNC(cmGridString);
            
            private _hintStr = "";
            private _hintArr = "";
            switch (_markerType) do {
                case (0): { // Full
                    _hintStr = "Check your maps, %1 has deployed a new objective:<br />%2<br /><br />Location: %3<br />(%4)";
                    _hintArr = [_callerName,_lzName,_grid,_locDesc];
                };
                case (1): { // Limited
                    _hintSubtitle = "Objective Deployed";
                    _hintStr = "Check your maps, %1 has deployed a new objective:<br /><br />Location: %2";
                    _hintArr = [_callerName,_locDesc];
                };
                case (2): { // None
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
        
        // create markers
        switch (_markerType) do {
            case (0): {
                private _markerText = createMarker [format ["mkr_%1_markedLz_text_%2",QUOTE(DOUBLES(ADDON,COMPONENT)),_thisRangeIndex], _centerPos];
                _markerText setMarkerType "hd_objective";
                _markerText setMarkerColor "ColorBlue";
                _markerText setMarkerText _lzName;
                
                _rangeData pushBack [_markerText];
            };
            case (1): {
                private _marker = createMarker [format ["mkr_%1_markedLz_center_%2",QUOTE(DOUBLES(ADDON,COMPONENT)),_thisRangeIndex], _centerPos];
                _marker setMarkerType "hd_objective";
                _marker setMarkerColor "ColorBlue";
                _rangeData pushBack [_marker];
            };
            case (2): {
                LOG("Marker type none, no markers created");
                _rangeData pushBack [];
            };
        };
        
        private _spawnedVehicles = [];
        {
            if(_x != "None") then {
                private _veh = createVehicle [_x,_centerPos,[],5,"CAN_COLLIDE"];
                if(isNil "_veh") then {
                    ERROR_1("Unable to create vehicle: %1",_veh);
                } else {
                    _spawnedVehicles pushBack _veh;
                };
            };
        } foreach [_selectedHelipad,_selectedSmoke,_selectedChemlight];
        _rangeData pushBack _spawnedVehicles;
        
        // no units spawned
        _rangeData pushBack [];
        
        // addCuratorEditableObjects is server only :P
        if(count _spawnedVehicles > 0) then {
            {
                [_x,[_spawnedVehicles,true]] remoteExec ['addCuratorEditableObjects',2,false];
            } foreach allCurators;
        };
        
        GVAR(objectives) pushBack _rangeData;
        publicVariable QGVAR(objectives);
    },[_lzName,_locationRandom,_markerType,_selectedHelipad,_selectedSmoke,_selectedChemlight,_showHint,_hintSubtitle,_objectiveText,_thisRangeIndex,name _caller]] call CBA_fnc_waitUntilAndExecute;
};

// random position
/*
private _dialogResults = [
    "Dynamic Objectives - Random Position Parameters",
    [
        ["Area Must Fit Vehicle",_alphaHeliList apply {_x#0}]
    ]
] call Ares_fnc_showChooseDialog;
private _alphaHeliList = [["None",""]] + (("getText (_x >> 'editorSubcategory') == 'Cav_EdSubcat_Vehicles_Alpha' && (configName _x) isKindOf 'Helicopter_Base_F'"
    configClasses (configFile >> 'CfgVehicles')) apply {[getText (_x >> "displayName"),configName _x]});
LOG_1("Found %1 alpha helis",count _alphaHeliList);
*/
