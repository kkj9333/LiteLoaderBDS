/**
 * @file  VibrationListenerConfig.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationListenerConfig.
 *
 */
class VibrationListenerConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERCONFIG
public:
    class VibrationListenerConfig& operator=(class VibrationListenerConfig const &) = delete;
    VibrationListenerConfig(class VibrationListenerConfig const &) = delete;
    VibrationListenerConfig() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIBRATIONLISTENERCONFIG
    /**
     * @symbol ?isValidVibration@VibrationListenerConfig@@UEAA_NAEBVGameEvent@@@Z
     * @hash   238604256
     */
    MCVAPI bool isValidVibration(class GameEvent const &);
#endif

};