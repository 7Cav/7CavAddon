#define MACRO_VEH_CARGO \
    class TransportBackpacks {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportWeapons {}

class CfgVehicles {

    class RHS_AH64D_wd;

    class RHS_UH60M_MEV2;
    class RHS_CH_47F;

    class Cav_Alpha_AH64D : RHS_AH64D_wd {
        _generalMacro = "Cav_Alpha_AH64D";
        scope = 1;
        scopeCurator = 1;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Helicopter_Att_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Helicopter_Att_coPilot_F"};

        MACRO_VEH_CARGO;
    };
   
    class RHS_UH60M;
    class RHS_UH60M2;

    class Cav_Alpha_UH60M : RHS_UH60M {
        _generalMacro = "Cav_Alpha_UH60M";
        scope = 1;
        scopeCurator = 1;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;

        crew = "Cav_B_A_Helicopter_Tra_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Helicopter_Tra_Pilot_F"};
    };
    class Cav_Alpha_UH60M2 : RHS_UH60M2 {
        _generalMacro = "Cav_Alpha_UH60M2";
        scope = 1;
        scopeCurator = 1;
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
        scope = 1;
        scopeCurator = 1;
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
        scope = 1;
        scopeCurator = 1;
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

    class Cav_Alpha_C130J : RHS_C130J {
        _generalMacro = "Cav_Alpha_C130J";
        scope = 1;
        scopeCurator = 1;
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
        scope = 1;
        scopeCurator = 1;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Plane_Fighter_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Plane_Fighter_Pilot_F"};

        MACRO_VEH_CARGO;
    };
    class Cav_Alpha_F16C : Cav_Alpha_A10 {
        _generalMacro = "Cav_Alpha_F16C";
        scope = 1;
        scopeCurator = 0;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Alpha";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        crew = "Cav_B_A_Plane_Fighter_Pilot_F";
        typicalCargo[] = {"Cav_B_A_Plane_Fighter_Pilot_F"};

        MACRO_VEH_CARGO;
    };
};
