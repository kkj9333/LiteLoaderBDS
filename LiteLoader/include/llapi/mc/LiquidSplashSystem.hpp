/**
 * @file  LiquidSplashSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidSplashSystem.
 *
 */
class LiquidSplashSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDSPLASHSYSTEM
public:
    class LiquidSplashSystem& operator=(class LiquidSplashSystem const &) = delete;
    LiquidSplashSystem(class LiquidSplashSystem const &) = delete;
    LiquidSplashSystem() = delete;
#endif

public:
    /**
     * @hash   1596720958
     * @symbol  ?createSystem\@LiquidSplashSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};