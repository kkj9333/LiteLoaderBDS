/**
 * @file  DespawnComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DespawnComponent.
 *
 */
class DespawnComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNCOMPONENT
public:
    class DespawnComponent& operator=(class DespawnComponent const &) = delete;
    DespawnComponent(class DespawnComponent const &) = delete;
    DespawnComponent() = delete;
#endif

public:
    /**
     * @symbol ?onDespawn@DespawnComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1701785652
     */
    MCAPI void onDespawn(class Actor &);
    /**
     * @symbol ?tick@DespawnComponent@@QEAAXAEAVActor@@@Z
     * @hash   91791274
     */
    MCAPI void tick(class Actor &);

//private:
    /**
     * @symbol ?_tryStandardDespawnRules@DespawnComponent@@AEBA_NAEAVActor@@AEBVDespawnDefinition@@AEAVIWorldAccessor@1@@Z
     * @hash   814191578
     */
    MCAPI bool _tryStandardDespawnRules(class Actor &, class DespawnDefinition const &, class DespawnComponent::IWorldAccessor &) const;

private:

};