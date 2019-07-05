#define MACRO_VEH_CARGO \
    class TransportBackpacks {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportWeapons {}

class CfgVehicles {

    class RHS_AH64D_wd;
    class RHS_UH60M2;
    class RHS_UH60M_MEV2;
    class RHS_CH_47F;

    class Cav_Alpha_AH64D : RHS_AH64D_wd {
        _generalMacro = "Cav_Alpha_AH64D";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Helicopter_Att_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Helicopter_Att_coPilot_F"};

        MACRO_VEH_CARGO;
    };
    class RHS_UH60M_base;
    class RHS_UH60M_US_base : RHS_UH60M_base {
         class Turrets;
    };
    class RHS_UH60M : RHS_UH60M_US_base {
        class Turrets : Turrets {
            class MainTurret;
            class RightDoorGun;
            class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
        };
    };
    class Cav_Alpha_UH60M : RHS_UH60M {
        _generalMacro = "Cav_Alpha_UH60M";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;

        crew = "Cav_B_A_Helicopter_Tra_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Helicopter_Tra_Pilot_F"};

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret {
                gunnerType = "Cav_B_A_Helicopter_Tra_coPilot_F";
            };
            class MainTurret : MainTurret {
                gunnerType = "Cav_B_A_Helicopter_Tra_CrewChief_F";
            };
            class RightDoorGun : RightDoorGun {
                gunnerType = "Cav_B_A_Helicopter_Tra_DoorGunner_F";
            };
        };
    };
    class Cav_Alpha_UH60M2 : RHS_UH60M2 {
        _generalMacro = "Cav_Alpha_UH60M2";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Helicopter_Tra_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Helicopter_Tra_Pilot_F"};

        MACRO_VEH_CARGO;

    };
    class Cav_Alpha_UH60M_MEV2 : RHS_UH60M_MEV2 {
        _generalMacro = "Cav_Alpha_UH60M_MEV2";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Helicopter_Tra_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Helicopter_Tra_Pilot_F"};

        MACRO_VEH_CARGO;
    };
    class Cav_Alpha_CH_47F : RHS_CH_47F {
        _generalMacro = "Cav_Alpha_CH_47F";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Helicopter_Tra_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Helicopter_Tra_Pilot_F"};

        MACRO_VEH_CARGO;
    };

    class RHS_C130J;
    class RHS_A10;
    class FIR_F16C;

    class Cav_Alpha_C130J : RHS_C130J {
        _generalMacro = "Cav_Alpha_C130J";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Plane_Transport_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Plane_Transport_coPilot_F"};

        ace_cargo_space = 52;

        MACRO_VEH_CARGO;
    };
    class Cav_Alpha_A10 : RHS_A10 {
        _generalMacro = "Cav_Alpha_A10";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Plane_Fighter_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Plane_Fighter_Pilot_F"};

        MACRO_VEH_CARGO;
    };
    class Cav_Alpha_F16C : FIR_F16C {
        _generalMacro = "Cav_Alpha_F16C";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Plane_Fighter_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Plane_Fighter_Pilot_F"};

        hiddenselectionstextures[] = {
            QPATHTOF(data\cav_F16_body_co.paa),
            QPATHTOF(data\cav_F16_wing_co.paa),
            "",
            ""
        };

        MACRO_VEH_CARGO;
    };
};