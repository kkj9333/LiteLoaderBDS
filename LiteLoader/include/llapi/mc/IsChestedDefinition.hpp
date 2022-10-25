/**
 * @file  IsChestedDefinition.hpp
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
 * @brief MC structure IsChestedDefinition.
 *
 */
struct IsChestedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISCHESTEDDEFINITION
public:
    struct IsChestedDefinition& operator=(struct IsChestedDefinition const &) = delete;
    IsChestedDefinition(struct IsChestedDefinition const &) = delete;
    IsChestedDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@IsChestedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   95073870
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@IsChestedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   -1646085636
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@IsChestedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsChestedDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1461012752
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsChestedDefinition>> &);

};