/**
 * @file  RailMovementDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RailMovementDefinition.
 *
 */
class RailMovementDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTDEFINITION
public:
    class RailMovementDefinition& operator=(class RailMovementDefinition const &) = delete;
    RailMovementDefinition(class RailMovementDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0RailMovementDefinition@@QEAA@XZ
     * @hash   -68747680
     */
    MCAPI RailMovementDefinition();
    /**
     * @symbol ?initialize@RailMovementDefinition@@QEAAXAEAVEntityContext@@AEAVRailMovementComponent@@@Z
     * @hash   808464621
     */
    MCAPI void initialize(class EntityContext &, class RailMovementComponent &);
    /**
     * @symbol ?buildSchema@RailMovementDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VRailMovementDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1417942310
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailMovementDefinition>> &);

};