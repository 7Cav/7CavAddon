class CfgVehicles {
    class Land_Leaflet_03_F;
    class Cav_Poster_Small_Enlist_Today_F: Land_Leaflet_03_F {
        displayName = CSTRING(Cav_Poster_Small_Enlist_Today_F);
        author = ECSTRING(main,cavmodteam);
        editorPreview = QPATHTOEF(textures,data\posters\cav_enlist_today_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cav_leaflets_item_enlist_today_ca.paa)};
    };
    class Land_Poster_05_F;
    class Cav_Poster_Big_Enlist_Today_F: Land_Poster_05_F {
        displayName = CSTRING(Cav_Poster_Big_Enlist_Today_F);
        author = ECSTRING(main,cavmodteam);
        editorPreview = QPATHTOEF(textures,data\posters\cav_enlist_today_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cav_poster_05_item_enlist_today_ca.paa)};
    };
};
