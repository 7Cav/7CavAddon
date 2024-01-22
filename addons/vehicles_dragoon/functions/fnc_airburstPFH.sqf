#include "script_component.hpp";

(_this # 0) params ["_vehiclePos","_ammo","_projectile","_targetRange"];
(_this # 1) params ["_pID"];


if (isNull _projectile || {!alive _projectile}) exitWith {
    [_pID] call CBA_fnc_removePerFrameHandler;
};

private _projPos = getPosASL _projectile;
private _distanceFromVic = _projPos vectorDistance _vehiclePos;
if (_targetRange > _distanceFromVic  && !(_distanceFromVic > 3000)) exitWith {};

_projectile setVelocity [0,0,0];

//Boom
private _calcPos = _projPos vectorDiff ((_projPos vectorFromTo _vehiclePos) vectorMultiply (_targetRange - _distanceFromVic));

diag_log format ["Zero: %1 Velocity: %2 Calculated Distance: %3", _targetRange, vectorMagnitude velocity _projectile, _calcPos vectorDistance _vehiclePos];

private _helperName = (configFile >> "CfgAmmo" >> _ammo >> "ABSubmun") call BIS_fnc_getCfgData;
private _helper = createVehicle [_helperName, ASLtoATL _calcPos, [], 0, "FLY"];

_helper setVelocity [0, 0, -10];

deleteVehicle _projectile;

[_pID] call CBA_fnc_removePerFrameHandler;