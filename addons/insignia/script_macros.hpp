
#define MACRO_UNITINSIGNIA(var1) \
class TRIPLES(cav,insignia,var1) { \
    displayName = CSTRING(var1); \
    author = ECSTRING(Main,ModTeam); \
    texture = QPATHTOF(data\var1.paa); \
    textureVehicle = ""; \
}