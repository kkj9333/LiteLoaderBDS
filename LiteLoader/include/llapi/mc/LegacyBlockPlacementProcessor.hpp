/**
 * @file  LegacyBlockPlacementProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyBlockPlacementProcessor.
 *
 */
class LegacyBlockPlacementProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLOCKPLACEMENTPROCESSOR
public:
    class LegacyBlockPlacementProcessor& operator=(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor() = delete;
#endif

public:
    /**
     * @hash   -1984961730
     * @symbol  ??0LegacyBlockPlacementProcessor\@\@QEAA\@AEBVLegacyStructureSettings\@\@\@Z
     */
    MCAPI LegacyBlockPlacementProcessor(class LegacyStructureSettings const &);
    /**
     * @hash   -1526861508
     * @symbol  ?applyBlockRules\@LegacyBlockPlacementProcessor\@\@QEAAPEBVBlock\@\@AEAVBlockSource\@\@AEAVBlockPos\@\@PEBV2\@AEBV4\@\@Z
     */
    MCAPI class Block const * applyBlockRules(class BlockSource &, class BlockPos &, class Block const *, class BlockPos const &);
    /**
     * @hash   368905992
     * @symbol  ?applyGravity\@LegacyBlockPlacementProcessor\@\@QEBAAEAVBlockPos\@\@AEAVBlockSource\@\@HAEAV2\@\@Z
     */
    MCAPI class BlockPos & applyGravity(class BlockSource &, int, class BlockPos &) const;
    /**
     * @hash   -1770253970
     * @symbol  ?canPlace\@LegacyBlockPlacementProcessor\@\@QEAA_NXZ
     */
    MCAPI bool canPlace();
    /**
     * @hash   283618941
     * @symbol  ??1LegacyBlockPlacementProcessor\@\@QEAA\@XZ
     */
    MCAPI ~LegacyBlockPlacementProcessor();

};