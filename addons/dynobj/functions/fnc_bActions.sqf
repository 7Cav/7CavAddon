#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Adds Bravos's actions to a control object.
 *
 * Arguments:
 * 0: Control Object <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_object] call FUNC(bActions);
 *
 * Public: No
 */

private _object = _this;

if (isNull _object) exitWith {ERROR_1("Object was null: %1",_this)};

LOG_1("Adding bravo actions: %1",_object);

private _prefix = "Bravo";
