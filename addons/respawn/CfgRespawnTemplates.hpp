class CfgRespawnTemplates {
    class cav_respawn {
        displayName = CSTRING(cav_respawn);
        onPlayerKilled = "BIS_fnc_respawnMenuPosition";
        onPlayerRespawn = "BIS_fnc_respawnMenuPosition";
        respawn = BASE
        respawnDelay = 4;
        respawnTypes[] = {2,3};
        respawnOnStart = -1;
    };
    class cav_onelife {
        displayName = CSTRING(cav_onelife);
        onPlayerKilled = "BIS_fnc_respawnSpectator";
        onPlayerRespawn = "BIS_fnc_respawnSpectator";
        respawnOnStart = 30000;
        respawnTypes[] = {1,2,3};
    };
};
