#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define DGVAR(varName)    if(isNil "ACE_DEBUG_NAMESPACE") then { ACE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(GVAR(varName)) in ACE_DEBUG_NAMESPACE)) then { PUSH(ACE_DEBUG_NAMESPACE, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if(isNil "ACE_DEBUG_NAMESPACE") then { ACE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(varName) in ACE_DEBUG_NAMESPACE)) then { PUSH(ACE_DEBUG_NAMESPACE, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define QQPATHTOF(var1) QUOTE(QPATHTOF(var1))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) (var1 GETVAR_SYS(var2,var3))
#define GETMVAR(var1,var2) (missionNamespace GETVAR_SYS(var1,var2))
#define GETUVAR(var1,var2) (uiNamespace GETVAR_SYS(var1,var2))
#define GETPRVAR(var1,var2) (profileNamespace GETVAR_SYS(var1,var2))
#define GETPAVAR(var1,var2) (parsingNamespace GETVAR_SYS(var1,var2))

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) (if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT})


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
#define MULT_OBJ_1(a)  QUOTE(a)
#define MULT_OBJ_2(a)  MULT_OBJ_1(a), QUOTE(a)
#define MULT_OBJ_3(a)  MULT_OBJ_2(a), QUOTE(a)
#define MULT_OBJ_4(a)  MULT_OBJ_3(a), QUOTE(a)
#define MULT_OBJ_5(a)  MULT_OBJ_4(a), QUOTE(a)
#define MULT_OBJ_6(a)  MULT_OBJ_5(a), QUOTE(a)
#define MULT_OBJ_7(a)  MULT_OBJ_6(a), QUOTE(a)
#define MULT_OBJ_8(a)  MULT_OBJ_7(a), QUOTE(a)
#define MULT_OBJ_9(a)  MULT_OBJ_8(a), QUOTE(a)
#define MULT_OBJ_10(a) MULT_OBJ_8(a), QUOTE(a)
#define MULT_OBJ_11(a) MULT_OBJ_10(a), QUOTE(a)
#define MULT_OBJ_12(a) MULT_OBJ_11(a), QUOTE(a)
#define MULT_OBJ_13(a) MULT_OBJ_12(a), QUOTE(a)
#define MULT_OBJ_14(a) MULT_OBJ_13(a), QUOTE(a)
#define MULT_OBJ_15(a) MULT_OBJ_14(a), QUOTE(a)
#define MULT_OBJ_16(a) MULT_OBJ_15(a), QUOTE(a)
#define MULT_OBJ_17(a) MULT_OBJ_16(a), QUOTE(a)
#define MULT_OBJ_18(a) MULT_OBJ_17(a), QUOTE(a)
#define MULT_OBJ_19(a) MULT_OBJ_18(a), QUOTE(a)
#define MULT_OBJ_20(a) MULT_OBJ_19(a), QUOTE(a)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QPATHTOF(folder\__PREP__.sqf)
