/**
 * @file  BedrockLoadContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BedrockLoadContext.
 *
 */
class BedrockLoadContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKLOADCONTEXT
public:
    class BedrockLoadContext& operator=(class BedrockLoadContext const &) = delete;
    BedrockLoadContext(class BedrockLoadContext const &) = delete;
    BedrockLoadContext() = delete;
#endif

public:
    /**
     * @hash   -1872402422
     * @symbol  ??0BedrockLoadContext\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI BedrockLoadContext(class SemVersion const &);
    /**
     * @hash   -1178971955
     * @symbol  ??1BedrockLoadContext\@\@QEAA\@XZ
     */
    MCAPI ~BedrockLoadContext();

};