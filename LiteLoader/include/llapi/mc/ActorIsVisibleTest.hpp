/**
 * @file  ActorIsVisibleTest.hpp
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
 * @brief MC class ActorIsVisibleTest.
 *
 */
class ActorIsVisibleTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISVISIBLETEST
public:
    class ActorIsVisibleTest& operator=(class ActorIsVisibleTest const &) = delete;
    ActorIsVisibleTest(class ActorIsVisibleTest const &) = delete;
    ActorIsVisibleTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsVisibleTest();
    /**
     * @hash   -1127392345
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsVisibleTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   468220171
     * @vftbl  4
     * @symbol  ?getName\@ActorIsVisibleTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};