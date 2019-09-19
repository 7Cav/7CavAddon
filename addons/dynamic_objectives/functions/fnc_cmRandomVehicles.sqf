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
 * [["Easy",3],["Medium",2],["Hard",1]] call FUNC(commonRandomVehicles);
 *
 * Public: No
 */

// TODO: faction selection
// TODO: switch to type list: [["transport",5],["AAA",3]]
params [
    ["_category","",[""]],
    ["_types",[],[[]]]
];
if (_category == "") exitWith {ERROR("_category was empty"); []};
if (count _types == 0) exitWith {ERROR("_types was empty")};

LOG_1("Making random vehicle list: %1",_this);

private _output = [];
private _typesList = [];

switch (_category) do {
    case ("alpha"): {
        _typesList = [
            [
                "transport",
                [
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
                ]
            ],
            [
                "APC",
                [
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
                ]
            ],
            [
                "AAA",
                [
                    "RHS_Ural_Zu23_MSV_01",
                    "rhs_zsu234_aa"
                ]
            ]
        ];
    };
};

if(count _typesList > 0) then {
    {
        _x params ["_type","_count"];
        private _possibleTypes = [_typesList,_type,[]] call BIS_fnc_getFromPairs;
        if(count _possibleTypes > 0) then {
            LOG_2("Adding %1 from %2",_count,_possibleTypes);
            for "_i" from 1 to _count do {
                _output pushback (selectRandom _possibleTypes);
            };
        } else {
            ERROR_2("No list named '%1' found under category '%2'",_type,_category);
        };
    } forEach _types;
} else {
    ERROR_1("No category '%1' found",_category);
};

_output
