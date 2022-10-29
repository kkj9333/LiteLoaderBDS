/**
 * @file  NavigationWalkDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NavigationWalkDescription.
 *
 */
class NavigationWalkDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONWALKDESCRIPTION
public:
    class NavigationWalkDescription& operator=(class NavigationWalkDescription const &) = delete;
    NavigationWalkDescription(class NavigationWalkDescription const &) = delete;
    NavigationWalkDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@NavigationWalkDescription@@UEBAPEBDXZ
     * @hash   -1765372107
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   378731533
     */
    virtual ~NavigationWalkDescription();

};