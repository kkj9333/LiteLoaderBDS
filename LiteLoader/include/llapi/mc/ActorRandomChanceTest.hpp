/**
 * @file  ActorRandomChanceTest.hpp
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
 * @brief MC class ActorRandomChanceTest.
 *
 */
class ActorRandomChanceTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORRANDOMCHANCETEST
public:
    class ActorRandomChanceTest& operator=(class ActorRandomChanceTest const &) = delete;
    ActorRandomChanceTest(class ActorRandomChanceTest const &) = delete;
    ActorRandomChanceTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorRandomChanceTest();
    /**
     * @hash   1178935104
     * @vftbl  2
     * @symbol  ?evaluate\@ActorRandomChanceTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -77117534
     * @vftbl  4
     * @symbol  ?getName\@ActorRandomChanceTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};