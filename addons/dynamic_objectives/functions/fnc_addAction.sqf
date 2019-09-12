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
 * [_object,"CAS Range - Easy",FUNC(CasRangeEasy)] call FUNC(addAction);
 *
 * Public: No
 */

// BIS_fnc_randomPos

params [
    ["_object",objNull,[objNull]],
    ["_title","",[""]],
    ["_code",{},[{}]],
    ["_args",[],[[]]]
];

if (isNull _object) exitWith {ERROR_1("Object was null: %1",_this)};
if (_title == "") exitWith {ERROR_1("Title was empty: %1",_this)};
if (_code isEqualTo {}) exitWith {ERROR_1("Code was empty: %1",_this)};

LOG_3("Adding action: %1 - %2 - %3",_object,_title,_args);

_zeusCond = "!isNull (getAssignedCuratorLogic _this)";

_object addAction [format ["<t color='#FF0000'>%1</t>",_title],_code,_args,10,false,true,"",_zeusCond,3];
