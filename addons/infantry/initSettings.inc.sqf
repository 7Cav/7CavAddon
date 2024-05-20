[
    QGVAR(enableAutomaticCallsignAssign),
    "CHECKBOX",
    [LSTRING(EnableAutomaticCallsignAssign_DisplayName), LSTRING(EnableAutomaticCallsignAssign_Description)],
    [ELSTRING(common,Category),LSTRING(SubCategory)],
    true,
    false
] call CBA_fnc_addSetting;

[
    QGVAR(enableAutomaticTeamAssign),
    "CHECKBOX",
    [LSTRING(EnableAutomaticTeamAssign_DisplayName), LSTRING(EnableAutomaticTeamAssign_Description)],
    [ELSTRING(common,Category),LSTRING(SubCategory)],
    true,
    false
] call CBA_fnc_addSetting;
