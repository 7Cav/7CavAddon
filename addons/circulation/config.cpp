#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            "cav_PainkillerItem",
            "cav_X_AEDItem"
        };
        weapons[] = {
            "cav_Painkiller",
            "cav_PainkillerItem",
            "cav_IV_16",
            "cav_IO_FAST",
            "kat_Carbonate",
            "kat_CarbonateItem",
            "cav_naloxone",
            "cav_TXA",
            "cav_X_AED",
            "cav_norepinephrine",
            "cav_phenylephrine",
            "cav_nitroglycerin"
        };
        magazines[] = { };
        requiredAddons[] = {
            "ace_medical",
            "ace_medical_ai",
            "ace_medical_blood",
            "ace_medical_damage",
            "ace_medical_engine",
            "ace_medical_feedback",
            "ace_medical_gui",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "ace_dogtags",
            "cba_settings"
        };
        author = "Katalam";
        authors[] = {"Katalam", "2LT.Mazinski"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"
