/**
 * @file  ItemUseEvent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemUseEvent.
 *
 */
struct ItemUseEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEEVENT
public:
    struct ItemUseEvent& operator=(struct ItemUseEvent const &) = delete;
    ItemUseEvent() = delete;
#endif

public:
    /**
     * @symbol ??0ItemUseEvent@@QEAA@AEBU0@@Z
     * @hash   1537059215
     */
    MCAPI ItemUseEvent(struct ItemUseEvent const &);
    /**
     * @symbol ??0ItemUseEvent@@QEAA@$$QEAU0@@Z
     * @hash   -116213127
     */
    MCAPI ItemUseEvent(struct ItemUseEvent &&);
    /**
     * @symbol ??1ItemUseEvent@@QEAA@XZ
     * @hash   -1678493584
     */
    MCAPI ~ItemUseEvent();

};