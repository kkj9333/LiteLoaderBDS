/**
 * @file  FallingBlock.hpp
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
 * @brief MC class FallingBlock.
 *
 */
class FallingBlock : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCK
public:
    class FallingBlock& operator=(class FallingBlock const &) = delete;
    FallingBlock(class FallingBlock const &) = delete;
    FallingBlock() = delete;
#endif

public:
    /**
     * @hash   -1674326201
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@FallingBlock\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~FallingBlock();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   1109918035
     * @vftbl  44
     * @symbol  ?teleportTo\@FallingBlock\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   436745813
     * @vftbl  49
     * @symbol  ?normalTick\@FallingBlock\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @hash   -71172486
     * @vftbl  80
     * @symbol  ?getShadowHeightOffs\@FallingBlock\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   508066112
     * @vftbl  81
     * @symbol  ?getShadowRadius\@FallingBlock\@\@UEBAMXZ
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
     * @hash   -1066282936
     * @vftbl  96
     * @symbol  ?isPickable\@FallingBlock\@\@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @hash   -153258603
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@FallingBlock\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   2010072616
     * @vftbl  183
     * @symbol  ?causeFallDamage\@FallingBlock\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   1823854894
     * @vftbl  188
     * @symbol  ?onSynchedDataUpdate\@FallingBlock\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @hash   -1235600886
     * @vftbl  263
     * @symbol  ?_hurt\@FallingBlock\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   2067180298
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@FallingBlock\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1777039421
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@FallingBlock\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCK
    /**
     * @hash   577145499
     * @symbol  ?getDeletionDelayTimeSeconds\@FallingBlock\@\@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
#endif
    /**
     * @hash   753636146
     * @symbol  ??0FallingBlock\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FallingBlock(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1682614331
     * @symbol  ?breakBlock\@FallingBlock\@\@QEAAXXZ
     */
    MCAPI void breakBlock();
    /**
     * @hash   1894204430
     * @symbol  ?doNormalTick\@FallingBlock\@\@QEAAXAEAVITickDelegate\@\@\@Z
     */
    MCAPI void doNormalTick(class ITickDelegate &);
    /**
     * @hash   534087270
     * @symbol  ?getFallingBlock\@FallingBlock\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const & getFallingBlock() const;
    /**
     * @hash   -944239418
     * @symbol  ?setFallDamageAmount\@FallingBlock\@\@QEAAXM\@Z
     */
    MCAPI void setFallDamageAmount(float);
    /**
     * @hash   900275981
     * @symbol  ?setFallingBlock\@FallingBlock\@\@QEAAXAEBVBlock\@\@_N\@Z
     */
    MCAPI void setFallingBlock(class Block const &, bool);

//private:
    /**
     * @hash   885553982
     * @symbol  ?_waitRemoval\@FallingBlock\@\@AEAAXXZ
     */
    MCAPI void _waitRemoval();

private:

};