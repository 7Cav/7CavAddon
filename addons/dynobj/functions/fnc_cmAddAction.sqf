#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Adds actions to a control object.
 *
 * Arguments:
 * 0: Control Object <OBJECT>
 * 1: Title <STRING>
 * 2: Code <CODE>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_object,"A/1-7 CAS Range",FUNC(aCASRange)] call FUNC(cmAddAction);
 *
 * Public: No
 */

// BIS_fnc_randomPos

params [
    ["_object",objNull,[objNull]],
    ["_title","",[""]],
    ["_code",{},[{}]],
    ["_args",[],[[]]],
    ["_priorityOffset",0,[0]],
    ["_conditions",[],[[]]]
];

if (isNull _object) exitWith {ERROR_1("Object was null: %1",_this)};
if (_title == "") exitWith {ERROR_1("Title was empty: %1",_this)};
if (_code isEqualTo {}) exitWith {ERROR_1("Code was empty: %1",_this)};

LOG_3("Adding action: %1 - %2 - %3",_object,_title,_args);

private _cond = "!isNull (getAssignedCuratorLogic _this)";

if(count _conditions > 0) then {
    _cond = ([_cond] + _conditions) joinString " && ";
    LOG_1("Extending condition: %1",_cond);
};

_object addAction [format ["<t color='#FF0000'>%1</t>",_title],_code,[_title] + _args,10+_priorityOffset,false,true,"",_cond,3];
