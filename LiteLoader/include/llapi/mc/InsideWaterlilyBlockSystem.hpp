/**
 * @file  InsideWaterlilyBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideWaterlilyBlockSystem.
 *
 */
class InsideWaterlilyBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEWATERLILYBLOCKSYSTEM
public:
    class InsideWaterlilyBlockSystem& operator=(class InsideWaterlilyBlockSystem const &) = delete;
    InsideWaterlilyBlockSystem(class InsideWaterlilyBlockSystem const &) = delete;
    InsideWaterlilyBlockSystem() = delete;
#endif

public:
    /**
     * @hash   -1446592798
     * @symbol  ?createDestroyWaterlilySystem\@InsideWaterlilyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDestroyWaterlilySystem();
    /**
     * @hash   -1274887550
     * @symbol  ?createMovementSystem\@InsideWaterlilyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMovementSystem();

};