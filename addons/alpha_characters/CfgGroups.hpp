class CfgGroups {
    class West {
        class BLU_USA_7CAV_F {
            name = ECSTRING(common,faction_display);
            class Cav_Alpha_Infantry_Squads {
                name = CSTRING(Cat_Alpha_Company_Inf);
          
                class Cav_B_A_Buffalo_Team {
                    name = CSTRING(A_Team_Buffalo);
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Tra_Pilot_F";
                    };
                    class Unit1 {
                        position[] = {1.0, 0.0, 0.0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Tra_coPilot_F";
                    };
                    class Unit2 {
                        position[] = {0.0, -1.0, 0.0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Tra_CrewChief_F";
                    };
                    class Unit3 {
                        position[] = {1.0, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Tra_DoorGunner_F";
                    };
                };

                class Cav_B_A_Raven_Team {
                    name = CSTRING(A_Team_Raven);
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Att_Pilot_F";
                    };
                    class Unit1 {
                        position[] = {1.0, 0.0, 0.0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Att_coPilot_F";
                    };
                };

                class Cav_B_A_Raider_Team {
                    name = CSTRING(A_Team_Raider);
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Att_Pilot_F";
                    };
                    class Unit1 {
                        position[] = {1.0, 0.0, 0.0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "Cav_B_A_Helicopter_Att_coPilot_F";
                    };
                };

                class Cav_B_A_Hog_Team {
                    name = CSTRING(A_Team_Hog);
                    icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "Cav_B_A_Plane_Fighter_Pilot_F";
                    };
                };

                class Cav_B_A_Titan_Team {
                    name = CSTRING(A_Team_Titan);
                    icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "Cav_B_A_Plane_Transport_Pilot_F";
                    };
                    class Unit1 {
                        position[] = {1.0, 0.0, 0.0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "Cav_B_A_Plane_Transport_coPilot_F";
                    };
                };
            };
        };
    };
};