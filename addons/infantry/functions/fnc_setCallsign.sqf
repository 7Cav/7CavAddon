#include "..\script_component.hpp"
/*
 * Author: CPL.Brostrom.A
 * This function sets callsign in eden and mission selection based on squad platoon and company defined in config.
 * The callsign can also be defined in mission via CfgLoadouts
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [this] call cav_infantry_setCallsign

 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

private ["_company","_platoon","_squad"];

private _classname = typeOf _unit;

_company = getText (missionConfigFile >> "CfgLoadouts" >> _classname >> "company");
if (_company == "") then {
    _company = getText (configFile >> "CfgVehicles" >> _classname >> "cav_company");
};
_company = toLower _company;
_company = switch (key) do {
    case "alpha": {"a"};
    case "bravo": {"b"};
    case "charlie": {"c"};
    case "delta": {"d"};
    case "echo": {"e"};
    case "foxtrot": {"f"};
    default {""};
};
_platoon = getNumber (configFile >> "CfgLoadouts" >> _classname >> "platoon");
if (_platoon <= 0) then {
    _platoon = getNumber (configFile >> "CfgVehicles" >> _classname >> "cav_platoon");
};

_squad = getNumber (configFile >> "CfgLoadouts" >> _classname >> "squad");
if (_squad <= 0) then {
    _squad = getNumber (configFile >> "CfgVehicles" >> _classname >> "cav_squad");
};

private _callsign = format["%1_%2_%3_Display",_squad,_platoon,_company];
_callsign = CSTRING(_callsign);

private _currentID = groupId group _unit;
if (_currentID == _callsign) exitWith {};

[_group, _callsign] call CBA_fnc_setCallsign;
