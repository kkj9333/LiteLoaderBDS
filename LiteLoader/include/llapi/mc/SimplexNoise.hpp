/**
 * @file  SimplexNoise.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimplexNoise.
 *
 */
class SimplexNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEXNOISE
public:
    class SimplexNoise& operator=(class SimplexNoise const &) = delete;
    SimplexNoise(class SimplexNoise const &) = delete;
    SimplexNoise() = delete;
#endif

public:
    /**
     * @hash   -2094618278
     * @symbol  ??0SimplexNoise\@\@QEAA\@AEAVIRandom\@\@_N\@Z
     */
    MCAPI SimplexNoise(class IRandom &, bool);
    /**
     * @hash   949277457
     * @symbol  ?_add\@SimplexNoise\@\@QEBAXPEAMMMHHMMM\@Z
     */
    MCAPI void _add(float *, float, float, int, int, float, float, float) const;
    /**
     * @hash   1088255153
     * @symbol  ?_getValue\@SimplexNoise\@\@QEBAMAEBVVec2\@\@\@Z
     */
    MCAPI float _getValue(class Vec2 const &) const;
    /**
     * @hash   611986847
     * @symbol  ?_getValue\@SimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float _getValue(class Vec3 const &) const;

};