/**
 * @file  Dependencies.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure Dependencies.
 *
 */
struct Dependencies {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEPENDENCIES
public:
    Dependencies(struct Dependencies const &) = delete;
    Dependencies() = delete;
#endif

public:
    /**
     * @hash   1293683126
     * @symbol  ??4Dependencies\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct Dependencies & operator=(struct Dependencies const &);
    /**
     * @hash   1969000054
     * @symbol  ??4Dependencies\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct Dependencies & operator=(struct Dependencies &&);
    /**
     * @hash   358043475
     * @symbol  ??1Dependencies\@\@QEAA\@XZ
     */
    MCAPI ~Dependencies();
    /**
     * @hash   -1161437341
     * @symbol  ?bindType\@Dependencies\@\@SAXXZ
     */
    MCAPI static void bindType();

};