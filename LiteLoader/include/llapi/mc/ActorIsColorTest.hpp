/**
 * @file  ActorIsColorTest.hpp
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
 * @brief MC class ActorIsColorTest.
 *
 */
class ActorIsColorTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISCOLORTEST
public:
    class ActorIsColorTest& operator=(class ActorIsColorTest const &) = delete;
    ActorIsColorTest(class ActorIsColorTest const &) = delete;
    ActorIsColorTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsColorTest();
    /**
     * @hash   -1808883224
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsColorTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -873635222
     * @vftbl  4
     * @symbol  ?getName\@ActorIsColorTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};