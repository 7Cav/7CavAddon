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
            vehicle = QUOTE(soldier1); \
        }; \
        class Unit1 { \
            position[] = {1.0, 0.0, 0.0}; \
            rank = "LIEUTENANT"; \
            side = 1; \
            vehicle = QUOTE(soldier2); \
        }; \
        class Unit2 { \
            position[] = {0.0, -1.0, 0.0}; \
            rank = "SERGEANT"; \
            side = 1; \
            vehicle = QUOTE(soldier3); \
        }; \
        class Unit3 { \
            position[] = {1.0, -1.0, 0.0}; \
            rank = "CORPORAL"; \
            side = 1; \
            vehicle = QUOTE(soldier4); \
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
            vehicle = QUOTE(soldier1); \
        }; \
        class Unit1 { \
            position[] = {1.0, 0.0, 0.0}; \
            rank = "LIEUTENANT"; \
            side = 1; \
            vehicle = QUOTE(soldier2); \
        }; \
    }
#define INFANTRY_TEAM_PILOT_1(classname,soldier1) \
    class classname { \
        name = CSTRING(classname); \
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa"; \
        faction = "cav_blu_usa_f"; \
        side = 1; \
        class Unit0 { \
            position[] = {0, 0, 0}; \
            rank = "CAPTAIN"; \
            side = 1; \
            vehicle = QUOTE(soldier1); \
        }; \
    }