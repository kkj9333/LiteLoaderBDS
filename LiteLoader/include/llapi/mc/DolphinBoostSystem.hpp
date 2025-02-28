/**
 * @file  DolphinBoostSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DolphinBoostSystem.
 *
 */
class DolphinBoostSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOLPHINBOOSTSYSTEM
public:
    class DolphinBoostSystem& operator=(class DolphinBoostSystem const &) = delete;
    DolphinBoostSystem(class DolphinBoostSystem const &) = delete;
    DolphinBoostSystem() = delete;
#endif

public:
    /**
     * @hash   -717501435
     * @symbol  ?_tickScan\@DolphinBoostSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@AEAUScanForDolphinTimerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UScanForDolphin\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickScan(class StrictEntityContext const &, struct SynchedActorDataComponent const &, struct ScanForDolphinTimerComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ScanForDolphin>>);
    /**
     * @hash   -427321436
     * @symbol  ?_tickSwimSpeedModifier\@DolphinBoostSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@AEAUSwimSpeedMultiplierComponent\@\@V?$Optional\@V?$FlagComponent\@UScanForDolphin\@\@\@\@\@\@V?$Optional\@V?$FlagComponent\@UIsNearDolphinsFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickSwimSpeedModifier(class StrictEntityContext const &, struct SynchedActorDataComponent const &, struct SwimSpeedMultiplierComponent &, class Optional<class FlagComponent<struct ScanForDolphin>>, class Optional<class FlagComponent<struct IsNearDolphinsFlag>>);
    /**
     * @hash   -237263818
     * @symbol  ?createFindDolphinsSystem\@DolphinBoostSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFindDolphinsSystem();
    /**
     * @hash   -1374521692
     * @symbol  ?createScanSystem\@DolphinBoostSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createScanSystem();
    /**
     * @hash   1066731032
     * @symbol  ?createSwimSpeedModifierSystem\@DolphinBoostSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSwimSpeedModifierSystem();

};