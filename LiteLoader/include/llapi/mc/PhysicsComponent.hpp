/**
 * @file  PhysicsComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PhysicsComponent.
 *
 */
class PhysicsComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHYSICSCOMPONENT
public:
    class PhysicsComponent& operator=(class PhysicsComponent const &) = delete;
    PhysicsComponent(class PhysicsComponent const &) = delete;
    PhysicsComponent() = delete;
#endif

public:
    /**
     * @hash   -1116754743
     * @symbol  ?isAffectedByGravity\@PhysicsComponent\@\@QEBA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI bool isAffectedByGravity(struct IActorMovementProxy const &) const;
    /**
     * @hash   -254248073
     * @symbol  ?setAffectedByGravity\@PhysicsComponent\@\@QEBAXAEAUIActorMovementProxy\@\@_N\@Z
     */
    MCAPI void setAffectedByGravity(struct IActorMovementProxy &, bool) const;
    /**
     * @hash   698102191
     * @symbol  ?setHasCollision\@PhysicsComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void setHasCollision(class Actor &, bool);

};