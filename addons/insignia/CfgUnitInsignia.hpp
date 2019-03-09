
#define MACRO_UNITINSIGNIA(var1) \
class TRIPLES(Cav,Insignia,var1) { \
    displayName = CSTRING(var1_Display); \
    author = ECSTRING(Main,CavModTeam); \
    texture = QPATHTOF(data\var1.paa); \
}

class CfgUnitInsignia {
    // Alpha first platoon
    //MACRO_UNITINSIGNIA(Alpha_1);
    //MACRO_UNITINSIGNIA(Alpha_1_A);
    //MACRO_UNITINSIGNIA(Alpha_1_B);
    MACRO_UNITINSIGNIA(Alpha_1_C);
    //MACRO_UNITINSIGNIA(Alpha_1_D);

    // Alpha second platoon
    MACRO_UNITINSIGNIA(Alpha_2);
    MACRO_UNITINSIGNIA(Alpha_2_A);
    MACRO_UNITINSIGNIA(Alpha_2_B);
    MACRO_UNITINSIGNIA(Alpha_2_C);
    //MACRO_UNITINSIGNIA(Alpha_2_D);


    // Bravo first platoon
    //MACRO_UNITINSIGNIA(Bravo_1);
    //MACRO_UNITINSIGNIA(Bravo_1_A);
    //MACRO_UNITINSIGNIA(Bravo_1_B);
    //MACRO_UNITINSIGNIA(Bravo_1_C);
    //MACRO_UNITINSIGNIA(Bravo_1_D);

    // Bravo second platoon
    MACRO_UNITINSIGNIA(Bravo_2);
    MACRO_UNITINSIGNIA(Bravo_2_1);
    //MACRO_UNITINSIGNIA(Bravo_2_2);
    //MACRO_UNITINSIGNIA(Bravo_2_3);
    //MACRO_UNITINSIGNIA(Bravo_2_4);
    

    // Charlie first platoon
    MACRO_UNITINSIGNIA(Charlie_1);
    MACRO_UNITINSIGNIA(Charlie_1_1);
    MACRO_UNITINSIGNIA(Charlie_1_2);
    MACRO_UNITINSIGNIA(Charlie_1_3);
    MACRO_UNITINSIGNIA(Charlie_1_4);

    // Charlie second platoon
    MACRO_UNITINSIGNIA(Charlie_2);
    MACRO_UNITINSIGNIA(Charlie_2_1);
    //MACRO_UNITINSIGNIA(Charlie_2_2);
    //MACRO_UNITINSIGNIA(Charlie_2_3);
    //MACRO_UNITINSIGNIA(Charlie_2_4);


    // Other Insignias
    MACRO_UNITINSIGNIA(Custom_Cav_7);
    MACRO_UNITINSIGNIA(Custom_Cav_7_m81);
    MACRO_UNITINSIGNIA(Custom_Cav_7_ocp);


    // Specialized
    MACRO_UNITINSIGNIA(Specialized_Airborne);
    MACRO_UNITINSIGNIA(Specialized_CLS);
    MACRO_UNITINSIGNIA(Specialized_Ranger);
    MACRO_UNITINSIGNIA(Specialized_FollowMe);
};