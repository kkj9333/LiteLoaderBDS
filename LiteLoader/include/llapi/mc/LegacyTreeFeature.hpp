/**
 * @file  LegacyTreeFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyTreeFeature.
 *
 */
class LegacyTreeFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTREEFEATURE
public:
    class LegacyTreeFeature& operator=(class LegacyTreeFeature const &) = delete;
    LegacyTreeFeature(class LegacyTreeFeature const &) = delete;
    LegacyTreeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LegacyTreeFeature();
    /**
     * @hash   6823054
     * @vftbl  1
     * @symbol  ?place\@LegacyTreeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @hash   1075696394
     * @symbol  ??0LegacyTreeFeature\@\@QEAA\@W4Type\@0\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyTreeFeature(enum class LegacyTreeFeature::Type, class FeatureRegistry &);

};