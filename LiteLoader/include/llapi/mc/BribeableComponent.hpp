/**
 * @file  BribeableComponent.hpp
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
 * @brief MC class BribeableComponent.
 *
 */
class BribeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLECOMPONENT
public:
    class BribeableComponent& operator=(class BribeableComponent const &) = delete;
    BribeableComponent(class BribeableComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0BribeableComponent@@QEAA@XZ
     * @hash   762256867
     */
    MCAPI BribeableComponent();
    /**
     * @symbol ?addAdditionalSaveData@BribeableComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -402044152
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?clientBribeCheck@BribeableComponent@@QEAA_NAEAVActor@@@Z
     * @hash   -56955711
     */
    MCAPI bool clientBribeCheck(class Actor &);
    /**
     * @symbol ?getBribeCooldown@BribeableComponent@@QEAAAEAHXZ
     * @hash   -1570109033
     */
    MCAPI int & getBribeCooldown();
    /**
     * @symbol ?getBribeTimer@BribeableComponent@@QEAAAEAHXZ
     * @hash   -1667066267
     */
    MCAPI int & getBribeTimer();
    /**
     * @symbol ?getInteraction@BribeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     * @hash   -1016789797
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol ?readAdditionalSaveData@BribeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   2111629816
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?resetBribe@BribeableComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1456678374
     */
    MCAPI void resetBribe(class Actor &);

//private:
    /**
     * @symbol ?_bribe@BribeableComponent@@AEAAXAEAVActor@@AEAVPlayer@@@Z
     * @hash   998983222
     */
    MCAPI void _bribe(class Actor &, class Player &);
    /**
     * @symbol ?_canBribe@BribeableComponent@@AEAA_NAEBVItemStack@@@Z
     * @hash   1396794970
     */
    MCAPI bool _canBribe(class ItemStack const &);

private:

};