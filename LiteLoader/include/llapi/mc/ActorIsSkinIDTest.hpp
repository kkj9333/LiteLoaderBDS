/**
 * @file  ActorIsSkinIDTest.hpp
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
 * @brief MC class ActorIsSkinIDTest.
 *
 */
class ActorIsSkinIDTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISSKINIDTEST
public:
    class ActorIsSkinIDTest& operator=(class ActorIsSkinIDTest const &) = delete;
    ActorIsSkinIDTest(class ActorIsSkinIDTest const &) = delete;
    ActorIsSkinIDTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsSkinIDTest();
    /**
     * @hash   -1673838869
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsSkinIDTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1658277769
     * @vftbl  4
     * @symbol  ?getName\@ActorIsSkinIDTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};