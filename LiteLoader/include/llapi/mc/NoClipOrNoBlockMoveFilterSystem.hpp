/**
 * @file  NoClipOrNoBlockMoveFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NoClipOrNoBlockMoveFilterSystem.
 *
 */
class NoClipOrNoBlockMoveFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOCLIPORNOBLOCKMOVEFILTERSYSTEM
public:
    class NoClipOrNoBlockMoveFilterSystem& operator=(class NoClipOrNoBlockMoveFilterSystem const &) = delete;
    NoClipOrNoBlockMoveFilterSystem(class NoClipOrNoBlockMoveFilterSystem const &) = delete;
    NoClipOrNoBlockMoveFilterSystem() = delete;
#endif

public:
    /**
     * @hash   -1484705106
     * @symbol  ?create\@NoClipOrNoBlockMoveFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @hash   1010842590
     * @symbol  ?createSideBySide\@NoClipOrNoBlockMoveFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySide();
    /**
     * @hash   -1845161428
     * @symbol  ?tick\@NoClipOrNoBlockMoveFilterSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEBUOffsetsComponent\@\@AEBUSlideOffsetComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUAABBShapeComponent\@\@AEAUStateVectorComponent\@\@AEAUSubBBsComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tick(class StrictEntityContext const &, struct MoveRequestComponent const &, struct OffsetsComponent const &, struct SlideOffsetComponent const &, struct SynchedActorDataComponent const &, struct AABBShapeComponent &, struct StateVectorComponent &, struct SubBBsComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>, class IConstBlockSource const &);

};