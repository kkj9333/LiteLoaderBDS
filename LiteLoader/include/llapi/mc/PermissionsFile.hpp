/**
 * @file  PermissionsFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PermissionsFile.
 *
 */
class PermissionsFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONSFILE
public:
    class PermissionsFile& operator=(class PermissionsFile const &) = delete;
    PermissionsFile(class PermissionsFile const &) = delete;
    PermissionsFile() = delete;
#endif

public:
    /**
     * @hash   -975416789
     * @symbol  ??0PermissionsFile\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI PermissionsFile(class Core::Path const &);
    /**
     * @hash   -364283672
     * @symbol  ?applyPlayerPermissionsFromDisk\@PermissionsFile\@\@QEAAXAEAVPlayer\@\@AEBVUserEntityIdentifierComponent\@\@W4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void applyPlayerPermissionsFromDisk(class Player &, class UserEntityIdentifierComponent const &, enum class CommandPermissionLevel);
    /**
     * @hash   -1143992886
     * @symbol  ?getPermissions\@PermissionsFile\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PlayerPermissionLevel\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PlayerPermissionLevel\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, enum class PlayerPermissionLevel, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class PlayerPermissionLevel>>> const & getPermissions() const;
    /**
     * @hash   -848960582
     * @symbol  ?getXUIDsByPermission\@PermissionsFile\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI std::vector<std::string> getXUIDsByPermission(enum class PlayerPermissionLevel) const;
    /**
     * @hash   -962289782
     * @symbol  ?isPermissionsSet\@PermissionsFile\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI bool isPermissionsSet(std::string const &, enum class PlayerPermissionLevel) const;
    /**
     * @hash   713688603
     * @symbol  ?persistPlayerPermissionsToDisk\@PermissionsFile\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void persistPlayerPermissionsToDisk(std::string const &, enum class PlayerPermissionLevel);
    /**
     * @hash   -95856637
     * @symbol  ?persistPlayerPermissionsToDisk\@PermissionsFile\@\@QEAAXAEBVUserEntityIdentifierComponent\@\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const &, enum class PlayerPermissionLevel);
    /**
     * @hash   -797900950
     * @symbol  ?reload\@PermissionsFile\@\@QEAA?AW4FileReadResult\@\@XZ
     */
    MCAPI enum class FileReadResult reload();

//private:
    /**
     * @hash   2131161134
     * @symbol  ?readPermissionFile\@PermissionsFile\@\@AEAA?AV?$tuple\@W4FileReadResult\@\@VValue\@Json\@\@\@std\@\@XZ
     */
    MCAPI class std::tuple<enum class FileReadResult, class Json::Value> readPermissionFile();
    /**
     * @hash   -502606110
     * @symbol  ?setDefaultPlayerPermission\@PermissionsFile\@\@AEAAXAEAVPlayer\@\@W4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setDefaultPlayerPermission(class Player &, enum class CommandPermissionLevel);

private:

};