#include "../script_component.hpp"
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

if(isNull _object) exitWith {ERROR_1("Object was null: %1",_this)};

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

_object setVariable [QGVAR(locationRandom),true];

_condZeus = "!isNull (getAssignedCuratorLogic _this)";
_condRandom = format ["%1 && _target getVariable ['%2',true]",_condZeus, QGVAR(locationRandom)];
_condMapSel = format ["%1 && !(_target getVariable ['%2',true])",_condZeus, QGVAR(locationRandom)];

_object addAction ["<t color='#FF0000'>Location: Random</t>",QUOTE(_this#0 setVariable [ARR_3(QQGVAR(locationRandom),false,true)]),[],11,false,false,"",_condRandom,3];
_object addAction ["<t color='#FF0000'>Location: Map Select</t>",QUOTE(_this#0 setVariable [ARR_3(QQGVAR(locationRandom),true,true)]),[],11,false,false,"",_condMapSel,3];
