/**
 * @file  ServerStandInCauldronSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerStandInCauldronSystem.
 *
 */
class ServerStandInCauldronSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSTANDINCAULDRONSYSTEM
public:
    class ServerStandInCauldronSystem& operator=(class ServerStandInCauldronSystem const &) = delete;
    ServerStandInCauldronSystem(class ServerStandInCauldronSystem const &) = delete;
    ServerStandInCauldronSystem() = delete;
#endif

public:
    /**
     * @hash   -2088526785
     * @symbol  ?_checkInsideCauldron\@ServerStandInCauldronSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _checkInsideCauldron(class StrictEntityContext &, class ActorOwnerComponent &);
    /**
     * @hash   1799367500
     * @symbol  ?createSystem\@ServerStandInCauldronSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};