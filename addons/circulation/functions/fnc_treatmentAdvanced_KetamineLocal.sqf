#include "script_component.hpp"
/*
 * Author: 2LT.Mazinski
 * Local action for carbonate
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Item classname <STRING>
 *
 * Return Value:
 * Succesful treatment <BOOL>
 *`
 * Example:
 * [player, "Carbonate"] call aceP_airway_fnc_treatmentAdvanced_CarbonateLocal;
 *
 * Public: No
 */

params ["_medic", "_target", "_item"];

////////Activates Wet Distortion Effect slightly/////////
[] spawn {sleep random 100; 
["WetDistortion", 300, [1,0.1,0.1,0.15,0.51,1,1,-0.3,0.01,0.05,0.01,0.71,0.2,0.2,0.2]] spawn
{
    params ["_name", "_priority", "_effect", "_handle"];
    while {
        _handle = ppEffectCreate [_name, _priority];
        _handle < 0
    } do {
        _priority = _priority + 1;
    };
    /* TODO Localize */ systemchat "Du merkst etwas..."; 
    _handle ppEffectEnable true;
    _handle ppEffectAdjust _effect;
    _handle ppEffectCommit 30;
    waitUntil {ppEffectCommitted _handle};
};};

[] spawn {sleep random 100; 
//////// Activates Colour Corrections Effect slightly (this example black/white)////////
["ColorCorrections", 1500, [0.75,1.08,0.09,[0,0,1.35,0.34],[3.45,1,1,1.16],[0.33,0.33,0.33,0],[0,0,0,0,0,0,4]]] spawn
{
    params ["_name", "_priority", "_effect", "_handle"];
    while {
        _handle = ppEffectCreate [_name, _priority];
        _handle < 0
    } do {
        _priority = _priority + 1;
    };
    /* TODO Localize */ systemchat "Du merkst etwas..."; 
    _handle ppEffectEnable true;
    _handle ppEffectAdjust _effect;
    _handle ppEffectCommit 30;
    waitUntil {ppEffectCommitted _handle}; 
};};

[] spawn {sleep 120; ace_player say "ar_sound_angels_stereo"; /* TODO Localize */ systemchat "Die Welt ist weich und wundervoll und gut. Hörst du das? Ist das ein Engelschor?"; };

[] spawn {sleep 300; ace_player say "ar_sound_angels_stereo"; /* TODO Localize */ systemchat "Engel umgeben dich und wachen. Sie behüten dich und nichts kann dir passieren.";};


[] spawn {sleep 450; 
//////// Set Wet Distortion Effect slightly to standard/////////
["WetDistortion", 300, [1,0,0,1,1,1,1,0,0,0,0,0,0,0,0]] spawn
{
    params ["_name", "_priority", "_effect", "_handle"];
    while {
        _handle = ppEffectCreate [_name, _priority];
        _handle < 0
    } do {
        _priority = _priority + 1;
    };
    _handle ppEffectEnable true;
    _handle ppEffectAdjust _effect;
    _handle ppEffectCommit 3;
    waitUntil {ppEffectCommitted _handle};
    uiSleep 1;  
    _handle ppEffectEnable false;  
    ppEffectDestroy _handle;
};

//////// Set ColorCorrections Effect slightly to standard/////////
["ColorCorrections", 1500, [1,1,0,[0, 0, 0, 0],[1, 1, 1, 1],[0.299, 0.587, 0.114, 0],[-1, -1, 0, 0, 0, 0, 0]
]] spawn
{
    params ["_name", "_priority", "_effect", "_handle"];
    while {
        _handle = ppEffectCreate [_name, _priority];
        _handle < 0
    } do {
        _priority = _priority + 1;
    };
    /* TODO Localize */ systemchat "Die Wirkung des Pilzes lässt nach. Schade dass die Engel nun weg fliegen..."; 
    _handle ppEffectEnable true;
    _handle ppEffectAdjust _effect;
    _handle ppEffectCommit 30;
    waitUntil {ppEffectCommitted _handle};
    uiSleep 1;  
    _handle ppEffectEnable false;  
    ppEffectDestroy _handle;
};

};



