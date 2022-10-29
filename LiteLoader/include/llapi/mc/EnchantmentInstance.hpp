/**
 * @file  EnchantmentInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantmentInstance.
 *
 */
class EnchantmentInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTMENTINSTANCE
public:
    class EnchantmentInstance& operator=(class EnchantmentInstance const &) = delete;
    EnchantmentInstance(class EnchantmentInstance const &) = delete;
#endif

public:
    /**
     * @symbol ??0EnchantmentInstance@@QEAA@XZ
     * @hash   -1755395992
     */
    MCAPI EnchantmentInstance();
    /**
     * @symbol ??0EnchantmentInstance@@QEAA@W4Type@Enchant@@H@Z
     * @hash   1489312160
     */
    MCAPI EnchantmentInstance(enum class Enchant::Type, int);
    /**
     * @symbol ?getEnchantLevel@EnchantmentInstance@@QEBAHXZ
     * @hash   431872474
     */
    MCAPI int getEnchantLevel() const;
    /**
     * @symbol ?getEnchantType@EnchantmentInstance@@QEBA?AW4Type@Enchant@@XZ
     * @hash   2066947720
     */
    MCAPI enum class Enchant::Type getEnchantType() const;
    /**
     * @symbol ??8EnchantmentInstance@@QEBA_NAEBV0@@Z
     * @hash   2037163515
     */
    MCAPI bool operator==(class EnchantmentInstance const &) const;
    /**
     * @symbol ?setEnchantLevel@EnchantmentInstance@@QEAAXH@Z
     * @hash   2033844204
     */
    MCAPI void setEnchantLevel(int);
    /**
     * @symbol ?setEnchantType@EnchantmentInstance@@QEAAXW4Type@Enchant@@@Z
     * @hash   -72536746
     */
    MCAPI void setEnchantType(enum class Enchant::Type);

};