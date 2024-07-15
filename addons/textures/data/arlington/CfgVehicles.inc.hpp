#define MACRO_ARLINGTON(var1,var2) \
class var1: UserTexture1m_F { \
    _generalMacro = QUOTE(var1); \
    scope = 2; \
    scopeCurator = 2; \
    displayName = CSTRING(var1); \
    author = ECSTRING(main,modteam); \
    editorPreview = QPATHTOF(data\arlington\var2); \
    \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\arlington\var2) \
    };\
}

// Side Labels
class Cav_Arlington_Left_F: UserTexture_1x2_F {
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(Cav_Arlington_Left_F);
    author = ECSTRING(main,modteam);
    editorPreview = QPATHTOF(data\arlington\Arlington_Left.paa);

    editorSubcategory = "Cav_EdSubcat_Arlington";

    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arlington\Arlington_Left.paa)
    };
};
class Cav_Arlington_Right_F: UserTexture_1x2_F {
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(Cav_Arlington_Right_F);
    author = ECSTRING(main,modteam);
    editorPreview = QPATHTOF(data\arlington\Arlington_Right.paa);

    editorSubcategory = "Cav_EdSubcat_Arlington";

    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arlington\Arlington_Right.paa)
    };
};

// Arlington Textures
MACRO_ARLINGTON(Cav_Arlington_Bowman_F,Arlington_Bowman_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Britton_F,Arlington_Britton_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Carter_F,Arlington_Carter_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Cooper_F,Arlington_Cooper_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Dornbierer_F,Arlington_Dornbierer_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Krazee_F,Arlington_Krazee_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Long_F,Arlington_Long_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Mcgehee_F,Arlington_Mcgehee_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_MillerDC_F,Arlington_MillerDC_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Muska_F,Arlington_Muska_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Novak_F,Arlington_Novak_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Raven_F,Arlington_Raven_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Ronnie_F,Arlington_Ronnie_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Tarkas_F,Arlington_Tarkas_ca.paa);
MACRO_ARLINGTON(Cav_Arlington_Traycer_F,Arlington_Traycer_ca.paa);


// Backwards compatability
class Cav_Arlington_Left: Cav_Arlington_Left_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Right: Cav_Arlington_Right_F { scope = 1; scopeCurator = 1; };

class Cav_Arlington_Britton: Cav_Arlington_Britton_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Carter: Cav_Arlington_Carter_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Krazee: Cav_Arlington_Krazee_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Mcgehee: Cav_Arlington_Mcgehee_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Novak: Cav_Arlington_Novak_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Raven: Cav_Arlington_Raven_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Ronnie: Cav_Arlington_Ronnie_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Tarkas: Cav_Arlington_Tarkas_F { scope = 1; scopeCurator = 1; };
class Cav_Arlington_Traycer: Cav_Arlington_Traycer_F { scope = 1; scopeCurator = 1; };
