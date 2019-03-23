class CfgMarkers {
    class flag_NATO;
    class cavmod_flag_cav_00 : flag_NATO {
        name = CSTRING(flag_cav_00);
        icon = QPATHTOF(data\marker_cav_00_ca.paa);
        texture = QPATHTOF(data\marker_cav_00_ca.paa);
    };
    class cavmod_flag_cav_01 : flag_NATO {
        name = CSTRING(flag_cav_01);
        icon = QPATHTOF(data\marker_cav_01_ca.paa);
        texture = QPATHTOF(data\marker_cav_01_ca.paa);
    };

    class hd_dot;
	class cavmod_hd_cav : hd_dot {
        name = CSTRING(handdrawn_cav);
        icon = QPATHTOF(data\handdrawn_cav_ca.paa);
	};
	class cavmod_hd_cav_noShadow : cavmod_hd_cav {
		scope = 0;
		shadow = 0;
	};

    class mil_objective;
	class cavmod_mil_cav : mil_objective {
        name = CSTRING(military_cav);
        icon = QPATHTOF(data\military_cav_ca.paa);
	};
	class cavmod_mil_cav_noShadow: cavmod_mil_cav {
		scope = 0;
		shadow = 0;
	};
};
