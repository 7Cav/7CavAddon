class CfgSounds {
    sounds[] = {};
    class GVAR(HeartRate) {
        name = QGVAR(HeartRate);
        sound[] = {QPATHTOF_SOUND(sounds\heartrate.wav), db + 2, 1, 15};
        titles[]    = {};
    };
    class GVAR(NoHeartRate) {
        name = QGVAR(NoHeartRate);
        sound[] = {QPATHTOF_SOUND(sounds\noheartrate.wav), db + 2, 1, 15};
        titles[]    = {};
    };
    class GVAR(NoShock) {
        name = QGVAR(NoShock);
        sound[] = {QPATHTOF_SOUND(sounds\noshock.wav), db + 2, 1, 15};
        titles[]    = {};
    };
    class GVAR(TakePainKiller) {
        name = QGVAR(TakePainKiller);
        sound[] = {QPATHTOF_SOUND(sounds\take_painkillers.wav), db + 2, 1, 15};
        titles[]    = {};
    };
    class GVAR(Slap) {
        name = QGVAR(Slap);
        sound[] = {QPATHTOF_SOUND(sounds\slap.ogg), db + 20, 1, 20};
        titles[]    = {};
    };
};
