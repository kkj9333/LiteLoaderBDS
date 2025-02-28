/**
 * @file  ActorIsAvoidingMobsTest.hpp
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
 * @brief MC class ActorIsAvoidingMobsTest.
 *
 */
class ActorIsAvoidingMobsTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISAVOIDINGMOBSTEST
public:
    class ActorIsAvoidingMobsTest& operator=(class ActorIsAvoidingMobsTest const &) = delete;
    ActorIsAvoidingMobsTest(class ActorIsAvoidingMobsTest const &) = delete;
    ActorIsAvoidingMobsTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsAvoidingMobsTest();
    /**
     * @hash   -50449917
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsAvoidingMobsTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   1058413471
     * @vftbl  4
     * @symbol  ?getName\@ActorIsAvoidingMobsTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};