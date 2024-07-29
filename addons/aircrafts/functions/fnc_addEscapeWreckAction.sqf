#include "..\script_component.hpp";
/*
 * Author: CPL.Turn.J, heavy influence from SGT.Brostrom.A
 * This adds a function to allow pilots to escape from wrecked airframes.
 * 
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Example:
 * [this] call cav_aircrafts_fnc_addEscapeWreckAction
 */

params [["_vehicle", objNull, [objNull]]];

// Check so the options arent added twice.
if (!isNil {GETVAR(_vehicle,QGVAR(EscapeAction))}) exitWith {};

private _conditionAction = '(!(assignedVehicleRole player isEqualTo [])) && ((damage vehicle player) >= 1)';

private _actionID = [
    _vehicle,
    "<t color='#FDDA0D'>Escape Wreck (HOLD)</t>",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_takeOff1_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_takeOff1_ca.paa",
    _conditionAction,
    "true",
    {},
    {},
    {
        params ["_target", "_caller", "_actionID"];
        [_target, true] call FUNC(doGetOutHeloSide);
    },
    {},
    [],
    5,
    25,
    true
] call BIS_fnc_holdActionAdd;

SETVAR(_vehicle,QEGVAR(EscapeAction),_actionID);
