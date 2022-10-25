/**
 * @file  DefaultLookAngleDefinition.hpp
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
 * @brief MC structure DefaultLookAngleDefinition.
 *
 */
struct DefaultLookAngleDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTLOOKANGLEDEFINITION
public:
    struct DefaultLookAngleDefinition& operator=(struct DefaultLookAngleDefinition const &) = delete;
    DefaultLookAngleDefinition(struct DefaultLookAngleDefinition const &) = delete;
    DefaultLookAngleDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@DefaultLookAngleDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UDefaultLookAngleDefinition@@@JsonUtil@@@std@@@Z
     * @hash   6245994
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct DefaultLookAngleDefinition>> &);

};