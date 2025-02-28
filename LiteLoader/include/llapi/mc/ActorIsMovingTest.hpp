/**
 * @file  ActorIsMovingTest.hpp
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
 * @brief MC class ActorIsMovingTest.
 *
 */
class ActorIsMovingTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISMOVINGTEST
public:
    class ActorIsMovingTest& operator=(class ActorIsMovingTest const &) = delete;
    ActorIsMovingTest(class ActorIsMovingTest const &) = delete;
    ActorIsMovingTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsMovingTest();
    /**
     * @hash   1226170273
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsMovingTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   1586855361
     * @vftbl  4
     * @symbol  ?getName\@ActorIsMovingTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};