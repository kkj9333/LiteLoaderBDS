/**
 * @file  BiomeSource3d.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeSource3d.
 *
 */
class BiomeSource3d {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMESOURCE3D
public:
    class BiomeSource3d& operator=(class BiomeSource3d const &) = delete;
    BiomeSource3d(class BiomeSource3d const &) = delete;
    BiomeSource3d() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BiomeSource3d();
    /**
     * @hash   -555343552
     * @vftbl  1
     * @symbol  ?fillBiomes\@BiomeSource3d\@\@UEBAXAEAVLevelChunk\@\@AEBVChunkLocalNoiseCache\@\@\@Z
     */
    virtual void fillBiomes(class LevelChunk &, class ChunkLocalNoiseCache const &) const;
    /**
     * @hash   1380825021
     * @vftbl  2
     * @symbol  ?getBiomeArea\@BiomeSource3d\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @hash   1451499097
     * @vftbl  3
     * @symbol  ?getBiomeArea\@BiomeSource3d\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@IAEBUGetBiomeOptions\@\@\@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int, struct GetBiomeOptions const &) const;
    /**
     * @hash   -1836891469
     * @vftbl  4
     * @symbol  ?containsOnly\@BiomeSource3d\@\@UEBA_NHHHHV?$span\@$$CB_K$0?0\@gsl\@\@\@Z
     */
    virtual bool containsOnly(int, int, int, int, class gsl::span<unsigned __int64 const, -1>) const;
    /**
     * @hash   -826161415
     * @vftbl  5
     * @symbol  ?getBiome\@BiomeSource3d\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @hash   1292685783
     * @vftbl  6
     * @symbol  ?getBiome\@BiomeSource3d\@\@UEBAPEBVBiome\@\@AEBUGetBiomeOptions\@\@\@Z
     */
    virtual class Biome const * getBiome(struct GetBiomeOptions const &) const;
    /**
     * @hash   566448894
     * @vftbl  7
     * @symbol  ?getBiome\@BiomeSource3d\@\@UEBAPEBVBiome\@\@HHH\@Z
     */
    virtual class Biome const * getBiome(int, int, int) const;

};