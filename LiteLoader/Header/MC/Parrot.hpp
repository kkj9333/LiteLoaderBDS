// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Parrot : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROT
public:
    class Parrot& operator=(class Parrot const&) = delete;
    Parrot(class Parrot const&) = delete;
    Parrot() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcodedClient(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~Parrot();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /*5*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual float getRidingHeight();
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual float getCameraOffset() const;
    /*11*/ virtual float getShadowRadius() const;
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual void __unk_vfn_5();
    /*14*/ virtual void playerTouch(class Player&);
    /*15*/ virtual void __unk_vfn_6();
    /*16*/ virtual void __unk_vfn_7();
    /*17*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual void __unk_vfn_11();
    /*22*/ virtual class Actor* findAttackTarget();
    /*23*/ virtual bool isValidTarget(class Actor*) const;
    /*24*/ virtual void adjustDamageAmount(int&) const;
    /*25*/ virtual void setSitting(bool);
    /*26*/ virtual void onTame();
    /*27*/ virtual void onFailedTame();
    /*28*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*29*/ virtual void playAmbientSound();
    /*30*/ virtual int /*enum enum LevelSoundEvent*/ getAmbientSound() const;
    /*31*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*32*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*33*/ virtual float getPickRadius();
    /*34*/ virtual void awardKillScore(class Actor&, int);
    /*35*/ virtual class HashedString const& queryEntityRenderer() const;
    /*36*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*37*/ virtual int getPortalWaitTime() const;
    /*38*/ virtual bool canChangeDimensions() const;
    /*39*/ virtual void __unk_vfn_12();
    /*40*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*41*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*42*/ virtual bool canBePulledIntoVehicle() const;
    /*43*/ virtual void __unk_vfn_13();
    /*44*/ virtual bool canSynchronizeNewEntity() const;
    /*45*/ virtual void __unk_vfn_14();
    /*46*/ virtual void __unk_vfn_15();
    /*47*/ virtual bool isWorldBuilder() const;
    /*48*/ virtual void __unk_vfn_16();
    /*49*/ virtual bool isAdventure() const;
    /*50*/ virtual bool canDestroyBlock(class Block const&) const;
    /*51*/ virtual void setAuxValue(int);
    /*52*/ virtual void stopSpinAttack();
    /*53*/ virtual void __unk_vfn_17();
    /*54*/ virtual void __unk_vfn_18();
    /*55*/ virtual void __unk_vfn_19();
    /*56*/ virtual void _playStepSound(class BlockPos const&, class Block const&);
    /*57*/ virtual void __unk_vfn_20();
    /*58*/ virtual void __unk_vfn_21();
    /*59*/ virtual void spawnAnim();
    /*60*/ virtual void aiStep();
    /*61*/ virtual int getItemUseDuration() const;
    /*62*/ virtual float getItemUseStartupProgress() const;
    /*63*/ virtual float getItemUseIntervalProgress() const;
    /*64*/ virtual void __unk_vfn_22();
    /*65*/ virtual bool isAlliedTo(class Mob*);
    /*66*/ virtual void __unk_vfn_23();
    /*67*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*68*/ virtual void onBorn(class Actor&, class Actor&);
    /*69*/ virtual int getAttackTime();
    /*70*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*71*/ virtual void __unk_vfn_24();
    /*72*/ virtual void _serverAiMobStep();
    /*73*/ virtual void __unk_vfn_25();
    /*
    inline bool useNewAi() const{
        bool (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Parrot@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool _makeFlySound() const{
        bool (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?_makeFlySound@Parrot@@MEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Parrot(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI float getFlap() const;
    MCAPI float getFlapSpeed() const;

protected:

private:

};