/**
 * @file  Bee.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Bee.
 *
 */
class Bee : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEE
public:
    class Bee& operator=(class Bee const &) = delete;
    Bee(class Bee const &) = delete;
    Bee() = delete;
#endif

public:
    /**
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Bee@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1088255898
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   275746512
     */
    virtual ~Bee();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  48
     * @symbol ?normalTick@Bee@@UEAAXXZ
     * @hash   -1096666327
     */
    virtual void normalTick();
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
     * @vftbl  95
     * @hash   -105657136
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @hash   -102886573
     */
    virtual void __unk_vfn_98();
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
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Bee@@UEAAXH@Z
     * @hash   761116666
     */
    virtual void onSynchedDataUpdate(int);
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
     * @hash   -1904234636
     */
    virtual void __unk_vfn_268();
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
     * @vftbl  310
     * @hash   -1210025534
     */
    virtual void __unk_vfn_310();
    /**
     * @vftbl  314
     * @hash   -1156359450
     */
    virtual void __unk_vfn_314();
    /**
     * @vftbl  348
     * @hash   -1073989257
     */
    virtual void __unk_vfn_348();
    /**
     * @vftbl  362
     * @hash   -1022272081
     */
    virtual void __unk_vfn_362();
    /**
     * @symbol ??0Bee@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1884577746
     */
    MCAPI Bee(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick@Bee@@QEAAXXZ
     * @hash   2138129947
     */
    MCAPI void postNormalTick();

//protected:
    /**
     * @symbol ?_registerLoopingSounds@Bee@@IEAAXXZ
     * @hash   -227464015
     */
    MCAPI void _registerLoopingSounds();

protected:

};