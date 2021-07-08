#include "../script_component.hpp"
/*
 * Author: CPL.Brostrom.A 
 * This function return true or false if player have the corrent uniform.
 *
 * Arguments:
 * nothing
 *
 * Return Value:
 * true/false <BOOLEAN>
 *
 * Example:
 * [] call FUNC(allowApplication);
 * [] call cav_identity_fnc_allowApplication;
 *
 * Public: No
 */
 
if (is3DEN) exitWith {false};
if !(hasInterface) exitWith {false};
if !(uniform player isKindOf ["rhs_uniform_acu_ucp", configFile >> "CfgWeapons"]) exitWith {false};
if (count getObjectTextures player == 5) exitWith {false};
if !((getObjectTextures player)#3 == "#(argb,8,8,3)color(0,0,0,0)") exitWith {false};
 
true
