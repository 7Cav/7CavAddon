
class CfgVehicles {
    class FlagCarrier;
    class FlagCarrier_Asym;
    class FlagChecked_F;
    class Banner_01_base_F;

    class Cav_Flag_00_Flag_F : FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(00_Display);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_00_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_00_ca.paa);
        };
    };
    class Cav_Flag_00_Banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(00_Banner_Display);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_00_Banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_00_ca.paa)
        };
    };
    class Cav_Flag_01_Flag_F : FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(01_Display);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_01_ca.paa);
        };
    };
    class Cav_Flag_01_Banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(01_Banner_Display);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_01_ca.paa)
        };
    };

    class Cav_Flag_02_Flag_F : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(02_Display);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_02_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_02_ca.paa);
        };
    };
    class Cav_Flag_alpha_1_Flag_F : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(alpha_1_flag);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_02_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_alpha1_ca.paa);
        };
    };
    class Cav_Flag_bravo_2_flag_F : FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(bravo_2_flag);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_bravo2_ca.paa);
        };
    };
    class Cav_Flag_bravo_2_banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(bravo_2_banner);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_bravo2_ca.paa)
        };
    };
    class Cav_Flag_charlie_1_flag_F : FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(charlie_1_flag);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_charlie1_ca.paa);
        };
    };
    class Cav_Flag_charlie_1_banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(charlie_1_banner);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_charlie1_ca.paa)
        };
    };
    class Cav_Flag_charlie_2_flag_F : FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(charlie_2_flag);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_charlie2_ca.paa);
        };
    };
    class Cav_Flag_charlie_2_banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(charlie_2_banner);
        author = ECSTRING(main,cavmodteam);
        //editorPreview = QPATHTOF(EditorPreviews\Cav_Flag_01_Banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_charlie2_ca.paa)
        };
    };
};
