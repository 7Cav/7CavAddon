#include "..\script_component.hpp"
/*
 * Author: SGT.Brostrom.A
 * This function sets your team name based on your units prefix
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Unit Callsign <STRING>
 *
 * Example:
 * [player] call cav_infantry_fnc_setUnitTeam;
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

private _color = [_unit] call FUNC(getUnitTeam);

if (assignedTeam _unit == _color) exitWith {INFO_1("Team color for unit already set %1",_unit);false};

[_unit, _color] call ace_interaction_fnc_joinTeam;

INFO_2("%1 have joind team %2.",_unit,_color);

true