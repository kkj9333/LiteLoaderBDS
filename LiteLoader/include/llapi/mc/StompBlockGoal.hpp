/**
 * @file  StompBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StompBlockGoal.
 *
 */
class StompBlockGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPBLOCKGOAL
public:
    class StompBlockGoal& operator=(class StompBlockGoal const &) = delete;
    StompBlockGoal(class StompBlockGoal const &) = delete;
    StompBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StompBlockGoal();
    /**
     * @hash   1452476737
     * @vftbl  1
     * @symbol  ?canUse\@StompBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1510194575
     * @vftbl  2
     * @symbol  ?canContinueToUse\@StompBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -818220598
     * @vftbl  4
     * @symbol  ?start\@StompBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -497511494
     * @vftbl  5
     * @symbol  ?stop\@StompBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   230776005
     * @vftbl  6
     * @symbol  ?tick\@StompBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1498070817
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@StompBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   1357012899
     * @vftbl  11
     * @symbol  ?isValidTarget\@StompBlockGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1850193963
     * @vftbl  13
     * @symbol  ?_canReach\@StompBlockGoal\@\@MEAA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool _canReach(class BlockPos const &);
    /**
     * @hash   -45385901
     * @vftbl  14
     * @symbol  ?_moveToBlock\@StompBlockGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @hash   1681159261
     * @vftbl  17
     * @symbol  ?findTargetBlock\@StompBlockGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @hash   -534508669
     * @vftbl  18
     * @symbol  ?_createBreakProgressParticles\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _createBreakProgressParticles(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   -632884047
     * @vftbl  19
     * @symbol  ?_createDestroyParticles\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _createDestroyParticles(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   1307412777
     * @vftbl  20
     * @symbol  ?_playBreakProgressSound\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _playBreakProgressSound(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   1037983575
     * @vftbl  21
     * @symbol  ?_playDestroySound\@StompBlockGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _playDestroySound(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   -358394401
     * @symbol  ??0StompBlockGoal\@\@QEAA\@PEBVBlock\@\@AEAVMob\@\@MHHMH\@Z
     */
    MCAPI StompBlockGoal(class Block const *, class Mob &, float, int, int, float, int);

};