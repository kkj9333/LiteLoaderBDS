/**
 * @file  BuoyancySystem.hpp
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
 * @brief MC class BuoyancySystem.
 *
 */
class BuoyancySystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYSYSTEM
public:
    class BuoyancySystem& operator=(class BuoyancySystem const &) = delete;
    BuoyancySystem(class BuoyancySystem const &) = delete;
    BuoyancySystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1367080455
     */
    virtual ~BuoyancySystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@BuoyancySystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1542921761
     */
    virtual void tick(class EntityRegistry &);

};