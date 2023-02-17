/**
 * @file  ActorIsSleepingTest.hpp
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
 * @brief MC class ActorIsSleepingTest.
 *
 */
class ActorIsSleepingTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISSLEEPINGTEST
public:
    class ActorIsSleepingTest& operator=(class ActorIsSleepingTest const &) = delete;
    ActorIsSleepingTest(class ActorIsSleepingTest const &) = delete;
    ActorIsSleepingTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsSleepingTest();
    /**
     * @hash   -825279586
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsSleepingTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1602040332
     * @vftbl  4
     * @symbol  ?getName\@ActorIsSleepingTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};