/**
 * @file  ActorLimitedLifetimeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorLimitedLifetimeComponent.
 *
 */
class ActorLimitedLifetimeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLIMITEDLIFETIMECOMPONENT
public:
    class ActorLimitedLifetimeComponent& operator=(class ActorLimitedLifetimeComponent const &) = delete;
    ActorLimitedLifetimeComponent(class ActorLimitedLifetimeComponent const &) = delete;
#endif

public:
    /**
     * @hash   1198442331
     * @symbol  ??0ActorLimitedLifetimeComponent\@\@QEAA\@XZ
     */
    MCAPI ActorLimitedLifetimeComponent();
    /**
     * @hash   254620601
     * @symbol  ?addAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @hash   -1040656117
     * @symbol  ?readAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &);
    /**
     * @hash   1657955092
     * @symbol  ?convertFromLegacyData\@ActorLimitedLifetimeComponent\@\@SAXAEBVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const &, class CompoundTag &);
    /**
     * @hash   -1502710463
     * @symbol  ?needsLegacyConversion\@ActorLimitedLifetimeComponent\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const &);

};