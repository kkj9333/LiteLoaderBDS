/**
 * @file  InsideBlockNotifierComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideBlockNotifierComponent.
 *
 */
class InsideBlockNotifierComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERCOMPONENT
public:
    class InsideBlockNotifierComponent& operator=(class InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent(class InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent() = delete;
#endif

public:
    /**
     * @symbol ?getBlockList@InsideBlockNotifierComponent@@QEBAAEBV?$vector@VInsideBlockEventMap@@V?$allocator@VInsideBlockEventMap@@@std@@@std@@XZ
     * @hash   412982834
     */
    MCAPI std::vector<class InsideBlockEventMap> const & getBlockList() const;
    /**
     * @symbol ?isTrackedBlock@InsideBlockNotifierComponent@@QEBA_NAEBVBlock@@@Z
     * @hash   -663826211
     */
    MCAPI bool isTrackedBlock(class Block const &) const;
    /**
     * @symbol ?resetBlocksInsideState@InsideBlockNotifierComponent@@QEAAXXZ
     * @hash   -622199979
     */
    MCAPI void resetBlocksInsideState();
    /**
     * @symbol ?setInsideBlock@InsideBlockNotifierComponent@@QEAAXAEBVBlock@@_N@Z
     * @hash   -515213335
     */
    MCAPI void setInsideBlock(class Block const &, bool);

};