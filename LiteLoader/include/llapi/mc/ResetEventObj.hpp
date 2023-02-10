/**
 * @file  ResetEventObj.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetEventObj.
 *
 */
class ResetEventObj {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETEVENTOBJ
public:
    class ResetEventObj& operator=(class ResetEventObj const &) = delete;
    ResetEventObj(class ResetEventObj const &) = delete;
    ResetEventObj() = delete;
#endif

public:
    /**
     * @hash   -1287490705
     * @symbol  ??0ResetEventObj\@\@QEAA\@_N0\@Z
     */
    MCAPI ResetEventObj(bool, bool);
    /**
     * @hash   -2046735575
     * @symbol  ?set\@ResetEventObj\@\@QEAAXXZ
     */
    MCAPI void set();
    /**
     * @hash   -161023331
     * @symbol  ?wait\@ResetEventObj\@\@QEAAXXZ
     */
    MCAPI void wait();
    /**
     * @hash   -273983078
     * @symbol  ?wait_until\@ResetEventObj\@\@QEAA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool wait_until(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @hash   753914408
     * @symbol  ??1ResetEventObj\@\@QEAA\@XZ
     */
    MCAPI ~ResetEventObj();

};