class CfgGroups {
    class West {
        class cav_blu_usa_f {
            class Cav_infantry_alpha_squads_f {
                name = CSTRING(Cav_infantry_alpha_squads_f);

                INFANTRY_TEAM_PILOT_4(Cav_B_A_Group_HelicopterLarge_F,Cav_B_A_HelicopterPilot_F,Cav_B_A_HelicopterCoPilot_F,Cav_B_A_HelicopterCrew_F,Cav_B_A_HelicopterCrew_F);
                
                INFANTRY_TEAM_PILOT_2(Cav_B_A_Group_HelicopterSmall_F,Cav_B_A_HelicopterPilot_F,Cav_B_A_HelicopterCoPilot_F);
                INFANTRY_TEAM_PILOT_2(Cav_B_A_Group_AttackHelicopter_F,Cav_B_A_HelicopterAttackPilot_F,Cav_B_A_HelicopterAttackCoPilot_F);

                INFANTRY_TEAM_PILOT_1(Cav_B_A_Group_FixedWingAttack_F,Cav_B_A_Pilot_F);
                
                INFANTRY_TEAM_PILOT_2(Cav_B_A_Group_FixedWingTransport_F,Cav_B_A_PlanePilotLite_F,Cav_B_A_PlaneCoPilotLite_F);
            };
        };
    };
};