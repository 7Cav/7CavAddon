class CfgGroups {
    class West {
        class cav_blu_usa_f {
            class cav_infantry_bravo_squads_f {
                name = CSTRING(cav_infantry_bravo_squads_f);
                INFANTRY_GROUP_9(cav_b_infantry_bravo_mechanized_squad_f,Cav_B_B_SquadLeader_F,Cav_B_B_FireTeamLeader_F,Cav_B_B_AutomaticRifleman_F,Cav_B_B_Grenadier_F,Cav_B_B_Rifleman_F,Cav_B_B_FireTeamLeader_F,Cav_B_B_AutomaticRifleman_F,Cav_B_B_Grenadier_F,Cav_B_B_CombatLifeSaver_F);
                INFANTRY_GROUP_9(cav_b_infantry_bravo_mechanized_weaponssquad_f,Cav_B_B_SquadLeader_F,Cav_B_B_FireTeamLeader_F,Cav_B_B_MachineGunner_F,Cav_B_B_AssistantMachineGunner_F,Cav_B_B_FireTeamLeader_F,Cav_B_B_MachineGunner_F,Cav_B_B_AssistantMachineGunner_F,Cav_B_B_RiflemanAT_F,Cav_B_B_RiflemanATAssistant_F);
                
                INFANTRY_TEAM_IFVCREW_2(cav_b_infantry_bravo_mechanized_ifvcrew_f,Cav_B_B_IFV_Commander_F,Cav_B_B_IFV_Driver_F);
            };
            class cav_support_bravo_squads_f {
                name = CSTRING(cav_support_bravo_squads_f);
                MEDIC_GROUP_4(cav_b_infantry_bravo_medic_team_f,Cav_B_B_MedicTeamLeader_F,Cav_B_B_MedicTeamMember_F,Cav_B_B_MedicTeamMember_F,Cav_B_B_Surgeon_F);
                ENGINEER_GROUP_4(cav_b_infantry_bravo_enginneer_team_f,Cav_B_B_EngineerTeamLeader_F,Cav_B_B_EngineerTeamMember_F,Cav_B_B_EngineerTeamMember_F,Cav_B_B_EngineerTeamMember_F);
            };
        };
    };
};