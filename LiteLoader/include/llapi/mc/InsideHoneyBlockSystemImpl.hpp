/**
 * @file  InsideHoneyBlockSystemImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideHoneyBlockSystemImpl.
 *
 */
class InsideHoneyBlockSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEHONEYBLOCKSYSTEMIMPL
public:
    class InsideHoneyBlockSystemImpl& operator=(class InsideHoneyBlockSystemImpl const &) = delete;
    InsideHoneyBlockSystemImpl(class InsideHoneyBlockSystemImpl const &) = delete;
    InsideHoneyBlockSystemImpl() = delete;
#endif

public:
    /**
     * @symbol ?isSlidingDown@InsideHoneyBlockSystemImpl@@SA_NAEBVBlockPos@@AEBVVec3@@1AEBVVec2@@@Z
     * @hash   -1617791358
     */
    MCAPI static bool isSlidingDown(class BlockPos const &, class Vec3 const &, class Vec3 const &, class Vec2 const &);
    /**
     * @symbol ?movementSystem@InsideHoneyBlockSystemImpl@@SAXAEBVStrictEntityContext@@AEBU?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@AEBUAABBShapeComponent@@AEAUStateVectorComponent@@AEAUFallDistanceComponent@@@Z
     * @hash   -1660700915
     */
    MCAPI static void movementSystem(class StrictEntityContext const &, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag> const &, struct AABBShapeComponent const &, struct StateVectorComponent &, struct FallDistanceComponent &);

};