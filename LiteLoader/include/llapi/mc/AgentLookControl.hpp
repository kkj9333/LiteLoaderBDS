/**
 * @file  AgentLookControl.hpp
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
 * @brief MC class AgentLookControl.
 *
 */
class AgentLookControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTLOOKCONTROL
public:
    class AgentLookControl& operator=(class AgentLookControl const &) = delete;
    AgentLookControl(class AgentLookControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   88879171
     */
    virtual ~AgentLookControl();
    /**
     * @vftbl  1
     * @symbol ?initializeInternal@AgentLookControl@@UEAAXAEAVMob@@@Z
     * @hash   -1471248911
     */
    virtual void initializeInternal(class Mob &);
    /**
     * @vftbl  2
     * @symbol ?tick@AgentLookControl@@UEAAXAEAVMob@@@Z
     * @hash   -1834837247
     */
    virtual void tick(class Mob &);
    /**
     * @symbol ??0AgentLookControl@@QEAA@XZ
     * @hash   -694942155
     */
    MCAPI AgentLookControl();
    /**
     * @symbol ?sBaseYMax@AgentLookControl@@2MA
     * @hash   -5239445
     */
    MCAPI static float sBaseYMax;

};