#include "../script_component.hpp"
/*
 * Author: CPL.Brostrom.A 
 * This function return a texture path if one exist.
 *
 * Arguments:
 * nothing
 *
 * Return Value:
 * true/false <BOOLEAN>
 *
 * Example:
 * [] call FUNC(getTexture);
 * [] call cav_identity_fnc_getTexture;
 *
 * Public: No
 */

private _nothing = "#(argb,8,8,3)color(0,0,0,0)";

if (!hasInterface) exitWith {""};

private _profileName = profileName;
private _nameList = _profileName splitString ".";

if !(count _nameList == 3) exitWith {_nothing};

private _rank = _nameList#0;
_rank = toLower _rank;
private _name = _nameList#1;
_name = toLower _name;

private _texture = format["\z\cav\addons\identity\data\%1_%2_ca.paa", _name, _rank];
if !(fileExists _texture) exitWith {_nothing};

_texture

