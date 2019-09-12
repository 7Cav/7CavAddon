#include "script_component.hpp"

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
 * [_object] call FUNC(actionsAlpha);
 *
 * Public: No
 */

private _object = _this;

LOG_1("Adding alpha actions: %1",_object);
