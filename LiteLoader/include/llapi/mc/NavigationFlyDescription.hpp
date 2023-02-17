/**
 * @file  NavigationFlyDescription.hpp
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
 * @brief MC class NavigationFlyDescription.
 *
 */
class NavigationFlyDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONFLYDESCRIPTION
public:
    class NavigationFlyDescription& operator=(class NavigationFlyDescription const &) = delete;
    NavigationFlyDescription(class NavigationFlyDescription const &) = delete;
    NavigationFlyDescription() = delete;
#endif

public:
    /**
     * @hash   -760754137
     * @vftbl  0
     * @symbol  ?getJsonName\@NavigationFlyDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~NavigationFlyDescription();

};