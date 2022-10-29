/**
 * @file  CanPowerJumpDefinition.hpp
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
 * @brief MC structure CanPowerJumpDefinition.
 *
 */
struct CanPowerJumpDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANPOWERJUMPDEFINITION
public:
    struct CanPowerJumpDefinition& operator=(struct CanPowerJumpDefinition const &) = delete;
    CanPowerJumpDefinition(struct CanPowerJumpDefinition const &) = delete;
    CanPowerJumpDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@CanPowerJumpDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   -550589748
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@CanPowerJumpDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   1164168764
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@CanPowerJumpDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCanPowerJumpDefinition@@@JsonUtil@@@std@@@Z
     * @hash   425608522
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanPowerJumpDefinition>> &);

};