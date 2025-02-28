/**
 * @file  ExperienceRewardCommitObject.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceRewardCommitObject.
 *
 */
class ExperienceRewardCommitObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDCOMMITOBJECT
public:
    class ExperienceRewardCommitObject& operator=(class ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject(class ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExperienceRewardCommitObject();
    /**
     * @hash   -1340175132
     * @vftbl  1
     * @symbol  ?append\@ExperienceRewardCommitObject\@\@UEAA_NPEAVContainerValidationCommitObject\@\@\@Z
     */
    virtual bool append(class ContainerValidationCommitObject *);
    /**
     * @hash   -1412678307
     * @vftbl  2
     * @symbol  ?canCommit\@ExperienceRewardCommitObject\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canCommit(class ContainerScreenContext const &) const;
    /**
     * @hash   -1938967600
     * @vftbl  3
     * @symbol  ?commit\@ExperienceRewardCommitObject\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void commit(class ContainerScreenContext const &);
    /**
     * @hash   571778480
     * @symbol  ??0ExperienceRewardCommitObject\@\@QEAA\@H\@Z
     */
    MCAPI ExperienceRewardCommitObject(int);

};