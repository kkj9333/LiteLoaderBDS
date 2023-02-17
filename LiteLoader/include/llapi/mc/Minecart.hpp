/**
 * @file  Minecart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Minecart.
 *
 */
class Minecart : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECART
public:
    class Minecart& operator=(class Minecart const &) = delete;
    Minecart(class Minecart const &) = delete;
    Minecart() = delete;
#endif

public:
    /**
     * @hash   -1062580486
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -422137323
     * @vftbl  11
     * @symbol  ?reloadHardcodedClient\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Minecart();
    /**
     * @hash   -338767935
     * @vftbl  33
     * @symbol  ?getInterpolatedBodyYaw\@Minecart\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -2032505016
     * @vftbl  49
     * @symbol  ?normalTick\@Minecart\@\@UEAAXXZ
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
     * @hash   -817694387
     * @vftbl  80
     * @symbol  ?getShadowHeightOffs\@Minecart\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   -1859197933
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Minecart\@\@UEBAMXZ
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
     * @hash   -236094885
     * @vftbl  96
     * @symbol  ?isPickable\@Minecart\@\@UEAA_NXZ
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
     * @hash   -1419203679
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@Minecart\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   2042791200
     * @vftbl  140
     * @symbol  ?onBounceStarted\@Minecart\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   -1136559740
     * @vftbl  181
     * @symbol  ?getControllingPlayer\@Minecart\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
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
     * @hash   -1135504085
     * @vftbl  245
     * @symbol  ?kill\@Minecart\@\@MEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   -376183224
     * @vftbl  252
     * @symbol  ?interpolatorTick\@Minecart\@\@UEAAXXZ
     */
    virtual void interpolatorTick();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -1984148467
     * @vftbl  263
     * @symbol  ?_hurt\@Minecart\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -2141077155
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Minecart\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1024837712
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Minecart\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -1125974878
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@Minecart\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   198399856
     * @vftbl  278
     * @symbol  ?destroy\@Minecart\@\@UEAAXAEBVActorDamageSource\@\@_N\@Z
     */
    virtual void destroy(class ActorDamageSource const &, bool);
    /**
     * @hash   1753602812
     * @vftbl  279
     * @symbol  ?getType\@MinecartTNT\@\@UEAA?AW4MinecartType\@\@XZ
     */
    virtual enum class MinecartType getType() = 0;
    /**
     * @hash   -1881011033
     * @vftbl  280
     * @symbol  ?getDefaultDisplayBlock\@Minecart\@\@UEBAPEBVBlock\@\@XZ
     */
    virtual class Block const * getDefaultDisplayBlock() const;
    /**
     * @vftbl  281
     * @symbol  __unk_vfn_281
     */
    virtual void __unk_vfn_281();
    /**
     * @hash   -1479460078
     * @vftbl  282
     * @symbol  ?getDefaultDisplayOffset\@Minecart\@\@UEBAHXZ
     */
    virtual int getDefaultDisplayOffset() const;
    /**
     * @hash   472030185
     * @vftbl  283
     * @symbol  ?applyNaturalSlowdown\@Minecart\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource &);
    /**
     * @hash   904420852
     * @vftbl  284
     * @symbol  ?_lazyInitDisplayBlock\@Minecart\@\@EEAAXXZ
     */
    virtual void _lazyInitDisplayBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECART
    /**
     * @hash   -1232063524
     * @symbol  ?canMakeStepSound\@Minecart\@\@EEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   -1590001175
     * @symbol  ?getDefaultDisplayData\@Minecart\@\@UEBAHXZ
     */
    MCVAPI int getDefaultDisplayData() const;
#endif
    /**
     * @hash   -774628001
     * @symbol  ??0Minecart\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Minecart(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -2100619401
     * @symbol  ?dropMinecartWithContentsAndRemove\@Minecart\@\@QEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@_N\@Z
     */
    MCAPI void dropMinecartWithContentsAndRemove(class gsl::basic_string_span<char const, -1>, bool);
    /**
     * @hash   -1562666070
     * @symbol  ?postNormalTick\@Minecart\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void postNormalTick(class BlockPos const &);
    /**
     * @hash   1077877682
     * @symbol  ?preNormalTick\@Minecart\@\@QEAA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos preNormalTick();
    /**
     * @hash   274250934
     * @symbol  ?setCustomDisplay\@Minecart\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomDisplay(bool);
    /**
     * @hash   -2554456
     * @symbol  ?setDisplayBlock\@Minecart\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setDisplayBlock(class Block const &);

//private:
    /**
     * @hash   253683145
     * @symbol  ?_registerLoopingSounds\@Minecart\@\@AEAAXXZ
     */
    MCAPI void _registerLoopingSounds();

private:

};