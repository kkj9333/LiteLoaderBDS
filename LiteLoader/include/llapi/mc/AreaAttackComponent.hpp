/**
 * @file  AreaAttackComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AreaAttackComponent.
 *
 */
class AreaAttackComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKCOMPONENT
public:
    class AreaAttackComponent& operator=(class AreaAttackComponent const &) = delete;
    AreaAttackComponent(class AreaAttackComponent const &) = delete;
    AreaAttackComponent() = delete;
#endif

public:
    /**
     * @hash   404175609
     * @symbol  ??0AreaAttackComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AreaAttackComponent(class AreaAttackComponent &&);
    /**
     * @hash   620389160
     * @symbol  ?addAdditionalSaveData\@AreaAttackComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -156046393
     * @symbol  ?findCooldownEntry\@AreaAttackComponent\@\@QEAAPEAU?$pair\@UActorUniqueID\@\@UTick\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI struct std::pair<struct ActorUniqueID, struct Tick> * findCooldownEntry(struct ActorUniqueID const &);
    /**
     * @hash   -1615033800
     * @symbol  ?isEntryOnAttackCooldown\@AreaAttackComponent\@\@QEBA_NPEBU?$pair\@UActorUniqueID\@\@UTick\@\@\@std\@\@AEBUTick\@\@\@Z
     */
    MCAPI bool isEntryOnAttackCooldown(struct std::pair<struct ActorUniqueID, struct Tick> const *, struct Tick const &) const;
    /**
     * @hash   1028077892
     * @symbol  ??4AreaAttackComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AreaAttackComponent & operator=(class AreaAttackComponent &&);
    /**
     * @hash   -1758541120
     * @symbol  ?readAdditionalSaveData\@AreaAttackComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1909658684
     * @symbol  ??1AreaAttackComponent\@\@QEAA\@XZ
     */
    MCAPI ~AreaAttackComponent();

};