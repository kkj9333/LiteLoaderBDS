/**
 * @file  ConditionalBandwidthOptimizationComponent.hpp
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
 * @brief MC class ConditionalBandwidthOptimizationComponent.
 *
 */
class ConditionalBandwidthOptimizationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALBANDWIDTHOPTIMIZATIONCOMPONENT
public:
    class ConditionalBandwidthOptimizationComponent& operator=(class ConditionalBandwidthOptimizationComponent const &) = delete;
    ConditionalBandwidthOptimizationComponent(class ConditionalBandwidthOptimizationComponent const &) = delete;
    ConditionalBandwidthOptimizationComponent() = delete;
#endif

public:
    /**
     * @symbol ??0ConditionalBandwidthOptimizationComponent@@QEAA@$$QEAV0@@Z
     * @hash   -2020731997
     */
    MCAPI ConditionalBandwidthOptimizationComponent(class ConditionalBandwidthOptimizationComponent &&);
    /**
     * @symbol ?getCurrentOptimizationValues@ConditionalBandwidthOptimizationComponent@@QEAA?AUConditionalBandwidthOptimization@@AEAVActor@@@Z
     * @hash   -307334195
     */
    MCAPI struct ConditionalBandwidthOptimization getCurrentOptimizationValues(class Actor &);
    /**
     * @symbol ?initFromDefinition@ConditionalBandwidthOptimizationComponent@@QEAAXAEAVActor@@AEBVConditionalBandwidthOptimizationDefinition@@@Z
     * @hash   462534787
     */
    MCAPI void initFromDefinition(class Actor &, class ConditionalBandwidthOptimizationDefinition const &);
    /**
     * @symbol ??4ConditionalBandwidthOptimizationComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   538454446
     */
    MCAPI class ConditionalBandwidthOptimizationComponent & operator=(class ConditionalBandwidthOptimizationComponent &&);
    /**
     * @symbol ??1ConditionalBandwidthOptimizationComponent@@QEAA@XZ
     * @hash   257962065
     */
    MCAPI ~ConditionalBandwidthOptimizationComponent();

};