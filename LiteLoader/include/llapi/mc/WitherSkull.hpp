/**
 * @file  WitherSkull.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Fireball.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherSkull.
 *
 */
class WitherSkull : public Fireball {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERSKULL
public:
    class WitherSkull& operator=(class WitherSkull const &) = delete;
    WitherSkull(class WitherSkull const &) = delete;
    WitherSkull() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?initializeComponents@WitherSkull@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1659833238
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -253190280
     */
    virtual ~WitherSkull();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @hash   -182486203
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @hash   -130769027
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @hash   -135209808
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -125227901
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  94
     * @symbol ?isPickable@WitherSkull@@UEAA_NXZ
     * @hash   -993230012
     */
    virtual bool isPickable();
    /**
     * @vftbl  95
     * @hash   -105657136
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @hash   -95675229
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  103
     * @symbol ?isOnFire@WitherSkull@@UEBA_NXZ
     * @hash   790582605
     */
    virtual bool isOnFire() const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @hash   1337741896
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @hash   1331454073
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1359906400
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  181
     * @hash   1511261978
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @hash   1593557213
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  220
     * @hash   -2032751088
     */
    virtual void __unk_vfn_220();
    /**
     * @vftbl  221
     * @hash   -2018004543
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  238
     * @symbol ?canDestroyBlock@WitherSkull@@UEBA_NAEBVBlock@@@Z
     * @hash   1334570665
     */
    virtual bool canDestroyBlock(class Block const &) const;
    /**
     * @vftbl  247
     * @hash   -2005177115
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl  250
     * @hash   -739509363
     */
    virtual void __unk_vfn_250();
    /**
     * @vftbl  268
     * @hash   -1897023292
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl  269
     * @symbol ?_hurt@WitherSkull@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   -2016945978
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  276
     * @hash   -1870241183
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl  283
     * @hash   -1894354595
     */
    virtual void __unk_vfn_283();
    /**
     * @vftbl  284
     * @symbol ?getInertia@WitherSkull@@MEAAMXZ
     * @hash   -641707758
     */
    virtual float getInertia();
    /**
     * @vftbl  285
     * @hash   -1892507553
     */
    virtual void __unk_vfn_285();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WITHERSKULL
    /**
     * @symbol ?shouldBurn@WitherSkull@@UEAA_NXZ
     * @hash   1152688017
     */
    MCVAPI bool shouldBurn();
#endif
    /**
     * @symbol ??0WitherSkull@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -2136484474
     */
    MCAPI WitherSkull(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};