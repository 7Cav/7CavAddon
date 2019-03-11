class CfgGroups {
    class West {
        class BLU_USA_7CAV_F {
            name = ECSTRING(common,Faction_Display);
            class Infantry {
                name = CSTRING(Cat_Charlie_Company_Display);
                class CavMod_B_C_Bandit_5_HQ {
                    name = CSTRING(Squad_Bandit_5_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_PlatoonSergeant_1_5_F";
                    };
                };
                class CavMod_B_C_Bandit_6_HQ {
                    name = CSTRING(Squad_Bandit_6_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_PlatoonLeader_1_6_F";
                    };
                };
                class CavMod_B_C_Bandit_7_HQ {
                    name = CSTRING(Squad_Bandit_7_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_PlatoonMedic_1_7_F";
                    };
                };
                
                class CavMod_B_C_Bandit_Squad {
                    name = CSTRING(Squad_Bandit_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
                class CavMod_B_C_Bandit_1_Squad {
                    name = CSTRING(Squad_Bandit_1_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_1_1_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
                class CavMod_B_C_Bandit_2_Squad {
                    name = CSTRING(Squad_Bandit_2_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_1_2_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
                class CavMod_B_C_Bandit_3_Squad {
                    name = CSTRING(Squad_Bandit_3_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_1_3_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
                class CavMod_B_C_Bandit_4_Squad {
                    name = CSTRING(Squad_Bandit_4_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_1_4_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };

                class CavMod_B_C_Misfit_5_HQ {
                    name = CSTRING(Squad_Misfit_5_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_PlatoonSergeant_2_5_F";
                    };
                };
                class CavMod_B_C_Misfit_6_HQ {
                    name = CSTRING(Squad_Misfit_6_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_PlatoonLeader_2_6_F";
                    };
                };
                class CavMod_B_C_Misfit_7_HQ {
                    name = CSTRING(Squad_Misfit_7_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_PlatoonMedic_2_7_F";
                    };
                };
                class CavMod_B_C_Misfit_Squad {
                    name = CSTRING(Squad_Misfit_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };

                class CavMod_B_C_Misfit_1_Squad {
                    name = CSTRING(Squad_Misfit_1_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_2_1_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
                class CavMod_B_C_Misfit_2_Squad {
                    name = CSTRING(Squad_Misfit_2_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_2_2_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
                class CavMod_B_C_Misfit_3_Squad {
                    name = CSTRING(Squad_Misfit_3_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_2_3_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
                class CavMod_B_C_Misfit_4_Squad {
                    name = CSTRING(Squad_Misfit_4_Display); 
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_SquadLeader_2_4_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Bravo_CombatLifeSaver_F";
                    };
                };
            };
        };
    };
};