#include "..\script_component.hpp"
/*
 * Author: SGT.Brostrom.A
 * This function return your given unit billet designation.
 * If you have a cfgLoadouts in your mission it will be used instead.
 *
 * Arguments:
 * 0: Unit/Classname <OBJECT|STRING>
 *
 * Return Value:
 * Unit Billet <STRING> (1/1/C/1-7)
 *
 * Example:
 * _x = [player] call cav_infantry_fnc_getBillet;
 * _x // 1/1/C/1-7
 *
 * Public: Yes
 */

params [["_unit", objNull, [objNull,""]]];


private _hashMap = [_unit] call FUNC(getUnitCallsign);

private _regiment = _hashMap getOrDefault ["regiment", ""];
private _battalion = _hashMap getOrDefault ["battalion", ""];
private _company = _hashMap getOrDefault ["company", ""];
private _platoon = _hashMap getOrDefault ["platoon", ""];
private _squad = _hashMap getOrDefault ["squad", ""];

if (_regiment == "") exitWith {""};
if (_battalion == "") exitWith {format ["%1",_regiment];};
if (_company == "") exitWith {format ["%1-%2",_battalion,_regiment];};
if (_platoon == "") exitWith {format ["%1/%2-%3",_company,_battalion,_regiment];};
if (_squad == "") exitWith {format ["%1/%2/%3-%4",_platoon,_company,_battalion,_regiment];};
format ["%1/%2/%3/%4-%5",_squad,_platoon,_company,_battalion,_regiment];