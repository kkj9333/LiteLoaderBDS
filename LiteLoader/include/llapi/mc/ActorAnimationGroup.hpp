/**
 * @file  ActorAnimationGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationGroup.
 *
 */
class ActorAnimationGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONGROUP
public:
    class ActorAnimationGroup& operator=(class ActorAnimationGroup const &) = delete;
    ActorAnimationGroup(class ActorAnimationGroup const &) = delete;
#endif

public:
    /**
     * @hash   1502579324
     * @symbol  ??0ActorAnimationGroup\@\@QEAA\@XZ
     */
    MCAPI ActorAnimationGroup();
    /**
     * @hash   -630617059
     * @symbol  ?getActorAnimation\@ActorAnimationGroup\@\@QEAA?AVActorSkeletalAnimationPtr\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ActorSkeletalAnimationPtr getActorAnimation(class HashedString const &);
    /**
     * @hash   -1332696002
     * @symbol  ?getActorAnimationInfo\@ActorAnimationGroup\@\@QEAA?AV?$shared_ptr\@VActorAnimationInfo\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationInfo> getActorAnimationInfo(class HashedString const &);
    /**
     * @hash   -2035939093
     * @symbol  ?loadActorAnimation\@ActorAnimationGroup\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@AEAVPackStats\@\@AEBVSemVersion\@\@W4CurrentCmdVersion\@\@_N\@Z
     */
    MCAPI void loadActorAnimation(std::string const &, class Core::Path const &, class PackStats &, class SemVersion const &, enum class CurrentCmdVersion, bool);
    /**
     * @hash   892529126
     * @symbol  ?loadActorAnimationsSync\@ActorAnimationGroup\@\@QEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI void loadActorAnimationsSync(class ResourcePackManager &);

};