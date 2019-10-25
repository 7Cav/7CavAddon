#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) var1 GETVAR_SYS(var2,var3)
#define GETMVAR(var1,var2) missionNamespace GETVAR_SYS(var1,var2)
#define GETUVAR(var1,var2) uiNamespace GETVAR_SYS(var1,var2)
#define GETPRVAR(var1,var2) profileNamespace GETVAR_SYS(var1,var2)
#define GETPAVAR(var1,var2) parsingNamespace GETVAR_SYS(var1,var2)

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}


#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

#define MACRO_LINKEDOPTIC(OPTIC) class LinkedItemsOptic { \
    slot = CowsSlot; \
    item = ##OPTIC; \
}

#define MACRO_LINKEDACC(ACC) class LinkedItemsAcc { \
    slot = PointerSlot; \
    item = ##ACC; \
}

#define MACRO_LINKEDMUZZLE(MUZZLE) class LinkedItemsMuzzle { \
    slot = MuzzleSlot; \
    item = ##MUZZLE; \
}

#define MACRO_LINKEDBARREL(BARREL) class LinkedItemsUnder { \
    slot = UnderBarrelSlot; \
    item = ##BARREL; \
}

#define MULT_OBJ_0(a)
#define MULT_OBJ_1(a)  a
#define MULT_OBJ_2(a)  a, a
#define MULT_OBJ_3(a)  a, a, a
#define MULT_OBJ_4(a)  a, a, a, a
#define MULT_OBJ_5(a)  a, a, a, a, a
#define MULT_OBJ_6(a)  a, a, a, a, a, a
#define MULT_OBJ_7(a)  a, a, a, a, a, a, a
#define MULT_OBJ_8(a)  a, a, a, a, a, a, a, a
#define MULT_OBJ_9(a)  a, a, a, a, a, a, a, a, a
#define MULT_OBJ_10(a) a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_16(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_17(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_18(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_19(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define MULT_OBJ_20(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QPATHTOF(folder\__PREP__.sqf)
