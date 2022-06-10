// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WardenVibrationConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENVIBRATIONCONFIG
public:
    class WardenVibrationConfig& operator=(class WardenVibrationConfig const &) = delete;
    WardenVibrationConfig(class WardenVibrationConfig const &) = delete;
    WardenVibrationConfig() = delete;
#endif


public:
    /*0*/ virtual ~WardenVibrationConfig();
    /*1*/ virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /*2*/ virtual bool isValidVibration(class GameEvent const &);
    /*3*/ virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WARDENVIBRATIONCONFIG
#endif
    MCAPI WardenVibrationConfig(class Actor &, unsigned short);



};