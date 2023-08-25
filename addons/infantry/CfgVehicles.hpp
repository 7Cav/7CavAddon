class CfgVehicles {
    class B_Soldier_base_F;
    class Cav_B_Soldier_base_F: B_Soldier_base_F {
        _generalMacro = "Cav_B_Soldier_base_F";
        scope = 1;
        scopeCurator = 0;
        displayName = CSTRING(trooper);
        author = ECSTRING(Main,ModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\I_Cav_base_F.jpg);

        cav_regiment = "7th Cavalry"
        cav_company = "";
        cav_platoon = -1;
        cav_squad = -1;

        role = "Rifleman";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 1;
        faction = "cav_blu_usa_f";

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
            "rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
            "rhsusf\addons\rhsusf_infantry\data\patches\1CAV_ocp_co.paa"
        };

        uniformClass = "rhs_uniform_cu_ocp_1stcav";

        weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};

        magazines[] = {
            MULT_OBJ_12(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        respawnMagazines[] = {
            MULT_OBJ_12(rhs_mag_30Rnd_556x45_M855A1_Stanag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhsusf_iotv_ocp_Rifleman",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_Rifleman",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_Officer_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Officer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Officer_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };

    class Cav_B_JTAC_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_JTAC_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_JTAC_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_TACP_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_TACP_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_TACP_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_B_PlatoonSergeant_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_PlatoonSergeant_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Officer_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };
    class Cav_B_PlatoonLeader_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Officer_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManOfficer";
    };
    class Cav_B_PlatoonMedic_F: Cav_B_Officer_F {
        _generalMacro = "Cav_B_PlatoonLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Officer_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";
    };

    class Cav_B_Rifleman_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_B_Rifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_Rifleman_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_B_SquadLeader_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_SquadLeader_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_FireTeamLeader_F: Cav_B_SquadLeader_F {
        _generalMacro = "Cav_B_FireTeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_FireTeamLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManLeader";
    };

    class Cav_B_AutomaticRifleman_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_AutomaticRifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_AutomaticRifleman_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManLeader";
        role = "MachineGunner";

        weapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};

        magazines[] = {
            MULT_OBJ_3(rhs_200rnd_556x45_M_SAW)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_200rnd_556x45_M_SAW)
        };
        linkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp_SAW",
            "rhsusf_ach_helmet_ocp",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class Cav_B_Grenadier_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_SquadLeader_F);
        author = ECSTRING(Main,ModTeam);
    };

    class Cav_B_RiflemanAT_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_SquadLeader_F);
        author = ECSTRING(Main,ModTeam);
    };
    class Cav_B_RiflemanLAT_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_SquadLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManAT";
    };

    class Cav_B_CombatLifeSaver_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_SquadLeader_F);
        author = ECSTRING(Main,ModTeam);

        icon = "iconManMedic";
        role = "CombatLifeSaver";
    }


    // Air - Fixed-Wings
    class Cav_B_Pilot_base_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_HelicopterPilot_base_F";
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(trooper);

        ACE_GForceCoef = 0.55;
    };

    class Cav_B_Pilot_F: Cav_B_Pilot_base_F {
        _generalMacro = "Cav_B_Pilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_Pilot_F);
    };
    class Cav_B_CoPilot_F: Cav_B_Pilot_F {
        _generalMacro = "Cav_B_CoPilot_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(Cav_B_TraCav_B_CoPilot_Fining_Cadre_F);
    };

    class Cav_B_PilotLite_F: Cav_B_Pilot_base_F {
        _generalMacro = "Cav_B_PilotLite_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_PilotLite_F);
    };
    class Cav_B_CoPilotLite_F: Cav_B_PilotLite_F {
        _generalMacro = "Cav_B_CoPilotLite_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_CoPilotLite_F);
    };
    class Cav_B_CrewLite_F: Cav_B_PilotLite_F {
        _generalMacro = "Cav_B_CrewLite_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_CrewLite_F);
    };


    // Air - Helicopters
    class Cav_B_HelicopterPilot_base_F: Cav_B_Rifleman_F {
        _generalMacro = "Cav_B_HelicopterPilot_base_F";
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(trooper);

        ACE_GForceCoef = 0.55;
    };

    class Cav_B_HelicopterPilot_F: Cav_B_HelicopterPilot_base_F {
        _generalMacro = "Cav_B_TCav_B_HelicopterPilot_Fraining_base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterPilot_F);
    };
    class Cav_B_HelicopterCoPilot_F: Cav_B_HelicopterPilot_F {
        _generalMacro = "Cav_B_HelicopterCoPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterCoPilot_F);
    };
    class Cav_B_HelicopterCrew_F: Cav_B_HelicopterPilot_F {
        _generalMacro = "Cav_B_HelicopterCrew_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterCrew_F);
    };

    class Cav_B_HelicopterAttackPilot_F: Cav_B_HelicopterPilot_base_F {
        _generalMacro = "Cav_B_HelicopterAttackPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterAttackPilot_F);
    };
    class Cav_B_HelicopterAttackCoPilot_F: Cav_B_HelicopterAttackPilot_F {
        _generalMacro = "Cav_B_HelicopterAttackCoPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Cav_B_HelicopterAttackCoPilot_F);
    };


    // Independent
    class Cav_I_Soldier_base_F: Cav_B_Soldier_base_F {
        _generalMacro = "Cav_I_Soldier_base_F";

        side = 0;
        faction = "cav_ind_usa_f";
    };
};