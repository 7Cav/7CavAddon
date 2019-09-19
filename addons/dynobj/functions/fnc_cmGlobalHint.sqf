#include "../script_component.hpp"
/*
 * Author: WO1.Raynor.D
 * Show a hint
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Category(s) <ARRAY> (default: [])
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call cav_dynobj_fnc_cmAddController;
 *
 * Public: No
 */

params [
    ["_subtitle","",[""]],
    ["_mainText","",[""]],
    ["_accentWords",[],[[]]]
];

private _finalTextArr = [];

private _titleText = format ["<t color='#ffc61a' size='1.3' shadow='1' shadowColor='#000000' align='center'>%1</t>",QUOTE(COMPONENT_BEAUTIFIED)];
_finalTextArr pushBack _titleText;

if(_subTitle != "") then {_finalTextArr pushback format ["<t size='1.1'>%1</t>",_subTitle]};

private _imageText = format ["<img size='5' image='%1' align='center'/>", QPATHTOEF(common,data\faction_cav_flag_co.paa)];
_finalTextArr pushBack _imageText;

private _strMainText = _mainText;
if(count _accentWords > 0) then {
    _accentWords = _accentWords apply {format ["<t color='#ffc61a'>%1</t>",_x]};
    _strMainText = format ([_mainText] + _accentWords);
};
_finalTextArr pushBack _strMainText;

parseText(_finalTextArr joinString "<br /><br />") remoteExecCall ["hint", 0];
