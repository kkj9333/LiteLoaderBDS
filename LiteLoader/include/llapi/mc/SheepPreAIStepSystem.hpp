/**
 * @file  SheepPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SheepPreAIStepSystem.
 *
 */
class SheepPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEPPREAISTEPSYSTEM
public:
    class SheepPreAIStepSystem& operator=(class SheepPreAIStepSystem const &) = delete;
    SheepPreAIStepSystem(class SheepPreAIStepSystem const &) = delete;
    SheepPreAIStepSystem() = delete;
#endif

public:
    /**
     * @hash   -1251859972
     * @symbol  ?createSystem\@SheepPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @hash   1024302545
     * @symbol  ?_doSheepPreAIStepSystem\@SheepPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSheepPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};