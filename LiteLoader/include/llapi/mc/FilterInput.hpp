/**
 * @file  FilterInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterInput.
 *
 */
class FilterInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERINPUT
public:
    FilterInput(class FilterInput const &) = delete;
    FilterInput() = delete;
#endif

public:
    /**
     * @hash   -1954749843
     * @symbol  ??0FilterInput\@\@QEAA\@H\@Z
     */
    MCAPI FilterInput(int);
    /**
     * @hash   1800977244
     * @symbol  ??4FilterInput\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FilterInput & operator=(class FilterInput const &);
    /**
     * @hash   1308243144
     * @symbol  ??4FilterInput\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FilterInput & operator=(class FilterInput &&);
    /**
     * @hash   -17733010
     * @symbol  ??1FilterInput\@\@QEAA\@XZ
     */
    MCAPI ~FilterInput();

};