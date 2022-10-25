/**
 * @file  ScriptPluginPackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPluginPackSource.
 *
 */
class ScriptPluginPackSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINPACKSOURCE
public:
    class ScriptPluginPackSource& operator=(class ScriptPluginPackSource const &) = delete;
    ScriptPluginPackSource(class ScriptPluginPackSource const &) = delete;
    ScriptPluginPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1334231588
     */
    virtual ~ScriptPluginPackSource();
    /**
     * @vftbl  1
     * @symbol ?getManifest@ScriptPluginPackSource@@UEAAAEBVPackManifest@@XZ
     * @hash   -807696199
     */
    virtual class PackManifest const & getManifest();
    /**
     * @vftbl  2
     * @symbol ?loadScripts@ScriptPluginPackSource@@UEAA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1184379213
     */
    virtual class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> loadScripts(std::string const &);
    /**
     * @vftbl  3
     * @symbol ?removeRootFromPath@ScriptPluginPackSource@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   1802375502
     */
    virtual std::string removeRootFromPath(std::string const &);

//private:
    /**
     * @symbol ?_removeRootFromPath@ScriptPluginPackSource@@AEAA?AVPath@Core@@AEBV23@@Z
     * @hash   -890856142
     */
    MCAPI class Core::Path _removeRootFromPath(class Core::Path const &);

private:

};