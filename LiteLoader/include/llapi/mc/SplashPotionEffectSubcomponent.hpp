/**
 * @file  SplashPotionEffectSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SplashPotionEffectSubcomponent.
 *
 */
class SplashPotionEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONEFFECTSUBCOMPONENT
public:
    class SplashPotionEffectSubcomponent& operator=(class SplashPotionEffectSubcomponent const &) = delete;
    SplashPotionEffectSubcomponent(class SplashPotionEffectSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SplashPotionEffectSubcomponent();
    /**
     * @hash   1377071600
     * @vftbl  1
     * @symbol  ?readfromJSON\@SplashPotionEffectSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1202411817
     * @vftbl  2
     * @symbol  ?writetoJSON\@SplashPotionEffectSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   407182378
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@SplashPotionEffectSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   1672136613
     * @vftbl  4
     * @symbol  ?getName\@SplashPotionEffectSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   1572462580
     * @symbol  ??0SplashPotionEffectSubcomponent\@\@QEAA\@XZ
     */
    MCAPI SplashPotionEffectSubcomponent();
    /**
     * @hash   69400544
     * @symbol  ?applyMobEffects\@SplashPotionEffectSubcomponent\@\@QEAAXAEBVMobEffectInstance\@\@AEBV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@AEAVActor\@\@AEBV?$shared_ptr\@$$CBVPotion\@\@\@4\@MPEAVMobEffect\@\@AEAVHitResult\@\@H\@Z
     */
    MCAPI void applyMobEffects(class MobEffectInstance const &, std::vector<class Actor *> const &, class Actor &, class std::shared_ptr<class Potion const> const &, float, class MobEffect *, class HitResult &, int);

};