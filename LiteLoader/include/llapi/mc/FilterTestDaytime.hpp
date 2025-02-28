/**
 * @file  FilterTestDaytime.hpp
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
 * @brief MC class FilterTestDaytime.
 *
 */
class FilterTestDaytime : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTDAYTIME
public:
    class FilterTestDaytime& operator=(class FilterTestDaytime const &) = delete;
    FilterTestDaytime(class FilterTestDaytime const &) = delete;
    FilterTestDaytime() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FilterTestDaytime();
    /**
     * @hash   1710433905
     * @vftbl  2
     * @symbol  ?evaluate\@FilterTestDaytime\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   667775665
     * @vftbl  4
     * @symbol  ?getName\@FilterTestDaytime\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};