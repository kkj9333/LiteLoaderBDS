/**
 * @file  EmergeGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EmergeGoal.
 *
 */
class EmergeGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMERGEGOAL
public:
    class EmergeGoal& operator=(class EmergeGoal const &) = delete;
    EmergeGoal(class EmergeGoal const &) = delete;
    EmergeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -853530768
     */
    virtual ~EmergeGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@EmergeGoal@@UEAA_NXZ
     * @hash   -1484705206
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@EmergeGoal@@UEAA_NXZ
     * @hash   -1011789208
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@EmergeGoal@@UEAAXXZ
     * @hash   281357715
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@EmergeGoal@@UEAAXXZ
     * @hash   595400003
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@EmergeGoal@@UEAAXXZ
     * @hash   -800690882
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@EmergeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   713177206
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0EmergeGoal@@QEAA@AEAVMob@@@Z
     * @hash   -496228441
     */
    MCAPI EmergeGoal(class Mob &);

};