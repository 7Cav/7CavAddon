class RscControlsGroupNoScrollbars;
class RscButton;

class RscStandardDisplay;
class RscDisplayMain : RscStandardDisplay {
    class Controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
            h = "(9 *     1.5) *     (pixelH * pixelGrid * 2)";
            class Controls : Controls {
                class Campaigns;
                class joinTac2 : Campaigns {
                    idc = -1;
                    text = CSTRING(joinTac2_text);
                    tooltip = CSTRING(joinTac2_tooltip);
                    y = "(3 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    action = "";
                    onbuttonclick = "connectToServer ['75.6.53.50', 2302, ''];";
                    Onload = "";
                };
                class joinTS1 : joinTac2 {
                    text = CSTRING(joinTS1_text);
                    tooltip = CSTRING(joinTS_tooltip);
                    y = "(4 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['75.6.53.50', 2402, ''];";
                };
                class joinTS2 : joinTS1 {
                    text = CSTRING(joinTS2_text);
                    y = "(5 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['75.6.53.50', 2502, ''];";
                };
                class joinTS3 : joinTS1 {
                    text = CSTRING(joinTS3_text);
                    y = "(6 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['75.6.53.50', 2602, ''];";
                };
                class joinTSE : joinTS1 {
                    text = CSTRING(joinTSE_text);
                    tooltip = CSTRING(joinTSE_tooltip);
                    y = "(7 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['75.6.53.50', 2902, ''];";
                };
            };
        };
        
        class CavJoin : RscButton {
            idc = -1;
            text = QPATHTOF(data\join_cav_ca.paa);
            colorBackground[] = {0,0,0,0};
            colorBackgroundActive[] = {0.5324,0.4134,0.0543,1};
            colorFocused[] = {1,1,1,1};
            colorText[] = {1,1,1,0.5};

            h = "2 * 	(pixelH * pixelGrid * 2)";
            x = "safezoneX + safezoneW - 4 *         2 *     (pixelW * pixelGrid * 2)";
            w = "4 *     (pixelW * pixelGrid * 2)";
            y = "safezoneY + 2 * 	(pixelH * pixelGrid * 2)";

            tooltip = CSTRING(CavJoin_tooltip);
            url = CSTRING(CavJoin_url);
            onMouseEnter = "";
            onSetFocus = "";
            onMouseExit = "";
            onKillFocus = "";

            style = 48;
        };
    };
};
