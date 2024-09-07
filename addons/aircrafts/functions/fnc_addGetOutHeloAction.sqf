#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A (With the help from; 654wak654)
 * This function add two get out side addActions avaible for players in
 * cargoIndex positions.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Color Action <BOOL>
 *
 * Example:
 * [this] call cav_aircrafts_fnc_addGetOutHeloAction
 * [this, true] call cav_aircrafts_fnc_addGetOutHeloAction
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_useColor", true]
];

// Check so the options arent added twice.
if (!isNil {GETVAR(_vehicle,QGVAR(GetOutAction))}) exitWith {};

private _leftSide = "Get out Left Side";
private _rightSide = "Get out Right Side";

if (_useColor) then {
    _leftSide = "<t color='#ff0000'>Get out Left Side</t>";
    _rightSide = "<t color='#0000ff'>Get out Right Side</t>";
};

private _actionIDL = _vehicle addAction [
    _leftSide,
    {[_this select 0, true] call FUNC(doGetOutHeloSide)},
    0, 1.5, true, true, "User12",
    "(_target getCargoIndex _this) != -1"
];

private _actionIDR = _vehicle addAction [
    _rightSide,
    {[_this select 0, false] call FUNC(doGetOutHeloSide)},
    0, 1.5, true, true, "User13",
    "(_target getCargoIndex _this) != -1"
];

SETVAR(_vehicle,QEGVAR(GetOutAction),[_actionIDL,_actionIDR]);