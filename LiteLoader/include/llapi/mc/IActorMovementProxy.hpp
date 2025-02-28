/**
 * @file  IActorMovementProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure IActorMovementProxy.
 *
 */
struct IActorMovementProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IACTORMOVEMENTPROXY
public:
    struct IActorMovementProxy& operator=(struct IActorMovementProxy const &) = delete;
    IActorMovementProxy(struct IActorMovementProxy const &) = delete;
    IActorMovementProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IACTORMOVEMENTPROXY
    /**
     * @hash   187658558
     * @symbol  ?isFlying\@IActorMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
    /**
     * @hash   -1916224035
     * @symbol  ?setIsFlying\@IActorMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setIsFlying(bool);
#endif
    /**
     * @hash   -1582283160
     * @symbol  ?getRegionAsConstBlockSource\@IActorMovementProxy\@\@QEBAAEBVIConstBlockSource\@\@XZ
     */
    MCAPI class IConstBlockSource const & getRegionAsConstBlockSource() const;

};