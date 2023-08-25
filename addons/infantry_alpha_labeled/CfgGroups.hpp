class CfgGroups {
    class West {
        class cav_blu_usa_f {
            name = ECSTRING(common,faction_display);

            class Cav_B_A_Groups {
                name = CSTRING(Cav_B_A_Groups);

                class Cav_B_A_JTAC_1_Group_F {
                    name = CSTRING(Cav_B_A_JTAC_1_Group_F);
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    faction = "cav_blu_usa_f";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "Cav_B_A_JTAC_1_F";
                    };
                };
                class Cav_B_A_JTAC_2_Group_F {
                    name = CSTRING(Cav_B_A_JTAC_2_Group_F);
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    faction = "cav_blu_usa_f";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "Cav_B_A_JTAC_2_F";
                    };
                };
                class Cav_B_A_TACP_1_Group_F {
                    name = CSTRING(Cav_B_A_TACP_1_Group_F);
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    faction = "cav_blu_usa_f";
                    side = 1;
                    class Unit0 {
                        position[] = {0, 0, 0};
                        rank = "MAJOR";
                        side = 1;
                        vehicle = "Cav_B_A_JTAC_2_F";
                    };
                    class Unit2 {
                        position[] = {0, 1, 0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "Cav_B_A_JTAC_2_F";
                    };
                };
            };
        };
    };
};