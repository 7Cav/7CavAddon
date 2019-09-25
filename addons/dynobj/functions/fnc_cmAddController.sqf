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
 * [_infostand,["Alpha"]] call cav_dynobj_fnc_cmAddController;
 *
 * Public: Yes
 */

params [
    ["_object",objNull,[objNull]],
    ["_categories",[],[[]]]
];

if(isNull _object) exitWith {ERROR_1("Object was null: %1",_this)};

LOG_2("Creating controller: %1 at %2",_this,getPos _object);

[_object,"Dynamic Objectives Info",{
    private _info = [];
    _info pushBack "Developed and maintained by<br />%1.";
    _info pushBack "Submit feedback or bug reports at<br />%2";
    [
        "Info",
        _info joinString "<br /><br />",
        ["7Cav 1BN S3 Scripting","github.com/7Cav/7CavAddon"]
    ] call FUNC(cmGlobalHint);
},[],0,[],"FFFF33"] call FUNC(cmAddAction);
private _allCategories = [
    ["alpha",FUNC(aActions)],
    ["bravo",FUNC(bActions)],
    ["charlie",FUNC(cActions)]
];

{
    _x params ["_cat","_fnc"];
    if((toLower _cat) in _categories || count _categories == 0) then {
        _object call _fnc;
    };
} forEach _allCategories;

private _cleanupCond = format ["count (%1 select {count _x > 0}) > 0",QGVAR(objectives)];
[_object,"Objective Cleanup",FUNC(cmCleanup),[],0,[_cleanupCond]] call FUNC(cmAddAction);
