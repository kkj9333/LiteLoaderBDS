// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RopeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPESYSTEM
public:
    class RopeSystem& operator=(class RopeSystem const &) = delete;
    RopeSystem(class RopeSystem const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ROPESYSTEM
#endif
    MCAPI RopeSystem();
    MCAPI void _initializePins(class Vec3 const &, class Vec3 const &);
    MCAPI void cutAtPercent(float);
    MCAPI void initialize(struct RopeParams const &);
    MCAPI bool isCut() const;
    MCAPI bool isDestroyed() const;
    MCAPI void queueTick(class BlockSource &, class std::shared_ptr<class RopeSystem> &);
    MCAPI ~RopeSystem();
    MCAPI static float const sBucketLength;
    MCAPI static bool sEnabled;
    MCAPI static float const sEpsilon;

//private:
    MCAPI bool _cacheColliders(class BlockSource &);
    MCAPI void _finalizeBucket(struct AABBBucket &);
    MCAPI void _initializePins();
    MCAPI void _integrate();
    MCAPI void _prepareAABBBuckets();
    MCAPI float _propagateDistanceConstraint(class Vec3 const &, class Vec3 &, float);
    MCAPI void _pruneDenyList();
    MCAPI void _resizeRope();
    MCAPI float _solveCollisions(bool);
    MCAPI float _solveDistanceConstraint(class Vec3 &, class Vec3 &, float);
    MCAPI float _solveDistanceConstraintBlock(class Vec3 &, class Vec3 &, class Vec3 &, class Vec3 &, float);
    MCAPI float _solveDistanceConstraints3();
    MCAPI void _tick();
    MCAPI void _tickWaves();


private:


};