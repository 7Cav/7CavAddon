#include "..\script_component.hpp"
/*
 * Author: SGT.Brostrom.A
 * This function get team color based on you unit prefix
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Color Name <STRING>
 *
 * Example:
 * [player] call cav_infantry_fnc_getUnitTeam;
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

private _displayName = getText (configFile >> "CfgVehicles" >> typeOf _unit >> "displayName");
_displayName = _displayName splitString " ";
_team = _displayName#0;
_teamUpper = toUpper _team;

private _color = switch (_teamUpper) do {
    case "ALPHA": {"RED"};
    case "BRAVO": {"BLUE"};
    case "CHARLIE": {"GREEN"};
    case "DELTA": {"YELLOW"};
    default {"MAIN"};
};

_color;