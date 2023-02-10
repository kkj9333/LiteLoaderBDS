/**
 * @file  LavaSlime.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Slime.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LavaSlime.
 *
 */
class LavaSlime : public Slime {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVASLIME
public:
    class LavaSlime& operator=(class LavaSlime const &) = delete;
    LavaSlime(class LavaSlime const &) = delete;
    LavaSlime() = delete;
#endif

public:
    /**
     * @hash   1681053445
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@LavaSlime\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~LavaSlime();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
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
     * @hash   -1819849382
     * @vftbl  74
     * @symbol  ?isInLava\@LavaSlime\@\@UEBA_NAEBVIConstBlockSource\@\@\@Z
     */
    virtual bool isInLava(class IConstBlockSource const &) const;
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
     * @vftbl  88
     * @symbol  ?getBrightness\@LavaSlime\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const &) const;
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
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
     * @hash   443576168
     * @vftbl  105
     * @symbol  ?isOnFire\@LavaSlime\@\@MEBA_NXZ
     */
    virtual bool isOnFire() const;
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
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   343756007
     * @vftbl  296
     * @symbol  ?checkSpawnRules\@LavaSlime\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   2068669307
     * @vftbl  313
     * @symbol  ?getArmorValue\@LavaSlime\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   1129690871
     * @vftbl  347
     * @symbol  ?jumpFromGround\@LavaSlime\@\@MEAAXXZ
     */
    virtual void jumpFromGround();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   -2034098224
     * @vftbl  356
     * @symbol  ?isDarkEnoughToSpawn\@LavaSlime\@\@UEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
    /**
     * @hash   -851426657
     * @vftbl  360
     * @symbol  ?doPlayLandSound\@LavaSlime\@\@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @hash   476227549
     * @vftbl  363
     * @symbol  ?decreaseSquish\@LavaSlime\@\@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @hash   1142637727
     * @vftbl  364
     * @symbol  ?createChild\@LavaSlime\@\@MEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@H\@Z
     */
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
    /**
     * @hash   -946789804
     * @symbol  ??0LavaSlime\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI LavaSlime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};