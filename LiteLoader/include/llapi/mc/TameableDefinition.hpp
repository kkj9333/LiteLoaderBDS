/**
 * @file  TameableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TameableDefinition.
 *
 */
class TameableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAMEABLEDEFINITION
public:
    class TameableDefinition& operator=(class TameableDefinition const &) = delete;
    TameableDefinition(class TameableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   1329014990
     * @symbol  ??0TameableDefinition\@\@QEAA\@XZ
     */
    MCAPI TameableDefinition();
    /**
     * @hash   -1878399682
     * @symbol  ?addTamingItemByName\@TameableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addTamingItemByName(std::string const &);
    /**
     * @hash   -437539017
     * @symbol  ?initialize\@TameableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVTameableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class TameableComponent &) const;
    /**
     * @hash   -1428864250
     * @symbol  ?buildSchema\@TameableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTameableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TameableDefinition>> &);

};