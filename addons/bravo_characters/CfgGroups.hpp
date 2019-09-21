class CfgGroups {
    class West {
        class BLU_USA_7CAV_F {
            name = ECSTRING(common,Faction_Display);
            class Cav_Bravo_Infantry_Squads {
                name = CSTRING(Cat_Bravo_Company_Inf);
                
                class Cav_B_B_Viking_Squad {
                    name = CSTRING(B_Squad_Viking);
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Team_Leader_F";
                    };
                    class Unit1 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Trooper_F";
                    };
                    class Unit2 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Trooper_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -3.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Scout_Trooper_F";
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

                class Cav_B_B_Banshee_Squad {
                    name = CSTRING(B_Squad_Banshee);
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_B_Ifv_Commander_F";
                    };
                    class Unit1 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Ifv_Driver_F";
                    };
                    class Unit2 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Ifv_Gunner_F";
                    };
                };

                class Cav_B_B_Saber_Squad {
                    name = CSTRING(B_Squad_Saber);
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_B_Tank_Commander_F";
                    };
                    class Unit1 {
                        position[] = {1.0, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Tank_Driver_F";
                    };
                    class Unit2 {
                        position[] = {0.0, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Tank_Gunner_F";
                    };
                    class Unit3 {
                        position[] = {-1.0, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Tank_Loader_F";
                    };
                };
            };
            class Cav_Bravo_Logistical_Squads {
                name = CSTRING(Cat_Bravo_Company_Logi);
                class Cav_B_B_Mustang_Squad {
                    name = CSTRING(B_Squad_Mustang);
                    icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_B_TeamLeader_Mustang_F";
                    };
                    class Unit1 {
                        position[] = {1.0, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Mustang_CombatMedic_F";
                    };
                    class Unit2 {
                        position[] = {0.0, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Mustang_CombatMedic_F";
                    };
                    class Unit3 {
                        position[] = {-1.0, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Mustang_CombatMedic_F";
                    };
                };
                class Cav_B_B_Apollo_Squad {
                    name = CSTRING(B_Squad_Apollo);
                    icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_B_LogisticTeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_LogisticsTeamMember_F";
                    };
                    class Unit2 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_LogisticsTeamMember_F";
                    };
                    class Unit3 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_LogisticsTeamMember_F";
                    };
                    class Unit4 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_LogisticsTeamMember_F";
                    };
                    class Unit5 {
                        position[] = {0.0, -3.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_LogisticsTeamMember_F";
                    };
                };
            };
        };
    };
};