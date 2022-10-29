/**
 * @file  ActorIsVariantTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorIsVariantTest.
 *
 */
class ActorIsVariantTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISVARIANTTEST
public:
    class ActorIsVariantTest& operator=(class ActorIsVariantTest const &) = delete;
    ActorIsVariantTest(class ActorIsVariantTest const &) = delete;
    ActorIsVariantTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1719342334
     */
    virtual ~ActorIsVariantTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorIsVariantTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -814722886
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorIsVariantTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -344967112
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};