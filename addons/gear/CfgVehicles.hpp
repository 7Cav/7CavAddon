class CfgVehicles       // Character classes are defined under cfgVehicles.
{
    class B_Uniform_ParadeUniform_01_US_decorated_F;
    class Cav_B_RRD_Parade : B_Uniform_ParadeUniform_01_US_decorated_F  // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        displayName = "Cavalry Officer (Parade Decorated)";
        author = "Dunn.W";          // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "Cav_B_RRD_Parade_Uniform";
        hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
        hiddenSelectionsTextures[] = {QPATHTOF(Data\RRD_Uniform\RRD_Parade.paa),QPATHTOF(Data\RRD_Uniform\RRD_Parade.paa),"a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_US_CO.paa",QPATHTOF(Data\RRD_Uniform\RRD_Ribbons.paa)};
    };
};