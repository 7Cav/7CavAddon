class RscControlsGroupNoScrollbars;
class RscButton;

class RscStandardDisplay;
class RscDisplayMain : RscStandardDisplay {
    class Controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
            h = "(8 *     1.5) *     (pixelH * pixelGrid * 2)";
            class Controls : Controls {
                class Campaigns;
                class joinTac2 : Campaigns {
                    idc = -1;
                    text = "Join Tactical Realism";
                    tooltip = "Join our public Tactical Realism server!";
                    y = "(3 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    action = "";
                    onbuttonclick = "connectToServer ['75.6.53.6', 2302, ''];";
                    Onload = "";
                };
                class joinTS1 : joinTac2 {
                    text = "Join Training Server 1";
                    tooltip = "Join the member only training server!";
                    y = "(4 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['75.6.53.6', 2402, ''];";
                };
                class joinTS2 : joinTS1 {
                    text = "Join Training Server 2";
                    y = "(5 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['75.6.53.6', 2502, ''];";
                };
                class joinTS3 : joinTS1 {
                    text = "Join Training Server 3";
                    y = "(6 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['75.6.53.6', 2602, ''];";
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

            tooltip = "Enlist Today!";
            url = "https://7cav.us/enlist";
            onMouseEnter = "";
            onSetFocus = "";
            onMouseExit = "";
            onKillFocus = "";

            style = 48;
        };
    };
};
