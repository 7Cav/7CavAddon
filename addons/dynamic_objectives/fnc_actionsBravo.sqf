#include "script_component.hpp"

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
 * [_object] call FUNC(actionsBravo);
 *
 * Public: No
 */

private _object = _this;

LOG_1("Adding bravo actions: %1",_object);
