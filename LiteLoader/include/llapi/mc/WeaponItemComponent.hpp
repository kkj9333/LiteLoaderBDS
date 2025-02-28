/**
 * @file  WeaponItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WeaponItemComponent.
 *
 */
class WeaponItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAPONITEMCOMPONENT
public:
    class WeaponItemComponent& operator=(class WeaponItemComponent const &) = delete;
    WeaponItemComponent(class WeaponItemComponent const &) = delete;
    WeaponItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WeaponItemComponent();
    /**
     * @hash   360077427
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VWeaponItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -265641947
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VWeaponItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   716527435
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VWeaponItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -886126774
     * @symbol  ?appendFormattedHovertext\@WeaponItemComponent\@\@QEBAXAEBVItemStackBase\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void appendFormattedHovertext(class ItemStackBase const &, std::string &, bool) const;
    /**
     * @hash   1004989170
     * @symbol  ?hitActor\@WeaponItemComponent\@\@QEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    MCAPI void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1735734665
     * @symbol  ?hitBlock\@WeaponItemComponent\@\@QEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    MCAPI void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @hash   72572552
     * @symbol  ?hurtActor\@WeaponItemComponent\@\@QEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    MCAPI void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1711493583
     * @symbol  ?bindType\@WeaponItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   104781212
     * @symbol  ?getIdentifier\@WeaponItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};