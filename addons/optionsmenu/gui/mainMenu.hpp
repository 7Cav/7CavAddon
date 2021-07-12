class RscControlsGroupNoHScrollbars;
class RscControlsGroupNoScrollbars;
class RscStandardDisplay;

class RscDisplayMain : RscStandardDisplay {
    class Controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
            h = "(7 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls : Controls {
                class Campaigns;
                //class joinTac2 : Campaigns {
                //    idc = 701;
                //    text = "Join Tactical Realism 2";
                //    tooltip = "Join the public Tactical Realism 2 server!";
                //    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                //    action = "";
                //    onbuttonclick = "connectToServer ['205.134.177.181', 2302, ''];";
                //    Onload = "";
                //};
                class joinTS1 : Campaigns {
                    idc = 702;
                    text = "Join Training Server 1";
                    tooltip = "Join the member only training server!";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    action = "";
                    onbuttonclick = "connectToServer ['51.222.10.77', 2302, ''];";
                    Onload = "";
                };
                class joinTS2 : joinTS1 {
                    text = "Join Training Server 2";
                    y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['51.222.10.77', 2402, ''];";
                };
                class joinTS3 : joinTS1 {
                    text = "Join Training Server 3";
                    y = "(5 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['51.222.10.77', 2502, ''];";
                };
                class joinTS4 : joinTS1 {
                    text = "Join Training Server 4";
                    y = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['51.222.10.77', 2602, ''];";
                };
            };
        };
        class Exit;
        class CavJoin : Exit {
            text = QPATHTOF(data\join_cav_ca.paa);
            x = "safezoneX + safezoneW - 4 * 		2 * 	(pixelW * pixelGrid * 2)";
            w = "4 * 	(pixelW * pixelGrid * 2)";
            tooltip = "Enlist Today!";
            url = "https://7cav.us/enlist";
			onMouseEnter = "";
			onSetFocus = "";
			onMouseExit = "";
			onKillFocus = "";
        };
    };
};