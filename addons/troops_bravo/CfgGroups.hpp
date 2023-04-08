class CfgGroups {
    class West {
        class cav_blu_usa_7cav_f {
            name = ECSTRING(common,faction_display);
            class Cav_Bravo_Infantry_Squads {
                name = CSTRING(Cat_Bravo_Company_Inf);

                class Cav_B_B_Lancer_Squad {
                    name = CSTRING(B_Squad_Lancer);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "cav_blu_usa_7cav_f";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "Cav_B_B_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "Cav_B_B_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "Cav_B_B_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "Cav_B_B_Bravo_CombatLifeSaver_F";
                    };
                };

                class Cav_B_B_Banshee_Squad {
                    name = CSTRING(B_Squad_Banshee);
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "cav_blu_usa_7cav_f";
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
                    faction = "cav_blu_usa_7cav_f";
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
                    faction = "cav_blu_usa_7cav_f";
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
                    faction = "cav_blu_usa_7cav_f";
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