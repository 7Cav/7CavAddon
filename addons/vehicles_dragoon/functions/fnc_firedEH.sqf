#include "script_component.hpp";

params ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

// Control initiation of airburst
private _canAirburst = (configFile >> "CfgAmmo" >> _ammo >> "airbursting") call BIS_fnc_getCfgData;

if (isNil {_canAirburst}) exitWith {diag_log "Cannot airburst"};
if (_canAirbust < 1) exitWith {diag_log "Unable to airburst 2"};

if (!local gunner _vehicle) exitWith {diag_log "Not local"};
private _vehiclePos = getPosASL _vehicle;
private _targetRange = [50,2000] call FUNC(getRange);

[FUNC(airburstPFH), 0, [_vehiclePos, _ammo, _projectile, _targetRange]] call CBA_fnc_addPerFrameHandler;