#include "../script_component.hpp"
/*
 * Author: WO1.Raynor.D
 * Finds the closest location to a given position and returns a string descriptor.
 * Examples:
 * 800m NE of Pyrgos
 * 1.7km S of Telos
 * 8km SW of Kalochori
 *
 * Arguments:
 * 0: Position <ARRAY>
 * 1: Max Distance <NUMBER> (default: 20000)
 *
 * Return Value:
 * Descriptor <STRING>
 *
 * Example:
 * []
 *
 * Public: No
 */

LOG_1("descFromNearLoc: %1",_this);

params [
    "_pos",
    ["_maxDist",20000,[0]]
];

private _nearestLocation = (nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage"],_maxDist]) select 0;
private _nearestLocationPos = getpos _nearestLocation;
LOG_1("_nearestLocations: %1",_nearestLocations);

private _locationDesc = "";
private _locName = text _nearestLocation;
if(_centerPos inArea _nearestLocation) then {
    _locationDesc = _locName;
} else {
    private _distance = _nearestLocationPos distance _centerPos;
    private _distanceTxt = "";
    if(_distance < 1000) then {
        _distanceTxt = format ["%1m",(round (_distance / 100)) * 100];
    } else {
        if(_distance < 2000) then {
            _distanceTxt = format ["%1km",(_distance / 1000) toFixed 1];
        } else {
            _distanceTxt = format ["%1km",round (_distance / 1000)];
        };
    };
    
    private _dirTo = [_nearestLocationPos, _centerPos] call BIS_fnc_dirTo;
    
    private _strCard = {
        if(_dirTo < _x#0) exitWith {_x#1};
    } forEach [
        [22.5,'N'],
        [67.5,'NE'],
        [112.5,'E'],
        [157.5,'SE'],
        [202.5,'S'],
        [247.5,'SW'],
        [292.5,'W'],
        [337.5,'NW'],
        [360,'N']
    ];
    
    _locationDesc = format ["%1 %2 of %3",_distanceTxt,_strCard,_locName];
};

_locationDesc
