#include "../script_component.hpp"
/*
 * Author: WO1.Raynor.D
 * Find random position with given parameters
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * Position <ARRAY>
 *
 * Example:
 *
 *
 * Public: No
 */

LOG_1("cmRandomPosition: %1",_this);

params [
    ["_minDistance",10]
];

private _pos = [];
private _runCount = 0;
private _gradient = 0.1;

// Run BIS_fnc_randomPos a bunch of times and check the location against isFlatEmpty
// Look for a low gradient first, then increase if we can't find any valid pos
while {_runCount < 5000} do {
    INC(_runCount);
    if(_runCount % 100 == 0) then {
        _gradient = (_runCount / 10000) + 0.1;
        LOG_1("Increasing allowable gradient to %1",_gradient);
    };
    _pos = (([] call BIS_fnc_randomPos) isFlatEmpty [_minDistance,-1,_gradient,25]);
    if(count _pos > 0) exitWith {
        LOG_1("Found valid position: %1",_pos);
        _pos = ASLtoAGL _pos;
    };
};
if(count _pos == 0) then {
    ERROR_1("Unable to find suitable random location: runCount:%1",_runCount);
} else {
    LOG_3("Found suitable location: runCount: %1 - pos: %2 - _gradient: %3",_runCount,_pos,_gradient);
};

_pos
