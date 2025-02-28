/**
 * @file  ActorPassengerCountTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorPassengerCountTest.
 *
 */
class ActorPassengerCountTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPASSENGERCOUNTTEST
public:
    class ActorPassengerCountTest& operator=(class ActorPassengerCountTest const &) = delete;
    ActorPassengerCountTest(class ActorPassengerCountTest const &) = delete;
    ActorPassengerCountTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorPassengerCountTest();
    /**
     * @hash   1933654862
     * @vftbl  2
     * @symbol  ?evaluate\@ActorPassengerCountTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   394758996
     * @vftbl  4
     * @symbol  ?getName\@ActorPassengerCountTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};