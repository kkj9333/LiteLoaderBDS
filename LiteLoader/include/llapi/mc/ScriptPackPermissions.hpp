/**
 * @file  ScriptPackPermissions.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPackPermissions.
 *
 */
class ScriptPackPermissions {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPACKPERMISSIONS
public:
    class ScriptPackPermissions& operator=(class ScriptPackPermissions const &) = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPackPermissions@@QEAA@XZ
     * @hash   -79019924
     */
    MCAPI ScriptPackPermissions();
    /**
     * @symbol ??0ScriptPackPermissions@@QEAA@AEBV0@@Z
     * @hash   -1308282095
     */
    MCAPI ScriptPackPermissions(class ScriptPackPermissions const &);
    /**
     * @symbol ?isModuleAllowed@ScriptPackPermissions@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1041902655
     */
    MCAPI bool isModuleAllowed(std::string const &) const;
    /**
     * @symbol ??4ScriptPackPermissions@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -2145708748
     */
    MCAPI class ScriptPackPermissions & operator=(class ScriptPackPermissions &&);

//private:

private:
    /**
     * @symbol ?sWildCardModuleName@ScriptPackPermissions@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   216670583
     */
    MCAPI static std::string const sWildCardModuleName;

};