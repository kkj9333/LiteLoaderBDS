/**
 * @file  VillagerCelebrationGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerCelebrationGoal.
 *
 */
class VillagerCelebrationGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERCELEBRATIONGOAL
public:
    class VillagerCelebrationGoal& operator=(class VillagerCelebrationGoal const &) = delete;
    VillagerCelebrationGoal(class VillagerCelebrationGoal const &) = delete;
    VillagerCelebrationGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VillagerCelebrationGoal();
    /**
     * @hash   -1696901623
     * @vftbl  1
     * @symbol  ?canUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -2140087545
     * @vftbl  2
     * @symbol  ?canContinueToUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -563132478
     * @vftbl  4
     * @symbol  ?start\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1023561710
     * @vftbl  5
     * @symbol  ?stop\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -179294771
     * @vftbl  6
     * @symbol  ?tick\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -309197545
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@VillagerCelebrationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   2131771606
     * @symbol  ??0VillagerCelebrationGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI VillagerCelebrationGoal(class Mob &);

//private:
    /**
     * @hash   -1037735426
     * @symbol  ?_launchFirework\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _launchFirework();
    /**
     * @hash   1559938287
     * @symbol  ?_setNextFireworkTick\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _setNextFireworkTick();

private:

};