// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TargetWhenPushedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETWHENPUSHEDGOAL
public:
    class TargetWhenPushedGoal& operator=(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal() = delete;
#endif


public:
    /*0*/ virtual ~TargetWhenPushedGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETWHENPUSHEDGOAL
    MCVAPI bool canBeInterrupted();
    MCVAPI bool canContinueToUse();
#endif
    MCAPI TargetWhenPushedGoal(class Mob &, std::vector<struct MobDescriptor>, float);



};