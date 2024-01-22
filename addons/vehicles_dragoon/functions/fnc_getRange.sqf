#include "script_component.hpp";


params [["_min", 50, [0]], ["_max", 2000, [0]]];

disableSerialization;

private _rangeControl = ctrlText ((uiNamespace getVariable "RscOptics_APC_Wheeled_03_gunner") displayCtrl 198);

private _rangeValue = _max;
switch (_rangeControl) do {
	case "----": {
		_rangeValue = _max;
	};
	case "": {
		_rangeValue = _max;
	};
	default {
		_rangeValue = (parseNumber _rangeControl) max _min;
	};
};


_rangeValue;