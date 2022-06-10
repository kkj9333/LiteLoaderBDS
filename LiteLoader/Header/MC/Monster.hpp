// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Monster : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTER
public:
    class Monster& operator=(class Monster const &) = delete;
    Monster(class Monster const &) = delete;
    Monster() = delete;
#endif


public:
    /*14*/ virtual ~Monster();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor * findAttackTarget();
    /*180*/ virtual void __unk_vfn_180();
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*268*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*269*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*272*/ virtual void __unk_vfn_272();
    /*281*/ virtual void __unk_vfn_281();
    /*297*/ virtual void aiStep();
    /*302*/ virtual bool checkSpawnRules(bool);
    /*310*/ virtual void __unk_vfn_310();
    /*314*/ virtual void __unk_vfn_314();
    /*346*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*348*/ virtual void __unk_vfn_348();
    /*362*/ virtual void __unk_vfn_362();
    /*364*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MONSTER
    MCVAPI bool canExistInPeaceful() const;
#endif
    MCAPI Monster(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);



};