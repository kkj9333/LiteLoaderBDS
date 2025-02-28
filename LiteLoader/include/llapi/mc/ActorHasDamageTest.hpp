/**
 * @file  ActorHasDamageTest.hpp
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
 * @brief MC class ActorHasDamageTest.
 *
 */
class ActorHasDamageTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASDAMAGETEST
public:
    class ActorHasDamageTest& operator=(class ActorHasDamageTest const &) = delete;
    ActorHasDamageTest(class ActorHasDamageTest const &) = delete;
    ActorHasDamageTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorHasDamageTest();
    /**
     * @hash   -1534742024
     * @vftbl  2
     * @symbol  ?evaluate\@ActorHasDamageTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   1456441258
     * @vftbl  4
     * @symbol  ?getName\@ActorHasDamageTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};