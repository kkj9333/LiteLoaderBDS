/**
 * @file  FamilyTypeDefinition.hpp
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
 * @brief MC structure FamilyTypeDefinition.
 *
 */
struct FamilyTypeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAMILYTYPEDEFINITION
public:
    struct FamilyTypeDefinition& operator=(struct FamilyTypeDefinition const &) = delete;
    FamilyTypeDefinition(struct FamilyTypeDefinition const &) = delete;
    FamilyTypeDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addFamilyName@FamilyTypeDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   932745502
     */
    MCAPI void addFamilyName(std::string const &);
    /**
     * @symbol ?buildSchema@FamilyTypeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UFamilyTypeDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -94144054
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FamilyTypeDefinition>> &);

};