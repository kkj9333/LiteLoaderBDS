/**
 * @file  SwimEnchant.hpp
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
 * @brief MC class SwimEnchant.
 *
 */
class SwimEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMENCHANT
public:
    class SwimEnchant& operator=(class SwimEnchant const &) = delete;
    SwimEnchant(class SwimEnchant const &) = delete;
    SwimEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1261963647
     */
    virtual ~SwimEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@SwimEnchant@@UEBAHH@Z
     * @hash   -677128166
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@SwimEnchant@@UEBAHH@Z
     * @hash   -1884791032
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@SwimEnchant@@UEBAHXZ
     * @hash   1895697424
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -339307949
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -330249563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -329326042
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol ?_isValidEnchantmentTypeForCategory@SwimEnchant@@EEBA_NW4Type@Enchant@@@Z
     * @hash   929818299
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const;
    /**
     * @symbol ??0SwimEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   -59238808
     */
    MCAPI SwimEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @symbol ?VALID_ENCHANTMENTS@SwimEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
     * @hash   2026752280
     */
    MCAPI static std::vector<enum class Enchant::Type> const VALID_ENCHANTMENTS;

};