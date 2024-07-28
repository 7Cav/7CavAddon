#define UNIT_BRAVO(var1,var2,var3,var4) class var1: var2 {\
        _generalMacro = QUOTE(var1); \
        scope = 2; \
        scopeCurator = 0; \
        displayName = CSTRING(var1); \
        author = ECSTRING(Main,ModTeam); \
        editorSubcategory = "Cav_EdSubcat_Infantry_Bravo_Labeled"; \
        cav_company = "bravo"; \
        cav_platoon = var3; \
        cav_squad = var4; \
    }

#define UNIT_BRAVO_SUPPORT(var1,var2,var3,var4) class var1: var2 {\
        _generalMacro = QUOTE(var1); \
        scope = 2; \
        scopeCurator = 0; \
        displayName = CSTRING(var1); \
        author = ECSTRING(Main,ModTeam); \
        editorSubcategory = "Cav_EdSubcat_Support_Bravo_Labeled"; \
        cav_company = "bravo"; \
        cav_platoon = var3; \
        cav_squad = var4; \
    }

// Groups
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
#define INFANTRY_TEAM_IFVSTAFF_2(classname,soldier1,soldier2,SoldierRank) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = QUOTE(SoldierRank); \
            side = 1; \
            vehicle = QUOTE(soldier1); \
        }; \
        class Unit1 { \
            position[] = {0.0, -1.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier2); \
        }; \
    }
#define INFANTRY_TEAM_IFVCREW_2(classname,soldier1,soldier2) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "CORPORAL"; \
            side = 1; \
            vehicle = QUOTE(soldier1); \
        }; \
        class Unit1 { \
            position[] = {0.0, -1.0, 0.0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier2); \
        }; \
    }
#define INFANTRY_TEAM_IFVCREW_1(classname,soldier1) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier1); \
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

#define INFANTRY_UNIT_MEDIC_4(classname,soldier1,soldier2,soldier3,soldier4) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "SERGEANT"; \
            side = 1; \
            vehicle = QUOTE(soldier1); \
        };\
        class Unit1 { \
            position[] = {-1.0, 0, 0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier2); \
        };\
        class Unit2 { \
            position[] = {0, -1.0, 0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier3); \
        };\
        class Unit3 { \
            position[] = {-1.0, -1.0, 0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier4); \
        };\
    }
#define INFANTRY_UNIT_ENGINEER_4(classname,soldier1,soldier2,soldier3,soldier4) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "SERGEANT"; \
            side = 1; \
            vehicle = QUOTE(soldier1); \
        };\
        class Unit1 { \
            position[] = {-1.0, 0, 0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier2); \
        };\
        class Unit2 { \
            position[] = {0, -1.0, 0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier3); \
        };\
        class Unit3 { \
            position[] = {-1.0, -1.0, 0}; \
            rank = "PRIVATE"; \
            side = 1; \
            vehicle = QUOTE(soldier4); \
        };\
    }