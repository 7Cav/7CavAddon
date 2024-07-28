#include "..\script_component.hpp"
/*
 * Author: CPL.Brostrom.A
 * This Function gets your units given squads callsign
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True or False <BOOLEAN>
 *
 * Example:
 * [player] call cav_infantry_fnc_setUniqCallsign
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

if (isNull _unit) exitWith {};

private _classname = typeOf _unit;
private _group = group _unit;
private _currentID = groupId group _unit;

private _hashMap = [_unit] call FUNC(getDesignation);
private _regiment = _hashMap getOrDefault ["regiment", "0"];
if (_regiment == "0") exitWith {INFO_1("Regiment for %1 is not set, callsign not changed",_unit); false};

INFO_1("Attempting to set callsign for %1",_unit);
private _callsign = [_unit] call FUNC(getUnitCallsign);

// Check if the callsign is structured correctly CALLSIGN-1
private _callsignSplit = _callsign splitString "-";
if (count _callsignSplit != 2 ) exitWith {INFO_1("Uniq callsign not changed for %1",_unit); false};

// Check if your name is already set
if (_currentID == _callsign) exitWith {INFO_1("Uniq callsign for unit already set %1",_unit); false};

// Check if name correspon to callsign given
private _squad = _callsignSplit#1;
private _expectedSquad = _hashMap getOrDefault ["squad", "0"];

if (_squad != _expectedSquad) exitWith {INFO_2("Expected squad number value %1 don't match config %2",_expectedSquad,_squad); false};

INFO_1("Units group callsign set to '%1'",_callsign);

[_group, _callsign] call CBA_fnc_setCallsign;

true