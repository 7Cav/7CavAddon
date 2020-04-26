class CfgGroups {
    class West {
        class BLU_USA_7CAV_F {
            name = ECSTRING(common,Faction_Display);
            class Cav_Bravo_Infantry_Squads {
                name = ECSTRING(Bravo_Characters,Cat_Bravo_Company_Inf);

                class Cav_B_B_Viking_Squad {
                    name = CSTRING(B_Squad_Viking);
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_TeamLead_F";
                    };
                    class Unit1 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Rifleman_F";
                    };
                    class Unit2 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Rifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -3.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Rifleman_F";
                    };
                    class Unit4 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Gunner_F";
                    };
                    class Unit5 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Driver_F";
                    };
                };
            };
        };
    };
};