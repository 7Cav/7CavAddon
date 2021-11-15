#include "script_component.hpp"
/*
 * Author: Katalam
 * Airway Management for occluding local
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Item classname <STRING>
 *
 * Return Value:
 * Succesful treatment <BOOL>
 *`
 * Example:
 * [player, "Accuvac"] call kat_airway_fnc_treatmentAdvanced_accuvacLocal;
 *
 * Public: No
 */

params ["_medic", "_target", "_item"];

private _bloodPressure = GET_BLOOD_PRESSURE(_target);
_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];

if (_bloodPressureL > 100 && _bloodPressureL > 130) then {
    [_target, false] call ace_medical_fnc_setUnconscious;
};

[_target, "Carbonate"] call ace_medical_treatment_fnc_addToTriageCard;
[_target, "activity", LSTRING(use_log), [[_medic] call ace_common_fnc_getName, "Carbonate"]] call ace_medical_treatment_fnc_addToLog;

true

