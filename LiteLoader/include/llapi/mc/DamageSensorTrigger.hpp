/**
 * @file  DamageSensorTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure DamageSensorTrigger.
 *
 */
struct DamageSensorTrigger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORTRIGGER
public:
    struct DamageSensorTrigger& operator=(struct DamageSensorTrigger const &) = delete;
    DamageSensorTrigger() = delete;
#endif

public:
    /**
     * @hash   1090112101
     * @symbol  ??0DamageSensorTrigger\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI DamageSensorTrigger(struct DamageSensorTrigger const &);
    /**
     * @hash   -1994278848
     * @symbol  ?setCause\@DamageSensorTrigger\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCause(std::string const &);
    /**
     * @hash   -1458202453
     * @symbol  ??1DamageSensorTrigger\@\@QEAA\@XZ
     */
    MCAPI ~DamageSensorTrigger();

};