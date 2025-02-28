/**
 * @file  ScriptPluginUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptPluginUtils.
 *
 */
namespace ScriptPluginUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -1392500319
     * @symbol  ?BETA_RELEASE\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BETA_RELEASE;
    /**
     * @hash   743994146
     * @symbol  ?CreateRuntimeByType\@ScriptPluginUtils\@\@YA?AV?$unique_ptr\@VIRuntime\@Scripting\@\@U?$default_delete\@VIRuntime\@Scripting\@\@\@std\@\@\@std\@\@W4ScriptRuntimeType\@\@AEAVRegistryManager\@Scripting\@\@PEAVDependencyLocator\@6\@\@Z
     */
    MCAPI std::unique_ptr<class Scripting::IRuntime> CreateRuntimeByType(enum class ScriptRuntimeType, class Scripting::RegistryManager &, class Scripting::DependencyLocator *);
    /**
     * @hash   -69039800
     * @symbol  ?GetRuntimeType\@ScriptPluginUtils\@\@YA?AW4ScriptRuntimeType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class ScriptRuntimeType GetRuntimeType(std::string const &);
    /**
     * @hash   -1217298476
     * @symbol  ?GetRuntimeTypeFromFileExtension\@ScriptPluginUtils\@\@YA?AW4ScriptRuntimeType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class ScriptRuntimeType GetRuntimeTypeFromFileExtension(std::string const &);
    /**
     * @hash   -566133599
     * @symbol  ?INTERNAL_RELEASE\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const INTERNAL_RELEASE;
    /**
     * @hash   1819808607
     * @symbol  ?JAVA_SCRIPT_RUNTIME_EXTENSION\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_EXTENSION;
    /**
     * @hash   920745953
     * @symbol  ?JAVA_SCRIPT_RUNTIME_NAME\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_NAME;
    /**
     * @symbol  ?JavaScriptModuleNameNormalizer\@ScriptPluginUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@AEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::string JavaScriptModuleNameNormalizer(class std::basic_string_view<char, struct std::char_traits<char>> const &, std::string const &, std::vector<std::string> const &);
    /**
     * @hash   1488245222
     * @symbol  ?SanitizeRuntimeName\@ScriptPluginUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string SanitizeRuntimeName(std::string const &);

};