
class CfgVehicles {
    class FlagCarrier;
    class FlagCarrier_Asym;
    class FlagChecked_F;
    class Banner_01_base_F;

    class CavMod_Flag_00_Flag_F : FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(00_Display);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\CavMod_Flag_00_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_00_ca.paa);
        };
    };
    class CavMod_Flag_00_Banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(00_Banner_Display);
        author = ECSTRING(main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\CavMod_Flag_00_Banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_00_ca.paa)
        };
    };
    class CavMod_Flag_01_Flag_F : FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(01_Display);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\CavMod_Flag_01_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_01_ca.paa);
        };
    };
    class CavMod_Flag_01_Banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(01_Banner_Display);
        author = ECSTRING(main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\CavMod_Flag_01_Banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_01_ca.paa)
        };
    };

    class CavMod_Flag_02_Flag_F : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(02_Display);
        author = ECSTRING(Main,CavModTeam);
        //editorPreview = QPATHTOF(EditorPreviews\CavMod_Flag_02_Flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_02_ca.paa);
        };
    };
};
