/**
 * @file  VibrationListenerUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VibrationListenerUtils.
 *
 */
namespace VibrationListenerUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -1298690584
     * @symbol  ?getGameEventFrequency\@VibrationListenerUtils\@\@YAHAEBVGameEvent\@\@\@Z
     */
    MCAPI int getGameEventFrequency(class GameEvent const &);
    /**
     * @hash   1273132670
     * @symbol  ?ignoreVibrationIfSneaking\@VibrationListenerUtils\@\@YA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    MCAPI bool ignoreVibrationIfSneaking(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

};