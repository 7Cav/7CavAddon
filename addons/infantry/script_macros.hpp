#define INFANTRY_GROUP_9(classname,SLSoldier,AFTLSoldier,ASoldier1,ASoldier2,ASoldier3,BFTLSoldier,BSoldier1,BSoldier2,BSoldier3) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "SERGEANT"; \
            side = 1; \
            vehicle = QUOTE(SLSoldier); \
        }; \
        class Unit1 { \
            position[] = {1.5, -1.0, 0.0}; \
            rank = "CORPORAL"; \
            side = 1; \
            vehicle = QUOTE(AFTLSoldier); \
        }; \
        class Unit2 { \
            position[] = {0.5, -1.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(ASoldier1); \
        }; \
        class Unit3 { \
            position[] = {-0.5, -1.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(ASoldier2); \
        }; \
        class Unit4 { \
            position[] = {-1.5, -1.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(ASoldier3); \
        }; \
        class Unit5 { \
            position[] = {1.5, -2.0, 0.0}; \
            rank = "CORPORAL"; \
            side = 1; \
            vehicle = QUOTE(BFTLSoldier); \
        }; \
        class Unit6 { \
            position[] = {0.5, -2.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(BSoldier1); \
        }; \
        class Unit7 { \
            position[] = {-0.5, -2.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(BSoldier2); \
        }; \
        class Unit8 { \
            position[] = {-1.5, -2.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(BSoldier3); \
        }; \
    }
#define INFANTRY_TEAM_PILOT_4(classname,soldier1,soldier2,soldier3,soldier4) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "CAPTAIN"; \
            side = 1; \
            vehicle = "soldier1"; \
        }; \
        class Unit1 { \
            position[] = {1.0, 0.0, 0.0}; \
            rank = "LIEUTENANT"; \
            side = 1; \
            vehicle = "soldier2"; \
        }; \
        class Unit2 { \
            position[] = {0.0, -1.0, 0.0}; \
            rank = "SERGEANT"; \
            side = 1; \
            vehicle = "soldier3"; \
        }; \
        class Unit3 { \
            position[] = {1.0, -1.0, 0.0}; \
            rank = "CORPORAL"; \
            side = 1; \
            vehicle = "soldier4"; \
        }; \
    }
#define INFANTRY_TEAM_PILOT_2(classname,soldier1,soldier2) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "CAPTAIN"; \
            side = 1; \
            vehicle = "soldier1"; \
        }; \
        class Unit1 { \
            position[] = {1.0, 0.0, 0.0}; \
            rank = "LIEUTENANT"; \
            side = 1; \
            vehicle = "soldier2"; \
        }; \
    }
#define INFANTRY_TEAM_IFVCREW_2(classname,soldier1,soldier2) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "CAPTAIN"; \
            side = 1; \
            vehicle = "soldier1"; \
        }; \
        class Unit1 { \
            position[] = {1.0, 0.0, 0.0}; \
            rank = "LIEUTENANT"; \
            side = 1; \
            vehicle = "soldier2"; \
        }; \
    }
#define INFANTRY_UNIT_RANKED_1(classname,Soldier,SoldierRank) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = QUOTE(SoldierRank); \
            side = 1; \
            vehicle = QUOTE(Soldier); \
        }; \
    }
#define INFANTRY_UNIT_MEDIC_1(classname,Soldier) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "SERGEANT"; \
            side = 1; \
            vehicle = QUOTE(Soldier); \
        };\
    }


// Loadouts
#define MACRO_LOADOUT_AR() \
        weapons[] = {"rhs_weap_m249_light_L_elcan","Throw","Put"}; \
        respawnWeapons[] = {"rhs_weap_m249_light_L_elcan","Throw","Put"}; \
        backpack = "rhsusf_assault_eagleaiii_ocp_ar"; \
        magazines[] = { \
            MULT_OBJ_2(rhsusf_100Rnd_556x45_soft_pouch), \
            MULT_OBJ_2(HandGrenade), \
            MULT_OBJ_2(SmokeShell) \
        }; \
        respawnMagazines[] = { \
            MULT_OBJ_2(rhsusf_100Rnd_556x45_soft_pouch), \
            MULT_OBJ_2(HandGrenade), \
            MULT_OBJ_2(SmokeShell) \
        }; \
        items[] = { \
            MULT_OBJ_1(FirstAidKit), \
            MULT_OBJ_1(ACE_MapTools) \
        }; \
        respawnItems[] = { \
            MULT_OBJ_1(FirstAidKit), \
            MULT_OBJ_1(ACE_MapTools) \
        }; \
        linkedItems[] = { \
            "rhsusf_ach_helmet_ocp", \
            "rhsusf_spcs_ocp_saw", \
            "ItemMap", \
            "ItemCompass", \
            "ItemWatch", \
            "ItemRadio", \
            "rhsusf_ANPVS_14" \
        }; \
        respawnLinkedItems[] = { \
            "rhsusf_ach_helmet_ocp", \
            "rhsusf_spcs_ocp_saw", \
            "ItemMap", \
            "ItemCompass", \
            "ItemWatch", \
            "ItemRadio", \
            "rhsusf_ANPVS_14" \
        }

#define MACRO_LOADOUT_GRENADIER() \
        weapons[] = {"rhs_m4a1_m320_acog","Throw","Put"}; \
        respawnWeapons[] = {"rhs_m4a1_m320_acog","Throw","Put"}; \
        backpack = "rhsusf_assault_eagleaiii_ocp_ar"; \
        magazines[] = { \
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag), \
            MULT_OBJ_6(rhs_mag_M433_HEDP), \
            MULT_OBJ_2(HandGrenade), \
            MULT_OBJ_2(SmokeShell) \
        }; \
        respawnMagazines[] = { \
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag), \
            MULT_OBJ_6(rhs_mag_M433_HEDP), \
            MULT_OBJ_2(HandGrenade), \
            MULT_OBJ_2(SmokeShell) \
        }; \
        items[] = { \
            MULT_OBJ_1(FirstAidKit), \
            MULT_OBJ_1(ACE_MapTools) \
        }; \
        respawnItems[] = { \
            MULT_OBJ_1(FirstAidKit), \
            MULT_OBJ_1(ACE_MapTools) \
        }; \
        linkedItems[] = { \
            "rhsusf_ach_helmet_ocp", \
            "rhsusf_spcs_ocp_grenadier", \
            "ItemMap", \
            "ItemCompass", \
            "ItemWatch", \
            "ItemRadio", \
            "rhsusf_ANPVS_14" \
        }; \
        respawnLinkedItems[] = { \
            "rhsusf_ach_helmet_ocp", \
            "rhsusf_spcs_ocp_grenadier", \
            "ItemMap", \
            "ItemCompass", \
            "ItemWatch", \
            "ItemRadio", \
            "rhsusf_ANPVS_14" \
        }