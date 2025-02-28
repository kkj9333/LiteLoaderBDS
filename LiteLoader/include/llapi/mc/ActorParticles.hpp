/**
 * @file  ActorParticles.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorParticles.
 *
 */
namespace ActorParticles {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   599019762
     * @symbol  ?calculateDustParticleNumberFromFall\@ActorParticles\@\@YAIM\@Z
     */
    MCAPI unsigned int calculateDustParticleNumberFromFall(float);
    /**
     * @hash   -1400133420
     * @symbol  ?getDustParticlePosition\@ActorParticles\@\@YA?AVVec3\@\@AEBV2\@AEBVAABB\@\@\@Z
     */
    MCAPI class Vec3 getDustParticlePosition(class Vec3 const &, class AABB const &);
    /**
     * @hash   1342999005
     * @symbol  ?spawnBalloonPopParticles\@ActorParticles\@\@YAXIVAABB\@\@W4PaletteColor\@\@AEAVILevel\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void spawnBalloonPopParticles(unsigned int, class AABB, enum class PaletteColor, class ILevel &, class Random &);
    /**
     * @hash   737803132
     * @symbol  ?spawnDeathParticles\@ActorParticles\@\@YAXVVec3\@\@VVec2\@\@MAEAVILevel\@\@\@Z
     */
    MCAPI void spawnDeathParticles(class Vec3, class Vec2, float, class ILevel &);
    /**
     * @hash   1537793087
     * @symbol  ?spawnDustParticlesFromFalling\@ActorParticles\@\@YAXIVVec3\@\@AEAVILevel\@\@AEBVBlock\@\@VBlockPos\@\@\@Z
     */
    MCAPI void spawnDustParticlesFromFalling(unsigned int, class Vec3, class ILevel &, class Block const &, class BlockPos);
    /**
     * @hash   -1447037082
     * @symbol  ?spawnParticlesInArea\@ActorParticles\@\@YAXAEAVILevel\@\@IW4ParticleType\@\@AEBVVec3\@\@AEBVVec2\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void spawnParticlesInArea(class ILevel &, unsigned int, enum class ParticleType, class Vec3 const &, class Vec2 const &, class Random &);
    /**
     * @hash   1757580675
     * @symbol  ?spawnPukeParticles\@ActorParticles\@\@YAXIIVVec3\@\@0AEAVILevel\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void spawnPukeParticles(unsigned int, unsigned int, class Vec3, class Vec3, class ILevel &, class Random &);
    /**
     * @hash   -1368672889
     * @symbol  ?spawnTreasureHuntingParticles\@ActorParticles\@\@YAXIVVec3\@\@0VVec2\@\@AEAVILevel\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void spawnTreasureHuntingParticles(unsigned int, class Vec3, class Vec3, class Vec2, class ILevel &, class Random &);

};