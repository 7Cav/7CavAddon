#define MACRO_GLUE(g1,g2) g1##g2
#define MACRO_TAG(name,col) class TRIPLES(CAV_Tagging,name,col) { \
        displayName = CSTRING(TRIPLES(CAV_Tagging,name,col)); \
        requiredItem = QUOTE(MACRO_GLUE(ACE_Spraypaint,col)); \
        textures[] = {QPATHTOF(UI\tags\tag_##name##_##col##_ca.paa)}; \
        icon = QPATHTOF(UI\icons\icon_action_##name##_##col##_ca.paa); \
    }

class ACE_Tags {
    MACRO_TAG(Cav,Black);
    MACRO_TAG(Cav,Blue);
    MACRO_TAG(Cav,Green);
    MACRO_TAG(Cav,Red);
    MACRO_TAG(Cav,White);
    MACRO_TAG(Cav,Yellow);
};