#include "script_component.hpp"
/*
 * Author: WO1.Raynor.D
 * Adds actions to an object for controlling dynamic objectives.
 * If no categories are specified, all categories' actions will be added.
 * Only players with access to Zeus will have access to the actions.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Category(s) <ARRAY> (default: [])
 *
 * Return Value:
 * None
 *
 * Example:
 * [_signpost,["Alpha"]] call cav_dynamic_objectives_fnc_addController;
 *
 * Public: Yes
 */

params [
    ["_object",objNull,[objNull]],
    ["_categories",[],[[]]]
];

if(isNull _object) exitWith {ERROR("Object was null")};

LOG_2("Creating controller: %1 at %2",_this,getPos _object);

private _allCategories = [
    ["Alpha",FUNC(actionsAlpha)],
    ["Bravo",FUNC(actionsBravo)],
    ["Charlie",FUNC(actionsCharlie)]
];

{
    _x params ["_cat","_fnc"];
    if(_cat in _categories || count _categories == 0) then {
        _object call _fnc;
    };
} forEach _allCategories;
