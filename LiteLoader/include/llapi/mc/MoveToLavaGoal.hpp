/**
 * @file  MoveToLavaGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToLiquidGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToLavaGoal.
 *
 */
class MoveToLavaGoal : public MoveToLiquidGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOLAVAGOAL
public:
    class MoveToLavaGoal& operator=(class MoveToLavaGoal const &) = delete;
    MoveToLavaGoal(class MoveToLavaGoal const &) = delete;
    MoveToLavaGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -938792023
     */
    virtual ~MoveToLavaGoal();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  8
     * @hash   -1399092504
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1348196983
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0MoveToLavaGoal@@QEAA@AEAVMob@@MHHHM@Z
     * @hash   -1778167535
     */
    MCAPI MoveToLavaGoal(class Mob &, float, int, int, int, float);

};