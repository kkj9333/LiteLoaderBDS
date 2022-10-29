/**
 * @file  AmphibiousMoveControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "GenericMoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AmphibiousMoveControl.
 *
 */
class AmphibiousMoveControl : public GenericMoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPHIBIOUSMOVECONTROL
public:
    class AmphibiousMoveControl& operator=(class AmphibiousMoveControl const &) = delete;
    AmphibiousMoveControl(class AmphibiousMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   132733913
     */
    virtual ~AmphibiousMoveControl();
    /**
     * @vftbl  2
     * @symbol ?tick@AmphibiousMoveControl@@UEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     * @hash   1005307218
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol ??0AmphibiousMoveControl@@QEAA@XZ
     * @hash   801881719
     */
    MCAPI AmphibiousMoveControl();

};