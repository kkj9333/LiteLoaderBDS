/**
 * @file  LookAtActorDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtActorDefinition.
 *
 */
class LookAtActorDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATACTORDEFINITION
public:
    class LookAtActorDefinition& operator=(class LookAtActorDefinition const &) = delete;
    LookAtActorDefinition(class LookAtActorDefinition const &) = delete;
    LookAtActorDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1170367644
     */
    virtual ~LookAtActorDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@LookAtActorDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   1277179934
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};