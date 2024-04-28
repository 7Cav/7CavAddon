#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Clears saved values for Ares choose dialog.
 * If no indices specified, all options are cleared
 *
 * Arguments:
 * 0: Dialog title <STRING>
 * 1: Indices to reset <ARRAY of INTEGER> (optional)
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * ["Dialog Title"] call FUNC(cmResetChooseDialog);
 * ["Dialog Title",[1,2]] call FUNC(cmResetChooseDialog);
 *
 * Public: No
 */

 LOG_1("cmResetChooseDialog: %1",_this);

params [
    ["_titleText",""],
    ["_indices",[]]
];

private _titleText_varName = _titleText call Achilles_fnc_TextToVariableName;
private _titleVariableIdentifier = format ["Ares_ChooseDialog_DefaultValues_%1", _titleText_varName];

if(count _indices == 0) then { // reset all
    private _i = 0;
    private _varName = format["%1_%2",_titleVariableIdentifier,_i];
    private _varId = uiNamespace getVariable _varName;
    while {!isNil "_varId"} do {
        LOG_3("%1 - %2 - %3",_i,_varName,isNil "_varId");
        uiNamespace setVariable [_varName, nil];
        INC(_i);
        _varName = format["%1_%2",_titleVariableIdentifier,_i];
        _varId = uiNamespace getVariable _varName;
    };
} else {
    {
        private _varName = format["%1_%2",_titleVariableIdentifier,_x];
        uiNamespace setVariable [_varName, nil];
    } forEach _indices;
};
