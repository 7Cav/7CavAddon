#include "../script_component.hpp"

/*
 * Author: WO1.Raynor.D
 * Builds list of vehicles for CAS Range
 * Specify count of each type of vehicle
 * Input array: [(easy),(medium),(hard)]
 *
 * Arguments:
 * 0: Types list <ARRAY>
 *
 * Return Value:
 * Single level list <ARRAY>
 *
 * Example:
 * [["Easy",3],["Medium",2],["Hard",1]] call FUNC(getCasVehicles);
 *
 * Public: No
 */

params ["_easy","_medium","_hard"];

LOG_1("Making CAS list: %1",[ARR_3(_easy,_medium,_hard)]);

private _output = [];


private _easyList = [
    "rhs_tigr_vv",
    "rhs_tigr_3camo_vv",
    "rhs_uaz_vv",
    "rhs_uaz_open_vv",
    "rhs_gaz66_vv",
    "rhs_gaz66_ammo_vv",
    "rhs_gaz66_flat_vv",
    "rhs_gaz66o_vv",
    "rhs_gaz66o_flat_vv",
    "rhs_gaz66_ap2_vv",
    "rhs_gaz66_repair_vv",
    "rhs_kamaz5350_vv",
    "rhs_kamaz5350_flatbed_cover_vv",
    "rhs_kamaz5350_open_vv",
    "rhs_kamaz5350_flatbed_vv",
    "RHS_Ural_VV_01",
    "RHS_Ural_Flat_VV_01",
    "RHS_Ural_Fuel_VV_01",
    "RHS_Ural_Open_VV_01",
    "RHS_Ural_Repair_VV_01",
    "rhs_zil131_vv",
    "rhs_zil131_flatbed_cover_vv",
    "rhs_zil131_open_vv",
    "rhs_zil131_flatbed_vv"
];
private _mediumList = [
    "rhs_btr60_vmf",
    "rhs_btr70_vmf",
    "rhs_btr80_vmf",
    "rhs_btr80_vmf",
    "rhs_btr80a_vmf",
    "rhs_bmp1_vv",
    "rhs_bmp1d_vv",
    "rhs_bmp1k_vv",
    "rhs_bmp1p_vv",
    "rhs_bmp2e_vv",
    "rhs_bmp2_vv",
    "rhs_bmp2d_vv",
    "rhs_bmp2k_vv",
    "rhs_brm1k_vv"
];
private _hardList = [
    "RHS_Ural_Zu23_MSV_01",
    "rhs_zsu234_aa"
];

for "_i" from 1 to _easy do {
    _output pushback (selectRandom _easyList);
};
for "_i" from 1 to _medium do {
    _output pushback (selectRandom _mediumList);
};
for "_i" from 1 to _hard do {
    _output pushback (selectRandom _hardList);
};

_output
