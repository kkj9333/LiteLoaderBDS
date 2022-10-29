/**
 * @file  OutOfControlDefinition.hpp
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
 * @brief MC class OutOfControlDefinition.
 *
 */
class OutOfControlDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OUTOFCONTROLDEFINITION
public:
    class OutOfControlDefinition& operator=(class OutOfControlDefinition const &) = delete;
    OutOfControlDefinition(class OutOfControlDefinition const &) = delete;
    OutOfControlDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@OutOfControlDefinition@@QEBAXAEAVEntityContext@@AEAVOutOfControlComponent@@@Z
     * @hash   -1101289175
     */
    MCAPI void initialize(class EntityContext &, class OutOfControlComponent &) const;
    /**
     * @symbol ?uninitialize@OutOfControlDefinition@@QEBAXAEAVEntityContext@@AEAVOutOfControlComponent@@@Z
     * @hash   -550757063
     */
    MCAPI void uninitialize(class EntityContext &, class OutOfControlComponent &) const;
    /**
     * @symbol ?buildSchema@OutOfControlDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VOutOfControlDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1523627942
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OutOfControlDefinition>> &);

};