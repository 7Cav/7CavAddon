#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Adds Alpha's actions to a control object.
 *
 * Arguments:
 * 0: Control Object <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_object] call FUNC(aActions);
 *
 * Public: No
 */

private _object = _this;

if (isNull _object) exitWith {ERROR_1("Object was null: %1",_this)};

LOG_1("Adding alpha actions: %1",_object);

[_object,"A/1-7 Conditions",FUNC(aConditions)] call FUNC(cmAddAction);
[_object,"A/1-7 CAS Range",FUNC(aCASRange)] call FUNC(cmAddAction);
[_object,"A/1-7 Marked LZ",FUNC(aMarkedLZ)] call FUNC(cmAddAction);
