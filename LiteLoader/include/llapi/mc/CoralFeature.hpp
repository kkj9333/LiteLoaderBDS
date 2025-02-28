/**
 * @file  CoralFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CoralFeature.
 *
 */
class CoralFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALFEATURE
public:
    class CoralFeature& operator=(class CoralFeature const &) = delete;
    CoralFeature(class CoralFeature const &) = delete;
    CoralFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CoralFeature();
    /**
     * @hash   -1777264145
     * @vftbl  3
     * @symbol  ?place\@CoralFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @hash   -193576789
     * @symbol  ?_buildHand\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void _buildHand(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @hash   -1712024182
     * @symbol  ?_buildPlantArm\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@8\@E_N\@Z
     */
    MCAPI void _buildPlantArm(class BlockSource &, class Random &, class BlockPos const &, class gsl::not_null<class Block const *>, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, unsigned char, bool) const;
    /**
     * @hash   -13924080
     * @symbol  ?_buildPlantLike\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void _buildPlantLike(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @hash   -1682446028
     * @symbol  ?_buildSmallClump\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void _buildSmallClump(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @hash   479715693
     * @symbol  ?_buildSpire\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void _buildSpire(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @hash   1123859346
     * @symbol  ?_canOverwrite\@CoralFeature\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI bool _canOverwrite(class BlockSource const &, class BlockPos const &, int) const;
    /**
     * @hash   941277964
     * @symbol  ?_placeSideDecorations\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@E\@Z
     */
    MCAPI void _placeSideDecorations(class BlockSource &, class BlockPos const &, class Random &, unsigned char) const;
    /**
     * @hash   -1037615069
     * @symbol  ?_randomDirectionExcept\@CoralFeature\@\@AEBAEAEAVRandom\@\@E\@Z
     */
    MCAPI unsigned char _randomDirectionExcept(class Random &, unsigned char) const;
    /**
     * @hash   949073849
     * @symbol  ?_setBlock\@CoralFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@H\@Z
     */
    MCAPI bool _setBlock(class BlockSource &, class BlockPos const &, class gsl::not_null<class Block const *>, int) const;
    /**
     * @hash   -1139672527
     * @symbol  ?_setBlockOnSolid\@CoralFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@H\@Z
     */
    MCAPI bool _setBlockOnSolid(class BlockSource &, class BlockPos const &, class gsl::not_null<class Block const *>, int) const;
    /**
     * @hash   -2018951343
     * @symbol  ?_starCorners\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@MH_N\@Z
     */
    MCAPI void _starCorners(class BlockSource &, class Random &, class BlockPos const &, class gsl::not_null<class Block const *>, float, int, bool) const;
    /**
     * @hash   1064172094
     * @symbol  ?_starFormation\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@MH_N\@Z
     */
    MCAPI void _starFormation(class BlockSource &, class Random &, class BlockPos const &, class gsl::not_null<class Block const *>, float, int, bool) const;

private:

};