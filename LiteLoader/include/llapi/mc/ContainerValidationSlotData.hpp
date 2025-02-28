/**
 * @file  ContainerValidationSlotData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ContainerValidationSlotData.
 *
 */
struct ContainerValidationSlotData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONSLOTDATA
public:
    struct ContainerValidationSlotData& operator=(struct ContainerValidationSlotData const &) = delete;
    ContainerValidationSlotData(struct ContainerValidationSlotData const &) = delete;
#endif

public:
    /**
     * @hash   894369966
     * @symbol  ??0ContainerValidationSlotData\@\@QEAA\@XZ
     */
    MCAPI ContainerValidationSlotData();
    /**
     * @hash   899536400
     * @symbol  ??0ContainerValidationSlotData\@\@QEAA\@W4ContainerEnumName\@\@H\@Z
     */
    MCAPI ContainerValidationSlotData(enum class ContainerEnumName, int);
    /**
     * @hash   -1996388468
     * @symbol  ?matches\@ContainerValidationSlotData\@\@QEBA_NAEBU1\@\@Z
     */
    MCAPI bool matches(struct ContainerValidationSlotData const &) const;
    /**
     * @hash   934771162
     * @symbol  ?AUTOPLACE\@ContainerValidationSlotData\@\@2U1\@B
     */
    MCAPI static struct ContainerValidationSlotData const AUTOPLACE;

};