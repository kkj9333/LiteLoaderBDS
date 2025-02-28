/**
 * @file  ActorUpdateRidingIDSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorUpdateRidingIDSystem.
 *
 */
class ActorUpdateRidingIDSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATERIDINGIDSYSTEM
public:
    class ActorUpdateRidingIDSystem& operator=(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem() = delete;
#endif

public:
    /**
     * @hash   45210690
     * @symbol  ?createClearPrevRidingIDSystem\@ActorUpdateRidingIDSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearPrevRidingIDSystem();
    /**
     * @hash   1419786610
     * @symbol  ?createClearRidingIDSystem\@ActorUpdateRidingIDSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearRidingIDSystem();
    /**
     * @hash   -878470204
     * @symbol  ?createUpdatePrevRidingIDSystem\@ActorUpdateRidingIDSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdatePrevRidingIDSystem();
    /**
     * @hash   1276097067
     * @symbol  ?tickClearRidingID\@ActorUpdateRidingIDSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPassengerComponent\@\@\@\@\@Z
     */
    MCAPI static void tickClearRidingID(class StrictEntityContext &, struct PassengerComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PassengerComponent> &);
    /**
     * @symbol  ?tickUpdateRidingPrevID\@ActorUpdateRidingIDSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@URidingPrevIDComponent\@\@\@\@\@Z
     */
    MCAPI static void tickUpdateRidingPrevID(class StrictEntityContext &, struct PassengerComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RidingPrevIDComponent>);

};