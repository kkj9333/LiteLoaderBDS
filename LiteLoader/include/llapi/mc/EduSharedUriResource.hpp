/**
 * @file  EduSharedUriResource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EduSharedUriResource.
 *
 */
struct EduSharedUriResource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUSHAREDURIRESOURCE
public:
    struct EduSharedUriResource& operator=(struct EduSharedUriResource const &) = delete;
    EduSharedUriResource(struct EduSharedUriResource const &) = delete;
#endif

public:
    /**
     * @hash   2010366763
     * @symbol  ??0EduSharedUriResource\@\@QEAA\@XZ
     */
    MCAPI EduSharedUriResource();
    /**
     * @hash   1224251516
     * @symbol  ??0EduSharedUriResource\@\@QEAA\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI EduSharedUriResource(class CompoundTag const &);
    /**
     * @hash   904319785
     * @symbol  ??1EduSharedUriResource\@\@QEAA\@XZ
     */
    MCAPI ~EduSharedUriResource();
    /**
     * @symbol  ?fromTag\@EduSharedUriResource\@\@SA?AU1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct EduSharedUriResource fromTag(class CompoundTag const &);
    /**
     * @hash   230978201
     * @symbol  ?toTag\@EduSharedUriResource\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBU1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const &);

};