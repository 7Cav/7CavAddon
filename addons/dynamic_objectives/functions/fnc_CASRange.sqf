#include "../script_component.hpp"
/*
 * Author: WO1.Raynor.D
 * Spawns CAS objectives
 *
 * Arguments:
 * 0: Position <ARRAY>
 * 1: Vehicle List <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[0,0,0],5,["O_MRAP_02_F"]] call cav_dynamic_objectives_fnc_CASRange;
 *
 * Public: No
 */

params [
    "_initialPos",
    "_type"
];

if (isNil "_initialPos") exitWith {ERROR_1("_initialPos was empty: %1",_this)};
if (isNil "_type") exitWith {ERROR_1("_type was empty: %1",_this)};

if (isNil QGVAR(CasRangeIndex)) then {
    GVAR(CasRangeIndex) = 0;
} else {
    INC(GVAR(CasRangeIndex));
};

private _finalPos = [];
while {count _finalPos == 0 || count _finalPos > 2} do {
    _finalPos = [_initialPos, 0, 500, 30, 0, 0.1, 0] call BIS_fnc_findSafePos;
};

_markerName = createMarker [format ["%1_%2",QUOTE(DOUBLES(ADDON,COMPONENT)),GVAR(CasRangeIndex)], _finalPos];
_markerName setMarkerType "hd_objective";
_markerName setMarkerText format ["CAS Range %1",GVAR(CasRangeIndex)];

LOG_1("Spawning CAS Range: %1",ARR_2(_finalPos,_type));

hint format ["Building CAS Range (%1) near %2",_type,_finalPos];
private _vehicles = [];

switch (_type) do {
    case ("Easy"): {
        _vehicles = [10,0,0] call FUNC(getCasVehicles);
    };
    case ("Medium"): {
        _vehicles = [4,6,0] call FUNC(getCasVehicles);
    };
    case ("Hard"): {
        _vehicles = [2,2,6] call FUNC(getCasVehicles);
    };
};

private _radius = count _vehicles * 12;
LOG_1("_radius: %1",_radius);

private _result = [];

private _dir = random 360;
{
    private _vehPos = [];
    while {count _vehPos == 0 || count _vehPos > 2} do {
        _vehPos = [_finalPos, 0, _radius, 10, 0, 1, 0] call BIS_fnc_findSafePos;
    };
    systemChat str [_x,_vehPos];
    private _veh = createVehicle [_x, _vehPos];
    _veh setDir _dir;
} forEach _vehicles;
