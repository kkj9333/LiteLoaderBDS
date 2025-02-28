/**
 * @file  WalkState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WalkState.
 *
 */
class WalkState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALKSTATE
public:
    class WalkState& operator=(class WalkState const &) = delete;
    WalkState(class WalkState const &) = delete;
    WalkState() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WalkState();
    /**
     * @hash   1651880300
     * @vftbl  1
     * @symbol  ?tick\@WalkState\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1517695777
     * @vftbl  2
     * @symbol  ?start\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1379317951
     * @vftbl  3
     * @symbol  ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void stop();

};