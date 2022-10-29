/**
 * @file  GetControllingPlayerUtility.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace GetControllingPlayerUtility.
 *
 */
namespace GetControllingPlayerUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?isPassengerControllingVehicle@GetControllingPlayerUtility@@YA_NAEBVStrictEntityContext@@AEBUVehicleComponent@@AEBUSynchedActorDataComponent@@@Z
     * @hash   241375834
     */
    MCAPI bool isPassengerControllingVehicle(class StrictEntityContext const &, struct VehicleComponent const &, struct SynchedActorDataComponent const &);
    /**
     * @symbol ?isWASDControlled@GetControllingPlayerUtility@@YA_NAEBUSynchedActorDataComponent@@@Z
     * @hash   -263088222
     */
    MCAPI bool isWASDControlled(struct SynchedActorDataComponent const &);
    /**
     * @symbol ?tryGetControllingPlayerContext@GetControllingPlayerUtility@@YA?AV?$optional@VStrictEntityContext@@@std@@VStrictEntityContext@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBV?$FlagComponent@ULocalPlayerComponentFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBV?$FlagComponent@UServerPlayerComponentFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UBoatFlag@@@@@@$$CBUVehicleComponent@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UHorseFlag@@@@@@$$CBUVehicleComponent@@$$CBUSynchedActorDataComponent@@@@@Z
     * @hash   -1944578529
     */
    MCAPI class std::optional<class StrictEntityContext> tryGetControllingPlayerContext(class StrictEntityContext, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct LocalPlayerComponentFlag> const> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ServerPlayerComponentFlag> const> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BoatFlag>>, struct VehicleComponent const> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct VehicleComponent const, struct SynchedActorDataComponent const> *);

};