/**
 * @file  ScriptPackPermissions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   96128092
     * @symbol  ??0ScriptPackPermissions\@\@QEAA\@XZ
     */
    MCAPI ScriptPackPermissions();
    /**
     * @hash   -1219162799
     * @symbol  ??0ScriptPackPermissions\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackPermissions(class ScriptPackPermissions const &);
    /**
     * @hash   -866354863
     * @symbol  ?isModuleAllowed\@ScriptPackPermissions\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isModuleAllowed(std::string const &) const;
    /**
     * @hash   2079328500
     * @symbol  ??4ScriptPackPermissions\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ScriptPackPermissions & operator=(class ScriptPackPermissions &&);

//private:

private:
    /**
     * @hash   1068462543
     * @symbol  ?sWildCardModuleName\@ScriptPackPermissions\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sWildCardModuleName;

};