
#define MACRO_UNITINSIGNIA(var1) \
class TRIPLES(cav,insignia,var1) { \
    displayName = CSTRING(var1); \
    author = ECSTRING(main,modteam); \
    texture = QPATHTOF(data\var1.paa); \
    textureVehicle = ""; \
}

class CfgUnitInsignia {
    // Alpha first platoon
    //MACRO_UNITINSIGNIA(alpha_1);
    //MACRO_UNITINSIGNIA(alpha_1_a);
    //MACRO_UNITINSIGNIA(alpha_1_b);
    MACRO_UNITINSIGNIA(alpha_1_c);
    //MACRO_UNITINSIGNIA(alpha_1_d);

    // Alpha second platoon
    MACRO_UNITINSIGNIA(alpha_2);
    MACRO_UNITINSIGNIA(alpha_2_a);
    MACRO_UNITINSIGNIA(alpha_2_b);
    MACRO_UNITINSIGNIA(alpha_2_c);
    //MACRO_UNITINSIGNIA(alpha_2_d);


    // Bravo first platoon
    MACRO_UNITINSIGNIA(bravo_1);
    //MACRO_UNITINSIGNIA(bravo_1_1);
    //MACRO_UNITINSIGNIA(bravo_1_2);
    //MACRO_UNITINSIGNIA(bravo_1_3);
    //MACRO_UNITINSIGNIA(bravo_1_4);

    // Bravo second platoon
    MACRO_UNITINSIGNIA(bravo_2);
    MACRO_UNITINSIGNIA(bravo_2_1);
    MACRO_UNITINSIGNIA(bravo_2_2);
    //MACRO_UNITINSIGNIA(bravo_2_3);
    //MACRO_UNITINSIGNIA(bravo_2_4);
    
    MACRO_UNITINSIGNIA(bravo_3);
    //MACRO_UNITINSIGNIA(bravo_2_1);
    //MACRO_UNITINSIGNIA(bravo_2_2);
    //MACRO_UNITINSIGNIA(bravo_2_3);
    //MACRO_UNITINSIGNIA(bravo_2_4);
    MACRO_UNITINSIGNIA(specialized_apollo);
    MACRO_UNITINSIGNIA(specialized_mustang);

    // Charlie first platoon
    MACRO_UNITINSIGNIA(charlie_1);
    MACRO_UNITINSIGNIA(charlie_1_1);
    MACRO_UNITINSIGNIA(charlie_1_2);
    MACRO_UNITINSIGNIA(charlie_1_3);
    MACRO_UNITINSIGNIA(charlie_1_4);

    // Charlie second platoon
    MACRO_UNITINSIGNIA(charlie_2);
    MACRO_UNITINSIGNIA(charlie_2_1);
    MACRO_UNITINSIGNIA(charlie_2_2);
    MACRO_UNITINSIGNIA(charlie_2_3);
    MACRO_UNITINSIGNIA(charlie_2_4);


    // Other Insignias
    MACRO_UNITINSIGNIA(custom_cav_7);
    MACRO_UNITINSIGNIA(custom_cav_7_m81);
    MACRO_UNITINSIGNIA(custom_cav_7_ocp);


    // Specialized
    MACRO_UNITINSIGNIA(specialized_pegasus);
    MACRO_UNITINSIGNIA(specialized_airborne);
    MACRO_UNITINSIGNIA(specialized_cls);
    MACRO_UNITINSIGNIA(specialized_ranger);
    MACRO_UNITINSIGNIA(specialized_followme);
};
