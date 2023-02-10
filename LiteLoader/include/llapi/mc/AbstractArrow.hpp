/**
 * @file  AbstractArrow.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AbstractArrow.
 *
 */
class AbstractArrow : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTARROW
public:
    class AbstractArrow& operator=(class AbstractArrow const &) = delete;
    AbstractArrow(class AbstractArrow const &) = delete;
    AbstractArrow() = delete;
#endif

public:
    /**
     * @hash   872890646
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@AbstractArrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -2092148343
     * @vftbl  12
     * @symbol  ?initializeComponents\@AbstractArrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~AbstractArrow();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   1419115077
     * @vftbl  47
     * @symbol  ?lerpMotion\@AbstractArrow\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   111956985
     * @vftbl  80
     * @symbol  ?getShadowHeightOffs\@AbstractArrow\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   -1769504929
     * @vftbl  81
     * @symbol  ?getShadowRadius\@AbstractArrow\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   -192796619
     * @vftbl  90
     * @symbol  ?playerTouch\@AbstractArrow\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   1057654056
     * @vftbl  170
     * @symbol  ?getSourceUniqueID\@AbstractArrow\@\@MEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   108766900
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@AbstractArrow\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   719606809
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@AbstractArrow\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1340861052
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@AbstractArrow\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   1654636455
     * @vftbl  278
     * @symbol  ?shoot\@AbstractArrow\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @hash   -1713159447
     * @vftbl  279
     * @symbol  ?_playPickupSound\@AbstractArrow\@\@MEAAXXZ
     */
    virtual void _playPickupSound();
    /**
     * @hash   1279930741
     * @vftbl  280
     * @symbol  ?_getPickupItem\@ThrownTrident\@\@MEBA?AVItemStack\@\@XZ
     */
    virtual class ItemStack _getPickupItem() const = 0;
    /**
     * @hash   -1361626045
     * @symbol  ??0AbstractArrow\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI AbstractArrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1948082352
     * @symbol  ?isPlayerOwned\@AbstractArrow\@\@QEBA_NXZ
     */
    MCAPI bool isPlayerOwned() const;
    /**
     * @hash   821649590
     * @symbol  ?setFavoredSlot\@AbstractArrow\@\@QEAAXH\@Z
     */
    MCAPI void setFavoredSlot(int);
    /**
     * @hash   -1076813316
     * @symbol  ?setIsCreative\@AbstractArrow\@\@QEAAX_N\@Z
     */
    MCAPI void setIsCreative(bool);

//protected:
    /**
     * @hash   389198724
     * @symbol  ?_canPickup\@AbstractArrow\@\@IEBA_NAEBVPlayer\@\@\@Z
     */
    MCAPI bool _canPickup(class Player const &) const;

protected:

};