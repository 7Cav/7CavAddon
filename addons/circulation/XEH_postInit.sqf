#include "script_component.hpp"

["treatmentCarbonate", {_this call FUNC(treatmentAdvanced_CarbonateLocal)}] call CBA_fnc_addEventHandler;
["treatmentKetamine", {_this call FUNC(treatmentAdvanced_KetamineLocal)}] call CBA_fnc_addEventHandler;
["treatmentNaloxone", {_this call FUNC(treatmentAdvanced_NaloxoneLocal)}] call CBA_fnc_addEventHandler;
["treatmentGeneric", {_this call FUNC(treatmentAdvanced_GenericLocal)}] call CBA_fnc_addEventHandler;
["treatmentTXA", {_this call FUNC(treatmentAdvanced_TXALocal)}] call CBA_fnc_addEventHandler;
["treatmentReorientation", {_this call FUNC(treatmentAdvanced_ReorientationLocal)}] call CBA_fnc_addEventHandler;