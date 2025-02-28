/**
 * @file  HoverGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoverGoal.
 *
 */
class HoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERGOAL
public:
    class HoverGoal& operator=(class HoverGoal const &) = delete;
    HoverGoal(class HoverGoal const &) = delete;
    HoverGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HoverGoal();
    /**
     * @hash   -1084318095
     * @vftbl  1
     * @symbol  ?canUse\@HoverGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   948164986
     * @vftbl  4
     * @symbol  ?start\@HoverGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1167531546
     * @vftbl  5
     * @symbol  ?stop\@HoverGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1967084117
     * @vftbl  6
     * @symbol  ?tick\@HoverGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1520270111
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@HoverGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1138212653
     * @symbol  ??0HoverGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI HoverGoal(class Mob &, float);

};