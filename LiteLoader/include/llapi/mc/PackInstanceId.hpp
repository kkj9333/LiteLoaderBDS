/**
 * @file  PackInstanceId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PackInstanceId.
 *
 */
struct PackInstanceId {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCEID
public:
    struct PackInstanceId& operator=(struct PackInstanceId const &) = delete;
    PackInstanceId(struct PackInstanceId const &) = delete;
    PackInstanceId() = delete;
#endif

public:
    /**
     * @hash   -1315834609
     * @symbol  ??0PackInstanceId\@\@QEAA\@AEBUPackIdVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI PackInstanceId(struct PackIdVersion const &, std::string const &);
    /**
     * @hash   1719287535
     * @symbol  ??0PackInstanceId\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PackInstanceId(struct PackInstanceId &&);
    /**
     * @hash   2055219475
     * @symbol  ??1PackInstanceId\@\@QEAA\@XZ
     */
    MCAPI ~PackInstanceId();

};