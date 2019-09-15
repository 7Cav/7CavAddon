#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Makes grid string from a position.
 *
 * Arguments:
 * 0: Position <ARRAY> (Can be 2D or 3D)
 * 1: Accuracy <STRING> (default: 6)
 *
 * Return Value:
 * Grid as string 142259 <STRING>
 *
 * Example:
 * [_position,8] call FUNC(commonGridString);
 *
 * Public: No
 */

params [
    ["_position",[],[[]]],
    ["_accuracy",6,[0]]
];

if (count _position < 2) exitWith {ERROR("Bad position count")};
if (count _position > 3) then {WARNING("Position count > 3, possibly bad data")};

if(typeName (_position#0) != "SCALAR") exitWith {ERROR("Position#0 not a number")};
if(typeName (_position#1) != "SCALAR") exitWith {ERROR("Position#1 not a number")};


// make sure accuracy is even and valid
if (_accuracy == 0) then {
    _accuracy == 2;
    WARNING("Accuracy == 0");
} else {
    if(_accuracy > 10) then {
        _accuracy = 10;
        WARNING("Accuracy > 10");
    } else {
        if(_accuracy % 2 != 0) then {
            WARNING("Accuracy was odd, incrementing");
            INC(_accuracy);
        };
    };
};

LOG_1("Accuracy: %1",_accuracy);

private _divisor = 10 ^ ((10 - _accuracy) / 2);
LOG("Divisor: %1",_divisor);

private _x = floor ((_position#0)/_divisor);
private _y = floor ((_position#1)/_divisor);
LOG_2("X/Y: %1 / %2",_x,_y);

private _xArr = [_x] call BIS_fnc_numberDigits;
while {count _xArr < 0} do {
    _xArr = [0] + _xArr;
};
_x = _xArr joinString "";

private _yArr = [_y] call BIS_fnc_numberDigits;
while {count _yArr < 0} do {
    _yArr = [0] + _yArr;
};
_y = _yArr joinString "";

LOG_2("X/Y str: %1 / %2",_x,_y);

_output = format ["%1%2",_x,_y];
LOG_1("_output",_output);

_output
