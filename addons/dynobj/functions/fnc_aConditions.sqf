#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Alpha's condition presets. Designed to be called via FUNC(cmAddAction).
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
 * [_object,"A/1-7 CAS Range",FUNC(aCASRange)] call FUNC(cmAddAction);
 *
 * Public: No
 */

 LOG_1("aConditions: %1",_this);
 LOG(" ==== START");

 params ["_target", "_caller", "_actionId"];
 
 // [text,[overcast,fogValue]]
 private _conditions = [
    ["Unchanged",[]],
    ["Clear",[0,[0,0,0]]],
    ["Fair",[0.3,[0.01,0,0]]],
    ["Overcast",[0.75,[0.07,0,0]]],
    ["Low Hanging Fog",[0,[0.71,0.103,0]]],
    ["Heavy Fog",[0.65,[0.4,0,0]]]
];

// [text,hour]
private _times = [
    ["Unchanged",-1],
    ["Early Morning",3],
    ["Dawn",((date call BIS_fnc_sunriseSunsetTime) select 0) - 0.35],
    ["Morning",((date call BIS_fnc_sunriseSunsetTime) select 0) + 2],
    ["Noon",12],
    ["Evening",((date call BIS_fnc_sunriseSunsetTime) select 1) - 2],
    ["Dusk",((date call BIS_fnc_sunriseSunsetTime) select 1) + 0.35],
    ["Late Night",23]
];

// [text,[year,month,day]]
private _phases = [
   ["Unchanged",[]],
   ["First Quarter",[2035,6,2]],
   ["Full Moon",[2035,6,10]],
   ["Third Quarter",[2035,6,18]],
   ["New Moon",[2035,6,26]]
];

LOG(" ==== USER INPUT");
private _dialogResults = [
    "Dynamic Objectives - A/1-7 Conditions",
    [
        ["Condition", _conditions apply {_x#0}],
        ["Time", _times apply {_x#0}],
        ["Moon Phase", _phases apply {_x#0}]
    ]
] call Ares_fnc_showChooseDialog;

if (count _dialogResults == 0) exitWith {};

LOG_1("DialogResults: %1",_dialogResults);

private _selectedCondition = _conditions select _dialogResults#0;
LOG_1("_selectedCondition: %1",_selectedCondition);
private _selectedTime = _times select _dialogResults#1;
LOG_1("_selectedTime: %1",_selectedTime);
private _selectedPhase = _phases select _dialogResults#2;
LOG_1("_selectedPhase: %1",_selectedPhase);

private _hintStrArr = [];
private _hintArr = [];
private _newDate = [];
private _dateSet = false;
private _hintStrIndex = 1;
if (count (_selectedPhase#1) > 0) then {
    _newDate = _selectedPhase#1;
    _newDate pushBack date#3;
    _newDate pushBack date#4;
    _hintStrArr pushBack format ["Moon phase set to %1%2.","%",_hintStrIndex];
    INC(_hintStrIndex);
    _hintArr pushBack _selectedPhase#0;
};
if(_selectedTime#1 > 0) then {
    if(count _newDate == 0) then {
        _newDate = date;
    };
    _newDate set [3,_selectedTime#1];
    _newDate set [4,0];

    _hintStrArr pushBack format ["Time set to %1%2.","%",_hintStrIndex];
    INC(_hintStrIndex);
    _hintArr pushBack _selectedTime#0;
};

if(count _newDate > 0) then {
    [_newDate] remoteExec ["setDate"];
};

if (count (_selectedCondition#1) > 0) then {
    [_selectedCondition#1#0] spawn BIS_fnc_setOvercast;
    (_selectedCondition#1#1) spawn BIS_fnc_setFog;
    _hintStrArr pushBack format ["Condition set to %1%2.","%",_hintStrIndex];
    INC(_hintStrIndex);
    _hintArr pushBack _selectedCondition#0;
};



private _hintStr = "";
if (count _hintStrArr == 0) then {
    _hintStr = "Condition is %1.";
    _hintArr = ["Unchanged"];
} else {
    _hintStr = _hintStrArr joinString "<br />";
};

[
    "A/1-7 Conditions",
    _hintStr,
    _hintArr
] call FUNC(cmGlobalHint);
