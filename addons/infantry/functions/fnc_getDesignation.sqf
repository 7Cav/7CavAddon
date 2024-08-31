#include "..\script_component.hpp"
/*
 * Author: CPL.Brostrom.A
 * This function fetches your callsign based on config values.
 * The callsign can also be defined in mission via CfgLoadouts
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * HashMap
 *
 * Example:
 * [player] call cav_infantry_fnc_getDesignation
 *
 * Public: No
 */

params [["_unit", objNull, [objNull, ""]]];

if (_unit isEqualType objNull) then {
    _unit = typeOf _unit;
};

private _fn_companyLetter = {
    params ["_company"];
    _company = toLower _company;
    private _return = switch (_company) do {
        case "alpha": {"A"};
        case "bravo": {"B"};
        case "charlie": {"C"};
        case "delta": {"D"};
        case "echo": {"E"};
        case "foxtrot": {"F"};
        default {""};
    };
    _return;
};

private _fn_getConfigValue = {
    params ["_configKey"];
    private _return = "";
    _CfgLoadouts = isClass (missionConfigFile >> "CfgLoadouts");
    
    if (_configKey in ["company", "regimentName"] ) then {
        _configKeyPrefixed = format["cav_%1",_configKey];
        _return = getText (configFile >> "CfgVehicles" >> _unit >> _configKeyPrefixed);
        if (_CfgLoadouts) then {
            if (_CfgLoadouts) then {
                _return = getText (missionConfigFile >> "CfgLoadouts" >> _unit >> _configKey);
            };
        };
        if (_configKey == "company") then {
            _return = _return call _fn_companyLetter;
        };
    } else {
        _configKeyPrefixed = format["cav_%1",_configKey];
        _return = getNumber (configFile >> "CfgVehicles" >> _unit >> _configKeyPrefixed);
        if (_CfgLoadouts) then {
            _return = getNumber (missionConfigFile >> "CfgLoadouts" >> _unit >> _configKey);
        };
        _return = [_return, 0] select (_return <= 0);
        _return = str _return;
    };
    _return;
};

private _regimentName = ["regimentName"] call _fn_getConfigValue;
private _regiment = ["regiment"] call _fn_getConfigValue;
private _battalion = ["battalion"] call _fn_getConfigValue;
private _company = ["company"] call _fn_getConfigValue;
private _platoon = ["platoon"] call _fn_getConfigValue;
private _squad = ["squad"] call _fn_getConfigValue;

private _return = createHashMapFromArray [
    ["regimentName", _regimentName],
    ["regiment", _regiment],
    ["battalion", _battalion],
    ["company", _company],
    ["platoon", _platoon],
    ["squad", _squad]
];

_return;