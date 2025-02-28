/**
 * @file  LadderResetFallDamageSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LadderResetFallDamageSystem.
 *
 */
class LadderResetFallDamageSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LADDERRESETFALLDAMAGESYSTEM
public:
    class LadderResetFallDamageSystem& operator=(class LadderResetFallDamageSystem const &) = delete;
    LadderResetFallDamageSystem(class LadderResetFallDamageSystem const &) = delete;
    LadderResetFallDamageSystem() = delete;
#endif

public:
    /**
     * @hash   -126127344
     * @symbol  ?createLadderResetFallDamageSystem\@LadderResetFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLadderResetFallDamageSystem();
    /**
     * @hash   -573099776
     * @symbol  ?createSideBySideLadderResetFallDamageSystem\@LadderResetFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideLadderResetFallDamageSystem();

};