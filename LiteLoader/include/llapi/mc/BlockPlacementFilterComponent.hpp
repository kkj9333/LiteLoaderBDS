/**
 * @file  BlockPlacementFilterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockPlacementFilterComponent.
 *
 */
struct BlockPlacementFilterComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLACEMENTFILTERCOMPONENT
public:
    struct BlockPlacementFilterComponent& operator=(struct BlockPlacementFilterComponent const &) = delete;
    BlockPlacementFilterComponent(struct BlockPlacementFilterComponent const &) = delete;
    BlockPlacementFilterComponent() = delete;
#endif

public:
    /**
     * @hash   1600070990
     * @symbol  ?mayPlace\@BlockPlacementFilterComponent\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2072677708
     * @symbol  ?mayPlace\@BlockPlacementFilterComponent\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   382762314
     * @symbol  ??4BlockPlacementFilterComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockPlacementFilterComponent & operator=(struct BlockPlacementFilterComponent &&);
    /**
     * @hash   -1143595815
     * @symbol  ??1BlockPlacementFilterComponent\@\@QEAA\@XZ
     */
    MCAPI ~BlockPlacementFilterComponent();

};