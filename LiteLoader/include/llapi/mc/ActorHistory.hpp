/**
 * @file  ActorHistory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorHistory.
 *
 */
class ActorHistory {

#define AFTER_EXTRA
// Add Member There
public:
struct Snapshot {
    Snapshot() = delete;
    Snapshot(Snapshot const&) = delete;
    Snapshot(Snapshot const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHISTORY
public:
    class ActorHistory& operator=(class ActorHistory const &) = delete;
    ActorHistory(class ActorHistory const &) = delete;
    ActorHistory() = delete;
#endif

public:
    /**
     * @symbol ?addFrame@ActorHistory@@QEAA_NAEAUIActorMovementProxy@@_KAEAVEntityRegistry@@@Z
     * @hash   -1680737640
     */
    MCAPI bool addFrame(struct IActorMovementProxy &, unsigned __int64, class EntityRegistry &);
    /**
     * @symbol ?createSnapshot@ActorHistory@@QEBA?AUSnapshot@1@AEAUIActorMovementProxy@@AEAVEntityRegistry@@@Z
     * @hash   -1050917110
     */
    MCAPI struct ActorHistory::Snapshot createSnapshot(struct IActorMovementProxy &, class EntityRegistry &) const;
    /**
     * @symbol ??1ActorHistory@@QEAA@XZ
     * @hash   889999481
     */
    MCAPI ~ActorHistory();

};