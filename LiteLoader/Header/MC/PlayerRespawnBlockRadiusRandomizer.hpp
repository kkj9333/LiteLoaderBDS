// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerRespawnBlockRadiusRandomizer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNBLOCKRADIUSRANDOMIZER
public:
    class PlayerRespawnBlockRadiusRandomizer& operator=(class PlayerRespawnBlockRadiusRandomizer const &) = delete;
    PlayerRespawnBlockRadiusRandomizer(class PlayerRespawnBlockRadiusRandomizer const &) = delete;
    PlayerRespawnBlockRadiusRandomizer() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERRESPAWNBLOCKRADIUSRANDOMIZER
#endif
    MCAPI bool getNextPosition(class Vec3 &, bool);
    MCAPI void init(unsigned int, class Random &);



};