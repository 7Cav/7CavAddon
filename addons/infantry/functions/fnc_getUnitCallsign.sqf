#include "..\script_component.hpp"
/*
 * Author: SGT.Brostrom.A
 * This function gets your callsign based on your units displayName
 * If you have a cfgLoadouts in your mission it will be used instead.
 * Exsample: Squad Leader (BADNIT-1) will return BADNIT-1
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Unit Callsign <STRING>
 *
 * Example:
 * [player] call cav_infantry_fnc_getUnitCallsign
 *
 * Public: No
 */

params [["_unit", objNull, [objNull, ""]]];

if (_unit isEqualType objNull) then {
    _unit = typeOf _unit;
};

_displayName = getText (configFile >> "CfgVehicles" >> _unit >> "displayName");
if (isClass (missionConfigFile >> "CfgLoadouts")) then {
    _displayName = getText (missionConfigFile >> "CfgLoadouts" >> _unit >> "displayName");
};

private _callsign = _displayName splitString " ";
_callsign = _callsign select (count _callsign - 1);
_callsign = _callsign splitString "(";
_callsign = _callsign select (count _callsign - 1);
_callsign = _callsign splitString ")";
_callsign = _callsign select (count _callsign - 1);

_callsign;