/**
 * @file  ManagedWanderingTraderDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ManagedWanderingTraderDescription.
 *
 */
class ManagedWanderingTraderDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANAGEDWANDERINGTRADERDESCRIPTION
public:
    class ManagedWanderingTraderDescription& operator=(class ManagedWanderingTraderDescription const &) = delete;
    ManagedWanderingTraderDescription(class ManagedWanderingTraderDescription const &) = delete;
    ManagedWanderingTraderDescription() = delete;
#endif

public:
    /**
     * @hash   952686588
     * @vftbl  0
     * @symbol  ?getJsonName\@ManagedWanderingTraderDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~ManagedWanderingTraderDescription();
    /**
     * @hash   665327713
     * @vftbl  3
     * @symbol  ?serializeData\@ManagedWanderingTraderDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};