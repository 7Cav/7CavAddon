class CfgGroups {
    class West {
        class BLU_USA_7CAV_F {
            name = ECSTRING(common,Faction_Display);
            class CavMod_Bravo_Infantry_Squads {
                name = CSTRING(Cat_Bravo_Company_Inf);
                class CavMod_B_B_Viking_Squad {                 // >>>> WIP
                    name = CSTRING(B_Squad_Viking);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_B_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_CombatLifeSaver_F";
                    };
                };

                class CavMod_B_B_Viking_WithCrew_Squad {        // >>>> WIP
                    name = CSTRING(B_Squad_Viking_WithCrew);
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_B_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -3.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -3.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -3.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -3.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Bravo_CombatLifeSaver_F";
                    };
                    class Unit9 {                                       // >>>> CREW
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Rifleman_F";
                    };
                    class Unit10 {                                      // >>>> CREW
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Rifleman_F";
                    };
                };

                class CavMod_B_B_Banshee_Squad {                // >>>> WIP
                    name = CSTRING(B_Squad_Banshee);
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {                                       // >>>> CREW
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Rifleman_F";
                    };
                    class Unit1 {                                       // >>>> CREW
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Rifleman_F";
                    };
                    class Unit2 {                                       // >>>> CREW
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_B_Alpha_Rifleman_F";
                    };
                };

            };
            class CavMod_Charlie_Infantry_Squads {
                name = CSTRING(Cat_Charlie_Company_Inf);
                
                class CavMod_B_C_Bandit_Squad {
                    name = CSTRING(C_Squad_Bandit);
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

                class CavMod_B_C_Misfit_Squad {
                    name = CSTRING(C_Squad_Misfit);
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

                class CavMod_B_C_Havoc_Squad {
                    name = CSTRING(C_Squad_Havoc);
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
                    faction = "BLU_USA_7CAV_F";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {1.5, -1.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Alpha_FireTeamLeader_F";
                    };
                    class Unit2 {
                        position[] = {0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Alpha_AutomaticRifleman_F";
                    };
                    class Unit3 {
                        position[] = {-0.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Alpha_Grenadier_F";
                    };
                    class Unit4 {
                        position[] = {-1.5, -1.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Alpha_Rifleman_F";
                    };
                    class Unit5 {
                        position[] = {1.5, -2.0, 0.0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Bravo_FireTeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Bravo_AutomaticRifleman_F";
                    };
                    class Unit7 {
                        position[] = {-0.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Bravo_Grenadier_F";
                    };
                    class Unit8 {
                        position[] = {-1.5, -2.0, 0.0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CavMod_B_C_Weap_Bravo_CombatLifeSaver_F";
                    };
                };
            };
        };
    };
};