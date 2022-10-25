/**
 * @file  Silverfish.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Silverfish.
 *
 */
class Silverfish : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISH
public:
    class Silverfish& operator=(class Silverfish const &) = delete;
    Silverfish(class Silverfish const &) = delete;
    Silverfish() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   182980143
     */
    virtual ~Silverfish();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  48
     * @symbol ?normalTick@Silverfish@@UEAAXXZ
     * @hash   1958519702
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @hash   -188950850
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
     * @vftbl  141
     * @symbol ?handleEntityEvent@Silverfish@@UEAAXW4ActorEvent@@H@Z
     * @hash   -1675561359
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
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
     * @vftbl  274
     * @symbol ?_playStepSound@Silverfish@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1757136941
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
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
     * @vftbl  285
     * @symbol ?spawnAnim@Silverfish@@UEAAXXZ
     * @hash   2103901678
     */
    virtual void spawnAnim();
    /**
     * @vftbl  297
     * @symbol ?aiStep@Silverfish@@UEAAXXZ
     * @hash   1765263526
     */
    virtual void aiStep();
    /**
     * @vftbl  302
     * @symbol ?checkSpawnRules@Silverfish@@UEAA_N_N@Z
     * @hash   591265492
     */
    virtual bool checkSpawnRules(bool);
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
     * @vftbl  346
     * @symbol ?_getWalkTargetValue@Silverfish@@UEAAMAEBVBlockPos@@@Z
     * @hash   -1580406160
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
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
     * @vftbl  364
     * @symbol ?isDarkEnoughToSpawn@Silverfish@@UEBA_NXZ
     * @hash   72054195
     */
    virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SILVERFISH
    /**
     * @symbol ?useNewAi@Silverfish@@MEBA_NXZ
     * @hash   -1071850339
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Silverfish@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1716832751
     */
    MCAPI Silverfish(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};