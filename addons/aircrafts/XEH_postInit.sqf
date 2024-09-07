#include "script_component.hpp"

["AllVehicles", "init", {
    params ["_vehicle"];

    if (_vehicle iskindOf "rhs_uh1h_base") then {
        [_vehicle] call FUNC(addGetOutHelo);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    if (_vehicle iskindOf "RHS_UH1_Base") then {
        [_vehicle] call FUNC(addGetOutHelo);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "RHS_Mi24_base") then {
        [_vehicle] call FUNC(addGetOutHelo);
        [_vehicle] call FUNC(addLineJump);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "RHS_Mi8_base") then {
        [_vehicle] call FUNC(addLineJump);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "Heli_Transport_02_base_F") then {
        [_vehicle] call FUNC(addLineJump);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "RHS_C130J_Base") then {
        [_vehicle,nil,nil,true] call FUNC(addLineJump);
        [_vehicle,nil,nil,nil,nil,true] call FUNC(addHaloJump);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "USAF_C130J") then {
        [_vehicle,nil,nil,true] call FUNC(addLineJump);
        [_vehicle,nil,nil,nil,nil,true] call FUNC(addHaloJump);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "USAF_C17") then {
        [_vehicle,nil,nil,true] call FUNC(addLineJump);
        [_vehicle,nil,nil,nil,nil,true] call FUNC(addHaloJump);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if ((_vehicle isKindOf "USAF_F22_Heavy") || (_vehicle isKindOf "USAF_F35A") || (_vehicle isKindOf "USAF_A10")) then {
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "vtx_MH60M") then {
        [_vehicle] call FUNC(addGetOutHelo);
        [_vehicle] call FUNC(addEscapeWreck);
    };
    
    if (_vehicle iskindOf "TF373_SOAR_MH47G_Base") then {
        [_vehicle] call FUNC(addLineJump);
        [_vehicle] call FUNC(addEscapeWreck);
    };    
}, true, ["man"], true] call CBA_fnc_addClassEventHandler;