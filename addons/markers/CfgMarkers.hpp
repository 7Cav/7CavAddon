class CfgMarkers {
    class flag_NATO;
    class cav_flag_cav_00 : flag_NATO {
        name = CSTRING(flag_cav_00);
        icon = QPATHTOF(data\marker_cav_00_ca.paa);
        texture = QPATHTOF(data\marker_cav_00_ca.paa);
    };
    class cav_flag_cav_01 : flag_NATO {
        name = CSTRING(flag_cav_01);
        icon = QPATHTOF(data\marker_cav_01_ca.paa);
        texture = QPATHTOF(data\marker_cav_01_ca.paa);
    };

    class hd_dot;
	class cav_hd_cav : hd_dot {
        name = CSTRING(handdrawn_cav);
        icon = QPATHTOF(data\handdrawn_cav_ca.paa);
	};
	class cav_hd_cav_noShadow : cav_hd_cav {
		scope = 0;
		shadow = 0;
	};

    class mil_objective;
	class cav_mil_cav : mil_objective {
        name = CSTRING(military_cav);
        icon = QPATHTOF(data\military_cav_ca.paa);
	};
	class cav_mil_cav_noShadow: cav_mil_cav {
		scope = 0;
		shadow = 0;
	};
};
