/**
 * @file  ScriptModuleFilters.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptModuleFilters.
 *
 */
namespace ScriptModuleFilters {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getEditorModuleFilter@ScriptModuleFilters@@YA?AV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@_N@Z
     * @hash   -159684839
     */
    MCAPI class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)> getEditorModuleFilter(bool);
    /**
     * @symbol ?getGameTestModuleFilter@ScriptModuleFilters@@YA?AV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@_N@Z
     * @hash   -1618376741
     */
    MCAPI class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)> getGameTestModuleFilter(bool);
    /**
     * @symbol ?getReleaseModuleFilter@ScriptModuleFilters@@YA?AV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@_N0@Z
     * @hash   1637150581
     */
    MCAPI class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)> getReleaseModuleFilter(bool, bool);

};