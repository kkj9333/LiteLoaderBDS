/**
 * @file  ActorIsTargetTest.hpp
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
 * @brief MC class ActorIsTargetTest.
 *
 */
class ActorIsTargetTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISTARGETTEST
public:
    class ActorIsTargetTest& operator=(class ActorIsTargetTest const &) = delete;
    ActorIsTargetTest(class ActorIsTargetTest const &) = delete;
    ActorIsTargetTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsTargetTest();
    /**
     * @hash   -1135321180
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsTargetTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   1772615278
     * @vftbl  4
     * @symbol  ?getName\@ActorIsTargetTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};